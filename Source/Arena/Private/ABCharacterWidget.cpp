// Fill out your copyright notice in the Description page of Project Settings.


#include "ABCharacterWidget.h"
#include "ABCharacterStatComponent.h"
#include "Components/ProgressBar.h"

void UABCharacterWidget::BindCharacterStat(UABCharacterStatComponent* NewCharacterStat)
{
	ABCHECK(nullptr != NewCharacterStat);

	CurrentCharacterStat = NewCharacterStat;
	NewCharacterStat->OnHPChanged.AddLambda([this]() -> void {

		if (CurrentCharacterStat.IsValid())
		{
			ABLOG(Warning, TEXT("HPRatio : %f"), CurrentCharacterStat->GetHPRatio());
		}

		});

}
