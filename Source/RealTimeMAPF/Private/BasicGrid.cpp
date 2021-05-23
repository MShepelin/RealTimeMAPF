// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicGrid.h"
#include "DrawDebugHelpers.h"

// Sets default values
ABasicGrid::ABasicGrid()
{
  Grid = {{{0}}};

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
  Width = Height = 1;
  SetWidth(Width);
  SetHeight(Height);
}

// Called when the game starts or when spawned
void ABasicGrid::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABasicGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

int32 ABasicGrid::GetWidth_Implementation() const
{
  FScopeLock SolverLock(&GridSync);
  return Width;
}

int32 ABasicGrid::GetHeight_Implementation() const
{
  FScopeLock SolverLock(&GridSync);
  return Height;
}

bool ABasicGrid::IsCellTraversable_Implementation(int32 Y, int32 X) const
{
  FScopeLock SolverLock(&GridSync);
  if (Y < 0 || Y >= Grid.Num() || X < 0 || X >= Grid[0].Array.Num()) return false;
  return (Grid[Y].Array[X] > 0);
}

bool ABasicGrid::IsCellOnGrid_Implementation(int32 Y, int32 X) const
{
  FScopeLock SolverLock(&GridSync);
  return (Y >= 0 || Y < Grid.Num()) && (X >= 0 || X < Grid[0].Array.Num());
}

float ABasicGrid::GetGap_Implementation() const
{
  FScopeLock SolverLock(&GridSync);
  return SpaceGap;
}

float ABasicGrid::GetTimeGap_Implementation() const
{
  FScopeLock SolverLock(&GridSync);
  return TimeGap;
}

FVector ABasicGrid::GetLocation_Implementation() const
{
  FScopeLock SolverLock(&GridSync);
  return GetActorLocation();
}

void ABasicGrid::Inverse(int32 Y, int32 X)
{
  //FScopeLock SolverLock(&GridSync);
  if (Y < 0 || Y >= Grid.Num() || X < 0 || X >= Grid[0].Array.Num()) return;

  Grid[Y].Array[X] = Grid[Y].Array[X] ? 0 : 1;

#if WITH_EDITOR
  const UWorld * InWorld = GetWorld();

  float Gap = Execute_GetGap(this);
  FVector GridLocation = Execute_GetLocation(this);

  FVector Center = { GridLocation.X + Gap * X + Gap / 2, GridLocation.Y + Gap * Y + Gap / 2, GridLocation.Z };
  FVector Extent = { Gap / 2, Gap / 2, Gap / 2 };
  FQuat Rotation = { 0., 0., 0., 0. };

  DrawDebugBox(InWorld, Center, Extent, Rotation, FColor::Green, false, 1, 0);
#endif // WITH_EDITOR
}

void ABasicGrid::SetHeight(int32 InHeight)
{
  if (InHeight < 1) return;
  Height = InHeight;

  if (InHeight < Grid.Num())
  {
    Grid.SetNum(InHeight);
  }
  else if (InHeight > Grid.Num())
  {
    const uint8 NonTraversable = 0;
    int OriginalHeight = Grid.Num();
    for (int Counter = 0; Counter < InHeight - OriginalHeight; ++Counter)
    {
      Grid.Add({ TArray<uint8>(&NonTraversable, Grid[0].Array.Num()) });
    }
  }
}

void ABasicGrid::SetWidth(int32 InWidth)
{
  if (InWidth < 1) return;
  Width = InWidth;

  if (InWidth < Grid[0].Array.Num())
  {
    for (FFakeArray& Array : Grid)
    {
      Array.Array.SetNum(InWidth);
    }
  }
  else if (InWidth > Grid[0].Array.Num())
  {
    const uint8 NonTraversable = 0;
    const TArray<uint8> NonTraversableArray(&NonTraversable, InWidth - Grid[0].Array.Num());
    for (FFakeArray& Array : Grid)
    {
      Array.Array.Append(NonTraversableArray);
    }
  }
}

#if WITH_EDITOR
void ABasicGrid::DrawDebugGrid(FColor Border, FColor Nontraversable) const
{
  const UWorld * InWorld = GetWorld();
  if (!InWorld) return;

  float Gap = Execute_GetGap(this);
  FVector GridLocation = Execute_GetLocation(this);
  for (int32 Y = 0; Y < Execute_GetHeight(this); ++Y)
  {
    for (int32 X = 0; X < Execute_GetWidth(this); ++X)
    {
      if (!Execute_IsCellTraversable(this, Y, X))
      {
        FVector Center = { GridLocation.X + Gap * X + Gap / 2, GridLocation.Y + Gap * Y + Gap / 2, GridLocation.Z };
        FVector Extent = { Gap / 2, Gap / 2, 0 };
        FQuat Rotation = { 0., 0., 0., 0. };

        DrawDebugBox(InWorld, Center, Extent, Rotation, Nontraversable, false, 2, 0);
      }
    }
  }
     
  FVector LeftCorner = GridLocation;
  LeftCorner.Y += Execute_GetHeight(this) * Gap;
  FVector RightCorner = GridLocation;
  RightCorner.X += Execute_GetWidth(this) * Gap;
  FVector OppositeCorner = GridLocation;
  OppositeCorner.X += Execute_GetWidth(this) * Gap;
  OppositeCorner.Y += Execute_GetHeight(this) * Gap;

  DrawDebugLine(InWorld, GridLocation, LeftCorner, Border, false, 2, 0, 4);
  DrawDebugLine(InWorld, GridLocation, RightCorner, Border, false, 2, 0, 4);
  DrawDebugLine(InWorld, LeftCorner, OppositeCorner, Border, false, 2, 0, 4);
  DrawDebugLine(InWorld, RightCorner, OppositeCorner, Border, false, 2, 0, 4);
}

void ABasicGrid::PostEditChangeProperty(struct FPropertyChangedEvent& Event)
{
  FName PropertyName = (Event.Property != NULL) ? Event.Property->GetFName() : NAME_None;
  if (PropertyName == GET_MEMBER_NAME_CHECKED(ABasicGrid, Width))
  {
    SetWidth(Width);
  }
  else if (PropertyName == GET_MEMBER_NAME_CHECKED(ABasicGrid, Height))
  {
    SetHeight(Height);
  }

  Super::PostEditChangeProperty(Event);
}
#endif // WITH_EDITOR
