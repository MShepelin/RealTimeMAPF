#pragma once

#include "CoreMinimal.h"
#include "gl_const.h"
#include "agents.generated.h"

template<typename CellType>
struct AgentTask
{
    CellType start;
    CellType goal;
};

USTRUCT(BlueprintType)
struct FAgentTask
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartX;
  UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartY;
  UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GoalX;
  UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GoalY;
  UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GoalT;

  UPROPERTY() uint8 IsValid : 1;

  FAgentTask() : IsValid(0) {};

  FAgentTask(int StartJ, int StartI, TTYPE InitStartT, int GoalJ, int GoalI, TTYPE InitGoalT, bool InitIsValid) :
    StartX(StartJ),
    StartY(StartI),
    StartT(InitStartT),
    GoalX(GoalJ),
    GoalY(GoalI),
    GoalT(InitGoalT),
    IsValid(InitIsValid) {};
};
