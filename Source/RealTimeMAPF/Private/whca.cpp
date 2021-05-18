#include "whca.h"
#include "stdlib.h"
#include "Async/AsyncWork.h"

WHCA::WHCA() : space_time_solver_(&space_solver_, &reservation_)
{
  space_solver_.SetDiagonalCost(1);
  depth_ = 64;
  extra_time_ = 0;

  search_section_ = 1;
  current_section_ = 0;
}

void WHCA::SetSectionSize(int new_section_size)
{
  if (new_section_size < 1) return; // TODO silent error
  search_section_ = new_section_size;
  current_section_ = 0;
}

// TODO change the name to reset configuration
void WHCA::ResetConfiguration(IMapData* map, const FConfig& config, UObject* NewMapDataImplementer)
{
  assert(map);
  tasks_.clear();
  paths_.clear();
  agents_.Clear();

  space_solver_.ResetConfiguration(map, config, NewMapDataImplementer);
  space_time_solver_.ResetConfiguration(map, config, NewMapDataImplementer);

  MapDataImplementer = NewMapDataImplementer;
  map_ = map;
  config_ = &config;
}

int WHCA::AddAgent(AgentTask<SpaceTimeCell> task)
{
  assert(task.start.t >= 0);
  assert(task.goal.t == -1);
  assert(map_ && config_);
  
  task.start.t = (task.start.t + extra_time_) % MAX_TIME;
  assert(reservation->find(task.start) == reservation->end());

  int new_agent = agents_.ReserveNewID();
  tasks_.insert({ new_agent, task });
  results_.insert({ new_agent, SearchResult<SpaceTimeCell>()});
  paths_.insert({ new_agent, {} });

#ifdef ENABLE_VISUAL_LOG
  AgentColors.insert({ new_agent, CurrentColor });
#endif // ENABLE_VISUAL_LOG

  return new_agent;
}

void WHCA::RemoveAgent(int agent_ID)
{
  // TODO change current_section if needed

  assert(agents_.IsStored(agent_ID));

  ClearAgentReservation(agent_ID);

  tasks_.erase(agent_ID);
  paths_.erase(agent_ID);
  results_.erase(agent_ID);
  agents_.RemoveID(agent_ID);
}

void WHCA::ClearAgentReservation(int agent_ID)
{
  assert(agents_.IsStored(agent_ID));

  int counter = 0;

  std::vector<Node<SpaceTimeCell>>& agent_path = paths_.at(agent_ID);

#ifdef FULL_CHECK
  space_time_solver_.checkpath(agent_path);
#endif // FULL_CHECK

  for (size_t node_i = 0; node_i < agent_path.size(); ++node_i)
  {
    reservation_.erase(agent_path[node_i].cell);
    counter++;
  }

  paths_.at(agent_ID).clear();
  results_.at(agent_ID) = {};
}

bool WHCA::Plan(const AActor *LogOwner)
{
  // Build a single-agent path for each agent
  std::vector<int> IDs = agents_.GetIDs();

  int section_size = (search_section_ > IDs.size()) ? IDs.size() : search_section_;
  if (!section_size) return true;

  int current_index = current_section_;
  current_section_ = (current_section_ + section_size) % IDs.size();

  do
  {
    if (AbandonPlan)
    {
      AbandonPlan = false;
      return false;
    }

    int agent_ID = IDs[current_index];

    // Clear previous reservation
    ClearAgentReservation(agent_ID);

    AgentTask<SpaceTimeCell> task = tasks_.at(agent_ID);

    results_[agent_ID] = SearchResult<SpaceTimeCell>();
    SearchResult<SpaceTimeCell>& result = results_[agent_ID];

    // TODO task.start.t must be in [0, max_time] and when new task added considered this extra thing 

    // Check if we need to build a path on this depth
    if (!IsBetween(task.start.t, extra_time_, (extra_time_ + depth_) % MAX_TIME))
    {
      // TODO Mark that path was built but it's out of boundaries
      result.pathfound = true;
      current_index = (current_index + 1) % IDs.size();
      continue;
    }

    // Plan in 2d to set heuristic values and check if the path exists at all
    GridCell start = { task.start.i, task.start.j };
    GridCell goal = { task.goal.i, task.goal.j };

#ifdef FULL_CHECK
    UE_LOG(LogTemp, Warning, TEXT("want to plan from (%d, %d, %d) to (%d, %d)"), task.start.i, task.start.j, task.start.t, task.goal.i, task.goal.j );
#endif

    auto result_ptr = space_solver_.Plan({ goal, start });

    result.time += space_solver_.GetResult().time;

    if (nullptr == result_ptr)
    {
      reservation_.clear();
      return false;
    }

    // Run 3d pathfinder
    const Node<SpaceTimeCell>* node;
    node = space_time_solver_.Plan(task, depth_);

    result.time += space_time_solver_.GetResult().time;

    // Check for success
    if (nullptr == node)
    {
      reservation_.clear();
      return false;
    }

    // Collect the path's data and write it in the 
    space_time_solver_.BuildPathTo(node->cell);
    space_time_solver_.WritePath();

    // Copy the found result
    SearchResult<SpaceTimeCell> space_time_res = space_time_solver_.GetResult();
    result.pathfound = true;
    result.nodescreated = space_time_res.nodescreated;
    result.numberofsteps = space_time_res.numberofsteps;
    result.pathlength = space_time_res.pathlength;

    // Move the found path from the solver to paths_
    paths_[agent_ID] = std::move(*space_time_res.lppath);
    // First node must be in the end
    std::reverse(paths_[agent_ID].begin(), paths_[agent_ID].end());
    // Make sure that result struct points to correct vectors
    result.lppath = &paths_[agent_ID];
    result.hppath = nullptr;

    #ifdef ENABLE_VISUAL_LOG
    AsyncTask(ENamedThreads::GameThread, [this, LogOwner, agent_ID] {
      // Interface implementation ensures BlueprintThreadSafe
      FVector StartLocation = map_->Execute_GetLocation(MapDataImplementer);
      float Gap = map_->Execute_GetGap(MapDataImplementer);
      float TimeGap = map_->Execute_GetTimeGap(MapDataImplementer);

      FColor AgentColor = AgentColors[agent_ID];
      for (Node<SpaceTimeCell> PathNode : *results_[agent_ID].lppath)
      {
        UE_VLOG_BOX(LogOwner, LogMAPF, Log, FBox({
            StartLocation.X + Gap * (float)PathNode.cell.j,
            StartLocation.Y + Gap * (float)PathNode.cell.i,
            StartLocation.Z + TimeGap * (float)PathNode.cell.t,
          },
        {
          StartLocation.X + Gap * (float)PathNode.cell.j + Gap,
          StartLocation.Y + Gap * (float)PathNode.cell.i + Gap,
          StartLocation.Z + TimeGap * (float)PathNode.cell.t + TimeGap,
        }), AgentColor, TEXT(""));
      }

      UE_VLOG(LogOwner, LogMAPF, Log, TEXT("Agent ID is %d"), agent_ID);
    });
    #endif ENABLE_VISUAL_LOG

    current_index = (current_index + 1) % IDs.size();

  } while (current_index != current_section_);

  return true;
}

