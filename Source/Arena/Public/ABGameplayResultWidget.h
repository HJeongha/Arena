// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Arena.h"
#include "ABGameplayWidget.h"
#include "ABGameplayResultWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARENA_API UABGameplayResultWidget : public UABGameplayWidget
{
	GENERATED_BODY()

public:
	void BindGameState(class AABGameState* GameState);
	
protected:
	virtual void NativeConstruct() override;

private:
	TWeakObjectPtr<class AABGameState> CurrentGameState;
};
