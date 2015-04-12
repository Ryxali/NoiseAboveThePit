// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class NOISEABOVETHEPIT_API AGameHUD : public AHUD
{
	GENERATED_BODY()
private:
	static uint64_t Score;
	
public:
	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static FString GetScore();

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static void SetScore(int32 score);

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static void AddScore(int32 score);
};
