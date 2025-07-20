// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "FireballProjectile.generated.h"

UCLASS()
class AFireballProjectile : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	AFireballProjectile();

	virtual void Tick(float DeltaTime) override;

	#pragma region Properties

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USphereComponent* CollisionComponent;							//collision

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UProjectileMovementComponent* ProjectileMovement;				//Projectile movement

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UNiagaraComponent* FireballEffect;									//VFX

	#pragma endregion

	#pragma region Variables
public:							//Temporary solution

	float Damage = 10.0f;
	float Scale = 1.0f;

	#pragma endregion

	#pragma region Functions
protected:						//Temporary solution
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, 
			   UPrimitiveComponent* otherComp, FVector NormalImpulse, const FHitResult& Hit);

#pragma endregion

};
