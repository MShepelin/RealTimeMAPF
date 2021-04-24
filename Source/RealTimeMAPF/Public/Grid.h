// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapData.h"
#include "whca.h"
#include "Grid.generated.h"

UCLASS()
class REALTIMEMAPF_API AGrid : public AActor
{
  GENERATED_BODY()
	
protected:
  WHCA Solver;
  UPROPERTY(EditAnywhere) FConfig Configuration;

  UPROPERTY(EditAnywhere, meta=(AllowedClasses=MapData)) AActor* MapDataPointer;
  UPROPERTY() TScriptInterface<IMapData> MapData;

public:	
	// Sets default values for this actor's properties
	AGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

  UFUNCTION(BlueprintCallable, CallInEditor)
  void SetMapData(UObject* MapDataImplementer);

#if WITH_EDITORONLY_DATA

  UFUNCTION(BlueprintCallable, CallInEditor, meta=(DevelopmentOnly))
  void DrawDebugGrid();

  virtual void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;

#endif // WITH_EDITOR

  // ----------------- //
  // MAPF solver usage //
  // ----------------- //

  UFUNCTION(BlueprintCallable, CallInEditor)
  int MAPFAddAgent(int XStart, int YStart, int XGoal, int YGoal);

  UFUNCTION(BlueprintCallable, CallInEditor)
  void MAPFPlan();

  UFUNCTION(BlueprintCallable, CallInEditor)
  void MAPFMoveTime(int Time);

  UFUNCTION(BlueprintCallable, CallInEditor)
  void MAPFSetSectionSize(int SectionSize);

  UFUNCTION(BlueprintCallable, CallInEditor)
  FAgentTask MAPFGetNextMove(int agent_ID) const;

  UFUNCTION(BlueprintCallable, CallInEditor)
  TArray<FAgentTask> GetAllTasks() const;
};
