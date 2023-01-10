// Class /Script/FortniteGame.FortRarityData
// Size: 0x430
class UFortRarityData : public UDataAsset
{
	struct FFortRarityItemData RarityCollection[0x8]; // 0x30 (0x80) (ARRAY) 

	/* Functions */

	// Function /Script/FortniteGame.FortRarityData.GetRarityCosmeticForItem (Underlying native function: GetRarityCosmeticForItem 0x8761120)
	static enum EFortRarity GetRarityCosmeticForItem(class UObject*& WorldContextObject, class UFortItem*& Item); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortRarityData.BPGetRarityDataForItemDef (Underlying native function: BPGetRarityDataForItemDef 0x87607d8)
	static struct FFortRarityItemData BPGetRarityDataForItemDef(class UFortItemDefinition*& ItemDef); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortRarityData.BPGetRarityData (Underlying native function: BPGetRarityData 0x2d6b3c4)
	static struct FFortRarityItemData BPGetRarityData(enum EFortRarity& Rarity); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortRarityData.BPGetRarityColorPalette (Underlying native function: BPGetRarityColorPalette 0x8760724)
	static struct FFortColorPalette BPGetRarityColorPalette(enum EFortRarity& Rarity); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)
};

