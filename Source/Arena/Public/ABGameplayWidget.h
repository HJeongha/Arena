// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Arena.h"
#include "Blueprint/UserWidget.h"
#include "ABGameplayWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARENA_API UABGameplayWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnResumeClicked();

	UFUNCTION()
		void OnReturnTotitleClicked();

	UFUNCTION()
		void OnRetryGameClicked();

protected:
	UPROPERTY()
		class UButton* ResumeButton;

	UPROPERTY()
		class UButton* ReturnToTitleButton;

	UPROPERTY()
		class UButton* RetryGameButton;
};
