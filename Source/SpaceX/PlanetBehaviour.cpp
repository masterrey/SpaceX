// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetBehaviour.h"

// Sets default values
APlanetBehaviour::APlanetBehaviour()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlanetBehaviour::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlanetBehaviour::Tick(float DeltaTime)
{
	timepass += DeltaTime;
	Super::Tick(DeltaTime);

	FRotator myrot = GetActorRotation();

	myrot += FRotator(0, DeltaTime, 0);

	SetActorRotation(myrot);
	
	FVector mypos;
	mypos = FVector(sin(timepass/20), cos(timepass / 20), 0)* 50000.0f;
	SetActorLocation(mypos);

}

