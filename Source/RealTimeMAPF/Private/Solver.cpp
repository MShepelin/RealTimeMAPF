// Fill out your copyright notice in the Description page of Project Settings.

#include "Solver.h"

// Sets default values
ASolver::ASolver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASolver::BeginPlay()
{
	Super::BeginPlay();

  SetMapData(MapDataPointer);
  MAPFSolver.SetDepth(ConstructDepth);
  MAPFSolver.SetRadius(ConstructRadius);
  MAPFSolver.ResetConfiguration();
}

void ASolver::OnConstruction(const FTransform & Transform)
{
  Super::OnConstruction(Transform);

  MAPFSolver.SetDepth(ConstructDepth);
  MAPFSolver.SetRadius(ConstructRadius);
}

// Called every frame
void ASolver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

  if (AsyncPlanner && AsyncPlanner->IsDone())
  {
    AsyncPlanner->EnsureCompletion();
    AsyncPlanner.reset();

    if (MAPFSolver.IsLastPlanSuccessful())
    {
      OnPlanReady.ExecuteIfBound();
    }
    else
    {
      OnPlanFail.ExecuteIfBound();
    }

    OnPlanReady.Clear();
    OnPlanFail.Clear();
  }
}

bool ASolver::IsCorrectSectionSize(int SectionSize) const
{
  int MinSize = (2 * MAPFSolver.GetAgentsNum() + MAPFSolver.GetDepth() - 1) / MAPFSolver.GetDepth();
  if (SectionSize < MinSize)
  {
    UE_LOG(LogTemp, Warning, TEXT("Section size must be at least %d according to the current cooperation depth"), MinSize);
    return false;
  }

  return true;
}

#if WITH_EDITOR
void ASolver::PostEditChangeProperty(struct FPropertyChangedEvent& Event)
{
  FName PropertyName = (Event.Property != NULL) ? Event.Property->GetFName() : NAME_None;
  if (PropertyName == GET_MEMBER_NAME_CHECKED(ASolver, MapDataPointer))
  {
    SetMapData(MapDataPointer);
  }

  Super::PostEditChangeProperty(Event);
}
#endif // WITH_EDITOR

bool ASolver::SetMapData(UObject* MapDataImplementer)
{
  IMapData* DataPointer = (IMapData*) MapDataImplementer;
  if (nullptr == DataPointer) return false; // TODO silent error

  FScopeTryLock SolverLock(&SolverSync);
  if (!SolverLock.IsLocked()) return false; // TODO silent error

  MAPFSolver.ResetConfiguration(DataPointer, Configuration, MapDataImplementer);

  MapData.SetInterface(DataPointer);
  MapData.SetObject(MapDataImplementer);
  return true;
}

void ASolver::AddAgent(FAgentTask AgentTask, FOnAgentReady OnPlanReadyDelegate)
{
  if (!GetWorld()) return;

  if (!MAPFSolver.GetMap())
  {
    UE_LOG(LogTemp, Error, TEXT("Called Solver::AddAgent, but no map was chosen"));
    return;
  }

  (new FAutoDeleteAsyncTask<AddAgentAsyncTask>(&MAPFSolver, &SolverSync, AgentTask, OnPlanReadyDelegate))->StartBackgroundTask();
}

void ASolver::RemoveAgent(int AgentID)
{
  FScopeTryLock SolverLock(&SolverSync);
  if (!SolverLock.IsLocked())
  {
    RemoveAgentTasks.Enqueue(AgentID);
  }
  else
  {
    MAPFSolver.RemoveAgent(AgentID);
  }
}

