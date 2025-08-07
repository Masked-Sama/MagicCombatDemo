// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShieldBubbleActor.generated.h"

UCLASS()
class AShieldBubbleActor : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BubbleMesh;

	UPROPERTY(EditDefaultsOnly)
	float MaxShieldHP = 100.f;

	float ShieldHP;

public:	
	// Sets default values for this actor's properties
	AShieldBubbleActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AbsorbDamage(float Amount);

	bool IsShieldActive() const { return ShieldHP > 0.0f; }



};
