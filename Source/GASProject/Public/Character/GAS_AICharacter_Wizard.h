// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/GAS_AICharacter.h"
#include "GAS_AICharacter_Wizard.generated.h"

class UMaterialInstanceDynamic;
class UTimelineComponent;
class UCurveFloat;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTeleportEnd);

/**
 * 
 */
UCLASS()
class GASPROJECT_API AGAS_AICharacter_Wizard : public AGAS_AICharacter
{
	GENERATED_BODY()
	
public:
	AGAS_AICharacter_Wizard(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintPure)
	UMaterialInstanceDynamic*  GetDynMaterial();


	UFUNCTION(BlueprintPure)
	FVector GetTeleportationPoint();

	UFUNCTION(BlueprintCallable)
	void SetTeleportationPoint(FVector NewPoint);


	UFUNCTION(BlueprintCallable)
	void MakeWizardInvisible();

	UFUNCTION(BlueprintCallable)
	void MakeWizardVisible();


	UFUNCTION(BlueprintCallable)
	void CallOnTeleportEndDelegate();

	UPROPERTY(BlueprintAssignable)
	FOnTeleportEnd OnTeleportEnd;


protected:
	virtual void BeginPlay() override;

	virtual void Tick(float deltaTime) override;

	UMaterialInstanceDynamic* DynMaterial;

	FVector TeleportationPoint;

	FName DynamicMaterialParameterName;

	float DefaultValueOfDynamicMaterialParameter;

protected:
	UPROPERTY()
	UTimelineComponent* VisibilityTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timeline", meta = (AllowPrivateAccess = "true"))
	UCurveFloat* FloatCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timeline", meta = (AllowPrivateAccess = "true"))
	float TimelineLength;

	UFUNCTION()
	void TimelineCallback(float val);

	UFUNCTION()
	void TimelineFinishedCallback();

	void InitializeTimeline();

	void PlayTimeline();

	void CreateFloatCurve();
};
