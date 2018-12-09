// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "BattleTank_04.h"

void ATankPlayerController::BeginPlay()
{

	Super::BeginPlay();

	auto ControlledTank = GetControllerdTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayController not possesing a tank!"));

	}

	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possesing %s"), *(ControlledTank->GetName()));

	}
}

ATank* ATankPlayerController::GetControllerdTank() const
{
	return Cast<ATank>(GetPawn());
	}
