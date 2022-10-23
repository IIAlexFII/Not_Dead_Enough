// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerPrototypeGameMode.h"
#include "MultiplayerPrototypeHUD.h"
#include "MultiplayerPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerPrototypeGameMode::AMultiplayerPrototypeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMultiplayerPrototypeHUD::StaticClass();
}
