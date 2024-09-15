// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/Core/GAS_Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_Data() {}

// Begin Cross Module References
GASPROJECT_API UEnum* Z_Construct_UEnum_GASProject_EBarType();
GASPROJECT_API UEnum* Z_Construct_UEnum_GASProject_EGAS_AbilityInputID();
GASPROJECT_API UEnum* Z_Construct_UEnum_GASProject_EGAS_AIState();
GASPROJECT_API UEnum* Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed();
GASPROJECT_API UEnum* Z_Construct_UEnum_GASProject_EHUDState();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Enum EGAS_AbilityInputID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGAS_AbilityInputID;
static UEnum* EGAS_AbilityInputID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGAS_AbilityInputID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGAS_AbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASProject_EGAS_AbilityInputID, (UObject*)Z_Construct_UPackage__Script_GASProject(), TEXT("EGAS_AbilityInputID"));
	}
	return Z_Registration_Info_UEnum_EGAS_AbilityInputID.OuterSingleton;
}
template<> GASPROJECT_API UEnum* StaticEnum<EGAS_AbilityInputID>()
{
	return EGAS_AbilityInputID_StaticEnum();
}
struct Z_Construct_UEnum_GASProject_EGAS_AbilityInputID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.Name", "EGAS_AbilityInputID::Cancel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Ability*/" },
#endif
		{ "Confirm.Name", "EGAS_AbilityInputID::Confirm" },
		{ "ModuleRelativePath", "Public/Core/GAS_Data.h" },
		{ "None.Name", "EGAS_AbilityInputID::None" },
		{ "Punch.Name", "EGAS_AbilityInputID::Punch" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGAS_AbilityInputID::None", (int64)EGAS_AbilityInputID::None },
		{ "EGAS_AbilityInputID::Confirm", (int64)EGAS_AbilityInputID::Confirm },
		{ "EGAS_AbilityInputID::Cancel", (int64)EGAS_AbilityInputID::Cancel },
		{ "EGAS_AbilityInputID::Punch", (int64)EGAS_AbilityInputID::Punch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASProject_EGAS_AbilityInputID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASProject,
	nullptr,
	"EGAS_AbilityInputID",
	"EGAS_AbilityInputID",
	Z_Construct_UEnum_GASProject_EGAS_AbilityInputID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASProject_EGAS_AbilityInputID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASProject_EGAS_AbilityInputID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASProject_EGAS_AbilityInputID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASProject_EGAS_AbilityInputID()
{
	if (!Z_Registration_Info_UEnum_EGAS_AbilityInputID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGAS_AbilityInputID.InnerSingleton, Z_Construct_UEnum_GASProject_EGAS_AbilityInputID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGAS_AbilityInputID.InnerSingleton;
}
// End Enum EGAS_AbilityInputID

// Begin Enum EBarType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBarType;
static UEnum* EBarType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBarType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBarType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASProject_EBarType, (UObject*)Z_Construct_UPackage__Script_GASProject(), TEXT("EBarType"));
	}
	return Z_Registration_Info_UEnum_EBarType.OuterSingleton;
}
template<> GASPROJECT_API UEnum* StaticEnum<EBarType>()
{
	return EBarType_StaticEnum();
}
struct Z_Construct_UEnum_GASProject_EBarType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Widget*/" },
#endif
		{ "Health.DisplayName", "Health" },
		{ "Health.Name", "EBarType::Health" },
		{ "Mana.DisplayName", "Mana" },
		{ "Mana.Name", "EBarType::Mana" },
		{ "ModuleRelativePath", "Public/Core/GAS_Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBarType::Health", (int64)EBarType::Health },
		{ "EBarType::Mana", (int64)EBarType::Mana },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASProject_EBarType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASProject,
	nullptr,
	"EBarType",
	"EBarType",
	Z_Construct_UEnum_GASProject_EBarType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASProject_EBarType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASProject_EBarType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASProject_EBarType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASProject_EBarType()
{
	if (!Z_Registration_Info_UEnum_EBarType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBarType.InnerSingleton, Z_Construct_UEnum_GASProject_EBarType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBarType.InnerSingleton;
}
// End Enum EBarType

// Begin Enum EHUDState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHUDState;
static UEnum* EHUDState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHUDState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHUDState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASProject_EHUDState, (UObject*)Z_Construct_UPackage__Script_GASProject(), TEXT("EHUDState"));
	}
	return Z_Registration_Info_UEnum_EHUDState.OuterSingleton;
}
template<> GASPROJECT_API UEnum* StaticEnum<EHUDState>()
{
	return EHUDState_StaticEnum();
}
struct Z_Construct_UEnum_GASProject_EHUDState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/GAS_Data.h" },
		{ "MS_InGame.DisplayName", "InGame" },
		{ "MS_InGame.Name", "EHUDState::MS_InGame" },
		{ "MS_Inventory.DisplayName", "Inventory" },
		{ "MS_Inventory.Name", "EHUDState::MS_Inventory" },
		{ "MS_Menu.DisplayName", "Menu" },
		{ "MS_Menu.Name", "EHUDState::MS_Menu" },
		{ "MS_None.DisplayName", "None" },
		{ "MS_None.Name", "EHUDState::MS_None" },
		{ "MS_Shop.DisplayName", "Shop" },
		{ "MS_Shop.Name", "EHUDState::MS_Shop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHUDState::MS_InGame", (int64)EHUDState::MS_InGame },
		{ "EHUDState::MS_Inventory", (int64)EHUDState::MS_Inventory },
		{ "EHUDState::MS_Shop", (int64)EHUDState::MS_Shop },
		{ "EHUDState::MS_Menu", (int64)EHUDState::MS_Menu },
		{ "EHUDState::MS_None", (int64)EHUDState::MS_None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASProject_EHUDState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASProject,
	nullptr,
	"EHUDState",
	"EHUDState",
	Z_Construct_UEnum_GASProject_EHUDState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASProject_EHUDState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASProject_EHUDState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASProject_EHUDState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASProject_EHUDState()
{
	if (!Z_Registration_Info_UEnum_EHUDState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHUDState.InnerSingleton, Z_Construct_UEnum_GASProject_EHUDState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHUDState.InnerSingleton;
}
// End Enum EHUDState

// Begin Enum EGAS_EnemyMovementSpeed
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGAS_EnemyMovementSpeed;
static UEnum* EGAS_EnemyMovementSpeed_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGAS_EnemyMovementSpeed.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGAS_EnemyMovementSpeed.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed, (UObject*)Z_Construct_UPackage__Script_GASProject(), TEXT("EGAS_EnemyMovementSpeed"));
	}
	return Z_Registration_Info_UEnum_EGAS_EnemyMovementSpeed.OuterSingleton;
}
template<> GASPROJECT_API UEnum* StaticEnum<EGAS_EnemyMovementSpeed>()
{
	return EGAS_EnemyMovementSpeed_StaticEnum();
}
struct Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*AI*/" },
#endif
		{ "Idle.Name", "EGAS_EnemyMovementSpeed::Idle" },
		{ "Jogging.Name", "EGAS_EnemyMovementSpeed::Jogging" },
		{ "ModuleRelativePath", "Public/Core/GAS_Data.h" },
		{ "Sprinting.Name", "EGAS_EnemyMovementSpeed::Sprinting" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI" },
#endif
		{ "Walking.Name", "EGAS_EnemyMovementSpeed::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGAS_EnemyMovementSpeed::Idle", (int64)EGAS_EnemyMovementSpeed::Idle },
		{ "EGAS_EnemyMovementSpeed::Walking", (int64)EGAS_EnemyMovementSpeed::Walking },
		{ "EGAS_EnemyMovementSpeed::Jogging", (int64)EGAS_EnemyMovementSpeed::Jogging },
		{ "EGAS_EnemyMovementSpeed::Sprinting", (int64)EGAS_EnemyMovementSpeed::Sprinting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASProject,
	nullptr,
	"EGAS_EnemyMovementSpeed",
	"EGAS_EnemyMovementSpeed",
	Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed()
{
	if (!Z_Registration_Info_UEnum_EGAS_EnemyMovementSpeed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGAS_EnemyMovementSpeed.InnerSingleton, Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGAS_EnemyMovementSpeed.InnerSingleton;
}
// End Enum EGAS_EnemyMovementSpeed

// Begin Enum EGAS_AIState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGAS_AIState;
static UEnum* EGAS_AIState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGAS_AIState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGAS_AIState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASProject_EGAS_AIState, (UObject*)Z_Construct_UPackage__Script_GASProject(), TEXT("EGAS_AIState"));
	}
	return Z_Registration_Info_UEnum_EGAS_AIState.OuterSingleton;
}
template<> GASPROJECT_API UEnum* StaticEnum<EGAS_AIState>()
{
	return EGAS_AIState_StaticEnum();
}
struct Z_Construct_UEnum_GASProject_EGAS_AIState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attacking.DisplayName", "Attacking" },
		{ "Attacking.Name", "EGAS_AIState::Attacking" },
		{ "BlueprintType", "true" },
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "EGAS_AIState::Dead" },
		{ "Frozen.DisplayName", "Frozen" },
		{ "Frozen.Name", "EGAS_AIState::Frozen" },
		{ "Investigating.DisplayName", "Investigating" },
		{ "Investigating.Name", "EGAS_AIState::Investigating" },
		{ "ModuleRelativePath", "Public/Core/GAS_Data.h" },
		{ "Passive.DisplayName", "Passive" },
		{ "Passive.Name", "EGAS_AIState::Passive" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGAS_AIState::Passive", (int64)EGAS_AIState::Passive },
		{ "EGAS_AIState::Attacking", (int64)EGAS_AIState::Attacking },
		{ "EGAS_AIState::Frozen", (int64)EGAS_AIState::Frozen },
		{ "EGAS_AIState::Investigating", (int64)EGAS_AIState::Investigating },
		{ "EGAS_AIState::Dead", (int64)EGAS_AIState::Dead },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASProject_EGAS_AIState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASProject,
	nullptr,
	"EGAS_AIState",
	"EGAS_AIState",
	Z_Construct_UEnum_GASProject_EGAS_AIState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASProject_EGAS_AIState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASProject_EGAS_AIState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASProject_EGAS_AIState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASProject_EGAS_AIState()
{
	if (!Z_Registration_Info_UEnum_EGAS_AIState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGAS_AIState.InnerSingleton, Z_Construct_UEnum_GASProject_EGAS_AIState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGAS_AIState.InnerSingleton;
}
// End Enum EGAS_AIState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Core_GAS_Data_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGAS_AbilityInputID_StaticEnum, TEXT("EGAS_AbilityInputID"), &Z_Registration_Info_UEnum_EGAS_AbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2774041434U) },
		{ EBarType_StaticEnum, TEXT("EBarType"), &Z_Registration_Info_UEnum_EBarType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 267712009U) },
		{ EHUDState_StaticEnum, TEXT("EHUDState"), &Z_Registration_Info_UEnum_EHUDState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2937070439U) },
		{ EGAS_EnemyMovementSpeed_StaticEnum, TEXT("EGAS_EnemyMovementSpeed"), &Z_Registration_Info_UEnum_EGAS_EnemyMovementSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2146356130U) },
		{ EGAS_AIState_StaticEnum, TEXT("EGAS_AIState"), &Z_Registration_Info_UEnum_EGAS_AIState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1855668893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Core_GAS_Data_h_3675480243(TEXT("/Script/GASProject"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Core_GAS_Data_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Core_GAS_Data_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
