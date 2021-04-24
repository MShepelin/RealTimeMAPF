// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicAICenter.h"
#include "BasicBot.h"

// Sets default values
ABasicAICenter::ABasicAICenter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
  SectionStart = 0;
}

// Called when the game starts or when spawned
void ABasicAICenter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicAICenter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasicAICenter::AgentFinished()
{
  FinishedAgents++;

  //UE_LOG(LogTemp, Warning, TEXT("HEY, FINISHED, %d / %d"), FinishedAgents, Tasks.Num());

  if (FinishedAgents == Tasks.Num())
  {
    //UE_LOG(LogTemp, Warning, TEXT("REPLAN"));
    FinishedAgents = 0;
    SectionPlan();
  }
}
  
#if WITH_EDITORONLY_DATA
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
#endif // WITH_EDITORONLY_DATA

void ABasicAICenter::SectionPlan()
{
  if (!Solver) return; // TODO silent error

  //Solver->MAPFPlan();

  for (int AgentIndex = 0; AgentIndex < Tasks.Num(); ++AgentIndex)
  {
    FAgentTask Move = Solver->MAPFGetNextMove(AgentIDs[AgentIndex]);

    FVector Start = TaskToLocation(Move.StartX, Move.StartY);
    FVector Finish = TaskToLocation(Move.GoalX, Move.GoalY);

    Bots[AgentIndex]->MakeMove(Start, Finish);
  }

  Solver->MAPFMoveTime(1);
  Solver->MAPFPlan();
}

void ABasicAICenter::BeginPlan()
{
  FinishedAgents = 0;
  SectionStart = 0;

  for (ABasicBot* OldBot : Bots)
  {
    if (IsValid(OldBot))
      OldBot->Destroy();
  }

  Bots.Empty();
  AgentIDs.Empty();

  for (FAgentTask Task : Tasks)
  {
    int AgentID = Solver->MAPFAddAgent(Task.StartX, Task.StartY, Task.GoalX, Task.GoalY);
    AgentIDs.Add(AgentID);

    FTransform BotTransform;
    BotTransform.SetLocation(TaskToLocation(Task.StartX, Task.StartY));

    ABasicBot* NewBot = GetWorld()->SpawnActor<ABasicBot>(BotClass, BotTransform);
    Bots.Add(NewBot);

    NewBot->SetAICenter(this);
  }

  // PrePlan
  Solver->MAPFSetSectionSize(Tasks.Num());
  Solver->MAPFPlan();

  Solver->MAPFSetSectionSize(SectionSize);
  SectionPlan();
}

FVector ABasicAICenter::TaskToLocation(int GridX, int GridY) const
{
  float Gap = MapData->Execute_GetGap(MapData.GetObject());
  FVector Location = MapData->Execute_GetLocation(MapData.GetObject());

  Location.X += GridX * Gap + Gap / 2;
  Location.Y += GridY * Gap + Gap / 2;

  return Location;
}
