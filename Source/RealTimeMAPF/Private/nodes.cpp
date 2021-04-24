#pragma once

#include "nodes.h"

bool GridCell::operator==(const GridCell& other) const
{
    return i == other.i && j == other.j;
}

bool SpaceTimeCell::operator==(const SpaceTimeCell& other) const
{
    return i == other.i && j == other.j && t == other.t;
}
