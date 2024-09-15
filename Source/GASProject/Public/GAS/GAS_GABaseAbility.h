// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Core/GAS_Data.h"
#include "GAS_GABaseAbility.generated.h"



UCLASS()
class GASPROJECT_API UGAS_GABaseAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UGAS_GABaseAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Abilities")
	EGAS_AbilityInputID AbilityInputID{ EGAS_AbilityInputID::None };

/*Cooldown*/
public:
	/** Returns all tags that can put this ability into cooldown */
	virtual const FGameplayTagContainer* GetCooldownTags() const override;

	/** Applies CooldownGameplayEffect to the target */
	virtual void ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;

	UFUNCTION(BlueprintPure)
	virtual FScalableFloat GetCooldownDuration() const;

	UFUNCTION(BlueprintPure)
	virtual TSubclassOf<UGameplayEffect> GetCooldownClass() const;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooldown")
	FScalableFloat CooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cooldown")
	FGameplayTag CooldownEffectTag;

	// Temp container that we will return the pointer to in GetCooldownTags().
	// This will be a union of our CooldownTags and the Cooldown GE's cooldown tags.
	UPROPERTY(Transient)
	FGameplayTagContainer TempCooldownTags;

	/*Ability Cost*/
public:
	UFUNCTION(BlueprintPure)
	virtual FScalableFloat GetCostValue() const;

	UFUNCTION(BlueprintPure)
	virtual TSubclassOf<UGameplayEffect> GetAbilityCostClass() const;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Cost")
	FScalableFloat CostValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Cost")
	FGameplayTag AbilityCostEffectTag;
};
