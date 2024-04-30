// Copyright Epic Games, Inc. All Rights Reserved.

#include "PartielMORTGameMode.h"
#include "PartielMORTCharacter.h"
#include "UObject/ConstructorHelpers.h"

APartielMORTGameMode::APartielMORTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
