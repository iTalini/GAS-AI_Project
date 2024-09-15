// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/GAS_GABaseAbility.h"

UGAS_GABaseAbility::UGAS_GABaseAbility()
{
}

const FGameplayTagContainer* UGAS_GABaseAbility::GetCooldownTags() const
{
	FGameplayTagContainer* MutableTags = const_cast<FGameplayTagContainer*>(&TempCooldownTags);
	MutableTags->Reset(); // MutableTags writes to the TempCooldownTags on the CDO so clear it in case the ability cooldown tags change (moved to a different slot)
	const FGameplayTagContainer* ParentTags = Super::GetCooldownTags();
	if (ParentTags)
	{
		MutableTags->AppendTags(*ParentTags);
	}
	MutableTags->AppendTags(CooldownEffectTag.GetSingleTagContainer());
	return MutableTags;
}

void UGAS_GABaseAbility::ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	UGameplayEffect* CooldownGE = GetCooldownGameplayEffect();
	if (CooldownGE)
	{
		FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CooldownGE->GetClass(), GetAbilityLevel());
		SpecHandle.Data.Get()->DynamicGrantedTags.AppendTags(CooldownEffectTag.GetSingleTagContainer());
		SpecHandle.Data.Get()->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName(CooldownEffectTag.GetTagName())), CooldownDuration.GetValueAtLevel(GetAbilityLevel()));
		ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, SpecHandle);
	}
}

FScalableFloat UGAS_GABaseAbility::GetCooldownDuration() const
{
    return CooldownDuration;
}

TSubclassOf<UGameplayEffect> UGAS_GABaseAbility::GetCooldownClass() const
{
	return CooldownGameplayEffectClass;
}

FScalableFloat UGAS_GABaseAbility::GetCostValue() const
{
	return CostValue;
}

TSubclassOf<UGameplayEffect> UGAS_GABaseAbility::GetAbilityCostClass() const
{
	return CostGameplayEffectClass;
}
