// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MonolithEnums.h"
#include "FCardData.generated.h"

/** Please add a struct description */
USTRUCT(BlueprintType)
struct FCardData :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	FCardData();
	~FCardData();
	
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Name", MakeStructureDefaultValue = "None"))
		FName Name;
	
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Set Code"))
	FSetType SetCode;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Card Type", MakeStructureDefaultValue = "NONE"))
	Card_Type CardType;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Card Nation", MakeStructureDefaultValue = "NONE"))
	Card_Nation CardNation;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Card Guild", MakeStructureDefaultValue = "NONE"))
	Card_Guild CardGuild;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Card Class", MakeStructureDefaultValue = "NONE"))
	Card_Class CardClass;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Card Image", MakeStructureDefaultValue = "None"))
		TObjectPtr<UTexture2D> CardImage;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Effect 1"))
		FText Effect1;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Effect 2"))
		FText Effect2;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Notifier 1"))
		TArray<Effect_Notifier> Notifier1;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Notifier 2"))
		TArray<Effect_Notifier> Notifier2;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Prompt 1"))
		FText Prompt1;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Prompt 2"))
		FText Prompt2;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Loc1", MakeStructureDefaultValue = "FIELD"))
		TEnumAsByte<Location_Notifier> Loc1;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Loc2", MakeStructureDefaultValue = "FIELD"))
		TEnumAsByte<Location_Notifier> Loc2;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Grade", MakeStructureDefaultValue = "0"))
	uint8 Grade;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "BaseATK", MakeStructureDefaultValue = "0"))
	int32 BaseATK;	
	
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "BaseDEF", MakeStructureDefaultValue = "0"))
	int32 BaseDEF;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "BaseHP", MakeStructureDefaultValue = "0"))
	int32 BaseHP;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "BaseMoveMent", MakeStructureDefaultValue = "0"))
		uint8 BaseMoveMent;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Range Type", MakeStructureDefaultValue = "NONE"))
	Range_Type RangeType;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Base Projectile Speed", MakeStructureDefaultValue = "0"))
		uint8 BaseProjSpeed;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Artist"))
	FText Artist;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Rarity", MakeStructureDefaultValue = "COMMON"))
	Card_Rarity Rarity;

};
