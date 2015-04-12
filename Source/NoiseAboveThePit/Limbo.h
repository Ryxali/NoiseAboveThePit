// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Limbo.generated.h"

UCLASS()
class NOISEABOVETHEPIT_API ALimbo : public AActor
{
	GENERATED_BODY()

	
public:	
	static ALimbo* Limbo;
	// Sets default values for this actor's properties
	ALimbo();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};

#define GWorld ALimbo::Limbo->GetWorld