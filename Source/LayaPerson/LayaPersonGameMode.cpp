// Copyright Epic Games, Inc. All Rights Reserved.

#include "LayaPersonGameMode.h"
#include "LayaPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALayaPersonGameMode::ALayaPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
