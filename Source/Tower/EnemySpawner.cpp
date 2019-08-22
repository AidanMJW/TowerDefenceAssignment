// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemySpawner.h"
#include "Engine/World.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	NumberOfEnemys = 10;
	MaxWidthFloor = 5000;
	MaxDepthFloor = 5000;
	Height = 20;

}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	SpawnEnemy();
	
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector AEnemySpawner::GetRandomLocation()
{
	return FVector(FMath::RandRange(-MaxWidthFloor, MaxWidthFloor),
		FMath::RandRange(-MaxDepthFloor, MaxDepthFloor),
		Height);
}

FRotator AEnemySpawner::GetRandomRotation()
{
	return FRotator(0, FMath::RandRange(-180, 180), 0);
}

// Spawn enemy 
void AEnemySpawner::SpawnEnemy()
{
	// null checks
	if (EnemyBP != NULL)
	{
		// null checks
		if (GetWorld() != NULL)
		{
			FActorSpawnParameters sparams;
			sparams.Owner = this;

			for (int i = 0; i < NumberOfEnemys; i++)
			{
				UE_LOG(LogTemp, Warning, TEXT("Spawning enemys"));
				FVector location = GetRandomLocation();
				FRotator rotator = GetRandomRotation();
				ATowerPawn* enemy = GetWorld()->SpawnActor<ATowerPawn>(EnemyBP,
					location, rotator, sparams);
			}
		}
	}
}