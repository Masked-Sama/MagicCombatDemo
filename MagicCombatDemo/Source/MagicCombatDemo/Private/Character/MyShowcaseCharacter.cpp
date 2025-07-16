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

// Sets default values
AMyShowcaseCharacter::AMyShowcaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

#pragma region Camera Settings

	/* Create Camera Boom (Spring Arm) */
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // Distance from character
	CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on controller

	/* == = Create Follow Camera */
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false; // Camera doesn't rotate relative to arm

	/* === Character movement defaults */
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character faces movement
#pragma endregion

}

// Called when the game starts or when spawned
void AMyShowcaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT(" BeginPlay: Adding Mapping Context"));
	if (ShowcaseMappingContext)
	{
		UE_LOG(LogTemp, Warning, TEXT(" Mapping Context is valid: %s"), *ShowcaseMappingContext->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT(" ShowcaseMappingContext is NULL!"));
	}

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

// Called to bind functionality to input
void AMyShowcaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

#pragma region Bindings

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyShowcaseCharacter::Move);
		EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyShowcaseCharacter::Look);
		EnhancedInput->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInput->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		EnhancedInput->BindAction(CastFireballAction, ETriggerEvent::Started, this, &AMyShowcaseCharacter::CastFireball);
		EnhancedInput->BindAction(CastShieldAction, ETriggerEvent::Started, this, &AMyShowcaseCharacter::CastShield);
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

	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);
}

#pragma endregion

#pragma region Abilites

void AMyShowcaseCharacter::CastFireball(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Cast Fireball!"));
	// TODO: Add fireball logic
}

void AMyShowcaseCharacter::CastShield(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Cast Shield!"));
	// TODO: Add Shield logic
}

void AMyShowcaseCharacter::CastTeleport(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Cast Teleport!"));
	// TODO: Add Teleport logic
}

#pragma endregion

