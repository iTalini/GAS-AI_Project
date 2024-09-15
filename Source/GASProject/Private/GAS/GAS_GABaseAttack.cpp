// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/GAS_GABaseAttack.h"
#include "GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "Abilities/Async/AbilityAsync_WaitGameplayEvent.h"
#include "Animation/AnimMontage.h"
#include "Character/GASProjectCharacter.h"


UGAS_GABaseAttack::UGAS_GABaseAttack()
{
	ForceStrength	= 0.0f;
	PushStrength	= 0.0f;
	Damage			= 20.0f;
	DealDamageLevel = 1.0f;
}

const UAnimMontage* UGAS_GABaseAttack::GetAttackAnimMontage()
{
	return AttackAnimMontage;
}

const UAnimMontage* UGAS_GABaseAttack::GetDashAnimMontage()
{
	return DashAnimMontage;
}

float UGAS_GABaseAttack::GetForceStrength()
{
	return ForceStrength;
}

float UGAS_GABaseAttack::GetDamage()
{
	return Damage;
}

float UGAS_GABaseAttack::GetDealDamageLevel()
{
	return DealDamageLevel;
}

AGASProjectCharacter* UGAS_GABaseAttack::GetAbilityOwner()
{
	if (AbilityOwner)
	{
		return AbilityOwner;
	}
	return nullptr;
}

void UGAS_GABaseAttack::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
	}

	InitializeAbilityOwner();
	if (!AbilityOwner)
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
	}
	AbilityOwner->SetIsAbilityAttackOn(true);

	//FApplyRootMotionConstantForceDelegate.
	AbilityOwner->GetActorForwardVector();
}

void UGAS_GABaseAttack::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (AbilityOwner)
	{
		AbilityOwner->GetMesh()->GetAnimInstance()->OnPlayMontageNotifyBegin.RemoveDynamic(this, &UGAS_GABaseAttack::OnMontageNotifyBegin);
		AbilityOwner->GetMesh()->GetAnimInstance()->OnPlayMontageNotifyEnd.RemoveDynamic(this, &UGAS_GABaseAttack::OnMontageNotifyEnded);
	}
}

void UGAS_GABaseAttack::InitializeAbilityOwner()
{
	AbilityOwner = Cast<AGASProjectCharacter>(GetAvatarActorFromActorInfo());
}

void UGAS_GABaseAttack::ApplyForceToOwner()
{
//	UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce;
//	ApplyRootMotionConstantForce->OnFinish.AddDynamic(this, &UGAS_GABaseAttack::AfterApplyingForceToOwner);

	if (AbilityOwner && DashAnimMontage->IsValidToPlay())
	{
		AbilityOwner->PlayAnimMontage(DashAnimMontage);
	}
}

void UGAS_GABaseAttack::AfterApplyingForceToOwner()
{
	MontageStop();

	UAbilityTask_PlayAnimMontageAndWait* PlayAttackMontageAndWaitTask = CreateDefaultSubobject<UAbilityTask_PlayAnimMontageAndWait>(TEXT("PlayAttackMontageAndWaitTask"));
	PlayAttackMontageAndWaitTask->PlayMontageAndWaitForEvent(this, NAME_None, AttackAnimMontage, FGameplayTagContainer(), 1.0f, NAME_None, false, 1.0f);
	if (PlayAttackMontageAndWaitTask)
	{
		PlayAttackMontageAndWaitTask->OnBlendOut.AddDynamic(this, &UGAS_GABaseAttack::OnCompleted);
		PlayAttackMontageAndWaitTask->OnCompleted.AddDynamic(this, &UGAS_GABaseAttack::OnCompleted);
		PlayAttackMontageAndWaitTask->OnInterrupted.AddDynamic(this, &UGAS_GABaseAttack::OnCancelled);
		PlayAttackMontageAndWaitTask->OnCancelled.AddDynamic(this, &UGAS_GABaseAttack::OnCancelled);
		if (AbilityOwner)
		{
			AbilityOwner->GetMesh()->GetAnimInstance()->OnPlayMontageNotifyBegin.AddDynamic(this, &UGAS_GABaseAttack::OnMontageNotifyBegin);
			AbilityOwner->GetMesh()->GetAnimInstance()->OnPlayMontageNotifyEnd.AddDynamic(this, &UGAS_GABaseAttack::OnMontageNotifyEnded);
		}
		//PlayMontageAndWaitTask->EventReceived.AddDynamic(this, &UGAS_GABaseAttack::EventReceived);
		PlayAttackMontageAndWaitTask->ReadyForActivation();
	}

	AddAbilitieCue();

	PushGoal();

	UAbilityTask_WaitGameplayEvent* WaitDamageEvent = CreateDefaultSubobject<UAbilityTask_WaitGameplayEvent>(TEXT("WaitDamageEvent"));
	WaitDamageEvent->WaitGameplayEvent(this, EventDamageTag);
	WaitDamageEvent->EventReceived.AddDynamic(this, &UGAS_GABaseAttack::OnDamageEventReceived);
}

void UGAS_GABaseAttack::OnDamageEventReceived(FGameplayEventData Payload)
{
	MakeOutgoingGameplayEffectSpec(DealDamageGameplayEffectClass, DealDamageLevel);

	if (CalculateDamageEffectTag.IsValid())
	{
		FGameplayEffectSpecHandle DamageEffectSpecHandle = UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(MakeOutgoingGameplayEffectSpec(DealDamageGameplayEffectClass, DealDamageLevel), CalculateDamageEffectTag, Damage * (-1));
		AGASProjectCharacter* TargetActor = Cast<AGASProjectCharacter>(GetAvatarActorFromActorInfo());

		if (DamageEffectSpecHandle.IsValid() && TargetActor)
		{
			
			ApplyGameplayEffectSpecToTarget(GetCurrentAbilitySpecHandle(),
				GetCurrentActorInfo(),
				GetCurrentActivationInfo(),
				DamageEffectSpecHandle,
				Payload.TargetData);
		}
	}
}

void UGAS_GABaseAttack::StopMovement()
{
	if (AbilityOwner)
	{
		AbilityOwner->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);
	}
}

void UGAS_GABaseAttack::StartMovement()
{
	if (AbilityOwner)
	{
		AbilityOwner->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
	}
}

void UGAS_GABaseAttack::OnCancelled(FGameplayTag EventTag, FGameplayEventData EventData)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}

void UGAS_GABaseAttack::OnCompleted(FGameplayTag EventTag, FGameplayEventData EventData)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UGAS_GABaseAttack::OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload)
{
	if (NotifyName.IsEqual(StopMovementNotifyName))
	{

	}
	else if (NotifyName.IsEqual(StartMovementNotifyName))
	{

	}
}

void UGAS_GABaseAttack::OnMontageNotifyEnded(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{

}

void UGAS_GABaseAttack::AssignTagsSet()
{
	//Cost
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(
		MakeOutgoingGameplayEffectSpec(GetAbilityCostClass()),
		AbilityCostEffectTag,
		GetCostValue().Value);

	//Cooldown
	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(
		MakeOutgoingGameplayEffectSpec(GetCooldownClass()),
		CooldownEffectTag,
		GetCooldownDuration().Value);
}

