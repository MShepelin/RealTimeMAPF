#pragma once

#include "gl_const.h"
#include "Config.generated.h"

USTRUCT(BlueprintType)
struct FConfig
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment") uint8 AllowDiagonal : 1;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment") uint8 CutCorners : 1;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment") uint8 AllowSqueeze : 1;

  // true for g-max
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Algorithm Options") uint8 BreakingTies : 1;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Algorithm Options") uint8 MetricType;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Algorithm Options") float HeuristicWeight;
};
