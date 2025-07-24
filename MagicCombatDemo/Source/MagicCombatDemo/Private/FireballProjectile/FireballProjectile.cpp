// Fill out your copyright notice in the Description page of Project Settings.


#include "FireballProjectile/FireballProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraFunctionLibrary.h"

// Sets default values
AFireballProjectile::AFireballProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	#pragma region Collision

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));					//Component Init
	CollisionComponent->InitSphereRadius(15.0f);															//Init radius (Magic Number)
	CollisionComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));									//Set the collision to block all dynamics
	RootComponent = CollisionComponent;																		//Setting the CollisionComponent as Root

	CollisionComponent->OnComponentHit.AddDynamic(this, &AFireballProjectile::OnHit);						//bind our OnHit to the OnComponentHit

	#pragma endregion

	#pragma region Movement

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));	//Component Init
	ProjectileMovement->InitialSpeed = 3000.0f;																//Init speed (Magic Number)
	ProjectileMovement->MaxSpeed = 5000.0f;																	//Set MaxSpeed (Magic Number)
	ProjectileMovement->bRotationFollowsVelocity = true;													//Set rotation velocity
	ProjectileMovement->bShouldBounce = false;																//Set the bounce option to false
	ProjectileMovement->ProjectileGravityScale = 0.0f;

	#pragma endregion

	#pragma region Niagara VFX

	FireballEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FireballEffect"));						//Component Init
	//find the VFX
	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> FireballVFX(TEXT("/Game/Custom/VFX/NS_NewFireball.NS_NewFireball"));
	if (FireballVFX.Succeeded())
	{
		FireballEffect->SetAsset(FireballVFX.Object);
	}
	FireballEffect->SetupAttachment(RootComponent);															//Attach this component to root

	#pragma endregion

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

void AFireballProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* otherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor != this)
	{
		UE_LOG(LogTemp, Warning, TEXT("Fireball hit: %s"), *OtherActor->GetName());
		// TODO: Apply damage here

		Destroy();
	}
}
