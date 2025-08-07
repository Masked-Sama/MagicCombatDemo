// Fill out your copyright notice in the Description page of Project Settings.


#include "BubbleShield/ShieldBubbleActor.h"

// Sets default values
AShieldBubbleActor::AShieldBubbleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BubbleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BubbleMesh"));
	RootComponent = BubbleMesh;

	// Carica la mesh (sostituisci il path con quello corretto del tuo progetto)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShieldMeshAsset(TEXT("/Game/Custom/SM_ShieldBubble.SM_ShieldBubble"));
	if (ShieldMeshAsset.Succeeded())
	{
		BubbleMesh->SetStaticMesh(ShieldMeshAsset.Object);
		BubbleMesh->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
		BubbleMesh->SetGenerateOverlapEvents(true);
		BubbleMesh->SetVisibility(true);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Could not find Shield Mesh! Check your path."));
	}
	ShieldHP = MaxShieldHP;
}

// Called when the game starts or when spawned
void AShieldBubbleActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShieldBubbleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShieldBubbleActor::AbsorbDamage(float Amount)
{
	ShieldHP = FMath::Clamp(ShieldHP - Amount, 0.0f, MaxShieldHP);

	if (ShieldHP <= 0.f)
	{
		Destroy();
	}
}

