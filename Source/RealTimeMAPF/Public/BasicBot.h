// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicBot.generated.h"

class ABasicAICenter;

UCLASS()
class REALTIMEMAPF_API ABasicBot : public AActor
{
	GENERATED_BODY()
	
protected:
  UPROPERTY() float CurTime;
  UPROPERTY(EditAnywhere) float MovementTime;

  UPROPERTY() FVector StartLocation;
  UPROPERTY() FVector EndLocation;

  UPROPERTY() bool IsMoving;

  UPROPERTY(EditAnywhere)
  FRotator AdditionalRotation;

  UPROPERTY(EditAnywhere)
  ABasicAICenter* AICenter;

public:	
	ABasicBot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

  UFUNCTION(BlueprintNativeEvent)
  void IdleAnimation();
  virtual void IdleAnimation_Implementation();

  UFUNCTION(BlueprintNativeEvent)
  void MovementAnimation();
  virtual void MovementAnimation_Implementation();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

  UFUNCTION(BlueprintCallable, CallInEditor)
  void MakeMove(FVector Start, FVector Finish);

  UFUNCTION(BlueprintCallable)
  void SetAICenter(ABasicAICenter* Center);

  void LogTarget();
};
