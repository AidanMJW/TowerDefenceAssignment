// Fill out your copyright notice in the Description page of Project Settings.

#include "ObjectActor.h"

// Sets default values
AObjectActor::AObjectActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

	SuperMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("wall"));
	SuperMesh->AttachTo(RootComponent);
}

// Called when the game starts or when spawned
void AObjectActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjectActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

