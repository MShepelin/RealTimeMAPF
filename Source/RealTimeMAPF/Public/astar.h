#pragma once

#include "search.h"

class GridSingleSearch : public SingleSearch<GridCell>
{
protected:
    FTYPE ch;
    FTYPE cd;

protected:
    virtual void SetHeuristic(NodeType& node_to_edit) override;

    virtual void ExpandNode(NodeType* node_to_expand) override;

    virtual FTYPE GetMoveCost(GridCell from, GridCell to) const override;

public:
    GridSingleSearch();

    virtual void BuildCompactPath() override;

    void SetDiagonalCost(FTYPE new_cd);
};
