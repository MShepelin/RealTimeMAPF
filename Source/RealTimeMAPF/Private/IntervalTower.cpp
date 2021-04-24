// Fill out your copyright notice in the Description page of Project Settings.

#include "IntervalTower.h"
#include "DrawDebugHelpers.h"

IntervalTower::IntervalTower()
{
}

IntervalTower::~IntervalTower()
{
}

#if WITH_EDITORONLY_DATA
void IntervalTower::DebugDrawInterval(FVector Location, const UWorld * InWorld)
{
  FVector LineFinish = Location;
  LineFinish.Z += TimeLimit;
  DrawDebugLine(InWorld, Location, LineFinish, FColor::Green, false, 5, 0, 4);
}

void IntervalTower::LogInterval(FVector Location, const UWorld * InWorld, AActor *LogOwner)
{
  #if ENABLE_VISUAL_LOG
  {
    FVisualLogger& Vlog = FVisualLogger::Get();
    if (!Vlog.IsRecording()) return;

    float LastTime = 0.0;
    FVector LastFinish = Location;

    if (Intervals.Num())
    {
      FVector FirstIntervalStart = Location;
      FirstIntervalStart.Z += Intervals[0].Start;
      UE_VLOG_SEGMENT(LogOwner, LogMAPF, Log, Location, FirstIntervalStart, FColor::Red, TEXT(""));
    }

    for (int IntervalIndex = 0; IntervalIndex < Intervals.Num(); ++IntervalIndex)
    {
      FVector IntervalStart = Location;
      IntervalStart.Z += Intervals[IntervalIndex].Start;
      LastFinish.Z = Location.Z + Intervals[IntervalIndex].Finish;

      UE_VLOG_SEGMENT(LogOwner, LogMAPF, Log, IntervalStart, LastFinish, FColor::Green, TEXT(""));

      LastTime = Intervals[IntervalIndex].Finish;
    }

    if (LastTime < TimeLimit)
    {
      FVector Finish = Location;
      Finish.Z += TimeLimit;

      UE_VLOG_SEGMENT(LogOwner, LogMAPF, Log, LastFinish, Finish, FColor::Red, TEXT(""));
    }
  }
  #endif // ENABLE_VISUAL_LOG
}
#endif // WITH_EDITORONLY_DATA