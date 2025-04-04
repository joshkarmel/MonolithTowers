// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FCardData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DeckFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MONOLITHTOWERS_API UDeckFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "DeckFunctionLibrary", meta=(DisplayName="Deck"))
	TArray<FCardData> Deck;

	UFUNCTION(BlueprintCallable, Category = "DeckFunctionLibrary", meta=(DisplayName="Create Deck"))
	static TArray<FCardData> CreateDeck();

	UFUNCTION(BlueprintCallable, Category = "DeckFunctionLibrary", meta=(DisplayName="Shuffle"))
	static TArray<FCardData> ShuffleDeck(TArray<FCardData> Cards);
};
