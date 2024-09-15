// Copyright Epic Games, Inc. All Rights Reserved.

#include "Character/GASProjectCharacter.h"
#include "GAS/GAS_AttributeSet.h"
#include "GAS/GAS_GABaseAbility.h"
#include "Engine/LocalPlayer.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Controllers/GAS_BasicEnemyAIController.h"
#include "Core/GAS_Data.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Interactable/InteractableBase.h"
#include "Interactable/PickupBase.h"
#include "Widgets/BasicProgressBar.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
//#include "UObject/UObjectGlobals.h"

#include "InputActionValue.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AGASProjectCharacter

AGASProjectCharacter::AGASProjectCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;


	// Create WeaponCollision
	RightWeaponCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightWeaponCollision"));
	RightWeaponCollision->SetupAttachment(GetMesh(), "RightHand");
	RightWeaponCollision->SetRelativeLocation(FVector(54.0f, -42.0f, -9.0f));
	RightWeaponCollision->SetRelativeRotation(FRotator(82.9f, 25.0f, 56.6f));
	RightWeaponCollision->SetWorldScale3D(FVector(1.0f, 0.75f, 1.35f));

	LeftWeaponCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftWeaponCollision"));
	LeftWeaponCollision->SetupAttachment(GetMesh(), "LeftHand");
	LeftWeaponCollision->SetRelativeLocation(FVector(54.0f, -42.0f, -9.0f));
	LeftWeaponCollision->SetRelativeRotation(FRotator(82.9f, 25.0f, 56.6f));
	LeftWeaponCollision->SetWorldScale3D(FVector(1.0f, 0.75f, 1.35f));

	AreaAttackCollision = CreateDefaultSubobject<USphereComponent>(TEXT("AreaAttackCollision"));
	AreaAttackCollision->SetupAttachment(RootComponent);
	AreaAttackCollision->SetRelativeLocation(FVector(0.0f, 0.0f, -90.0f));
	AreaAttackCollision->SetWorldScale3D(FVector(3.0f, 3.0f, 3.0f));


	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	AttributeSet = CreateDefaultSubobject<UGAS_AttributeSet>(TEXT("AttributeSet"));

	HealthBarComp = ObjectInitializer.CreateDefaultSubobject<UWidgetComponent>(this, TEXT("HealthBarComp"));
	HealthBarComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);


	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AGASProjectCharacter::OnCapsuleComponentBeginOverlap);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &AGASProjectCharacter::OnCapsuleComponentOverlapEnd);


	bIsAbilitiesInitialized = false;

	bIsRunning = false;
	MaxWalkSpeed = 500.0f;
	MaxRunSpeed = 1000.0f;

	WidgetRotator = FRotator(180.0f, 0.0f, 0.0f);

	ReachToPickUp = 250.0f;

	bIsArmed = true;

	bIsAbilityAttackOn = false;

	bOverlapWithInteractable = false;

	OnManaIsNotFull.AddDynamic(this, &AGASProjectCharacter::TryToStartPassiveManaRegen);
	OnHealthIsNotFull.AddDynamic(this, &AGASProjectCharacter::TryToStartPassiveHealthRegen);
}

void AGASProjectCharacter::AddStartupGameplayAbilities()
{
	check(AbilitySystemComponent);

	if (/*GetLocalRole() == ROLE_Authority && */!bIsAbilitiesInitialized)
	{
		//Grant abilities, but only on the server

		for (TSubclassOf<class UGAS_GABaseAbility>& StartupAbility : GameplayAbilities)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(
				StartupAbility,
				1,
				static_cast<int32>(StartupAbility.GetDefaultObject()->AbilityInputID),
				this));
		}

		//Apply passives
		for (const TSubclassOf<UGameplayEffect>& GameplayEffect : PassiveGameplayEffects)
		{
			FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
			EffectContext.AddSourceObject(this);

			FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(
				GameplayEffect,
				1,
				EffectContext);

			if (NewHandle.IsValid())
			{
				FActiveGameplayEffectHandle ActiveGameplayEffectHandle =
					AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(
						*NewHandle.Data.Get(),
						AbilitySystemComponent);
			}
		}

		bIsAbilitiesInitialized = true;
	}
}

