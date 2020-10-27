// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Arena.h"
#include "GameFramework/SaveGame.h"
#include "ABSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class ARENA_API UABSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UABSaveGame();

	UPROPERTY()
		int32 PlayerLevel;

	UPROPERTY()
		int32 Exp;

	UPROPERTY()
		FString PlayerName;

	UPROPERTY()
		int32 HightScore;

	UPROPERTY()
		int32 CharacterIndex;
	
};
