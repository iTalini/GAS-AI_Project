// Copyright Epic Games, Inc. All Rights Reserved.

#include "Mode/GASProjectGameMode.h"
#include "Character/GASProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGASProjectGameMode::AGASProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AGASProjectGameMode::ApplyHUDChanges()
{

}

EHUDState AGASProjectGameMode::GetHUDState()
{
	return EHUDState::MS_None;
}

void AGASProjectGameMode::SetHUDState(EHUDState NewHUDState)
{

}
