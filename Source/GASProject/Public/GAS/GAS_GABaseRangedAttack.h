// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS/GAS_GABaseAttack.h"
#include "GAS_GABaseRangedAttack.generated.h"

/**
 * 
 */
UCLASS()
class GASPROJECT_API UGAS_GABaseRangedAttack : public UGAS_GABaseAttack
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	FVector DistanceBetweenHandAndCenterOfProj;
};
