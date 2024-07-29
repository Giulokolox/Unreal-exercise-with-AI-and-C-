// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ABallsGameGameMode.generated.h"

UCLASS(minimalapi)
class AABallsGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	TArray<class ATargetPoint*> TargetPoints;
	TArray<class ABall*> GameBalls;

	void ResetMatch();


public:
	AABallsGameGameMode();

	void BeginPlay() override;
	void Tick(float DeltaTime) override;

	const TArray<class ABall*>& GetBalls() const;

};



