// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetBehavior.h"

// Sets default values
APlanetBehavior::APlanetBehavior()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlanetBehavior::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlanetBehavior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

