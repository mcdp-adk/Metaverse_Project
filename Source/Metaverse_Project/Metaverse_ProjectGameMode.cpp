// Copyright Epic Games, Inc. All Rights Reserved.

#include "Metaverse_ProjectGameMode.h"
#include "Metaverse_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMetaverse_ProjectGameMode::AMetaverse_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
