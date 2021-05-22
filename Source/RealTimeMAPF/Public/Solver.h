// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapData.h"
#include "whca.h"
#include "HAL/Runnable.h"
#include "Async/AsyncWork.h"
#include "Misc/ScopeTryLock.h"
#include "Misc/ScopeLock.h"
#include "agents.h"
#include <memory>
#include "Solver.generated.h"


DECLARE_DYNAMIC_DELEGATE(FOnPlanReady);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAgentReady, int, AgentID); // AgentID (==-1 if unsuccessful)

class PlanAsyncTask
{
  friend class FAsyncTask<PlanAsyncTask>;

  WHCA* MAPFSolver;
  AActor* LogOwner;
  FCriticalSection* SolverSync;

  PlanAsyncTask(WHCA* InMAPFSolver, FCriticalSection* InSolverSync, AActor* InLogOwner)
    : MAPFSolver(InMAPFSolver),
    LogOwner(InLogOwner),
    SolverSync(InSolverSync) {}

  void DoWork()
  {
    FScopeLock SolverLock(SolverSync);

    MAPFSolver->Plan(LogOwner);
  }

  bool CanAbandon()
  {
    return true;
  }

  void Abandon()
  {
    MAPFSolver->Abandon();
  }

  FORCEINLINE TStatId GetStatId() const
  {
    RETURN_QUICK_DECLARE_CYCLE_STAT(PlanAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
  }
};

class AddAgentAsyncTask
{
  friend class FAutoDeleteAsyncTask<AddAgentAsyncTask>;

  WHCA* MAPFSolver;
  FAgentTask Task;
  FCriticalSection* SolverSync;
  FOnAgentReady AgentReady;

  AddAgentAsyncTask(WHCA* InMAPFSolver, FCriticalSection* InSolverSync, FAgentTask InAgentTask, FOnAgentReady InAgentReady)
    : MAPFSolver(InMAPFSolver),
    Task(InAgentTask),
    SolverSync(InSolverSync),
    AgentReady(InAgentReady) {}

  void DoWork();

  bool CanAbandon()
  {
    return true;
  }

  void Abandon()
  {
    MAPFSolver->Abandon();
  }

  FORCEINLINE TStatId GetStatId() const
  {
    RETURN_QUICK_DECLARE_CYCLE_STAT(PlanAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
  }
};

UCLASS()
class REALTIMEMAPF_API ASolver : public AActor
{
  GENERATED_BODY()
	
protected:
  WHCA MAPFSolver;
  UPROPERTY(EditAnywhere, Category = "Solver") FConfig Configuration;

  UPROPERTY(EditAnywhere, Category = "Solver", meta = (ClampMin = "0.0", ClampMax = "0.425")) float ConstructRadius = 0.425;
  UPROPERTY(EditAnywhere, Category = "Solver", meta = (ClampMin = "1")) int ConstructDepth = 1;

  UPROPERTY(EditAnywhere, Category = "Solver", meta=(AllowedClasses=MapData)) AActor* MapDataPointer;
  UPROPERTY() TScriptInterface<IMapData> MapData;

  mutable FCriticalSection SolverSync;
  std::unique_ptr<FAsyncTask<PlanAsyncTask>> AsyncPlanner;
  FOnPlanReady OnPlanReady;
  FOnPlanReady OnPlanFail;

  // Hold correct tasks to change planner options
  int MoveTimeTask;
  TQueue<int> SectionSizeChangeTasks;
  TQueue<float> DepthChangeTasks;
  TQueue<int> RemoveAgentTasks;

public:	
	// Sets default values for this actor's properties
  ASolver();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

  virtual void BeginDestroy() override;

  virtual void OnConstruction(const FTransform & Transform) override;

  UFUNCTION(BlueprintCallable) 
  bool IsCorrectSectionSize(int SectionSize) const;

  UFUNCTION() bool SetMapData(UObject* MapDataImplementer);

  UFUNCTION(BlueprintCallable)
  void AddAgent(FAgentTask AgentTask, FOnAgentReady OnPlanReadyDelegate);

  UFUNCTION(BlueprintCallable)
  FAgentTask GetTask(int AgentID) const { return MAPFSolver.GetTask(AgentID); }

  UFUNCTION(BlueprintCallable)
  void RemoveAgent(int AgentID);

  UFUNCTION(BlueprintCallable)
  bool Plan(FOnPlanReady OnPlanReadyDelegate, FOnPlanReady OnPlanFailDelegate);

  UFUNCTION(BlueprintCallable)
  void MoveTime(int Time);

  UFUNCTION(BlueprintCallable)
  void SetSectionSize(int SectionSize);

  UFUNCTION(BlueprintCallable)
  void SetDepth(int NewDepth);

  UFUNCTION(BlueprintCallable)
  FAgentTask GetNextMove(int AgentID) const;

  UFUNCTION(BlueprintCallable)
  TArray<FAgentTask> GetAllTasks() const;

#if WITH_EDITOR
  virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif // WITH_EDITOR
};
