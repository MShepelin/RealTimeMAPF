// Fill out your copyright notice in the Description page of Project Settings.

#include "Solver.h"
#include "DrawDebugHelpers.h"

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
    OnPlanReady.ExecuteIfBound();

    // add new task 
  }

  {
    FScopeTryLock SolverLock(&SolverSync);
    if (!SolverLock.IsLocked()) return;

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
  }
}

bool ASolver::IsCorrectSectionSize(int SectionSize) const
{
  int MinSize = (2 * MAPFSolver.GetAgentsNum()) / MAPFSolver.GetDepth();
  if (SectionSize < MinSize)
  {
    UE_LOG(LogTemp, Warning, TEXT("Section size must be at least %d according to the current cooperation depth"), MinSize);
    return false;
  }

  return true;
}

#if WITH_EDITOR
void ASolver::DrawDebugGrid()
{
  IMapData* DataPointer = (IMapData*) MapData.GetObject();
  MapData.SetInterface(DataPointer);
  if (!MapData.GetInterface()) return;

  const UWorld * InWorld = GetWorld();
  if (InWorld == nullptr) return;

  float Gap = MapData->Execute_GetGap(MapData.GetObject());

  FVector GridLocation = MapData->Execute_GetLocation(MapData.GetObject());
  for (int32 Y = 0; Y < DataPointer->Execute_GetHeight(MapData.GetObject()); ++Y)
  {
    for (int32 X = 0; X < DataPointer->Execute_GetWidth(MapData.GetObject()); ++X)
    {
      if (!DataPointer->Execute_IsCellTraversable(MapData.GetObject(), Y, X))
      {
        FVector Center = { GridLocation.X + Gap * X + Gap / 2, GridLocation.Y + Gap * Y + Gap / 2, GridLocation.Z };
        FVector Extent = { Gap / 2, Gap / 2, 0 };
        FQuat Rotation = { 0., 0., 0., 0. };

        DrawDebugSolidBox(InWorld, Center, Extent, Rotation, FColor::Green, false, 5, 0);
      }
    }
  }

  FVector LeftCorner = GridLocation;
  LeftCorner.Y += MapData->Execute_GetHeight(MapData.GetObject()) * Gap;
  FVector RightCorner = GridLocation;
  RightCorner.X += MapData->Execute_GetWidth(MapData.GetObject()) * Gap;
  FVector OppositeCorner = GridLocation;
  OppositeCorner.X += MapData->Execute_GetWidth(MapData.GetObject()) * Gap;
  OppositeCorner.Y += MapData->Execute_GetHeight(MapData.GetObject()) * Gap;

  DrawDebugLine(InWorld, GridLocation, LeftCorner, FColor::Green, false, 5, 0, 4);
  DrawDebugLine(InWorld, GridLocation, RightCorner, FColor::Green, false, 5, 0, 4);
  DrawDebugLine(InWorld, LeftCorner, OppositeCorner, FColor::Green, false, 5, 0, 4);
  DrawDebugLine(InWorld, RightCorner, OppositeCorner, FColor::Green, false, 5, 0, 4);
}

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

int ASolver::AddAgent(FAgentTask NewAgentTask)
{
  FScopeLock SolverLock(&SolverSync);

  AgentTask<SpaceTimeCell> SpaceTimeTask = {
        {
            NewAgentTask.StartY,
            NewAgentTask.StartX,
            NewAgentTask.StartT
        },
        {
            NewAgentTask.GoalY,
            NewAgentTask.GoalX,
            -1
        }
  };

  return MAPFSolver.AddAgent(SpaceTimeTask);
}

bool ASolver::Plan(FOnPlanReady OnPlanReadyDelegate)
{
  if (!GetWorld()) return false;

  if (!MAPFSolver.GetMap())
  {
    UE_LOG(LogTemp, Error, TEXT("Called Solver::Plan, but no map was chosen"));
    return false;
  }

  if (AsyncPlanner)
  {
    UE_LOG(LogTemp, Warning, TEXT("Called Solver::Plan, but it's already planning"));
    return false;
  }

  OnPlanReady = OnPlanReadyDelegate;

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