UAbilitySystemComponent* AGASProjectCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

float AGASProjectCharacter::GetHealth() const
{
	if (AttributeSet)
	{
		return AttributeSet->GetHealth();
	}
	return 1.0f;
}

float AGASProjectCharacter::GetMaxHealth() const
{
	if (AttributeSet)
	{
		return AttributeSet->GetMaxHealth();
	}
	return 1.0f;
}

float AGASProjectCharacter::GetMana() const
{
	if (AttributeSet)
	{
		return AttributeSet->GetMana();
	}
	return 1.0f;
}

float AGASProjectCharacter::GetMaxMana() const
{
	if (AttributeSet)
	{
		return AttributeSet->GetMaxMana();
	}
	return 1.0f;
}

void AGASProjectCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();


	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	HealthBar = Cast<UBasicProgressBar>(HealthBarComp->GetUserWidgetObject());
	if(HealthBar)
	{
		HealthBar->SetOwnerCharacter(this);

		HealthBar->SetBarPercent(AttributeSet->GetHealth());
	}

	if (bIsArmed)
	{
		EquipWeapon();
	}
	else
	{
		UnequipWeapon();
	}

	if (OnIsArmedChangedDelegate.IsBound())
	{
		OnIsArmedChangedDelegate.Broadcast(bIsArmed);
	}
}

void AGASProjectCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//Rotate bar to Player
	if (GetWorld() && HealthBarComp)
	{
		UGameInstance* const GameInstance = GetGameInstance();
		APlayerController* const PC = GameInstance ? GameInstance->GetFirstLocalPlayerController() : nullptr;

		if (PC)
		{
			HealthBarComp->SetWorldRotation(FRotator(PC->GetControlRotation()) + WidgetRotator);
		}
	}

	if (bOverlapWithInteractable)
	{
		CheckForInteractables();
	}
}

void AGASProjectCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	//Server GAS init
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
		AddStartupGameplayAbilities();
	}
}

void AGASProjectCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	//Client GAS init
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);

		if (InputComponent)
		{
			FTopLevelAssetPath InputEnumPath = FTopLevelAssetPath(TEXT("/Script/GASProject"), TEXT("EGAS_AbilityInputID"));

			const FGameplayAbilityInputBinds Binds(
				"Confirm",
				"Cancel",
				InputEnumPath,
				static_cast<int32>(EGAS_AbilityInputID::Confirm),
				static_cast<int32>(EGAS_AbilityInputID::Cancel));

			AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
		}
	}
}

void AGASProjectCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (AbilitySystemComponent && InputComponent)
	{
		FTopLevelAssetPath InputEnumPath = FTopLevelAssetPath(TEXT("/Script/GASProject"), TEXT("EGAS_AbilityInputID"));

		const FGameplayAbilityInputBinds Binds(
			"Confirm",
			"Cancel",
			InputEnumPath,
			static_cast<int32>(EGAS_AbilityInputID::Confirm),
			static_cast<int32>(EGAS_AbilityInputID::Cancel));

		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
	}
}

void AGASProjectCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AGASProjectCharacter, HealthBar);
}

void AGASProjectCharacter::OnHealthChanged_Implementation(float DeltaValues, const FGameplayTagContainer& EventTags)
{
}

void AGASProjectCharacter::HandleDamage(float DamageAmount, const FHitResult& HitInfo, const FGameplayTagContainer& DamageTags,
	AGASProjectCharacter* InstigatorCharacter, AActor* DamageCauser)
{
	OnDamage(DamageAmount, HitInfo, DamageTags, InstigatorCharacter, DamageCauser);
}

void AGASProjectCharacter::HandleHealthChanged(float DeltaValues, const FGameplayTagContainer& EventTags, FVector PointOfInterest)
{
	if (bIsAbilitiesInitialized)
	{
		if (GetHealth() < GetMaxHealth())
		{
			if (OnHealthIsNotFull.IsBound())
			{
				OnHealthIsNotFull.Broadcast();
			}
		}

		OnHealthChanged(DeltaValues, EventTags);

		if (!bIsArmed)
		{
			if (AGAS_BasicEnemyAIController* CurrentController = Cast<AGAS_BasicEnemyAIController>(GetController()))
			{
				CurrentController->TryToSetStateAsInvestigating(PointOfInterest);
			}
		}
	}
}

