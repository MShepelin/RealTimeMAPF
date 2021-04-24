#pragma once

#include "gl_const.h"

class EnvironmentOptions
{
public:
    EnvironmentOptions(bool AS, bool AD, bool CC, int MT = CN_SP_MT_EUCL);
    EnvironmentOptions();
    int     metrictype;     //Can be chosen Euclidean, Manhattan, Chebyshev and Diagonal distance
    bool    allowsqueeze;   //Option that allows to move throught "bottleneck"
    bool    allowdiagonal;  //Option that allows to make diagonal moves
    bool    cutcorners;     //Option that allows to make diagonal moves, when one adjacent cell is untraversable
};

// WARNING: mapf tests only consider environment with 2D grid and allowdiagonal (without cutcorners and allowsqueeze)