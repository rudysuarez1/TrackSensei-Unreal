// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Misc/FileHelper.h>
#include "ReadTextFile.generated.h"


/**
 * 
 */
UCLASS()
class MLFORTTEST_API UReadTextFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		
public:

	UFUNCTION(BlueprintCallable)
		static FString ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage);



	
};
