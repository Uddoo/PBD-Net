// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SuperNovaHUD.generated.h"

UCLASS()
class ASuperNovaHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASuperNovaHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

