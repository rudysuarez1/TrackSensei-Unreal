// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadTextFile.h"
#include "HAL/PlatformFileManager.h"

FString UReadTextFile::ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage)
{
	
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
	{
		
		return "";
	}

	FString RetString = "";
	
	return FString();
}
