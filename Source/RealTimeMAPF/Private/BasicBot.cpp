// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicBot.h"
#include "BasicAICenter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ABasicBot::ABasicBot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

  MovementTime = 1.;
  CurTime = 0.;
}

// Called when the game starts or when spawned
void ABasicBot::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABasicBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

  //if (!IsMoving) return; // TODO fix this

  CurTime += DeltaTime;
  if (CurTime >= MovementTime)
  {
    CurTime = MovementTime;

    if (AICenter) AICenter->AgentFinished();

    
    //IsMoving = false;
  }

  SetActorLocation(FMath::Lerp(
    StartLocation, 
    EndLocation, 
    CurTime / MovementTime), false);

  if (CurTime >= MovementTime) CurTime = 0;
}

void ABasicBot::SetAICenter(ABasicAICenter* Center)
{
  AICenter = Center;
}

void ABasicBot::MakeMove(FVector Start, FVector Finish)
{
  SetActorLocation(Start, false);

  FVector DeltaVector = Finish - Start;

  SetActorRotation(UKismetMathLibrary::MakeRotFromX(AdditionalRotation.RotateVector(DeltaVector)));

  CurTime = 0.;
  StartLocation = Start;
  EndLocation = Finish;
  //IsMoving = true;

  if (!Start.Equals(Finish, 0.5))
  {
    MovementAnimation();
  }
  else
  {
    IdleAnimation();
  }
}

void ABasicBot::IdleAnimation_Implementation()
{

}

void ABasicBot::MovementAnimation_Implementation()
{
  //LogTarget();
}

void ABasicBot::LogTarget()
{
  UE_LOG(LogTemp, Warning, TEXT("%s: Start: %f %f -> Finish: %f %f"), *UKismetSystemLibrary::GetObjectName(this), StartLocation.X, StartLocation.Y, EndLocation.X, EndLocation.Y);
}