int WHCA::GetAgentsNum() const
{
  return results_.size();
}

void WHCA::SetDepth(int new_depth)
{
  assert(new_depth > 0);

  int min_depth = (2 * GetAgentsNum() + search_section_ - 1) / search_section_;

  if (new_depth >= min_depth)
  {
    depth_ = new_depth;
  }
}

SearchResult<SpaceTimeCell> WHCA::GetPlan(int agent_ID) const
{
  assert(agents_.IsStored(agent_ID));

  return results_.at(agent_ID);
}

bool WHCA::IsBetween(TTYPE time, int old_time, int new_time)
{
  if (old_time > new_time)
  {
    return (time >= old_time || time < new_time);
  }
  else
  {
    return (time >= old_time && time < new_time);
  }
}

void WHCA::MoveTime(TTYPE delta_time)
{
  if (delta_time <= 0) return;

  int old_time = extra_time_;
  extra_time_ = (extra_time_ + delta_time) % MAX_TIME;

  auto IDs = agents_.GetIDs();
  for (int agent_ID : IDs)
  {
    AgentTask<SpaceTimeCell>& task = tasks_[agent_ID];
    std::vector<Node<SpaceTimeCell>>& single_path = paths_[agent_ID];

    // Remove all nodes, which time is in past and present
    while (!single_path.empty() && IsBetween(single_path.back().cell.t, old_time, extra_time_))
    {
      reservation_.erase(single_path.back().cell);
      single_path.pop_back();

      if (!single_path.empty())
      {
        tasks_[agent_ID].start = single_path.back().cell;
        //check(reservation_.find(single_path.back().cell) != reservation_.end());
      }
      else
      {
        UE_LOG(LogTemp, Error, TEXT("Error: started agent doesn't have enough path cells planned"));
      }
    }
  }
}

int WHCA::GetDepth() const
{
  return depth_;
}

const IMapData* WHCA::GetMap() const
{
  return map_;
}

const std::unordered_set<SpaceTimeCell>* WHCA::GetResTable() const
{
  return &reservation_;
}

void WHCA::SetRadius(float new_radius)
{
  space_time_solver_.SetRadius(new_radius);
}

float WHCA::GetRadius() const
{
  return space_time_solver_.GetRadius();
}

TArray<FAgentTask> WHCA::GetTasks() const
{
  TArray<FAgentTask> Result;

  for (auto& MapPiar : tasks_)
  {
    Result.Add(FAgentTask(MapPiar.second.start.j, MapPiar.second.start.i, MapPiar.second.start.t,
      MapPiar.second.goal.j, MapPiar.second.goal.i, MapPiar.second.goal.t, true));
  }

  return Result;
}

bool WHCA::GetNextMove(int agent_ID, SpaceTimeCell& from, SpaceTimeCell& to) const
{
  if (results_.find(agent_ID) == results_.end())
  {
    UE_LOG(LogTemp, Error, TEXT("no agent"));
    return false;
  }

  const SearchResult<SpaceTimeCell>& result = results_.at(agent_ID);
  if (!result.lppath)
  {
    UE_LOG(LogTemp, Error, TEXT("no path"));
    return false;
  }

  if (result.lppath->size() == 1)
  {
    from = result.lppath->at(0).cell;
    to = from;
    return true;
  }

  from = result.lppath->back().cell;
  to = result.lppath->at(result.lppath->size() - 2).cell;

  return true;
}

void WHCA::Abandon()
{
  AbandonPlan = true;
}
