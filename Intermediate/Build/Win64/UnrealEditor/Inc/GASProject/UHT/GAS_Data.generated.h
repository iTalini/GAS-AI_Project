// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/GAS_Data.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASPROJECT_GAS_Data_generated_h
#error "GAS_Data.generated.h already included, missing '#pragma once' in GAS_Data.h"
#endif
#define GASPROJECT_GAS_Data_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Core_GAS_Data_h


#define FOREACH_ENUM_EGAS_ABILITYINPUTID(op) \
	op(EGAS_AbilityInputID::None) \
	op(EGAS_AbilityInputID::Confirm) \
	op(EGAS_AbilityInputID::Cancel) \
	op(EGAS_AbilityInputID::Punch) 

enum class EGAS_AbilityInputID : uint8;
template<> struct TIsUEnumClass<EGAS_AbilityInputID> { enum { Value = true }; };
template<> GASPROJECT_API UEnum* StaticEnum<EGAS_AbilityInputID>();

#define FOREACH_ENUM_EBARTYPE(op) \
	op(EBarType::Health) \
	op(EBarType::Mana) 

enum class EBarType : uint8;
template<> struct TIsUEnumClass<EBarType> { enum { Value = true }; };
template<> GASPROJECT_API UEnum* StaticEnum<EBarType>();

#define FOREACH_ENUM_EHUDSTATE(op) \
	op(EHUDState::MS_InGame) \
	op(EHUDState::MS_Inventory) \
	op(EHUDState::MS_Shop) \
	op(EHUDState::MS_Menu) \
	op(EHUDState::MS_None) 

enum class EHUDState : uint8;
template<> struct TIsUEnumClass<EHUDState> { enum { Value = true }; };
template<> GASPROJECT_API UEnum* StaticEnum<EHUDState>();

#define FOREACH_ENUM_EGAS_ENEMYMOVEMENTSPEED(op) \
	op(EGAS_EnemyMovementSpeed::Idle) \
	op(EGAS_EnemyMovementSpeed::Walking) \
	op(EGAS_EnemyMovementSpeed::Jogging) \
	op(EGAS_EnemyMovementSpeed::Sprinting) 

enum class EGAS_EnemyMovementSpeed : uint8;
template<> struct TIsUEnumClass<EGAS_EnemyMovementSpeed> { enum { Value = true }; };
template<> GASPROJECT_API UEnum* StaticEnum<EGAS_EnemyMovementSpeed>();

#define FOREACH_ENUM_EGAS_AISTATE(op) \
	op(EGAS_AIState::Passive) \
	op(EGAS_AIState::Attacking) \
	op(EGAS_AIState::Frozen) \
	op(EGAS_AIState::Investigating) \
	op(EGAS_AIState::Dead) 

enum class EGAS_AIState : uint8;
template<> struct TIsUEnumClass<EGAS_AIState> { enum { Value = true }; };
template<> GASPROJECT_API UEnum* StaticEnum<EGAS_AIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
