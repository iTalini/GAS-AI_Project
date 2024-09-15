// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/GAS_Data.h"
#include "Controllers/GAS_BasicAIController.h"
#include "GAS_BasicEnemyAIController.generated.h"

class AGASProjectCharacter;

/**
 * 
 */
UCLASS()
class GASPROJECT_API AGAS_BasicEnemyAIController : public AGAS_BasicAIController
{
	GENERATED_BODY()
	
public:
	AGAS_BasicEnemyAIController();

protected:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;

public:
	UFUNCTION(BlueprintCallable, Category = "BehaviorTree / EQS Update")
	bool TryToSetStateAsPassive();

	UFUNCTION(BlueprintCallable, Category = "BehaviorTree / EQS Update")
	bool TryToSetStateAsAttacking(AActor* TargetActor, bool bUseLastKnownAttackTarget = false);

	UFUNCTION(BlueprintCallable, Category = "BehaviorTree / EQS Update")
	bool TryToSetStateAsInvestigating(FVector Location);

	UFUNCTION(BlueprintCallable, Category = "BehaviorTree / EQS Update")
	bool TryToSetStateAsDead();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS")
	FName AttackTargetKeyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS")
	FName AbilitySystemComponentKeyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS")
	FName StateKeyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS")
	FName PointOfInterestKeyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS")
	FName AttackRadiusKeyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS")
	FName DefendRadiusKeyName;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS")
	AGASProjectCharacter* AttackTarget;

	UFUNCTION(BlueprintCallable)
	EGAS_AIState GetCurrentState();


protected:
	virtual void OnHeardSomething(FVector NoiseLocation) override;

	virtual void OnViewSomething(AActor* Actor) override;
};
