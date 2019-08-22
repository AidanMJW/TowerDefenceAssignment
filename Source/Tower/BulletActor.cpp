// Fill out your copyright notice in the Description page of Project Settings.

#include "BulletActor.h"

// Sets default values
ABulletActor::ABulletActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// initalise static mesh
	body = CreateDefaultSubobject<UStaticMeshComponent>("body");
	this->RootComponent = body;

	// Collision component
	collisionComponent = CreateDefaultSubobject<USphereComponent>("bullet collision");
	collisionComponent->SetSphereRadius(4);
	collisionComponent->SetupAttachment(body);
	collisionComponent->SetGenerateOverlapEvents(true);

	isActive = false;
	poolLocation = GetActorLocation();


}

// Called when the game starts or when spawned
void ABulletActor::BeginPlay()
{
	Super::BeginPlay();
	activeSpeed = Speed;
	
}

// Called every frame
void ABulletActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isActive == true)
		move();

	distanceCheck();

}

void ABulletActor::move()
{
	FVector pos = GetActorLocation();
	SetActorRelativeLocation((direction * Speed) + pos);
}

void ABulletActor::distanceCheck()
{
	if (FVector::Dist(GetActorLocation(), fireOrigin) > fireDistance)
		resetToPool();
}

void ABulletActor::resetToPool()
{
	isActive = false;
	Speed = 0;
	SetActorLocation(poolLocation);
}

void ABulletActor::fire(FVector _direction, FVector _origin)
{
	direction = _direction;
	fireOrigin = _origin;
	Speed = activeSpeed;
	isActive = true;
}


