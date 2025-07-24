// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MyShowcaseCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "FireballProjectile/FireballProjectile.h"

// Sets default values
AMyShowcaseCharacter::AMyShowcaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	#pragma region Camera Settings

	// Create Camera Boom (Spring Arm)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;											// Distance from character
	CameraBoom->bUsePawnControlRotation = true;										// Rotate arm based on controller

	// Create Follow Camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;									// Camera doesn't rotate relative to arm

	// Character movement defaults 
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;						// Character faces movement
	#pragma endregion

}

// Called when the game starts or when spawned
void AMyShowcaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Add the Input Mapping Context to the local player
	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(ShowcaseMappingContext, 0);
		}
	}
}

void AMyShowcaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsFireballCharging)
	{
		UpdateChargingFireball(DeltaTime);
	}
}

// Called to bind functionality to input
void AMyShowcaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	#pragma region Bindings

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Default Movement
		EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyShowcaseCharacter::Move);
		//Default Look
		EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyShowcaseCharacter::Look);
		//Default Jump
		EnhancedInput->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInput->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Fireball Ability
		EnhancedInput->BindAction(CastFireballAction, ETriggerEvent::Started, this, &AMyShowcaseCharacter::StartChargingFireball);
		EnhancedInput->BindAction(CastFireballAction, ETriggerEvent::Completed, this, &AMyShowcaseCharacter::ReleaseFireball);

		//Shield Ability
		EnhancedInput->BindAction(CastShieldAction, ETriggerEvent::Started, this, &AMyShowcaseCharacter::CastShield);

		//Teleport Ability
		EnhancedInput->BindAction(CastTeleportAction, ETriggerEvent::Started, this, &AMyShowcaseCharacter::CastTeleport);
	}
	#pragma endregion
}

#pragma region Movement

void AMyShowcaseCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector Right = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(Forward, MovementVector.Y);
		AddMovementInput(Right, MovementVector.X);
	}
}

void AMyShowcaseCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

#pragma endregion

#pragma region Abilites

#pragma region Fireball

void AMyShowcaseCharacter::StartChargingFireball(const FInputActionValue& Value)
{
	if (bIsFireballCharging) return;																	//check if we're already in charging

	//if not charging...																		
	bIsFireballCharging = true;																			//set the boolean to true, we start charging
	CurrentFireballCharge = 0.0f;																		//reset the charge time

	UE_LOG(LogTemp, Warning, TEXT("Charging Fireball"));												//Debug Text
	
	if (FireballChargeEffect)																			//checking if there is a VFX for cast
	{
		FireballChargeComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
			FireballChargeEffect,
			GetMesh(),
			FName("headSocket"), // Change if needed
			FVector::ZeroVector,
			FRotator::ZeroRotator,
			EAttachLocation::SnapToTarget,
			true
		);

		if (bIsFireballCharging && FireballChargeComponent)
		{
			FireballChargeComponent->Activate(true);
			FireballChargeComponent->SetWorldScale3D(FVector(0.3f));									//set starting scale to 0.3f
		}																			
	}

}

void AMyShowcaseCharacter::UpdateChargingFireball(float DeltaTime)
{
	CurrentFireballCharge = FMath::Clamp(CurrentFireballCharge + DeltaTime, 0.0f, MaxFireballCharge);	//clamp if already reached the roof 

	float chargePercent = CurrentFireballCharge / MaxFireballCharge;									//calcolating the percentage for alpha lerp
	float scale = FMath::Lerp(1.0f, 12.0f, chargePercent);												//it will grow from 0.3 to 2.0 its size

	if (FireballChargeComponent)
	{
		FireballChargeComponent->SetWorldScale3D(FVector(scale));
	}
}

void AMyShowcaseCharacter::ReleaseFireball(const FInputActionValue& Value)
{
	if (!bIsFireballCharging) return;																	//check if we're not charging

	//if charging...	
	bIsFireballCharging = false;

	UE_LOG(LogTemp, Warning, TEXT("Released Fireball! Charge: %f"), CurrentFireballCharge);				//Debug Text

	if (FireballChargeComponent)
	{
		// Detach and let it play out
		FireballChargeComponent->Deactivate(); // stop immediato dell'effetto
		FireballChargeComponent->DestroyComponent(); // rimuove subito il componente
		FireballChargeComponent = nullptr;
	}

	//SpawnProjectile
	if (UWorld* world = GetWorld())
	{
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;

		FVector offset(50.f, 0.f, -20.f);

		FVector spawnLocation = GetMesh()->GetSocketLocation(FName("headSocket")) + 
								((GetActorForwardVector() * 100.0f) - FVector(0.f, 0.f, 50.f));	//Location + (forward - offset)

		FRotator SpawnRotation = GetActorRotation();

		AFireballProjectile* Fireball = world->SpawnActor<AFireballProjectile>(
			AFireballProjectile::StaticClass(), spawnLocation, SpawnRotation, spawnParams);

		if (Fireball)
		{
			float ChargePercent = CurrentFireballCharge / MaxFireballCharge;
			Fireball->Scale = FMath::Lerp(1.0f, 3.0f, ChargePercent);
			Fireball->Damage = FMath::Lerp(10.0f, 50.0f, ChargePercent);

			Fireball->SetActorScale3D(FVector(Fireball->Scale));
		}
	}

	CurrentFireballCharge = 0.0f;
}
#pragma endregion

#pragma region Shield
void AMyShowcaseCharacter::CastShield(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Cast Shield!"));

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, TEXT("Cast Shield!"));
	// TODO: Add Shield logic
}
#pragma endregion

#pragma region Teleport
void AMyShowcaseCharacter::CastTeleport(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Cast Teleport!"));

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Purple, TEXT("Cast Teleport!"));
	// TODO: Add Teleport logic
}
#pragma endregion

#pragma endregion

