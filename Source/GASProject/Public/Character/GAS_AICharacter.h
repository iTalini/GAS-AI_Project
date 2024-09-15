// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/GASProjectCharacter.h"
#include "Animation/AnimInstance.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Core/GAS_Data.h"
#include "GAS_AICharacter.generated.h"

class AGAS_BasicEnemyAIController;
class AGAS_PatrolRoute;
class UAnimMontage;
class UBehaviorTree;

/**
 * 
 */
UCLASS()
class GASPROJECT_API AGAS_AICharacter : public AGASProjectCharacter
{
	GENERATED_BODY()
public:
	AGAS_AICharacter(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	AGAS_PatrolRoute* PatrolRoute;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float IdleSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float WalkingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float JoggingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	float SprintingSpeed;


	UFUNCTION(BlueprintCallable)
	virtual void SetAttackRadius(float NewValue);

	UFUNCTION(BlueprintCallable)
	virtual void SetDefendRadius(float NewValue);

	UFUNCTION(BlueprintPure)
	virtual float GetAttackRadius() const;

	UFUNCTION(BlueprintPure)
	virtual float GetDefendRadius() const;

	UFUNCTION(BlueprintPure)
	virtual UBehaviorTree* GetBehaviorTree() const;

	UFUNCTION(BlueprintPure)
	virtual AGAS_BasicEnemyAIController* GetAIC_Enemy() const;

	UFUNCTION(BlueprintPure)
	virtual AActor* GetWeaponActor() const;

protected:
	virtual void BeginPlay() override;

	virtual void OnHealthChanged_Implementation(float DeltaValues, const struct FGameplayTagContainer& EventTags) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Death")
	void OnDeath();

	virtual void OnDeath_Implementation();

	UFUNCTION(BlueprintCallable)
	virtual void CheckHealthBarVisibility();

	UFUNCTION(BlueprintCallable)
	float SetMovementSpeedType(EGAS_EnemyMovementSpeed MovementType);

	UPROPERTY(BlueprintReadOnly, Category = "Statistic")
	int32 AmountOfPlayersWhoSeesCharacter = 0;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "BehaviorTree / EQS", meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTree> BehaviorTree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS", meta = (AllowPrivateAccess = "true"))
	float AttackRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS", meta = (AllowPrivateAccess = "true"))
	float DefendRadius;


	/*Death Animation*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAnimMontage> DeathAnimation;


	/*Weapon*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> WeaponActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	FName WeaponSocketName;

	AActor* WeaponActor;


	/*Enemy's AI Controller*/
	AGAS_BasicEnemyAIController* AIC_Enemy;


	FOnMontageBlendingOutStarted BlendingOutDelegate;
	FOnMontageEnded MontageEndedDelegate;

public:
	void InPlayerRadiusOfVision();

	void OutPlayerRadiusOfVision();

protected:
	UFUNCTION()
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);


	/*Weapon*/
	UFUNCTION(BlueprintCallable)
	void SpawnWeapon();

	UFUNCTION(BlueprintCallable)
	void DestroyWeapon();
//protected:
//	virtual void HandleHealthChanged(float DeltaValues, const struct FGameplayTagContainer& EventTags, FVector PointOfInterest) override;
//
//	virtual void HandleManaChanged(float DeltaValues, const FGameplayTagContainer& EventTags) override;

		/*Interact & Inventory*/
protected:
	virtual void Interact() override;

	/*Check for interactable items directly in front of the player using a linetrace, called on per tick basic when OverlapEvent*/
	virtual void CheckForInteractables() override;
};
