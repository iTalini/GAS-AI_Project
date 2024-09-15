// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Core/GAS_Data.h"
#include "GASProjectGameMode.generated.h"

UCLASS(minimalapi)
class AGASProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGASProjectGameMode();

	/*Check HUDState and then calls ApplyHUD accordingly to apply whatever HUDState we want*/
	void ApplyHUDChanges();

	EHUDState GetHUDState();

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void SetHUDState(EHUDState NewHUDState);
};



