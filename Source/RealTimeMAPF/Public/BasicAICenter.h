// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapData.h"
#include "Grid.h"
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
  AGrid* Solver;

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

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
  // Sets default values for this actor's properties
  ABasicAICenter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

  UFUNCTION()
  void AgentFinished();

  UFUNCTION(CallInEditor)
  void SectionPlan();

  UFUNCTION(BlueprintCallable)
  FVector TaskToLocation(int GridX, int GridY) const;

  UFUNCTION(BlueprintCallable, CallInEditor)
  void BeginPlan();

#if WITH_EDITORONLY_DATA
  virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif
};
