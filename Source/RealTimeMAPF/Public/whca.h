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
  std::unordered_map<int, FColor> AgentColors;
  uint8 ColorDelta = 30;
  FColor CurrentColor = FColor::Green;
#endif // ENABLE_VISUAL_LOG

  AgentsArray<SpaceTimeCell> agents_;
    
  UObject* MapDataImplementer = nullptr;
  IMapData* map_ = nullptr;
  const FConfig* config_ = nullptr;

  // If true before each planning agents will be reordered randomly
  //unsigned int random_order : 1;
  // Depth of cooperation
  int depth_;
  // Counter to move time and change the locations of agents
  TTYPE extra_time_;

  //int number_of_swaps_;
  int search_section_;
  int current_section_;

  FThreadSafeBool AbandonPlan{ false };

  void ClearAgentReservation(int agent_ID);

  static bool IsBetween(TTYPE time, int old_time, int new_time);

public:
  WHCA();
  virtual ~WHCA() {};

  void Abandon();

  void SetRadius(float new_radius);
  void SetSectionSize(int new_section_size);
  float GetRadius() const;
  void SetDepth(int new_depth);
  int GetDepth() const;
  const IMapData* GetMap() const;
  int GetAgentsNum() const;

  virtual void ResetConfiguration(IMapData* map, const FConfig& config, UObject* NewMapDataImplementer);

  virtual int AddAgent(AgentTask<SpaceTimeCell> task) override;

  virtual void RemoveAgent(int agent_ID) override;

  bool Plan(const AActor *LogOwner);

  SearchResult<SpaceTimeCell> GetPlan(int agent_ID) const;

  bool GetNextMove(int agent_ID, SpaceTimeCell& from, SpaceTimeCell& to) const;

  TArray<FAgentTask> GetTasks() const;

  void MoveTime(TTYPE delta_time);

  const std::unordered_set<SpaceTimeCell>* GetResTable() const;
};
