// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_jobGameMode.h"
#include "UE5_jobCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_jobGameMode::AUE5_jobGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
