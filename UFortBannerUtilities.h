// Class /Script/FortniteGame.FortBannerUtilities
// Size: 0x28
class UFortBannerUtilities : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortBannerUtilities.GetSoftBannerDefinitionFromLegacyName (Underlying native function: GetSoftBannerDefinitionFromLegacyName 0x86dddd4)
	static struct TWeakObjectPtr<class UFortHomebaseBannerIconItemDefinition> GetSoftBannerDefinitionFromLegacyName(struct FName& BannerIconRowName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetSecondaryColor (Underlying native function: GetSecondaryColor 0x86ddbe4)
	static struct FLinearColor GetSecondaryColor(struct FHomebaseBannerColor& BannerColor); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortBannerUtilities.GetRowNameForBannerIconItem (Underlying native function: GetRowNameForBannerIconItem 0x86dd964)
	static struct FName GetRowNameForBannerIconItem(class UFortHomebaseBannerIconItem*& BannerIcon); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetRowNameForBannerColorItem (Underlying native function: GetRowNameForBannerColorItem 0x86dd8dc)
	static struct FName GetRowNameForBannerColorItem(class UFortHomebaseBannerColorItem*& BannerColor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetPrimaryColor (Underlying native function: GetPrimaryColor 0x27ee160)
	static struct FLinearColor GetPrimaryColor(struct FHomebaseBannerColor& BannerColor); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerSmallIconAssetFromRowName (Underlying native function: GetBannerSmallIconAssetFromRowName 0x86d8dfc)
	static struct TWeakObjectPtr<class UTexture2D> GetBannerSmallIconAssetFromRowName(struct FName& BannerIconRowName, enum EBannerUsageContext& Usage); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerSmallIconAsset (Underlying native function: GetBannerSmallIconAsset 0x86d8c64)
	static struct TWeakObjectPtr<class UTexture2D> GetBannerSmallIconAsset(class UFortHomebaseBannerIconItem*& BannerIcon, enum EBannerUsageContext& Usage); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerLargeIconAssetFromRowName (Underlying native function: GetBannerLargeIconAssetFromRowName 0x104c804)
	static struct TWeakObjectPtr<class UTexture2D> GetBannerLargeIconAssetFromRowName(struct FName& BannerIconRowName, enum EBannerUsageContext& Usage); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerLargeIconAsset (Underlying native function: GetBannerLargeIconAsset 0x86d8b20)
	static struct TWeakObjectPtr<class UTexture2D> GetBannerLargeIconAsset(class UFortHomebaseBannerIconItem*& BannerIcon, enum EBannerUsageContext& Usage); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerIconsForCategory (Underlying native function: GetBannerIconsForCategory 0x86d89ac)
	static void GetBannerIconsForCategory(class AFortPlayerController*& FortPC, struct FName& CategoryRowName, struct TArray<class UFortAccountItem*>& BannerIcons); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerIconItemFromRowName (Underlying native function: GetBannerIconItemFromRowName 0x86d8864)
	static class UFortHomebaseBannerIconItem* GetBannerIconItemFromRowName(class AFortPlayerController*& FortPC, struct FName& BannerIconRowName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerIconCategoryRowName (Underlying native function: GetBannerIconCategoryRowName 0x86d87d4)
	static struct FName GetBannerIconCategoryRowName(struct FName& BannerIconRowName); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerIconCategoryName (Underlying native function: GetBannerIconCategoryName 0x86d86c8)
	static struct FText GetBannerIconCategoryName(struct FName& CategoryRowName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerFullUsageRightsFromRowName (Underlying native function: GetBannerFullUsageRightsFromRowName 0x86d8630)
	static bool GetBannerFullUsageRightsFromRowName(struct FName& BannerIconRowName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerColorsForCategory (Underlying native function: GetBannerColorsForCategory 0x86d84bc)
	static void GetBannerColorsForCategory(class AFortPlayerController*& FortPC, struct FName& CategoryRowName, struct TArray<class UFortAccountItem*>& BannerColors); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerColorSecondaryColorFromRowName (Underlying native function: GetBannerColorSecondaryColorFromRowName 0x86d83fc)
	static struct FLinearColor GetBannerColorSecondaryColorFromRowName(struct FName& BannerColorRowName); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerColorSecondaryColor (Underlying native function: GetBannerColorSecondaryColor 0x86d8360)
	static struct FLinearColor GetBannerColorSecondaryColor(class UFortHomebaseBannerColorItem*& BannerColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerColorPrimaryColorFromRowName (Underlying native function: GetBannerColorPrimaryColorFromRowName 0x1641108)
	static struct FLinearColor GetBannerColorPrimaryColorFromRowName(struct FName& BannerColorRowName); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerColorPrimaryColor (Underlying native function: GetBannerColorPrimaryColor 0x86d82c4)
	static struct FLinearColor GetBannerColorPrimaryColor(class UFortHomebaseBannerColorItem*& BannerColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerColorItemFromRowName (Underlying native function: GetBannerColorItemFromRowName 0x86d7f40)
	static class UFortHomebaseBannerColorItem* GetBannerColorItemFromRowName(class AFortPlayerController*& FortPC, struct FName& BannerColorRowName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerColorFromRowName (Underlying native function: GetBannerColorFromRowName 0x1641020)
	static struct FHomebaseBannerColor GetBannerColorFromRowName(struct FName& BannerColorRowName); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerColorCategoryRowName (Underlying native function: GetBannerColorCategoryRowName 0x86d7eb0)
	static struct FName GetBannerColorCategoryRowName(struct FName& BannerColorRowName); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerColorCategoryName (Underlying native function: GetBannerColorCategoryName 0x86d7da4)
	static struct FText GetBannerColorCategoryName(struct FName& CategoryRowName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBannerUtilities.GetBannerColor (Underlying native function: GetBannerColor 0x86d7cec)
	static struct FHomebaseBannerColor GetBannerColor(class UFortHomebaseBannerColorItem*& BannerColor); // (Final | Native | Static | Public | BlueprintCallable)
};

