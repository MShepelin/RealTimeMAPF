// Fill out your copyright notice in the Description page of Project Settings.

#include "Grid.h"
#include "DrawDebugHelpers.h"

// Sets default values
AGrid::AGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGrid::BeginPlay()
{
	Super::BeginPlay();

  SetMapData(MapDataPointer);
}

// Called every frame
void AGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

#if WITH_EDITORONLY_DATA
void AGrid::DrawDebugGrid()
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

void AGrid::PostEditChangeProperty(struct FPropertyChangedEvent& Event)
{
  FName PropertyName = (Event.Property != NULL) ? Event.Property->GetFName() : NAME_None;
  if (PropertyName == GET_MEMBER_NAME_CHECKED(AGrid, MapDataPointer))
  {
    SetMapData(MapDataPointer);
  }

  Super::PostEditChangeProperty(Event);
}
#endif // WITH_EDITORONLY_DATA

void AGrid::SetMapData(UObject* MapDataImplementer)
{
  IMapData* DataPointer = (IMapData*) MapDataImplementer;
  if (nullptr == DataPointer) return; // TODO silent error

  Solver.ResetConfiguration(DataPointer, Configuration, MapDataImplementer);

  MapData.SetInterface(DataPointer);
  MapData.SetObject(MapDataImplementer);
}

int AGrid::MAPFAddAgent(int XStart, int YStart, int XGoal, int YGoal)
{
  AgentTask<SpaceTimeCell> task3d = {
        {
            YStart,
            XStart,
            0
        },
        {
            YGoal,
            XGoal,
            -1
        }
  };

  return Solver.AddAgent(task3d);
}

void AGrid::MAPFPlan()
{
  if (!GetWorld()) return; // TODO silent error

  if (!Solver.GetMap()) return;

  Solver.Plan(GetWorld(), this);
}

void AGrid::MAPFMoveTime(int Time)
{
  // TODO check types: int -> TTYPE
  Solver.MoveTime(Time);
}

TArray<FAgentTask> AGrid::GetAllTasks() const
{
  return Solver.GetTasks();
}

FAgentTask AGrid::MAPFGetNextMove(int agent_ID) const
{
  SpaceTimeCell From, To;

  if (Solver.GetNextMove(agent_ID, From, To))
  {
    return {
      From.j,
      From.i,
      From.t,
      To.j,
      To.i,
      To.t
    };
  }

  return FAgentTask();
}

void AGrid::MAPFSetSectionSize(int SectionSize)
{
  Solver.SetSectionSize(SectionSize);
}
