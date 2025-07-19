// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "MyShowcaseCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;
class UNiagaraSystem;
class UNiagaraComponent;

UCLASS()
class AMyShowcaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyShowcaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/* Input Mapping Context */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* ShowcaseMappingContext;

	#pragma region Movement

	/* Movement Actions */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* JumpAction;

	/* Movement Functions */
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	#pragma endregion

	#pragma region Abilities

	#pragma region FireBall
	
	/* Properties */

	UPROPERTY(EditAnywhere, Category = "Abilities_Fireball")
	UNiagaraSystem* FireballChargeEffect;

	UPROPERTY(EditAnywhere, Category = "Abilities|Fireball")
	float MaxFireballCharge = 3.0f; // seconds to reach full charge

	UPROPERTY()
	UNiagaraComponent* FireballChargeComponent;

	/* Variables */
	bool bIsFireballCharging = false;
	float CurrentFireballCharge = 0.0f;

	/* Input Property + Function*/
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CastFireballAction;

	void CastFireball(const FInputActionValue& Value);

	/* Charging Functions */
	void StartChargingFireball(const FInputActionValue& Value);
	void UpdateChargingFireball(float DeltaTime);
	void ReleaseFireball(const FInputActionValue& Value);

	#pragma endregion

	#pragma region Shield

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CastShieldAction;

	void CastShield(const FInputActionValue& Value);
	#pragma endregion

	#pragma region Teleport

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CastTeleportAction;

	void CastTeleport(const FInputActionValue& Value);
	#pragma endregion

	#pragma endregion

	#pragma region CameraComponents
	/* CameraComponents */

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* FollowCamera;
	#pragma endregion

};
