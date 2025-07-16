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

	/*--- Abilities Actions ---*/

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CastFireballAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CastShieldAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CastTeleportAction;


	/*--- Abilities Functions ---*/
	void CastFireball(const FInputActionValue& Value);
	void CastShield(const FInputActionValue& Value);
	void CastTeleport(const FInputActionValue& Value); 

#pragma endregion

#pragma region CameraComponents
	/* CameraComponents */

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* FollowCamera;
#pragma endregion

};
