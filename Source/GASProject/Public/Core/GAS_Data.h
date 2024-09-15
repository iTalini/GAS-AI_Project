#pragma once

#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "GAS_Data.generated.h"


/*Ability*/
UENUM(BlueprintType)
enum class EGAS_AbilityInputID : uint8
{
	None,
	Confirm,
	Cancel,
	Punch
};


/*Widget*/
UENUM(BlueprintType)
enum class EBarType : uint8 {
	Health = 0 UMETA(DisplayName = "Health"),
	Mana = 1  UMETA(DisplayName = "Mana")
};

UENUM(BlueprintType)
enum class EHUDState : uint8 {
	MS_InGame = 0 UMETA(DisplayName = "InGame"),
	MS_Inventory = 1  UMETA(DisplayName = "Inventory"),
	MS_Shop = 2  UMETA(DisplayName = "Shop"),
	MS_Menu = 3 UMETA(DisplayName = "Menu"),
	MS_None = 4 UMETA(DisplayName = "None")
};


/*AI*/
UENUM(BlueprintType)
enum class EGAS_EnemyMovementSpeed : uint8
{
	Idle,
	Walking,
	Jogging,
	Sprinting
};

UENUM(BlueprintType)
enum class EGAS_AIState : uint8
{
	Passive = 0 UMETA(DisplayName = "Passive"),
	Attacking = 1 UMETA(DisplayName = "Attacking"),
	Frozen = 2 UMETA(DisplayName = "Frozen"),
	Investigating = 3 UMETA(DisplayName = "Investigating"),
	Dead = 4 UMETA(DisplayName = "Dead")
};

