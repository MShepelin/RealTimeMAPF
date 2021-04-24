#pragma once

#include <cassert>
#include "search.h"
#include <unordered_set>

#define MAX_RAD 0.425

class SpaceTimeSearch : public SingleSearch<SpaceTimeCell>
{
public:
    static const FTYPE cost; // set FTYPE as a type of single search

protected:
    SingleSearch<GridCell>* heuristic_;
    std::unordered_set<SpaceTimeCell>* reservation_;
    float radius_;

protected:
    inline bool IsStored(SpaceTimeCell cell, enum Move move) const;
    inline bool IsStored(SpaceTimeCell cell, enum Move move, enum Move another_move) const;

    virtual void SetHeuristic(NodeType& node_to_edit) override;

    virtual void ExpandNode(NodeType* node_to_expand) override;

    virtual FTYPE GetMoveCost(SpaceTimeCell from, SpaceTimeCell to) const override;

    virtual const NodeType* CellIsReached(SpaceTimeCell cell) const override;
    
    // Checks possible collisions if from->to is diagonal move
    bool IsDiagonalCollision(SpaceTimeCell from, SpaceTimeCell to) const;
    // Checks possible collisions if from->to is nondiagonal move
    bool IsNondiagonalCollision(SpaceTimeCell from, SpaceTimeCell to) const;
    // Checks possible collisions if agents waits
    bool IsWaitCollision(SpaceTimeCell from) const;

public:
    float GetRadius() const;
    void SetRadius(float new_radius);

    virtual bool NodeReachedCell(NodeType* node, SpaceTimeCell cell, FTYPE depth) const override;

    virtual void BuildCompactPath() override;

    SpaceTimeSearch() = delete;

    SpaceTimeSearch(SingleSearch<GridCell>* heuristic, std::unordered_set<SpaceTimeCell>* reservation);

    void WritePath() const;

    static enum Move GetMove(SpaceTimeCell from, SpaceTimeCell to);
};
