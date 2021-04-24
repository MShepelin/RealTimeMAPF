// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MapData.generated.h"

UINTERFACE(BlueprintType)
class UMapData : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface used to get information about cells on a grid
 */
class REALTIMEMAPF_API IMapData
{
	GENERATED_BODY()

public:

  UFUNCTION(BlueprintCallable, BlueprintNativeEvent, CallInEditor)
  int32 GetWidth() const;
  virtual int32 GetWidth_Implementation() const;

  UFUNCTION(BlueprintCallable, BlueprintNativeEvent, CallInEditor)
  int32 GetHeight() const;
  virtual int32 GetHeight_Implementation() const;

  UFUNCTION(BlueprintCallable, BlueprintNativeEvent, CallInEditor)
  bool IsCellTraversable(int32 Y, int32 X) const;
  virtual bool IsCellTraversable_Implementation(int32 Y, int32 X) const;

  UFUNCTION(BlueprintCallable, BlueprintNativeEvent, CallInEditor)
  bool IsCellOnGrid(int32 Y, int32 X) const;
  virtual bool IsCellOnGrid_Implementation(int32 Y, int32 X) const;

  UFUNCTION(BlueprintCallable, BlueprintNativeEvent, CallInEditor)
  float GetGap() const;
  virtual float GetGap_Implementation() const;

  UFUNCTION(BlueprintCallable, BlueprintNativeEvent, CallInEditor)
  float GetTimeGap() const;
  virtual float GetTimeGap_Implementation() const;

  UFUNCTION(BlueprintCallable, BlueprintNativeEvent, CallInEditor)
  FVector GetLocation() const;
  virtual FVector GetLocation_Implementation() const;
};
