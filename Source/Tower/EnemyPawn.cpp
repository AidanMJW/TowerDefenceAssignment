// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyPawn.h"

AEnemyPawn::AEnemyPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	body = CreateDefaultSubobject<UStaticMeshComponent>("body");
	RootComponent = body;

	springArm = CreateDefaultSubobject<USpringArmComponent>("springarm");

	camera = CreateDefaultSubobject<UCameraComponent>("camera");

	springArm->SetupAttachment(body);

	springArm->TargetArmLength = SpringArmDistance;
	//springArm->SocketOffset = FVector(0.f, 0.f, 90.f);
	springArm->RelativeRotation = FRotator(-45.f, 0.f, 0.f);
	springArm->RelativeLocation = FVector(0, 30.f, 0.f);

	camera->SetupAttachment(springArm);

	MovementComponent = CreateDefaultSubobject<UTowerMovementComponent>("movementcomponent");
	MovementComponent->UpdatedComponent = RootComponent;

}

// Called when the game starts or when spawned
void AEnemyPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// move actor
	/*
	if (!MovementInput.IsZero()) {
		FVector NewLocation = this->GetActorLocation();
		NewLocation += this->GetActorRightVector() * MovementInput.Y * MovementSpeed;
		RootComponent->SetWorldLocation(NewLocation);
	}
	*/

	// Handle growing and shrinking based on our "Grow" action
	{
		float CurrentScale = RootComponent->GetComponentScale().X;
		if (bGrowing)
		{
			// Grow to double size over the course of one second
			CurrentScale += DeltaTime;
		}
		else
		{
			// Shrink half as fast as we grow
			CurrentScale -= (DeltaTime * 0.5f);
		}
		// Make sure we never drop below our starting size, or increase past double size.
		CurrentScale = FMath::Clamp(CurrentScale, 1.0f, 2.0f);
		RootComponent->SetWorldScale3D(FVector(CurrentScale));
	}

	// Handle movement based on our "MoveX" and "MoveY" axes
	{
		if (!CurrentVelocity.IsZero())
		{
			FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime);
			SetActorLocation(NewLocation);
		}
	}

}


// Called to bind functionality to input
void AEnemyPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//PlayerInputComponent->BindAxis("TowerMoveRight", this, &ATowerPawn::MoveRight);

	PlayerInputComponent->BindAction("Grow", IE_Pressed, this, &AEnemyPawn::StartGrowing);
	PlayerInputComponent->BindAction("Grow", IE_Released, this, &AEnemyPawn::StopGrowing);

	// Respond every frame to the values of our two movement axes, "MoveX" and "MoveY".
	PlayerInputComponent->BindAxis("MoveY", this, &AEnemyPawn::Move_YAxis);
	PlayerInputComponent->BindAxis("MoveX", this, &AEnemyPawn::Move_XAxis);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AEnemyPawn::SpawnBullets);
}

//Called to move the actor to the right
void AEnemyPawn::MoveRight(float val)
{

	//Save movement to value
	//MovementInput.Y = FMath::Clamp<float>(val, -1.0f, 1.0f);

	// add imput vector
	if (MovementComponent && (MovementComponent->UpdatedComponent == RootComponent))
	{
		MovementComponent->AddInputVector(GetActorRightVector() * val);
	}
}

UPawnMovementComponent* AEnemyPawn::GetMovementComponent() const {
	return MovementComponent;
}

void AEnemyPawn::Move_XAxis(float AxisValue)
{
	// Move at 100 units per second forward or backward
	CurrentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f;
}

void AEnemyPawn::Move_YAxis(float AxisValue)
{
	// Move at 100 units per second right or left
	CurrentVelocity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f;
}

void AEnemyPawn::StartGrowing()
{
	bGrowing = true;
}

void AEnemyPawn::StopGrowing()
{
	bGrowing = false;
}

void AEnemyPawn::SpawnBullets()
{
	// null check
	if (BulletBP != NULL)
	{
		const UWorld* world = this->GetWorld();

		if (world)
		{
			FActorSpawnParameters sparams;
			sparams.Owner = this;
			sparams.Instigator = this;

			// get socket location and rotation
			TArray<FName> sockets = body->GetAllSocketNames();

			if (sockets[0] == TEXT("BulletSocket"))
			{
				FVector SocketLocation = body->GetSocketLocation(sockets[0]);
				FRotator SocketRotation = body->GetSocketRotation(sockets[0]);

				ABulletActor *bullet = GetWorld()->SpawnActor<ABulletActor>(BulletBP, SocketLocation, SocketRotation, sparams);
			}
		}
	}
}
