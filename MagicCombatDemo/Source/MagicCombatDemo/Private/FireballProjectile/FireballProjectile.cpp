// Fill out your copyright notice in the Description page of Project Settings.


#include "FireballProjectile/FireballProjectile.h"

// Sets default values
AFireballProjectile::AFireballProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFireballProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFireballProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

