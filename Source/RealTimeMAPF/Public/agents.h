#pragma once

#include "CoreMinimal.h"
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
};
