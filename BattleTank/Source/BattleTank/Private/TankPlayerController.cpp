// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "BattleTank.h"
#include "Tank.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	ATank* controlledTank = GetControlledTank();
	if (controlledTank) 
	{
		FString tankName = controlledTank->GetName();
		UE_LOG(LogTemp, Warning, TEXT("TankPlayerController is controlling %s"), *(tankName));

	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("TankPlayerController couldn't find controlled tank"));
	}

	
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}