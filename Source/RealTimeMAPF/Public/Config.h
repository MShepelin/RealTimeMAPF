#pragma once

#include "gl_const.h"
#include "Config.generated.h"

UENUM(BlueprintType)
enum class EMetricType : uint8
{
  Diagonal = 0,
  Manhatten = CN_SP_MT_MANH,
  Euclidean = CN_SP_MT_EUCL,
  Chebyshev = CN_SP_MT_CHEB
};

USTRUCT(BlueprintType)
struct FConfig
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment") uint8 AllowDiagonal : 1;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment") uint8 CutCorners : 1;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment") uint8 AllowSqueeze : 1;

  // true for g-max
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Algorithm Options") uint8 BreakingTies : 1;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Algorithm Options") EMetricType MetricType;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Algorithm Options", meta=(ClampMin="0")) float HeuristicWeight;

  FConfig()
  {
    BreakingTies = true;
    AllowDiagonal = true;
    MetricType = EMetricType::Diagonal;
    HeuristicWeight = 1.f;
  }
};
