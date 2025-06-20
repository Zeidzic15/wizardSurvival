// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "WizardPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class WIZARDSURVIVAL_API AWizardPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	//input mapping context
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TArray<UInputMappingContext*> DefaultMappingContexts;

	//input mapping context setup
	virtual void BeginPlay() override;
};
