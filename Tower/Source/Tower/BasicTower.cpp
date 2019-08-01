// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicTower.h"

// Sets default values
ABasicTower::ABasicTower()
{
	PrimaryActorTick.bCanEverTick = true;
	body = CreateDefaultSubobject<UStaticMeshComponent>("body");
	body->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABasicTower::BeginPlay()
{
	enemy = NULL;
	Super::BeginPlay();
	timer = fireRate;
}

// Called every frame
void ABasicTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (enemy != NULL)
	{
		enemyLocation = (enemy->GetActorLocation());
		if (FVector::Dist(GetActorLocation(), enemy->GetActorLocation()) > range)
			enemy = NULL;	
	}
	
	if(enemy == NULL)
	{
		getEnemy();
	}

	fireCooldown(DeltaTime);

	if (fire)
	{
		fireBullets();
		timer = fireRate;
		fire = false;
	}
}

//fires the bullets
void ABasicTower::fireBullets()
{
	//if has reference to the bullet and enemy
	if (theBullet && enemy)
	{
		UWorld* world = GetWorld();
	    
		//if has reference to the world
		if (world)
		{
			FActorSpawnParameters spawnParam;
			spawnParam.Owner = this;
			FRotator rotator;

			//get tower location for bullet spawn location (may change to turret barrel hole location)
			FVector pos = GetActorLocation();

			//spawns bullet and assigns reference to it
			ABullet* b = world->SpawnActor<ABullet>(theBullet, pos, rotator, spawnParam);

			//get direction of the target enemy from tower, to pass to bullet
			FVector enemyDirection = (GetActorLocation() - enemyLocation).GetSafeNormal();
			b->direction = -enemyDirection;
		}
	}
}

//cooldown for firing 
void ABasicTower::fireCooldown(float deltaTime)
{	
	timer = timer - deltaTime;
	if (timer <= 0)
		fire = true;
}

void ABasicTower::getEnemy()
{
	float distanceFromTower = 1000000;
	AEnemy* tempEnemy = NULL;

	//for every enemy in enemy list on game manager
	for (int i = 0; i < gameManager->enemies.Num(); i++)
	{
		//get the distance to enemy
		float tempDists = FVector::Dist(GetActorLocation(), gameManager->enemies[i]->GetActorLocation());

		//if enemy is within firing range
		if (tempDists < range)
		{
			//if enemy is closer than previous enemy 
			if (tempDists < distanceFromTower)
			{
				//set as closest enemy
				tempEnemy = gameManager->enemies[i];
				distanceFromTower = tempDists;
			}			
		}
	}

	//if has closest enemy in range assign it to target enemy
	if(tempEnemy != NULL)
		enemy = tempEnemy;
}

