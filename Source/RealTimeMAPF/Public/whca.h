#pragma once

#include "HAL/ThreadSafeBool.h"
#include <cassert>
#include "agents.h"
#include "agents_array.h"
#include "mapf_interface.h"
#include "astar.h"
#include "astar3d.h"
#include <vector>
#include <unordered_map>

// MAPF solver with limited depth of search
class WHCA : public MAPFSolverInterface<SpaceTimeCell>
{
protected:
  std::unordered_set<SpaceTimeCell> reservation_;

  GridSingleSearch space_solver_;
  SpaceTimeSearch space_time_solver_;

  std::unordered_map<int, AgentTask<SpaceTimeCell>> tasks_;
  std::unordered_map<int, SearchResult<SpaceTimeCell>> results_;
  std::unordered_map<int, std::vector<Node<SpaceTimeCell>>> paths_;

#ifdef ENABLE_VISUAL_LOG
  std::unordered_map<int, FColor> agent_colors_;
  FColor current_color_ = FColor::Green;
#endif // ENABLE_VISUAL_LOG

  std::vector<int> agents_;
  std::unordered_map<int, size_t> agent_ID_to_index_;
  std::vector<int> free_agent_IDs_;
  
  UObject* map_object_ = nullptr;
  IMapData* map_ = nullptr;
  const FConfig* config_ = nullptr;

  // If true each first planning section will start with random shuffle
  unsigned char enable_shuffle_ : 1;
  // Number of random swaps
  int random_swaps_  = 10;
  // Depth of cooperation
  int depth_ = 64;
  // Counter to move time and change the locations of agents
  TTYPE extra_time_ = 0;

  // The size of a planning section
  int search_section_ = 1;
  // The index in agents_ to plan with
  size_t current_section_ = 0;

  FThreadSafeBool AbandonPlan{ false };

protected:
  void ClearAgentReservation(int agent_ID);

  // Tries to perform planning for a single agent.
  // If the planning was successful, returns true and write the found path to the reservation table.
  // Otherwise returns false
  // Also returns false if AbandonPlan was activated
  bool AgentPlan(int agent_ID, const AActor *LogOwner);

public:
  WHCA();
  virtual ~WHCA() {};

  static bool IsBetween(TTYPE time, int old_time, int new_time);

  void Abandon();

  void SetRadius(float new_radius);
  void SetSectionSize(int new_section_size);
  void SetDepth(int new_depth);

  float GetRadius() const;
  int GetDepth() const;
  const IMapData* GetMap() const;
  int GetAgentsNum() const;

  virtual void ResetConfiguration(IMapData* map, const FConfig& config, UObject* map_object);

  void ResetConfiguration();

  virtual int AddAgent(AgentTask<SpaceTimeCell> task) override;

  virtual void RemoveAgent(int agent_ID) override;

  bool Plan(const AActor *LogOwner);

  void ShuffleAgents();

  SearchResult<SpaceTimeCell> GetPlan(int agent_ID) const;

  bool GetNextMove(int agent_ID, SpaceTimeCell& from, SpaceTimeCell& to) const;

  TArray<FAgentTask> GetTasks() const;

  FAgentTask GetTask(int agent_ID) const;

  void MoveTime(TTYPE delta_time);

  const std::unordered_set<SpaceTimeCell>* GetResTable() const;

  void SetShuffleMode(bool enable_shuffle, int random_swaps);
};
