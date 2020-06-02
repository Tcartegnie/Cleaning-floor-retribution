// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LoopFloat.generated.h"
#include "Misc/App.h"

/**
 * 
 */
UCLASS()
class ZOMBIESHOOTERANYCODE_API ULoopFloat : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public :

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "ForLoopFloat")
		float index;

	void calcule();
};
