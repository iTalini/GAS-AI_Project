// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/GASProjectCharacter.h"
#include "Widgets/BaseHUDWidget.h"
#include "GAS_PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UUserWidget;

/**
 * 
 */
UCLASS()
class GASPROJECT_API AGAS_PlayerCharacter : public AGASProjectCharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
public:
	AGAS_PlayerCharacter(const FObjectInitializer& ObjectInitializer);

	// To add mapping context
	virtual void BeginPlay() override;


	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USphereComponent> ViewEnemyHealthBarRadius;
	
	UFUNCTION()
	void OnViewEnemyBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnViewEnemyOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	virtual void HandleHealthChanged(float DeltaValues, const struct FGameplayTagContainer& EventTags, FVector PointOfInterest) override;

	virtual void HandleManaChanged(float DeltaValues, const FGameplayTagContainer& EventTags) override;

	virtual void UpdateHUDBar(EBarType BarToChange, float CurrentData, float MaxData);

	virtual void UpdateHUDCurrencyText();

	/*Interact & Inventory*/
protected:
	virtual void ToggleInventory() override;

	virtual void Interact() override;

	/*Check for interactable items directly in front of the player using a linetrace, called on per tick basic when OverlapEvent*/
	virtual void CheckForInteractables() override;




	/*Currency*/
protected:
	float CurrentAmountOfGold;

	float MaxAmountOfGold;

public:
	float GetCurrentAmountOfGold();

	float GetMaxAmountOfGold();

	void AddGold(float AmountOfAddingGold);

	bool TryToSubtractGold(float AmountOfSubtractingGold);
};
