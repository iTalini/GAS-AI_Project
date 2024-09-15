// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/GAS_AttributeSet.h"
#include "GameplayPrediction.h"
#include "GameplayEffectExtension.h"
#include "GameplayAbilitySet.h"
#include "Net/UnrealNetwork.h"
#include <Character/GASProjectCharacter.h>

UGAS_AttributeSet::UGAS_AttributeSet()
{
}

void UGAS_AttributeSet::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGAS_AttributeSet, Health);
	DOREPLIFETIME(UGAS_AttributeSet, MaxHealth);
	DOREPLIFETIME(UGAS_AttributeSet, Mana);
	DOREPLIFETIME(UGAS_AttributeSet, MaxMana);
}

void UGAS_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetMaxHealthAttribute())
	{
		AddJustAttributeForMaxChange(GetHealth(), GetMaxHealth(), NewValue, GetHealthAttribute());
	}
}

void UGAS_AttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTag = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();

	float DeltaValue{ 0.0f };

	if (Data.EvaluatedData.ModifierOp == EGameplayModOp::Additive)
	{
		DeltaValue = Data.EvaluatedData.Magnitude;
	}

	AGASProjectCharacter* TargetCharacter{nullptr};

	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		AActor* TargetActor{ nullptr };
		TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		TargetCharacter = Cast<AGASProjectCharacter>(TargetActor);
	}

	AActor* DamageCauser{ nullptr };

	if (Data.EffectSpec.GetEffectContext().IsValid())
	{
		DamageCauser = Data.EffectSpec.GetEffectContext().GetInstigator();
	}

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));

		if (TargetCharacter && DamageCauser)
		{
			TargetCharacter->HandleHealthChanged(DeltaValue, SourceTag, DamageCauser->GetActorLocation());
		}
	}
	else if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		if (AGASProjectCharacter* OwnerCharacter = Cast<AGASProjectCharacter>(DamageCauser))
		{
			OwnerCharacter->HandleManaChanged(DeltaValue, SourceTag);
		}
	}
}

void UGAS_AttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, Health, OldValue);
}

void UGAS_AttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, MaxHealth, OldValue);
}

void UGAS_AttributeSet::OnRep_Mana(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, Mana, OldValue);
}

void UGAS_AttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGAS_AttributeSet, MaxMana, OldValue);
}

void UGAS_AttributeSet::AddJustAttributeForMaxChange(const FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute,
	float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty) const
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();

	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (AbilityComp && !FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue))
	{
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		const float NewDelta =
			(CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue
			: NewMaxValue;

		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}
