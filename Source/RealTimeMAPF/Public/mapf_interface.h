#pragma once

#include "agents.h"
#include "searchresult.h"
#include "environmentoptions.h"
#include "Config.h"
#include "MapData.h"

template<typename CellType>
class MAPFSolverInterface
{
public:
    // Set up environment used by this solver.
    // Previous search results must be reset.
    // virtual void ResetConfiguration(const IMapData* map, const FConfig& config) = 0;

    virtual int AddAgent(AgentTask<CellType> task) = 0;

    virtual void RemoveAgent(int agent_ID) = 0;

    // Plan to find a solution to a mapf problem.
    //virtual bool Plan() = 0;

    // Get the plan constructed to a sertain agent.
    //virtual SearchResult<CellType> GetPlan(int agent_ID) const = 0;
};
