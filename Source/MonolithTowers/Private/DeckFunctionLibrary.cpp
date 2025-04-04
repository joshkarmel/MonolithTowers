// Fill out your copyright notice in the Description page of Project Settings.


#include "DeckFunctionLibrary.h"

#include "HairStrandsInterface.h"

TArray<FCardData> UDeckFunctionLibrary::CreateDeck()
{
	TArray<FCardData> NewDeck;
	for (int32 i = 0; i < 60; i++)
	{
		NewDeck.Add(FCardData());
	}
	return NewDeck;
}

TArray<FCardData> UDeckFunctionLibrary::ShuffleDeck(TArray<FCardData> Cards)
{
	if (Cards.Num() > 0)
	{
		const int32 LastIndex = Cards.Num() - 1;
		for (int32 i = 0; i <= LastIndex; i++)
		{
			if (const int32 Index = FMath::RandRange(i, LastIndex); i != Index)
			{
				Cards.Swap(i, Index);
			}
		}
	}

	return Cards;
}