// Class /Script/FortniteGame.FortCreativeItemLibrary
// Size: 0x28
class UFortCreativeItemLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeItemLibrary.NotEqual_ItemVariantHandle (Underlying native function: NotEqual_ItemVariantHandle 0x8550810)
	static bool NotEqualItemVariantHandle(struct FItemVariantHandle& A, struct FItemVariantHandle& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeItemLibrary.IsValid_ItemVariantHandle (Underlying native function: IsValid_ItemVariantHandle 0x8550388)
	static bool IsValidItemVariantHandle(struct FItemVariantHandle& ItemHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeItemLibrary.GetRarity (Underlying native function: GetRarity 0x854d820)
	static bool GetRarity(class UObject*& SpatialContextObj, struct FItemVariantHandle& ItemHandle, enum EFortRarity& Rarity, bool& bOnlyOverridden); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeItemLibrary.GetItemVariantHandle (Underlying native function: GetItemVariantHandle 0x854d44c)
	static void GetItemVariantHandle(struct FFortItemEntry& ItemEntry, struct FItemVariantHandle& ItemHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeItemLibrary.GetItemDefinition (Underlying native function: GetItemDefinition 0x854d2c8)
	static bool GetItemDefinition(struct FItemVariantHandle& ItemHandle, class UClass*& ClassType, class UFortItemDefinition*& ItemDefintion); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeItemLibrary.GetDisplayName (Underlying native function: GetDisplayName 0x854ce5c)
	static bool GetDisplayName(class UObject*& SpatialContextObj, struct FItemVariantHandle& ItemHandle, struct FText& DisplayName, bool& bBaseName, bool& bOnlyOverridden); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeItemLibrary.EqualEqual_ItemVariantHandle (Underlying native function: EqualEqual_ItemVariantHandle 0x854c960)
	static bool EqualEqualItemVariantHandle(struct FItemVariantHandle& A, struct FItemVariantHandle& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeItemLibrary.CreateItemVariantEntry (Underlying native function: CreateItemVariantEntry 0x854ba44)
	static struct FFortItemEntry CreateItemVariantEntry(class UFortItemDefinition*& InItemDefinition, int& InCount, int& InLevel, struct FGuid& ItemVariantGuid, int& PickupInstigatorHandle); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeItemLibrary.Conv_ItemEntryToItemVariantHandle (Underlying native function: Conv_ItemEntryToItemVariantHandle 0x854b838)
	static struct FItemVariantHandle ConvItemEntryToItemVariantHandle(struct FFortItemEntry& ItemEntry); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeItemLibrary.Conv_ItemDefToItemVariantHandle (Underlying native function: Conv_ItemDefToItemVariantHandle 0x854b79c)
	static struct FItemVariantHandle ConvItemDefToItemVariantHandle(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeItemLibrary.Conv_ItemAndCountToItemVariantHandle (Underlying native function: Conv_ItemAndCountToItemVariantHandle 0x854b6e0)
	static struct FItemVariantHandle ConvItemAndCountToItemVariantHandle(struct FItemAndCount& ItemAndCount); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

