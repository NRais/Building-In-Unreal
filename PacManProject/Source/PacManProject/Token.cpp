// Fill out your copyright notice in the Description page of Project Settings.


#include "Token.h"

// Sets default values
AToken::AToken()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	if (CubeVisualAsset.Succeeded())
	{
		VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
}

// Called when the game starts or when spawned
void AToken::BeginPlay()
{
	Super::BeginPlay();
	
}

int waiting = 500; // 2 secs wait time
int loops = 500; // 2 secs playing time


// Called every frame
void AToken::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();
	float RunningTime = GetGameTimeSinceCreation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));

	// check if it is still or floating
	if (waiting > 0) {
		waiting--;
	}
	else {

		NewLocation.Z += DeltaHeight * 200.0f;       //Scale our height by a factor of 200
		float DeltaRotation = DeltaTime * 200.0f;    //Rotate by 200 degrees per second
		NewRotation.Yaw += DeltaRotation;
		SetActorLocationAndRotation(NewLocation, NewRotation);

		loops--;

		// stop moving when we finish our loops
		if (loops < 0) {
			waiting = 500;
			loops = 500;
		}
	}
}

