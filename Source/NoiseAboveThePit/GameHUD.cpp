// Fill out your copyright notice in the Description page of Project Settings.

#include "NoiseAboveThePit.h"
#include "GameHUD.h"
#include "Limbo.h"
#include "CString.h"
#include <sstream>
#include <string>

/** Set the the maximum possible value */
uint64_t AGameHUD::Score = 0; //0xFFFFFFFFFFFFFFFF;
int32 AGameHUD::Life = 3;
int32 AGameHUD::ComboMultiplyer = 1;
int32 AGameHUD::Speed = 100;
bool AGameHUD::bInvulnerableStatus = false;

 FString AGameHUD::GetScore()
{
	 /** NOTE: Hacky way to make sure uint64_t can be converted to FString */
	std::ostringstream ss;
	ss << Score;
	std::string s = ss.str();
	FString f(s.c_str());

	return f;
}

 void AGameHUD::SetScore(int32 score)
 {
	 Score = score;
 }


 void AGameHUD::AddScore(int32 score)
 {
	 Score += score;
 }


FString AGameHUD::GetComboMultiplyer()
 {
	return FString::FromInt(ComboMultiplyer);
 }


void AGameHUD::SetComboMultipyer(int32 combo)
{
	ComboMultiplyer = combo;
}


FString AGameHUD::GetLife()
{
	return FString::FromInt(Life);
}


void AGameHUD::DamagePlayer()
{
	Life--;
}


void AGameHUD::SetLife(int32 life)
{
	Life = life;
}


void AGameHUD::SetSpeed(int32 speed)
{
	Speed = speed;
}


FString AGameHUD::GetSpeed()
{
	return FString::FromInt(Speed);
}

void AGameHUD::TickScore()
{
	Score += 8 * ComboMultiplyer;
}

void AGameHUD::EnableInvulnerability(float seconds)
{
	if (!bInvulnerableStatus)
	{
		
		auto w = GWorld();
		auto d = FTimerDelegate::CreateStatic(&AGameHUD::DisableInvulnerability);
		if (w) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("It's WORKING"));
			w->GetTimerManager().SetTimer(d, 0.1, false, seconds);
			bInvulnerableStatus = true;
		}
		else {
			GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Yellow, TEXT("NULL WORLD POINTER"));
		}
		

	}
}

bool AGameHUD::GetInvulnerability()
{
	return bInvulnerableStatus;
}

void AGameHUD::DisableInvulnerability()
{
	bInvulnerableStatus = false;
}
