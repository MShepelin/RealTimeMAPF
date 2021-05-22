#include "whca.h"
#include "stdlib.h"
#include "Async/AsyncWork.h"

WHCA::WHCA() : space_time_solver_(&space_solver_, &reservation_)
{
  space_solver_.SetDiagonalCost(1);
  enable_shuffle_ = true;
}

void WHCA::SetSectionSize(int new_section_size)
{
  if (new_section_size < 1) return; // TODO silent error
  search_section_ = new_section_size;
  current_section_ = 0;
}

void WHCA::ResetConfiguration()
{
  ResetConfiguration(map_, *config_, map_object_);
}

void WHCA::ResetConfiguration(IMapData* map, const FConfig& config, UObject* map_object)
{
  assert(map && map_object);
  
  AbandonPlan = false;

  tasks_.clear();
  paths_.clear();
  agents_.clear();
  agent_ID_to_index_.clear();
  free_agent_IDs_.clear();

  space_solver_.ResetConfiguration(map, config, map_object);
  space_time_solver_.ResetConfiguration(map, config, map_object);

  map_object_ = map_object;
  map_ = map;
  config_ = &config;
}

int WHCA::AddAgent(AgentTask<SpaceTimeCell> task)
{
  assert(task.start.t >= 0);
  assert(task.goal.t == -1);
  assert(map_ && config_);
  
  task.start.t = (task.start.t + extra_time_) % MAX_TIME;

  if (reservation_.find(task.start) != reservation_.end())
  {
    UE_LOG(LogTemp, Error, TEXT("Attempted to add an agent to an existing cell, task.start = (%d %d %d)"),
      task.start.i, task.start.j, task.start.t);
    return -1;
  }

  int new_agent = 0;
  if (!free_agent_IDs_.empty())
  {
    new_agent = free_agent_IDs_.back();
    free_agent_IDs_.pop_back();
  }
  else
  {
    // TODO: fix size_t -> int cast
    new_agent = agents_.size();
  }

  agent_ID_to_index_[new_agent] = agents_.size();
  agents_.push_back(new_agent);
  
  tasks_.insert({ new_agent, task });
  results_.insert({ new_agent, SearchResult<SpaceTimeCell>()});
  paths_.insert({ new_agent, {} });

#if ENABLE_VISUAL_LOG
  agent_colors_[new_agent] = current_color_;
#endif // ENABLE_VISUAL_LOG

  // If the agent is new and planning has already began 
  // we need to perform planning for the new agent
  if (!AgentPlan(new_agent, nullptr))
  {
    return -1;
  }

  return new_agent;
}

void WHCA::RemoveAgent(int agent_ID)
{
  if (agent_ID_to_index_.find(agent_ID) == agent_ID_to_index_.end()) return;

  ClearAgentReservation(agent_ID);

  tasks_.erase(agent_ID);
  paths_.erase(agent_ID);
  results_.erase(agent_ID);

  free_agent_IDs_.push_back(agent_ID);
  size_t agent_index = agent_ID_to_index_[agent_ID];
  std::swap(agents_[agent_index], agents_.back());
  agents_.pop_back();

  agent_ID_to_index_.erase(agent_ID);

  size_t section_size = (search_section_ > agents_.size()) ? agents_.size() : search_section_;
  if (!section_size)
  {
    current_section_ = 0;
    return;
  }

  if (current_section_ > agent_index)
  {
    current_section_ = ((section_size + current_section_) - 1) % agents_.size();
  }

#if ENABLE_VISUAL_LOG
  agent_colors_.erase(agent_ID);
#endif // ENABLE_VISUAL_LOG
}

void WHCA::ClearAgentReservation(int agent_ID)
{
  assert(agent_ID_to_index_.find(agent_ID) != agent_ID_to_index_.end());

  std::vector<Node<SpaceTimeCell>>& agent_path = paths_.at(agent_ID);

#ifdef FULL_CHECK
  check(space_time_solver_.CheckPath(agent_path));
#endif // FULL_CHECK

  for (size_t node_i = 0; node_i < agent_path.size(); ++node_i)
  {
    reservation_.erase(agent_path[node_i].cell);
  }

  //paths_.at(agent_ID).clear();
  //results_.at(agent_ID) = {};
}

void WHCA::RestoreAgentReservation(int agent_ID)
{
  assert(agent_ID_to_index_.find(agent_ID) != agent_ID_to_index_.end());

  std::vector<Node<SpaceTimeCell>>& agent_path = paths_.at(agent_ID);

  for (size_t node_i = 0; node_i < agent_path.size(); ++node_i)
  {
    reservation_.insert(agent_path[node_i].cell);
  }
}

void WHCA::ShuffleAgents(size_t shuffle_region_start)
{
  if (shuffle_region_start < 0 || shuffle_region_start >= agents_.size())
  {
    return; // TODO silent error
  }

  for (int shuffle_try = 0; shuffle_try < random_swaps_; ++shuffle_try)
  {
    size_t first_index = shuffle_region_start + rand() % (agents_.size() - shuffle_region_start);
    size_t second_index = shuffle_region_start + rand() % (agents_.size() - shuffle_region_start);

    std::swap(first_index, second_index);
  }
}

