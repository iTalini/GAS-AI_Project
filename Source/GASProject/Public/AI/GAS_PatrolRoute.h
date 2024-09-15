// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GAS_PatrolRoute.generated.h"

class USplineComponent;

UCLASS()
class GASPROJECT_API AGAS_PatrolRoute : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGAS_PatrolRoute();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USplineComponent* PatrolRoute;

protected:
	int32 PatrolIndex;

	int32 Direction;

	UFUNCTION(BlueprintPure)
	FVector GetSplinePointAsWorldPosition();

	UFUNCTION(BlueprintCallable)
	void IncrementPatrolRoute();
};
