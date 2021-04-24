// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Runtime/Engine/Public/VisualLogger/VisualLogger.h>
#include "IntervalTower.generated.h"

// TODO move somewhere else

USTRUCT(BlueprintType)
struct REALTIMEMAPF_API FInterval
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere) float Start;
  UPROPERTY(EditAnywhere) float Finish;
};

/**
 * 
 */
class REALTIMEMAPF_API IntervalTower
{
  TArray<FInterval> Intervals;
  float TimeLimit = 100.0;

public:

#if WITH_EDITORONLY_DATA
  void LogInterval(FVector Location, const UWorld * InWorld, AActor *LogOwner);

  void DebugDrawInterval(FVector Location, const UWorld * InWorld);
#endif // WITH_EDITORONLY_DATA

	IntervalTower();
	~IntervalTower();
};
