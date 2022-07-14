// Copyright Epic Games, Inc. All Rights Reserved.

#include "SuperNovaGameMode.h"
#include "SuperNovaHUD.h"
#include "SuperNovaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASuperNovaGameMode::ASuperNovaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASuperNovaHUD::StaticClass();
}