bool WHCA::AgentPlan(int agent_ID, const AActor *LogOwner)
{
  // Clear previous reservation
  ClearAgentReservation(agent_ID);

  AgentTask<SpaceTimeCell> task = tasks_.at(agent_ID);

  results_[agent_ID] = SearchResult<SpaceTimeCell>();
  SearchResult<SpaceTimeCell>& result = results_[agent_ID];

  // Check if we need to build a path on this depth
  if (!IsBetween(task.start.t, extra_time_, (extra_time_ + depth_) % MAX_TIME))
  {
    // TODO Mark that path was built but it's out of boundaries
    check(paths_[agent_ID].size() == 0);
    result.pathfound = true;
    return true;
  }

  // Plan in 2d to set heuristic values and check if the path exists at all
  GridCell start = { task.start.i, task.start.j };
  GridCell goal = { task.goal.i, task.goal.j };

  auto result_ptr = space_solver_.Plan({ goal, start });

  result.time += space_solver_.GetResult().time;

  if (nullptr == result_ptr)
  {
    UE_LOG(LogTemp, Error, TEXT("Space solver failed to plan"));
    // No RestoreAgentReservation
    return false;
  }

  // Run 3d pathfinder
  const Node<SpaceTimeCell>* node;
  node = space_time_solver_.Plan(task, depth_);

  result.time += space_time_solver_.GetResult().time;

  // Check for success
  if (nullptr == node)
  {
    UE_LOG(LogTemp, Error, TEXT("Space-Time solver failed to plan"));
    RestoreAgentReservation(agent_ID);
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

#if ENABLE_VISUAL_LOG
  AsyncTask(ENamedThreads::GameThread, [this, LogOwner, agent_ID] {
    // Interface implementation ensures BlueprintThreadSafe
    FVector StartLocation = map_->Execute_GetLocation(map_object_);
    float Gap = map_->Execute_GetGap(map_object_);
    float TimeGap = map_->Execute_GetTimeGap(map_object_);

    FColor AgentColor = agent_colors_[agent_ID];
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
#endif // ENABLE_VISUAL_LOG

  return true;
}

bool WHCA::Plan(const AActor *LogOwner)
{
  size_t section_size = (search_section_ > agents_.size()) ? agents_.size() : search_section_;
  if (!section_size)
  {
    current_section_ = 0;
    last_plan_success_ = true;
    return last_plan_success_;
  }

  size_t current_index = current_section_;
  current_section_ = (current_section_ + section_size) % agents_.size();

  if (enable_shuffle_)
  {
    ShuffleAgents(current_index);
  }

  do
  {
    last_plan_success_ = false;

    if (AbandonPlan || !AgentPlan(agents_[current_index], LogOwner))
    {
      reservation_.clear();
      return last_plan_success_;
    }

    last_plan_success_ = true;

    current_index = (current_index + 1) % agents_.size();

  } while (current_index != current_section_);

  return last_plan_success_;
}

int WHCA::GetAgentsNum() const
{
  return results_.size();
}

void WHCA::SetDepth(int new_depth)
{
  assert(new_depth > 0);

  int min_depth = (2 * GetAgentsNum() + search_section_ - 1) / search_section_;

  depth_ = (new_depth >= min_depth) ? new_depth : min_depth;
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

  for (int agent_ID : agents_)
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
        // TODO call some delegate to capture the error
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
      MapPiar.second.goal.j, MapPiar.second.goal.i, true));
  }

  return Result;
}

FAgentTask WHCA::GetTask(int agent_ID) const
{
  if (agent_ID_to_index_.find(agent_ID) == agent_ID_to_index_.end()) return FAgentTask();

  AgentTask<SpaceTimeCell> task = tasks_.at(agent_ID);
  return FAgentTask(task.start.j, task.start.i, task.start.t,
    task.goal.j, task.goal.i, true);
}

bool WHCA::GetNextMove(int agent_ID, SpaceTimeCell& from, SpaceTimeCell& to) const
{
  if (results_.find(agent_ID) == results_.end())
  {
    UE_LOG(LogTemp, Error, TEXT("No agent with ID = %d"), agent_ID);
    return false;
  }
  
  const SearchResult<SpaceTimeCell>& result = results_.at(agent_ID);
  if (!result.lppath)
  {
    bool abandon_status = AbandonPlan;
    UE_LOG(LogTemp, Error, TEXT("no path, abandon = %d"), (int)abandon_status);
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

void WHCA::SetShuffleMode(bool enable_shuffle, int random_swaps)
{
  check(random_swaps_ >= 0);

  enable_shuffle_ = enable_shuffle;
  random_swaps_ = random_swaps;
}

const bool WHCA::IsLastPlanSuccessful() const
{
  return last_plan_success_;
}
