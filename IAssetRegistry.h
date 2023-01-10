// Class /Script/AssetRegistry.AssetRegistry
// Size: 0x28
class IAssetRegistry : public IInterface
{

	/* Functions */

	// Function /Script/AssetRegistry.AssetRegistry.WaitForPackage (Underlying native function: WaitForPackage 0x99cac7c)
	void WaitForPackage(struct FString& PackageName); // (Native | Public | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.WaitForCompletion (Underlying native function: WaitForCompletion 0x99cac64)
	void WaitForCompletion(); // (Native | Public | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.UseFilterToExcludeAssets (Underlying native function: UseFilterToExcludeAssets 0x99cab2c)
	void UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.SearchAllAssets (Underlying native function: SearchAllAssets 0x99ca824)
	void SearchAllAssets(bool& bSynchronousSearch); // (Native | Public | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.ScanPathsSynchronous (Underlying native function: ScanPathsSynchronous 0x99ca6fc)
	void ScanPathsSynchronous(struct TArray<struct FString>& InPaths, bool& bForceRescan, bool& bIgnoreDenyListScanFilters); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.ScanModifiedAssetFiles (Underlying native function: ScanModifiedAssetFiles 0x99ca660)
	void ScanModifiedAssetFiles(struct TArray<struct FString>& InFilePaths); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.ScanFilesSynchronous (Underlying native function: ScanFilesSynchronous 0x99ca570)
	void ScanFilesSynchronous(struct TArray<struct FString>& InFilePaths, bool& bForceRescan); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.RunAssetsThroughFilter (Underlying native function: RunAssetsThroughFilter 0x99ca438)
	void RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.PrioritizeSearchPath (Underlying native function: PrioritizeSearchPath 0x99ca2e0)
	void PrioritizeSearchPath(struct FString& PathToPrioritize); // (Native | Public | BlueprintCallable)

	// Function /Script/AssetRegistry.AssetRegistry.K2_GetReferencers (Underlying native function: K2_GetReferencers 0x99ca1a0)
	bool K2GetReferencers(struct FName& PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.K2_GetDependencies (Underlying native function: K2_GetDependencies 0x99ca060)
	bool K2GetDependencies(struct FName& PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath (Underlying native function: K2_GetAssetByObjectPath 0x99c9f14)
	struct FAssetData K2GetAssetByObjectPath(struct FSoftObjectPath& ObjectPath, bool& bIncludeOnlyOnDiskAssets); // (0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.IsSearchAsync (Underlying native function: IsSearchAsync 0x99c9d0c)
	bool IsSearchAsync(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AssetRegistry.AssetRegistry.IsSearchAllAssets (Underlying native function: IsSearchAllAssets 0x99c9ce4)
	bool IsSearchAllAssets(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AssetRegistry.AssetRegistry.IsLoadingAssets (Underlying native function: IsLoadingAssets 0x482ebd0)
	bool IsLoadingAssets(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AssetRegistry.AssetRegistry.HasAssets (Underlying native function: HasAssets 0x99c99d0)
	bool HasAssets(struct FName& PackagePath, bool& bRecursive); // (Native | Public | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetSubPaths (Underlying native function: GetSubPaths 0x99c9570)
	void GetSubPaths(struct FString& InBasePath, struct TArray<struct FString>& OutPathList, bool& bInRecurse); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetDerivedClassNames (Underlying native function: GetDerivedClassNames 0x99c8fb4)
	void GetDerivedClassNames(struct TArray<struct FTopLevelAssetPath*>& ClassNames, struct TSet<struct FTopLevelAssetPath*>& ExcludedClassNames, struct TSet<struct FTopLevelAssetPath*>& OutDerivedClassNames); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPaths (Underlying native function: GetAssetsByPaths 0x99c8bc0)
	bool GetAssetsByPaths(struct TArray<struct FName>& PackagePaths, struct TArray<struct FAssetData>& OutAssetData, bool& bRecursive, bool& bIncludeOnlyOnDiskAssets); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPath (Underlying native function: GetAssetsByPath 0x99c8a54)
	bool GetAssetsByPath(struct FName& PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool& bRecursive, bool& bIncludeOnlyOnDiskAssets); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPackageName (Underlying native function: GetAssetsByPackageName 0x99c88e8)
	bool GetAssetsByPackageName(struct FName& PackageName, struct TArray<struct FAssetData>& OutAssetData, bool& bIncludeOnlyOnDiskAssets, bool& bSkipARFilteredAssets); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByClass (Underlying native function: GetAssetsByClass 0x99c87c0)
	bool GetAssetsByClass(struct FTopLevelAssetPath*& ClassPathName, struct TArray<struct FAssetData>& OutAssetData, bool& bSearchSubClasses); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssets (Underlying native function: GetAssets 0x99c8644)
	bool GetAssets(struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData, bool& bSkipARFilteredAssets); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAssetByObjectPath (Underlying native function: GetAssetByObjectPath 0x99c84f8)
	struct FAssetData GetAssetByObjectPath(struct FName& ObjectPath, bool& bIncludeOnlyOnDiskAssets); // (Native | Public | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAncestorClassNames (Underlying native function: GetAncestorClassNames 0x99c82e4)
	bool GetAncestorClassNames(struct FTopLevelAssetPath*& ClassPathName, struct TArray<struct FTopLevelAssetPath*>& OutAncestorClassNames); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAllCachedPaths (Underlying native function: GetAllCachedPaths 0x99c8248)
	void GetAllCachedPaths(struct TArray<struct FString>& OutPathList); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AssetRegistry.AssetRegistry.GetAllAssets (Underlying native function: GetAllAssets 0x99c8154)
	bool GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool& bIncludeOnlyOnDiskAssets); // (Native | Public | HasOutParms | BlueprintCallable | Const)
};

