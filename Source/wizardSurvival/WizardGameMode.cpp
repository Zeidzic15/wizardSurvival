// Fill out your copyright notice in the Description page of Project Settings.
#include "WizardGameMode.h"
#include "WizardCharacter.h"
#include "WizardPlayerController.h"

AWizardGameMode::AWizardGameMode()
{
	DefaultPawnClass = AWizardCharacter::StaticClass();
	PlayerControllerClass = AWizardPlayerController::StaticClass(); // or your BP class

}