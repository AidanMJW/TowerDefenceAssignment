// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerPawn.h"
#include "Engine/World.h"

// Sets default values
ATowerPawn::ATowerPawn()
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
	//MovementComponent->DirectionalSpeed = this->MovementSpeed;

	collisionComponent = CreateDefaultSubobject<UBoxComponent>("collision component");
	collisionComponent->SetBoxExtent(FVector(10, 10, 10));

	collisionComponent->SetGenerateOverlapEvents(true);
	collisionComponent->SetupAttachment(body);
	collisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ATowerPawn::OnComponentBeginOverlap);

}

// Called when the game starts or when spawned
void ATowerPawn::BeginPlay()
{
	Super::BeginPlay();

	FVector orgin;
	FVector boxExtent;
	this->GetActorBounds(true, orgin, boxExtent);
	collisionComponent->SetBoxExtent(boxExtent);

}

// Called every frame
void ATowerPawn::Tick(float DeltaTime)
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
void ATowerPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//PlayerInputComponent->BindAxis("TowerMoveRight", this, &ATowerPawn::MoveRight);

	PlayerInputComponent->BindAction("Grow", IE_Pressed, this, &ATowerPawn::StartGrowing);
	PlayerInputComponent->BindAction("Grow", IE_Released, this, &ATowerPawn::StopGrowing);

	// Respond every frame to the values of our two movement axes, "MoveX" and "MoveY".
	PlayerInputComponent->BindAxis("MoveY", this, &ATowerPawn::Move_YAxis);
	PlayerInputComponent->BindAxis("MoveX", this, &ATowerPawn::Move_XAxis);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ATowerPawn::SpawnBullets);
}

//Called to move the actor to the right
void ATowerPawn::MoveRight(float val)
{

	//Save movement to value
	//MovementInput.Y = FMath::Clamp<float>(val, -1.0f, 1.0f);

	// add imput vector
	if (MovementComponent && (MovementComponent->UpdatedComponent == RootComponent))
	{
		MovementComponent->AddInputVector(GetActorRightVector() * val);
	}
}

 UPawnMovementComponent* ATowerPawn::GetMovementComponent() const {
	 return MovementComponent;
 }

 void ATowerPawn::Move_XAxis(float AxisValue)
 {
	 // Move at 100 units per second forward or backward
	 CurrentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f;
 }

 void ATowerPawn::Move_YAxis(float AxisValue)
 {
	 // Move at 100 units per second right or left
	 CurrentVelocity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f;
 }

 void ATowerPawn::StartGrowing()
 {
	 bGrowing = true;
 }

 void ATowerPawn::StopGrowing()
 {
	 bGrowing = false;
 }

 void ATowerPawn::SpawnBullets()

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

 void ATowerPawn::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
 {
	 UE_LOG(LogTemp, Warning, TEXT("Overlap!"));

	 if (OtherActor->IsA(ABulletActor::StaticClass()))
	 {
		 // cast the other actor to bullet
		 ABulletActor* bullet = Cast<ABulletActor>(OtherActor);

		 AActor* instigator = bullet->GetInstigator();

		 if (instigator && instigator->GetName().Equals(this->GetName()))
		 {
			 // Destroy the tank
			 //this->Destroy();
			 //bullet->Destroy();
		 }
	 }
		
}