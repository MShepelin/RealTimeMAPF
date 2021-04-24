#pragma once

#include <vector>
#include "nodes.h"

template<typename CellType>
struct SearchResult
{
        bool pathfound;
        float pathlength; 
        const std::vector<Node<CellType>>* lppath;
        const std::vector<Node<CellType>>* hppath;
        unsigned int nodescreated; 
        unsigned int numberofsteps;
        double time;

        SearchResult()
        {
            pathfound = false;
            pathlength = 0;
            lppath = nullptr;
            hppath = nullptr;
            nodescreated = 0;
            numberofsteps = 0;
            time = 0;
        }
};
