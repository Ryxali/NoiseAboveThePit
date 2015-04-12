// Fill out your copyright notice in the Description page of Project Settings.

#include "NoiseAboveThePit.h"
#include "GameHUD.h"
#include "CString.h"
#include <sstream>
#include <string>

/** Set the the maximum possible value */
uint64_t AGameHUD::Score = 0; //0xFFFFFFFFFFFFFFFF;

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