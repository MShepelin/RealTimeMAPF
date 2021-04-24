#include "astar3d.h"
#include <algorithm>

const FTYPE SpaceTimeSearch::cost = 1;

void SpaceTimeSearch::SetHeuristic(NodeType& node_to_edit)
{
    // TODO assert if the heuristic_ found the path from goal to start

    if (node_to_edit.h >= 0)
    {
        // Not to change already calculated heuristic.
        return;
    }

    GridCell space_cell = { node_to_edit.cell.i, node_to_edit.cell.j };

    heuristic_->ContinueSearch(space_cell);
    node_to_edit.h = heuristic_->GetGValue(space_cell); // check for -1??
}

void SpaceTimeSearch::ExpandNode(NodeType* node_to_expand)
{
    SpaceTimeCell cell_of_node = node_to_expand->cell;
    int i = cell_of_node.i;
    int j = cell_of_node.j;
    TTYPE t = (cell_of_node.t + 1) % MAX_TIME;

    // Expand the wait move first
    ExpandNodeMove(node_to_expand, { i,     j,     t });

    // Then non-diagonal moves
    ExpandNodeMove(node_to_expand, { i,     j + 1, t });
    ExpandNodeMove(node_to_expand, { i + 1, j,     t });
    ExpandNodeMove(node_to_expand, { i - 1, j,     t });
    ExpandNodeMove(node_to_expand, { i,     j - 1, t });
    
    // Then diagonal moves
    ExpandNodeMove(node_to_expand, { i + 1, j + 1, t } );
    ExpandNodeMove(node_to_expand, { i + 1, j - 1, t });
    ExpandNodeMove(node_to_expand, { i - 1, j + 1, t } );
    ExpandNodeMove(node_to_expand, { i - 1, j - 1, t } );
}

FTYPE SpaceTimeSearch::GetMoveCost(SpaceTimeCell from, SpaceTimeCell to) const
{
    // Check if to exists on the map
    if (!map_->Execute_IsCellOnGrid(MapDataImplementer, to.i, to.j) ||
        !map_->Execute_IsCellTraversable(MapDataImplementer, to.i, to.j))
        return -1;

    // Check if the target is an available cell
    if (reservation_->find(to) != reservation_->end()) return -1;

    // Check swapping conflict
    SpaceTimeCell from_future = from;
    from_future.t += 1;

    auto iterator = reservation_->find(from_future);
    enum Move conflict_move = SpaceTimeSearch::GetMove(to, from_future);
    if (iterator != reservation_->end() && iterator->move == conflict_move) return -1;

    // Check if the current step goes through a diagonal
    if (!((to.i - from.i) && (to.j - from.j)))
    {
        if (to.i == from.i && from.j == to.j)
        {
            if (IsWaitCollision(from)) return -1;
        }
        else
        {
            if (IsNondiagonalCollision(from, to)) return -1;
        }

        return cost;
    }

    if (!options_.allowdiagonal) return -1;

    if (IsDiagonalCollision(from, to)) return -1;

    // Count untraversable cells on the diagonal path.
    char count = (char)!map_->Execute_IsCellTraversable(MapDataImplementer, from.i, to.j) + (char)!map_->Execute_IsCellTraversable(MapDataImplementer, to.i, from.j);

    // Check if the path through the diagonal is possible.
    if ((count > 0 && !options_.cutcorners) || 
        (count == 2 && !options_.allowsqueeze)) 
        return -1;

    return cost;
}

void SpaceTimeSearch::BuildCompactPath()
{
    if (!lppath_.size()) return;

    hppath_.clear();

    // Create hppath
    int previous_direction[2] = { 100, 100 };
    int current_direction[2] = { 0, 0 };

    hppath_.push_back(lppath_[0]);
    NodeType last_node = lppath_[0];
    for (size_t i = 1; i < lppath_.size(); ++i)
    {
        current_direction[0] = lppath_[i].cell.i - lppath_[i - 1].cell.i;
        current_direction[1] = lppath_[i].cell.j - lppath_[i - 1].cell.j;

        if (current_direction[0] == previous_direction[0] && current_direction[1] == previous_direction[1])
        {
            hppath_.back() = lppath_[i];
        }
        else
        {
            hppath_.push_back(lppath_[i]);
        }

        previous_direction[0] = current_direction[0];
        previous_direction[1] = current_direction[1];
    }
}

SpaceTimeSearch::SpaceTimeSearch(SingleSearch<GridCell>* heuristic, std::unordered_set<SpaceTimeCell>* reservation)
{
    assert(heuristic);
    assert(reservation);
    heuristic_ = heuristic;
    reservation_ = reservation;
    radius_ = MAX_RAD;
}

const Node<SpaceTimeCell>* SpaceTimeSearch::CellIsReached(SpaceTimeCell cell) const
{
    if (cell.t == -1)
    {
        return nullptr;
    }
    else
    {
        return SingleSearch<SpaceTimeCell>::CellIsReached(cell);
    }
}

bool SpaceTimeSearch::NodeReachedCell(NodeType* node, SpaceTimeCell cell, FTYPE depth) const
{
    if (nullptr == node) return false;

    // assert depth > 0
    return (node->g >= depth);
}

void SpaceTimeSearch::WritePath() const
{
    // TODO check if BuildPath was executed
    for (const Node<SpaceTimeCell>& node : lppath_)
    {
        assert(reservation_->find(node.cell) == reservation_->end());
        SpaceTimeCell new_cell = node.cell;
        if (node.parent == nullptr)
        {
            new_cell.move = Spawn;
        }
        else
        {
            new_cell.move = SpaceTimeSearch::GetMove(node.parent->cell, node.cell);
        }

        reservation_->insert(new_cell);
    }
}

