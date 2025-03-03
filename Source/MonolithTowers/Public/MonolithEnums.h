#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MonolithEnums.generated.h"

UENUM(BlueprintType, meta = (DisplayName = "Card_Type"))
enum class Card_Type : uint8 {
	UNIT,
	TOKEN,
	MONOLITH,
	SPELL,
	CATALYST,
	FIELDSPELL,
	QUICKPLAY,
	EQUIP,
	BASESPELL
};

UENUM(BlueprintType, meta = (DisplayName = "Card_Nation"))
enum class Card_Nation : uint8 {
	NONE,
	MEMOREX,
	NOMADIC,
	ARAADIA,
	BRIGANTINE,
	WASTELANDS,
	LUNAS,
	CERULIA,
	VISTA_ISLES
};

UENUM(BlueprintType, meta = (DisplayName = "Card_Rarity"))
enum class Card_Rarity : uint8 {
	COMMON,
	RARE,
	PLATINUMRARE,
	ALTART
};

UENUM(BlueprintType, meta = (DisplayName = "Card_Guild"))
enum class Card_Guild : uint8 {
	NONE,
	DIVINITY,
	NOMADIC,
	ACTINIUM,
	SKYLITE,
	SYMBIOTIC,
	UNDERDARK,
	OCTANE,
	AUROREON,
	NORTH_KEEP,
	HILLCREST,
	PRISTINE_SHORES,
	GRAVESEND,
	VULCAS,
	HAVNIS

};

UENUM(BlueprintType, meta = (DisplayName = "Card_Class"))
enum class Card_Class : uint8 {
	NONE,
	RANGED,
	MELEE,
	CAVALIER,
	ARTILLARY,
	ANTICAV,
	SUPPORT
};

UENUM(BlueprintType, meta = (DisplayName = "Range_Type"))
enum class Range_Type : uint8 {
	NONE,
	SQUARE,
	LINE,
	LONGLINE,
	ARTILLARY,
	VERTBRICK,
	HORZBRICK,
	DIAMOND,
	MELEE
};

UENUM(BlueprintType, meta = (DisplayName = "Effect_Notifier"))
enum class Effect_Notifier : uint8 {
	ONEPT,
	TWOPT,
	HOPT,
	AURA,
	QUICKEFFECT,
	ACT,
	AUTO,
	SELF,
	CATALYST,
	GLOBAL,
	IGNITION,
	CHARGED,
	TAP,
	AUG1,
	AUG2,
	AUG3
};

UENUM(BlueprintType, meta = (DisplayName = "Location_Notifier"))
enum class Location_Notifier : uint8 {
	NONE,
	FIELD,
	HAND,
	GRAVEYARD,
	BANISHED,
	FRONTLINE,
	BACKLINE,
	BASE,
	LIFE,
	ACTION,
	ZOC,
	CATALYST
};

UENUM(BlueprintType, meta = (DisplayName = "Set_Name"))
enum class Set_Name : uint8 {
	NONE,
};

/** Please add a struct description */
USTRUCT(BlueprintType)
struct MONOLITHTOWERS_API FSetType

{
	GENERATED_USTRUCT_BODY()
public:
	FSetType();
	~FSetType();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "SetName", MakeStructureDefaultValue = "NONE"))
	Set_Name SetName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "SetNumber", MakeStructureDefaultValue = "0"))
	uint8 SetNumber;
};