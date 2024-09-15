// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "AbilitySystemInterface.h"
#include "GASProjectCharacter.generated.h"

class USphereComponent;
class UInputMappingContext;
class UInputAction;
class UAbilitySystemComponent;
class AInteractableBase;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsArmedStateChanged, bool, NewState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealthIsNotFull);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnManaIsNotFull);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBlockEnded);

UCLASS(config=Game)
class AGASProjectCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	/** Run Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* RunAction;

	/** Attack Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* AttackAction;

	/** Area Attack Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* AreaAttackAction;

	/** Charge Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ChargeJumpAction;

	/** Regen Action Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* RegenAction;

	/** Protect Action Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ProtectAction;

	/** Interact Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* InteractAction;

	/** Toggle Inventory Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ToggleInventoryAction;

public:
	AGASProjectCharacter(const FObjectInitializer& ObjectInitializer);
	
	//GAS
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS")
	TObjectPtr<class UGAS_AttributeSet> AttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GAS")
	TArray<TSubclassOf<class UGameplayEffect>> PassiveGameplayEffects;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS")
	TArray<TSubclassOf<class UGAS_GABaseAbility>> GameplayAbilities;

	UPROPERTY()
	uint8 bIsAbilitiesInitialized : 1;

	void AddStartupGameplayAbilities();

public:
	UFUNCTION(BlueprintPure)
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintPure)
	virtual float GetHealth() const;

	UFUNCTION(BlueprintPure)
	virtual float GetMaxHealth() const;

	UFUNCTION(BlueprintPure)
	virtual float GetMana() const;

	UFUNCTION(BlueprintPure)
	virtual float GetMaxMana() const;

protected:
	// To add mapping context
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	virtual void PossessedBy(AController* NewController) override;
//	virtual void UnPossessed() override;

	//virtual void OnRep_Controller() override;
	virtual void OnRep_PlayerState() override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const;


	//Called when character takes damage, which may have killed them

	//	@param DamageAmount        -- Amount of damage that was done, not clamped based on current health
	//	@param HitInfo             -- The hit info that generated this damage
	//	@param DamageTags          -- The gameplay tags of the event that did the damage
	//	@param InstigatorCharacter -- The character that initiated this damage
	//	@param DamageCauser        -- The actual actor that did the damage, might be a weapon or projectile


	UFUNCTION(BlueprintImplementableEvent)
	void OnDamage(float DamageAmount, const FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags,
		AGASProjectCharacter* InstigatorCharacter, AActor* DamageCauser);

	//Called when health is changed, eather from healing or form deing damaged

	//	@param DeltaValues -- Change in health value, positive for heal, negative for cost. If 0 the delta is unkown
	//	@param EventTags   -- The gameplay tags of the event that changed mana


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Health")
	void OnHealthChanged(float DeltaValues, const struct FGameplayTagContainer& EventTags);

	virtual void OnHealthChanged_Implementation(float DeltaValues, const struct FGameplayTagContainer& EventTags);


	friend UGAS_AttributeSet;


	virtual void HandleDamage(float DamageAmount, const FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags,
		AGASProjectCharacter* InstigatorCharacter, AActor* DamageCauser);

	virtual void HandleHealthChanged(float DeltaValues, const struct FGameplayTagContainer& EventTags, FVector PointOfInterest);

	virtual void HandleManaChanged(float DeltaValues, const FGameplayTagContainer& EventTags);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual bool IsAlive() const;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	bool bIsRunning;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float MaxWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float MaxRunSpeed;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCapsuleComponent> LeftWeaponCollision;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCapsuleComponent> RightWeaponCollision;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USphereComponent> AreaAttackCollision;

public:
	/** Returns LeftWeaponCollision subobject **/
	FORCEINLINE class UCapsuleComponent* GetRightWeaponCollision() const { return RightWeaponCollision; }
	/** Returns RightWeaponCollision subobject **/
	FORCEINLINE class UCapsuleComponent* GetLeftWeaponCollision() const { return LeftWeaponCollision; }
	/** Returns AreaAttackCollision subobject **/
	FORCEINLINE class USphereComponent* GetAreaAttackCollision() const { return AreaAttackCollision; }

	
	UFUNCTION(BlueprintPure)
	bool GetIsRunning() const;
	
	UFUNCTION(BlueprintPure)
	float GetMaxWalkSpeed() const;
	
	UFUNCTION(BlueprintPure)
	float GetMaxRunSpeed() const;
	
	UFUNCTION(BlueprintPure)
	bool GetIsArmed() const;

	UFUNCTION(BlueprintPure)
	UWidgetComponent* GetHealthBarComp() const;

	UFUNCTION(BlueprintPure)
	bool GetIsAbilityAttackOn() const;

	
	UFUNCTION(BlueprintCallable)
	void SetIsRunning(bool bNewValue);
	
	UFUNCTION(BlueprintCallable)
	void SetMaxWalkSpeed(float NewMaxWalkSpeed);
	
	UFUNCTION(BlueprintCallable)
	void SetMaxRunSpeed(float NewMaxRunSpeed);

	UFUNCTION(BlueprintCallable)
	void SetMovementSpeed(float NewMovementSpeed);

	UFUNCTION(BlueprintCallable)
	void SetIsAbilityAttackOn(bool bNewValue);



	UFUNCTION(BlueprintCallable)
	void ChangeIsArmedState(bool bNewState, bool bBeginPlay = false);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TObjectPtr<class UWidgetComponent> HealthBarComp;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	class UBasicProgressBar* HealthBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test - Remove to cpp file")////////////////////////
	FRotator WidgetRotator;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "ArmedState")
	bool bIsArmed;

	bool bIsAbilityAttackOn;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void EquipWeapon();

	UFUNCTION(BlueprintImplementableEvent)
	void UnequipWeapon();



	UFUNCTION(BlueprintCallable)
	void CallOnIsArmedChangedDelegate();

	UPROPERTY(BlueprintAssignable)
	FOnIsArmedStateChanged OnIsArmedChangedDelegate;


	UFUNCTION(BlueprintImplementableEvent)
	void TryToStartPassiveHealthRegen();

	UFUNCTION(BlueprintImplementableEvent)
	void TryToStartPassiveManaRegen();

	UPROPERTY(BlueprintAssignable)
	FOnHealthIsNotFull OnHealthIsNotFull;

	UPROPERTY(BlueprintAssignable)
	FOnManaIsNotFull OnManaIsNotFull;


	UFUNCTION(BlueprintCallable)
	void CallOnBlockEndedDelegate();

	UPROPERTY(BlueprintAssignable)
	FOnBlockEnded OnBlockEnded;

	/*Interact & Inventory*/
protected:
	UFUNCTION()
	virtual void OnCapsuleComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnCapsuleComponentOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	virtual void ToggleInventory();

	virtual void Interact();

	/*Check for interactable items directly in front of the player using a linetrace, called on per tick basic when OverlapEvent*/
	virtual void CheckForInteractables();


	/*The interactable the player currently looking at*/
	AInteractableBase* CurrentInteractable;

	bool bOverlapWithInteractable;

	float ReachToPickUp;

public:
	UFUNCTION(BlueprintPure)
	bool GetOverlapWithInteractable();

	UFUNCTION(BlueprintPure)
	float GetReachToPickUp();


	UFUNCTION(BlueprintCallable)
	void SetOverlapWithInteractable(bool bIsActorInteractable);

	UFUNCTION(BlueprintCallable)
	void SetReachToPickUp(float NewValue);
};

