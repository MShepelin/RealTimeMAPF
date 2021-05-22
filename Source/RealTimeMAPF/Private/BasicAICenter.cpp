// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicAICenter.h"
#include "NavigationSystem.h"
#include "BasicBot.h"

// Sets default values
ABasicAICenter::ABasicAICenter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
  SectionStart = 0;

  SectionPlanFound = false;
  AgentFinishedMovement = false;
}

// Called when the game starts or when spawned
void ABasicAICenter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	
  for (ABasicBot* OldBot : Bots)
  {
    if (IsValid(OldBot))
      OldBot->Destroy();
  }

  Bots.Empty();
}

// Called every frame
void ABasicAICenter::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);

  if (AgentFinishedMovement && SectionPlanFound)
  {
    AgentFinishedMovement = false;
    SectionPlanFound = false;
    ReadyToMoveAgents();
  }

  int AgentID;
  while (InitedUnits.Dequeue(AgentID))
  {
    if (AgentID == -1)
    {
      UE_LOG(LogTemp, Error, TEXT("Pathplanning failed for some agent"));
      FailedInits++;
    }
    else
    {
      AgentIDs.Add(AgentID);

      FAgentTask AgentTask = Solver->GetTask(AgentID);

      FTransform BotTransform;
      BotTransform.SetLocation(TaskToLocation(AgentTask.StartX, AgentTask.StartY));

      ABasicBot* NewBot = GetWorld()->SpawnActor<ABasicBot>(BotClass, BotTransform);
      Bots.Add(NewBot);

      NewBot->SetAICenter(this);
    }

    if (AgentIDs.Num() == Tasks.Num() - FailedInits)
    {
      ReadyToMoveAgents();
    }
  }
}

void ABasicAICenter::AgentFinished()
{
  if (AgentFinishedMovement) return; // TODO silent error

  FinishedAgents++;

  if (FinishedAgents == Tasks.Num() - FailedInits)
  {
    FinishedAgents = 0;
    AgentFinishedMovement = true;
  }
}
  
#if WITH_EDITOR
void ABasicAICenter::PostEditChangeProperty(struct FPropertyChangedEvent& Event)
{
  FName PropertyName = (Event.Property != NULL) ? Event.Property->GetFName() : NAME_None;
  if (PropertyName == GET_MEMBER_NAME_CHECKED(ABasicAICenter, MapDataPointer))
  {
    MapData.SetInterface(MapDataPointer);
    MapData.SetObject(MapDataPointer);
  }

  Super::PostEditChangeProperty(Event);
}
#endif // WITH_EDITOR

void ABasicAICenter::SectionReady()
{
  SectionPlanFound = true;
}

void ABasicAICenter::SectionFail()
{
  SectionPlanFound = false;
  UE_LOG(LogTemp, Error, TEXT("Section planning failed!"));
}

void ABasicAICenter::BeginPlan()
{
  if (!Solver) return;

  FailedInits = 0;
  FinishedAgents = 0;
  SectionStart = 0;

  SectionPlanFound = false;
  AgentFinishedMovement = false;

  for (ABasicBot* OldBot : Bots)
  {
    if (IsValid(OldBot))
      OldBot->Destroy();
  }

  Bots.Empty();
  AgentIDs.Empty();
  AgentsDelegates.Empty();

  Solver->SetSectionSize(SectionSize);

  for (FAgentTask Task : Tasks)
  {
    AgentsDelegates.Add(FOnAgentReady());
    AgentsDelegates.Last().BindDynamic(this, &ABasicAICenter::InitUnit);

    Solver->AddAgent(Task, AgentsDelegates.Last());
  }
}

void ABasicAICenter::InitUnit(int AgentID)
{
  InitedUnits.Enqueue(AgentID);
}

void ABasicAICenter::ReadyToMoveAgents()
{
  for (int AgentIndex = 0; AgentIndex < AgentIDs.Num(); ++AgentIndex)
  {
    FAgentTask Move = Solver->GetNextMove(AgentIDs[AgentIndex]);

    FVector Start = TaskToLocation(Move.StartX, Move.StartY);
    FVector Finish = TaskToLocation(Move.GoalX, Move.GoalY);

    if (!Move.IsValid)
    {
      UE_LOG(LogTemp, Error, TEXT("ABasicAICenter::ReadyToMoveAgents: Not valid move!"));
      continue;
    }

    Bots[AgentIndex]->MakeMove(Start, Finish);
  }

  if (!Solver) return; // TODO silent error

  Solver->MoveTime(1);
  FOnPlanReady Delegate;
  Delegate.BindDynamic(this, &ABasicAICenter::SectionReady);

  FOnPlanReady OnFailDelegate;
  OnFailDelegate.BindDynamic(this, &ABasicAICenter::SectionFail);
  Solver->Plan(Delegate, OnFailDelegate);
}

FVector ABasicAICenter::TaskToLocation(int GridX, int GridY) const
{
  float Gap = MapData->Execute_GetGap(MapData.GetObject());
  FVector Location = MapData->Execute_GetLocation(MapData.GetObject());

  Location.X += GridX * Gap + Gap / 2;
  Location.Y += GridY * Gap + Gap / 2;

  return Location;
}

void ABasicAICenter::BeginDestroy()
{
  for (int AgentID : AgentIDs)
  {
    Solver->RemoveAgent(AgentID);
  }
  AgentIDs.Empty();

  Bots.Empty();

  AgentsDelegates.Empty();

  Super::BeginDestroy();
}