enum Move SpaceTimeSearch::GetMove(SpaceTimeCell from, SpaceTimeCell to)
{
    unsigned char move = 0;
    if (from.i == to.i)
    {
        move = 3;
    }
    else if (from.i > to.i)
    {
        move = 6;
    }

    if (from.j == to.j)
    {
        move += 1;
    }
    else if (from.j > to.j)
    {
        move += 2;
    }

    return static_cast<enum Move>(move);
}

void SpaceTimeSearch::SetRadius(float new_radius)
{
    if (new_radius < 0 || new_radius > MAX_RAD) return;
    radius_ = new_radius;
}

bool SpaceTimeSearch::IsWaitCollision(SpaceTimeCell from) const
{
    // Parallel collision
    if (radius_ > sqrt(2) / 4)
    {
        TTYPE future_time = (from.t + 1) % MAX_TIME;

        enum Move down_left_move = SpaceTimeSearch::GetMove({ from.i, from.j + 1 }, { from.i + 1, from.j });
        enum Move down_right_move = SpaceTimeSearch::GetMove({ from.i, from.j - 1 }, { from.i + 1, from.j });
        enum Move up_left_move = SpaceTimeSearch::GetMove({ from.i, from.j + 1 }, { from.i - 1, from.j });
        enum Move up_right_move = SpaceTimeSearch::GetMove({ from.i, from.j - 1 }, { from.i - 1, from.j });

        if (IsStored({ from.i, from.j + 1, future_time }, down_right_move, up_right_move)) return true;
        if (IsStored({ from.i - 1, from.j, future_time }, up_left_move, up_right_move)) return true;
        if (IsStored({ from.i + 1, from.j, future_time }, down_right_move, down_left_move)) return true;
        if (IsStored({ from.i, from.j - 1, future_time }, down_left_move, up_left_move)) return true;
    }

    return false;
}

bool SpaceTimeSearch::IsDiagonalCollision(SpaceTimeCell from, SpaceTimeCell to) const
{
    enum Move reverse_move = SpaceTimeSearch::GetMove(to, from);
    enum Move left_move = SpaceTimeSearch::GetMove(to, { from.i, to.j });
    enum Move down_move = SpaceTimeSearch::GetMove(to, { to.i, from.j });

    int delta_j = to.j - from.j;
    int delta_i = to.i - from.i;

    // additional diagonal check
    SpaceTimeCell vdiag1 = { from.i, from.j + delta_j, to.t };
    SpaceTimeCell vdiag2 = { from.i + delta_i, from.j, to.t };

    if (IsStored(vdiag1, GetMove(vdiag2, vdiag1))) return true;
    if (IsStored(vdiag2, GetMove(vdiag1, vdiag2))) return true;

    // Parallel collision
    if (radius_ > sqrt(2) / 4)
    {
        if (IsStored({ from.i, from.j - delta_j, to.t }, reverse_move)) return true;
        if (IsStored({ from.i - delta_i, from.j, to.t }, reverse_move)) return true;

        if (IsStored({ from.i + delta_i, from.j, to.t }, Wait, reverse_move)) return true;
        if (IsStored({ from.i, from.j + delta_j, to.t }, Wait, reverse_move)) return true;
    }

    // Close diagonal move
    if (radius_ > 0.1)
    {
        if (IsStored({ from.i, to.j, to.t }, left_move)) return true;
        if (IsStored({ to.i, from.j, to.t }, down_move)) return true;
        if (IsStored({ from.i, from.j, to.t }, down_move, left_move)) return true;
    }

    return false;
}

bool SpaceTimeSearch::IsNondiagonalCollision(SpaceTimeCell from, SpaceTimeCell to) const
{
    int perp_delta_i = 1 - abs(to.i - from.i);
    int perp_delta_j = 1 - abs(to.j - from.j);

    // Close diagonal move
    if (options_.allowdiagonal && radius_ > 0.1)
    {
        enum Move up_left_move = SpaceTimeSearch::GetMove(to, { from.i + perp_delta_i, from.j + perp_delta_j });
        enum Move down_left_move = SpaceTimeSearch::GetMove(to, { from.i - perp_delta_i, from.j - perp_delta_j });

        if (IsStored({ from.i, from.j, to.t }, up_left_move, down_left_move)) return true;
        if (IsStored({ from.i + perp_delta_i, from.j + perp_delta_j, to.t }, up_left_move)) return true;
        if (IsStored({ from.i - perp_delta_i, from.j - perp_delta_j, to.t }, down_left_move)) return true;
    }

    // Close nondiagonal move
    if (radius_ > 0.25)
    {
        enum Move up_move = SpaceTimeSearch::GetMove(to, { to.i + perp_delta_i, to.j + perp_delta_j });
        enum Move down_move = SpaceTimeSearch::GetMove(to, { to.i - perp_delta_i, to.j - perp_delta_j });

        if (IsStored({ to.i + perp_delta_i, to.j + perp_delta_j, to.t }, up_move)) return true;
        if (IsStored({ to.i - perp_delta_i, to.j - perp_delta_j, to.t }, down_move)) return true;
    }

    return false;
}

float SpaceTimeSearch::GetRadius() const
{
    return radius_;
}

bool SpaceTimeSearch::IsStored(SpaceTimeCell cell, enum Move move) const
{
    auto iterator = reservation_->find(cell);
    if (iterator != reservation_->end() && iterator->move == move) return true;
    return false;
}

bool SpaceTimeSearch::IsStored(SpaceTimeCell cell, enum Move move, enum Move another_move) const
{
    auto iterator = reservation_->find(cell);
    if (iterator != reservation_->end() && (iterator->move == move || iterator->move == another_move)) return true;
    return false;
}
