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
}

void ABasicAICenter::AgentFinished()
{
  if (AgentFinishedMovement) return; // TODO silent error

  FinishedAgents++;

  if (FinishedAgents == Tasks.Num())
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

void ABasicAICenter::BeginPlan()
{
  if (!Solver) return;

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

  for (FAgentTask Task : Tasks)
  {
    int AgentID = Solver->AddAgent(Task);
    AgentIDs.Add(AgentID);

    FTransform BotTransform;
    BotTransform.SetLocation(TaskToLocation(Task.StartX, Task.StartY));

    ABasicBot* NewBot = GetWorld()->SpawnActor<ABasicBot>(BotClass, BotTransform);
    Bots.Add(NewBot);

    NewBot->SetAICenter(this);
  }

  Solver->SetSectionSize(Tasks.Num());
  FOnPlanReady Delegate;
  Delegate.BindDynamic(this, &ABasicAICenter::PreplanReady);
  Solver->Plan(Delegate);
}

void ABasicAICenter::PreplanReady()
{
  Solver->SetSectionSize(SectionSize);
  ReadyToMoveAgents();
}

void ABasicAICenter::ReadyToMoveAgents()
{
  for (int AgentIndex = 0; AgentIndex < Tasks.Num(); ++AgentIndex)
  {
    FAgentTask Move = Solver->GetNextMove(AgentIDs[AgentIndex]);

    FVector Start = TaskToLocation(Move.StartX, Move.StartY);
    FVector Finish = TaskToLocation(Move.GoalX, Move.GoalY);

    if (!Move.IsValid)
    {
      UE_LOG(LogTemp, Error, TEXT("not valid move!"));
    }

    Bots[AgentIndex]->MakeMove(Start, Finish);
  }

  if (!Solver) return; // TODO silent error

  Solver->MoveTime(1);
  FOnPlanReady Delegate;
  Delegate.BindDynamic(this, &ABasicAICenter::SectionReady);
  Solver->Plan(Delegate);
}

FVector ABasicAICenter::TaskToLocation(int GridX, int GridY) const
{
  float Gap = MapData->Execute_GetGap(MapData.GetObject());
  FVector Location = MapData->Execute_GetLocation(MapData.GetObject());

  Location.X += GridX * Gap + Gap / 2;
  Location.Y += GridY * Gap + Gap / 2;

  return Location;
}
