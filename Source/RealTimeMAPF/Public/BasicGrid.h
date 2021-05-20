// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapData.h"
#include "BasicGrid.generated.h"

USTRUCT()
struct FFakeArray
{
  GENERATED_BODY()

  UPROPERTY() TArray<uint8> Array;
};

UCLASS()
class REALTIMEMAPF_API ABasicGrid : public AActor, public IMapData
{
	GENERATED_BODY()

protected:
  UPROPERTY(EditAnywhere, meta = (ClampMin = "1")) 
  int32 Width;

  UPROPERTY(EditAnywhere, meta = (ClampMin = "1")) 
  int32 Height;

  UPROPERTY(EditAnywhere, meta = (ClampMin = "0"))
  float TimeGap;

  UPROPERTY(EditAnywhere, meta = (ClampMin = "0"))
  float SpaceGap;

  UPROPERTY() TArray<FFakeArray> Grid;
  mutable FCriticalSection GridSync;

public:
	// Sets default values for this actor's properties
	ABasicGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

  virtual int32 GetWidth_Implementation() const override;

  virtual int32 GetHeight_Implementation() const override;

  virtual bool IsCellTraversable_Implementation(int32 Y, int32 X) const override;

  virtual bool IsCellOnGrid_Implementation(int32 Y, int32 X) const override;

  virtual float GetGap_Implementation() const override;

  virtual float GetTimeGap_Implementation() const override;

  virtual FVector GetLocation_Implementation() const override;

  UFUNCTION(BlueprintCallable, CallInEditor)
  void SetWidth(int32 InWidth);

  UFUNCTION(BlueprintCallable, CallInEditor)
  void SetHeight(int32 InHeight);

  UFUNCTION(BlueprintCallable, CallInEditor)
  void Inverse(int32 Y, int32 X);

#if WITH_EDITOR
  UFUNCTION(BlueprintCallable, CallInEditor, meta = (DevelopmentOnly))
  void DrawDebugGrid(FColor Border, FColor Nontraversable) const;

  void PostEditChangeProperty(struct FPropertyChangedEvent& Event) override;
#endif // WITH_EDITOR
};
