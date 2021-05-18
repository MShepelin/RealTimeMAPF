// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapData.h"
#include "Solver.h"
#include "BasicAICenter.generated.h"

class ABasicBot;

UCLASS()
class REALTIMEMAPF_API ABasicAICenter : public AActor
{
	GENERATED_BODY()
	
protected:
  UPROPERTY(EditAnywhere, meta = (AllowedClasses = MapData)) AActor* MapDataPointer;
  UPROPERTY() TScriptInterface<IMapData> MapData;

  UPROPERTY(EditAnywhere)
  TSubclassOf<ABasicBot> BotClass;

  UPROPERTY(EditAnywhere) 
  ASolver* Solver;

  UPROPERTY(EditAnywhere, meta=(ClampMin="1"))
  int SectionSize;

  UPROPERTY() int FinishedAgents;
  UPROPERTY() int SectionStart;

  UPROPERTY(EditAnywhere)
  TArray<FAgentTask> Tasks;

  UPROPERTY()
  TArray<ABasicBot*> Bots;

  UPROPERTY()
  TArray<int> AgentIDs;

  UPROPERTY()
  uint8 AgentFinishedMovement : 1;

  UPROPERTY()
  uint8 SectionPlanFound : 1;

	// Called when the game starts or when spawned
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

  UFUNCTION()
  void ReadyToMoveAgents();

  UFUNCTION()
  void PreplanReady();

  UFUNCTION()
  void SectionReady();

public:	
  // Sets default values for this actor's properties
  ABasicAICenter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

  UFUNCTION()
  void AgentFinished();

  UFUNCTION(BlueprintCallable)
  FVector TaskToLocation(int GridX, int GridY) const;

  UFUNCTION(BlueprintCallable, CallInEditor)
  void BeginPlan();

#if WITH_EDITOR
  virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif
};
