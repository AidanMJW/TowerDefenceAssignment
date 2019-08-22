// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerPawn.h"
#include "EnemyPawn.h"
#include "EnemySpawner.generated.h"

UCLASS()
class TOWER_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY (Category ="Enemy", EditAnywhere, BlueprintReadOnly)
		TSubclassOf<ATowerPawn> EnemyBP;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(Category = "Enemy", EditAnywhere, BlueprintReadWrite)
		int32 NumberOfEnemys;

	UPROPERTY(Category = "Enemy", EditAnywhere, BlueprintReadWrite)
		int32 MaxWidthFloor;

	UPROPERTY(Category = "Enemy", EditAnywhere, BlueprintReadWrite)
		int32 MaxDepthFloor;

	UPROPERTY(Category = "Enemy", EditAnywhere, BlueprintReadWrite)
		int32 Height;

	void SpawnEnemy();

	// get random location
	FVector GetRandomLocation();

	// get random yaw location
	FRotator GetRandomRotation();
};
