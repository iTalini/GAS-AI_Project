// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GAS_BasicAIController.generated.h"

class UBehaviorTree;
class UBehaviorTreeComponent;
class UBlackboardComponent;
class UAIPerceptionComponent;

struct FAIStimulus;

/**
 * 
 */
UCLASS()
class GASPROJECT_API AGAS_BasicAIController : public AAIController
{
	GENERATED_BODY()
public:
	AGAS_BasicAIController();

protected:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;

public:
	UFUNCTION(BlueprintCallable, Category = "BehaviorTree | EQS Update")
	void PerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "BehaviorTree / EQS", meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTree> BehaviorTree;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS", meta = (AllowPrivateAccess = true))
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS", meta = (AllowPrivateAccess = true))
	TObjectPtr<UBlackboardComponent> BlackboardComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BehaviorTree / EQS", meta = (AllowPrivateAccess = true))
	TObjectPtr<UAIPerceptionComponent> AIPerceptionComponent;

protected:
	virtual void OnHeardSomething(FVector NoiseLocation);

	virtual void OnViewSomething(AActor* Actor);
};
