// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "Bullet.h"
#include "GameManager.generated.h"

UCLASS()
class TOWER_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void setupBulletPool();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	TArray<AEnemy*> enemies;

	UPROPERTY(EditAnywhere)
	FVector bulletPoolLocation;

	int bulletIndex = 0;

	UPROPERTY(EditAnywhere)
    int amountOfBullets;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ABullet> theBullet;

	TArray<ABullet*> bulletPool;

	ABullet* getBullet();

};
