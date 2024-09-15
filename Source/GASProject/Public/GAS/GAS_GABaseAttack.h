// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GAS/GAS_GABaseAbility.h"
#include "GAS_GABaseAttack.generated.h"



class UAnimMontage;
class AGASProjectCharacter;

struct FBranchingPointNotifyPayload;

UCLASS()
class GASPROJECT_API UGAS_GABaseAttack : public UGAS_GABaseAbility
{
	GENERATED_BODY()
	
public:
	UGAS_GABaseAttack();

	//Set



	//Get
	UFUNCTION(BlueprintPure)
	virtual const UAnimMontage* GetAttackAnimMontage();

	UFUNCTION(BlueprintPure)
	virtual const UAnimMontage* GetDashAnimMontage();

	UFUNCTION(BlueprintPure)
	virtual float GetForceStrength();

	UFUNCTION(BlueprintPure)
	virtual float GetDamage();

	UFUNCTION(BlueprintPure)
	virtual float GetDealDamageLevel();

	UFUNCTION(BlueprintPure)
	virtual AGASProjectCharacter* GetAbilityOwner();

protected:

	/** Actually activate ability, do not call this directly */
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;
	
	/** Native function, called if an ability ends normally or abnormally. If bReplicate is set to true, try to replicate the ending to the client/server */
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateEndAbility, bool bWasCancelled) override;


	virtual void InitializeAbilityOwner();

	virtual void ApplyForceToOwner();

	UFUNCTION(BlueprintImplementableEvent)
	void PushGoal();

	UFUNCTION(BlueprintImplementableEvent)
	void AddAbilitieCue();

	virtual void AfterApplyingForceToOwner();


	UFUNCTION(BlueprintCallable)
	virtual void AssignTagsSet();

	UFUNCTION(BlueprintCallable, Category = "Damage")
	virtual void OnDamageEventReceived(FGameplayEventData Payload);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StopMovement();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StartMovement();

	UFUNCTION(BlueprintCallable)
	void OnCancelled(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION(BlueprintCallable)
	void OnCompleted(FGameplayTag EventTag, FGameplayEventData EventData);


	AGASProjectCharacter* AbilityOwner;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	FGameplayTag EventDamageTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	FGameplayTag CalculateDamageEffectTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	TSubclassOf<UGameplayEffect> DealDamageGameplayEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float ForceStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float PushStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float DealDamageLevel;


	//Animation
	UFUNCTION()
	virtual void OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);

	UFUNCTION()
	virtual void OnMontageNotifyEnded(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* AttackAnimMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* DashAnimMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FName StopMovementNotifyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FName StartMovementNotifyName;


	FOnMontageBlendingOutStarted BlendingOutDelegate;
	FOnMontageEnded MontageEndedDelegate;
};
