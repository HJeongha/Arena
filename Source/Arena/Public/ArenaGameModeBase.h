// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Arena.h"
#include "GameFramework/GameModeBase.h"
#include "ArenaGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ARENA_API AArenaGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AArenaGameModeBase();

	virtual void PostInitializeComponents() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;
	void AddScore(class AABPlayerController* ScoredPlayer);
	int32 GetScore() const;

private:
	UPROPERTY()
		class AABGameState* ABGameState;

	UPROPERTY()
		int32 ScoreToClear;
};