bool ASolver::Plan(FOnPlanReady OnPlanReadyDelegate, FOnPlanReady OnPlanFailDelegate)
{
  if (!GetWorld()) return false;

  if (!MAPFSolver.GetMap())
  {
    UE_LOG(LogTemp, Error, TEXT("Called Solver::Plan, but no map was chosen"));
    return false;
  }

  {
    FScopeLock SolverLock(&SolverSync);

    MAPFSolver.MoveTime(MoveTimeTask);
    MoveTimeTask = 0;

    float NewDepth;
    while (DepthChangeTasks.Dequeue(NewDepth))
    {
      MAPFSolver.SetDepth(NewDepth);
    }

    int SectionSize;
    while (SectionSizeChangeTasks.Dequeue(SectionSize))
    {
      if (IsCorrectSectionSize(SectionSize))
        MAPFSolver.SetSectionSize(SectionSize);
    }

    int AgentID;
    while (RemoveAgentTasks.Dequeue(AgentID))
    {
      MAPFSolver.RemoveAgent(AgentID);
    }
  }

  if (AsyncPlanner)
  {
    UE_LOG(LogTemp, Warning, TEXT("Called Solver::Plan, but it's already planning"));
    return false;
  }

  OnPlanReady = OnPlanReadyDelegate;
  OnPlanFail = OnPlanFailDelegate;

  AsyncPlanner = std::make_unique<FAsyncTask<PlanAsyncTask>>(&MAPFSolver, &SolverSync, this);
  AsyncPlanner->StartBackgroundTask();
  return true;
}

void ASolver::MoveTime(int Time)
{
  if (Time >= MAX_TIME)
  {
    UE_LOG(LogTemp, Error, TEXT("MAPF Solver has a time looped at %d time steps, but Solver::MoveTime(%d) was called"), MAX_TIME, Time);
    return;
  }

  FScopeTryLock SolverLock(&SolverSync);
  if (!SolverLock.IsLocked())
  {
    MoveTimeTask += Time;
    if (MoveTimeTask >= MAX_TIME)
    {
      UE_LOG(LogTemp, Error, TEXT("MAPF Solver has a time looped at %d time steps, but last Solver::MoveTime calls added to many time steps"), MAX_TIME);
      MoveTimeTask = 0;
    }
    return;
  }

  MAPFSolver.MoveTime(Time);
}

TArray<FAgentTask> ASolver::GetAllTasks() const
{
  FScopeLock SolverLock(&SolverSync);

  return MAPFSolver.GetTasks();
}

FAgentTask ASolver::GetNextMove(int AgentID) const
{
  FScopeLock SolverLock(&SolverSync);

  SpaceTimeCell From, To;

  FAgentTask NextMove;
  NextMove.IsValid = false;

  if (MAPFSolver.GetNextMove(AgentID, From, To))
  {
    NextMove.IsValid = true;

    NextMove.StartX = From.j;
    NextMove.StartY = From.i;
    NextMove.StartT = From.t;

    NextMove.GoalX = To.j;
    NextMove.GoalY = To.i;
    NextMove.GoalT = To.t;
  }

  return NextMove;
}

void ASolver::SetSectionSize(int SectionSize)
{
  if (!IsCorrectSectionSize(SectionSize)) return;

  FScopeTryLock SolverLock(&SolverSync);
  if (!SolverLock.IsLocked())
  {
    SectionSizeChangeTasks.Enqueue(SectionSize);
    return;
  }

  MAPFSolver.SetSectionSize(SectionSize);
}

void ASolver::SetDepth(int NewDepth)
{
  if (NewDepth <= 0)
  {
    UE_LOG(LogTemp, Error, TEXT("New Depth must be positive in Solver::SetDepth call"));
    return;
  }

  FScopeTryLock SolverLock(&SolverSync);
  if (!SolverLock.IsLocked())
  {
    DepthChangeTasks.Enqueue(NewDepth);
    return;
  }

  MAPFSolver.SetDepth(NewDepth);
}

void ASolver::BeginDestroy()
{
  if (AsyncPlanner && !AsyncPlanner->IsDone())
  {
    MAPFSolver.Abandon();
    AsyncPlanner->Cancel();
    AsyncPlanner->EnsureCompletion();
    AsyncPlanner.reset();
  }

  Super::BeginDestroy();
}

void AddAgentAsyncTask::DoWork()
{
  FScopeLock SolverLock(SolverSync);

  AgentTask<SpaceTimeCell> SpaceTimeTask = {
      {
          Task.StartY,
          Task.StartX,
          Task.StartT
      },
      {
          Task.GoalY,
          Task.GoalX,
          -1
      }
  };

  int AgentID = MAPFSolver->AddAgent(SpaceTimeTask);

  AgentReady.ExecuteIfBound(AgentID);
}
