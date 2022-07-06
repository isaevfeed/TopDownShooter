// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownShooterGameMode.h"
#include "TopDownShooterPlayerController.h"
#include "TopDownShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopDownShooterGameMode::ATopDownShooterGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDownShooterPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}