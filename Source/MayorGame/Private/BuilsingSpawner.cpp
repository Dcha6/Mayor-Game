// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilsingSpawner.h"

// Sets default values
ABuilsingSpawner::ABuilsingSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilsingSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuilsingSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

