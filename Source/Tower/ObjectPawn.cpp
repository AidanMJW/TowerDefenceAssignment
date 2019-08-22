// Fill out your copyright notice in the Description page of Project Settings.

#include "ObjectPawn.h"

// Sets default values
AObjectPawn::AObjectPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	body = CreateDefaultSubobject<UStaticMeshComponent>("body");
	RootComponent = body;

}

// Called when the game starts or when spawned
void AObjectPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjectPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AObjectPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

