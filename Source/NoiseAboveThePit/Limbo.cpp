// Fill out your copyright notice in the Description page of Project Settings.

#include "NoiseAboveThePit.h"
#include "Limbo.h"

ALimbo* ALimbo::Limbo = nullptr;

// Sets default values
ALimbo::ALimbo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	ALimbo::Limbo = this;
}

// Called when the game starts or when spawned
void ALimbo::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALimbo::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

