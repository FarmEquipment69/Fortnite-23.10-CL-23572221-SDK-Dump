// Class /Script/AssetRegistry.AssetRegistryHelpers
// Size: 0x28
class UAssetRegistryHelpers : public UObject
{

	/* Functions */

	// Function /Script/AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath (Underlying native function: ToSoftObjectPath 0x99ca9f8)
	static struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues (Underlying native function: SetFilterTagsAndValues 0x99ca8a8)
	static struct FARFilter SetFilterTagsAndValues(struct FARFilter& InFilter, struct TArray<struct FTagAndValue>& InTagsAndValues); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsValid (Underlying native function: IsValid 0x99c9e20)
	static bool IsValid(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsUAsset (Underlying native function: IsUAsset 0x99c9d34)
	static bool IsUAsset(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsRedirector (Underlying native function: IsRedirector 0x99c9b84)
	static bool IsRedirector(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsAssetLoaded (Underlying native function: IsAssetLoaded 0x99c9a98)
	static bool IsAssetLoaded(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetTagValue (Underlying native function: GetTagValue 0x99c976c)
	static bool GetTagValue(struct FAssetData& InAssetData, struct FName& InTagName, struct FString& OutTagValue); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetFullName (Underlying native function: GetFullName 0x99c9388)
	static struct FString GetFullName(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetExportTextName (Underlying native function: GetExportTextName 0x99c91a0)
	static struct FString GetExportTextName(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetClass (Underlying native function: GetClass 0x99c8ec8)
	static class UClass* GetClass(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets (Underlying native function: GetBlueprintAssets 0x99c8d98)
	static void GetBlueprintAssets(struct FARFilter& InFilter, struct TArray<struct FAssetData>& OutAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAssetRegistry (Underlying native function: GetAssetRegistry 0x99c8614)
	static struct TScriptInterface<class IAssetRegistry> GetAssetRegistry(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAsset (Underlying native function: GetAsset 0x99c83e0)
	static class UObject* GetAsset(struct FAssetData& InAssetData); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AssetRegistry.AssetRegistryHelpers.CreateAssetData (Underlying native function: CreateAssetData 0x99c8004)
	static struct FAssetData CreateAssetData(class UObject*& InAsset, bool& bAllowBlueprintClass); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

