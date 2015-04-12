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
	static int32	ComboMultiplyer;
	static int32	Speed;
	static int32	Life;
	static bool		bInvulnerableStatus;
	static FTimerHandle InvulnerabilityTimerHandle;
	
public:
	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static FString GetScore();

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static void SetScore(int32 score);

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static void AddScore(int32 score);

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static FString GetComboMultiplyer();

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static void SetComboMultipyer(int32 combo);

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static FString GetLife();

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static void DamagePlayer();

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static void SetLife(int32 life);

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static void SetSpeed(int32 speed);

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static FString GetSpeed();

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static void TickScore();

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static void EnableInvulnerability(float seconds);

	UFUNCTION(BlueprintCallable, Category = "ScoreKeeper")
	static bool GetInvulnerability();

	static void DisableInvulnerability();
};
