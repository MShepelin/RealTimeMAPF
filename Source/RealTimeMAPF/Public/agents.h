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
  UPROPERTY() int32 GoalT = -1;

  UPROPERTY() uint8 IsValid : 1;

  FAgentTask() : IsValid(0) {};

  FAgentTask(int StartJ, int StartI, TTYPE InStartT, int GoalJ, int GoalI, bool InIsValid) :
    StartX(StartJ),
    StartY(StartI),
    StartT(InStartT),
    GoalX(GoalJ),
    GoalY(GoalI),
    GoalT(-1),
    IsValid(InIsValid) {};
};