void AGASProjectCharacter::HandleManaChanged(float DeltaValues, const FGameplayTagContainer& EventTags)
{
	if (bIsAbilitiesInitialized)
	{
		if (GetMana() < GetMaxMana())
		{
			if (OnManaIsNotFull.IsBound())
			{
				OnManaIsNotFull.Broadcast();
			}
		}
	}
}

bool AGASProjectCharacter::IsAlive() const
{
	if (AttributeSet)
	{
		return AttributeSet->GetHealth() > 0.0f;
	}
	return false;
}

bool AGASProjectCharacter::GetIsRunning() const
{
	return bIsRunning;
}

float AGASProjectCharacter::GetMaxWalkSpeed() const
{
	return MaxWalkSpeed;
}

float AGASProjectCharacter::GetMaxRunSpeed() const
{
	return MaxRunSpeed;
}

bool AGASProjectCharacter::GetIsArmed() const
{
	return bIsArmed;
}

UWidgetComponent* AGASProjectCharacter::GetHealthBarComp() const
{
	return HealthBarComp.Get();
}

bool AGASProjectCharacter::GetIsAbilityAttackOn() const
{
	return bIsAbilityAttackOn;
}

void AGASProjectCharacter::SetIsRunning(bool bNewValue)
{
	bIsRunning = bNewValue;
}

void AGASProjectCharacter::SetMaxWalkSpeed(float NewMaxWalkSpeed)
{
	MaxWalkSpeed = NewMaxWalkSpeed;
}

void AGASProjectCharacter::SetMaxRunSpeed(float NewMaxRunSpeed)
{
	MaxRunSpeed = NewMaxRunSpeed;
}

void AGASProjectCharacter::SetMovementSpeed(float NewMovementSpeed)
{
	GetCharacterMovement()->MaxWalkSpeed = NewMovementSpeed;
}

void AGASProjectCharacter::SetIsAbilityAttackOn(bool bNewValue)
{
	bIsAbilityAttackOn = bNewValue;
}

void AGASProjectCharacter::ChangeIsArmedState(bool bNewState, bool bBeginPlay)
{
	if (bIsArmed != bNewState || !bBeginPlay)
	{
		bIsArmed = bNewState;

		if (bIsArmed)
		{
			EquipWeapon();
		}
		else
		{
			UnequipWeapon();
		}		
	}
}

void AGASProjectCharacter::OnCapsuleComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AInteractableBase* InteractableActor = Cast<AInteractableBase>(OtherActor);
	if (InteractableActor)
	{
		SetOverlapWithInteractable(true);
	}
}

void AGASProjectCharacter::OnCapsuleComponentOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AInteractableBase* InteractableActor = Cast<AInteractableBase>(OtherActor);
	if (InteractableActor)
	{
		SetOverlapWithInteractable(false);
	}
}

void AGASProjectCharacter::CallOnIsArmedChangedDelegate()
{
	if (OnIsArmedChangedDelegate.IsBound())
	{
		OnIsArmedChangedDelegate.Broadcast(bIsArmed);
	}
}

void AGASProjectCharacter::CallOnBlockEndedDelegate()
{
	if (OnBlockEnded.IsBound())
	{
		OnBlockEnded.Broadcast();
	}
}

void AGASProjectCharacter::ToggleInventory()
{
}

void AGASProjectCharacter::Interact()
{
}

void AGASProjectCharacter::CheckForInteractables()
{
}

void AGASProjectCharacter::SetOverlapWithInteractable(bool bIsActorInteractable)
{
	bOverlapWithInteractable = bIsActorInteractable;
}

float AGASProjectCharacter::GetReachToPickUp()
{
	return ReachToPickUp;
}

void AGASProjectCharacter::SetReachToPickUp(float NewValue)
{
	ReachToPickUp = NewValue;
}

bool AGASProjectCharacter::GetOverlapWithInteractable()
{
	return bOverlapWithInteractable;
}

