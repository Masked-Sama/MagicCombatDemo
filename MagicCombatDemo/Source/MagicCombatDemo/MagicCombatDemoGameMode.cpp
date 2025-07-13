// Copyright Epic Games, Inc. All Rights Reserved.

#include "MagicCombatDemoGameMode.h"
#include "MagicCombatDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMagicCombatDemoGameMode::AMagicCombatDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
