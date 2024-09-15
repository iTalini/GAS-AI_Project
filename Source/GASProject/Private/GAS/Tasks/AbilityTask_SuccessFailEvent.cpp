// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Tasks/AbilityTask_SuccessFailEvent.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AbilityTask_SuccessFailEvent)


UAbilityTask_SuccessFailEvent::UAbilityTask_SuccessFailEvent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

}

UAbilityTask_SuccessFailEvent* UAbilityTask_SuccessFailEvent::WaitSuccessFailEvent(UGameplayAbility* OwningAbility, FGameplayTag SuccessTag,
	FGameplayTag FailedTag, AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	UAbilityTask_SuccessFailEvent* MyObj = NewAbilityTask<UAbilityTask_SuccessFailEvent>(OwningAbility);
	MyObj->SuccessTag = SuccessTag;
	MyObj->FailedTag = FailedTag ;
	MyObj->SetExternalTarget(OptionalExternalTarget);
	MyObj->OnlyTriggerOnce = OnlyTriggerOnce;
	MyObj->OnlyMatchExact = OnlyMatchExact;

	return MyObj;
}

void UAbilityTask_SuccessFailEvent::SetExternalTarget(AActor* Actor)
{
	if (Actor)
	{
		UseExternalTarget = true;
		OptionalExternalTarget = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Actor);
	}
}

UAbilitySystemComponent* UAbilityTask_SuccessFailEvent::GetTargetASC()
{
	if (UseExternalTarget)
	{
		return OptionalExternalTarget;
	}

	return AbilitySystemComponent.Get();
}

void UAbilityTask_SuccessFailEvent::Activate()
{
	UAbilitySystemComponent* ASC = GetTargetASC();
	if (ASC)
	{
		if (OnlyMatchExact)
		{
			SuccessHandle = ASC->GenericGameplayEventCallbacks.FindOrAdd(SuccessTag).AddUObject(
				this, &UAbilityTask_SuccessFailEvent::SuccessEventCallback);

			FailedHandle = ASC->GenericGameplayEventCallbacks.FindOrAdd(FailedTag).AddUObject(
				this, &UAbilityTask_SuccessFailEvent::FailedEventCallback);
		}
		else
		{
			SuccessHandle = ASC->AddGameplayEventTagContainerDelegate(FGameplayTagContainer(SuccessTag),
				FGameplayEventTagMulticastDelegate::FDelegate::CreateUObject(this, &UAbilityTask_SuccessFailEvent::SuccessEventContainerCallback));

			FailedHandle = ASC->AddGameplayEventTagContainerDelegate(FGameplayTagContainer(FailedTag),
				FGameplayEventTagMulticastDelegate::FDelegate::CreateUObject(this, &UAbilityTask_SuccessFailEvent::FailedEventContainerCallback));
		}
	}

	Super::Activate();
}

void UAbilityTask_SuccessFailEvent::SuccessEventCallback(const FGameplayEventData* Payload)
{
	SuccessEventContainerCallback(SuccessTag, Payload);
}

void UAbilityTask_SuccessFailEvent::SuccessEventContainerCallback(FGameplayTag MatchingTag, const FGameplayEventData* Payload)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		ensureMsgf(Payload, TEXT("SuccessEventCallback expected non-null Payload"));
		FGameplayEventData TempPayload = Payload ? *Payload : FGameplayEventData{};
		TempPayload.EventTag = MatchingTag;
		SuccessEventReceived.Broadcast(MoveTemp(TempPayload));
	}
	if (OnlyTriggerOnce)
	{
		EndTask();
	}
}

void UAbilityTask_SuccessFailEvent::FailedEventCallback(const FGameplayEventData* Payload)
{
	SuccessEventContainerCallback(FailedTag, Payload);
}

void UAbilityTask_SuccessFailEvent::FailedEventContainerCallback(FGameplayTag MatchingTag, const FGameplayEventData* Payload)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		ensureMsgf(Payload, TEXT("SuccessEventCallback expected non-null Payload"));
		FGameplayEventData TempPayload = Payload ? *Payload : FGameplayEventData{};
		TempPayload.EventTag = MatchingTag;
		FailedEventReceived.Broadcast(MoveTemp(TempPayload));
	}
	if (OnlyTriggerOnce)
	{
		EndTask();
	}
}

void UAbilityTask_SuccessFailEvent::OnDestroy(bool AbilityEnding)
{
	UAbilitySystemComponent* ASC = GetTargetASC();
	if (ASC)
	{
		if(SuccessHandle.IsValid())
		{
			if (OnlyMatchExact)
			{
				ASC->GenericGameplayEventCallbacks.FindOrAdd(SuccessTag).Remove(SuccessHandle);
			}
			else
			{
				ASC->RemoveGameplayEventTagContainerDelegate(FGameplayTagContainer(SuccessTag), SuccessHandle);
			}
		}
		if (FailedHandle.IsValid())
		{
			if (OnlyMatchExact)
			{
				ASC->GenericGameplayEventCallbacks.FindOrAdd(FailedTag).Remove(FailedHandle);
			}
			else
			{
				ASC->RemoveGameplayEventTagContainerDelegate(FGameplayTagContainer(FailedTag), FailedHandle);
			}
		}
	}

	Super::OnDestroy(AbilityEnding);
}
