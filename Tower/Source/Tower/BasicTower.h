// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Bullet.h"
#include "Enemy.h"
#include "GameManager.h"
#include "BasicTower.generated.h"


UCLASS()
class TOWER_API ABasicTower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasicTower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void fireBullets();

	void fireCooldown(float deltaTime);

	void getEnemy();

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
		AGameManager* gameManager;

	UPROPERTY(EditAnywhere)
	float fireRate;
	float timer;
	bool fire = false;

	UPROPERTY(EditAnywhere)
    float range;

	UPROPERTY(EditAnywhere)
	FVector enemyLocation;
	 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* body;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ABullet> theBullet;

	UPROPERTY(EditAnywhere)
		AEnemy* enemy;
};
