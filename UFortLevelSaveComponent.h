// Class /Script/FortniteGame.FortLevelSaveComponent
// Size: 0x8d8
class UFortLevelSaveComponent : public ULevelSaveComponent
{
	unsigned char unreflected_148[0xc8]; // 0x148 (0xc8) 
	struct FMulticastInlineDelegate OnClientSaveStateChanged; // 0x210 (0x10)
	struct FMulticastInlineDelegate OnClientBackupSaveStateChanged; // 0x220 (0x10)
	struct FMulticastInlineDelegate OnClientBackupRestoreStateChanged; // 0x230 (0x10)
	struct FMulticastInlineDelegate OnClientCheckpointDateChanged; // 0x240 (0x10)
	unsigned char unreflected_250[0x90]; // 0x250 (0x90) 
	struct TArray<struct FString> PaletteLinkCodes; // 0x2e0 (0x10)
	unsigned char unreflected_2f0[0x18]; // 0x2f0 (0x18) 
	class UFortCreativeRealEstatePlotItemDefinition* RestrictedPlotDefinition; // 0x308 (0x8)
	bool bAutoLoadFromRestrictedPlotDefinition; // 0x310 (0x1)
	unsigned char unreflected_311[0x3]; // 0x311 (0x3) 
	int LinkCodeNumberToAutoLoad; // 0x314 (0x4)
	bool bLoadRandomLinkCode; // 0x318 (0x1)
	bool bLoadMatchAssignedCode; // 0x319 (0x1)
	bool bCuratedHub; // 0x31a (0x1)
	bool bLoadPlaysetFromPlot; // 0x31b (0x1)
	unsigned char unreflected_31c[0x4]; // 0x31c (0x4) 
	struct FUniqueNetIdRepl AccountIdOfOwner; // 0x320 (0x30)
	struct TArray<struct FString> OwnerCreativePermissions; // 0x350 (0x10)
	unsigned char unreflected_360[0x50]; // 0x360 (0x50) 
	class UFortCreativeRealEstatePlotItem* LoadedPlot; // 0x3b0 (0x8)
	bool bPermissionsSaveInProgress; // 0x3b8 (0x1)
	bool bCurated; // 0x3b9 (0x1)
	unsigned char unreflected_3ba[0x6]; // 0x3ba (0x6) 
	struct FString LoadedPlotInstanceId; // 0x3c0 (0x10)
	struct FCreativeLoadedLinkData LoadedLinkData; // 0x3d0 (0x2c0)
	struct FCachedLinkAnalyticsData CachedAnalyticsData; // 0x690 (0x40)
	bool bIsLoaded; // 0x6d0 (0x1)
	bool bIsAutoSaving; // 0x6d1 (0x1)
	enum EBackupSaveState BackupSaveState; // 0x6d2 (0x1)
	enum EBackupSaveState RestoringState; // 0x6d3 (0x1)
	unsigned char unreflected_6d4[0x4]; // 0x6d4 (0x4) 
	struct FDateTime* LastCheckpointDateUtc; // 0x6d8 (0x8)
	unsigned char unreflected_6e0[0x48]; // 0x6e0 (0x48) 
	struct FLevelInstanceList LevelInstanceList; // 0x728 (0x10)
	bool bOptedInForDeviceUpgrades; // 0x738 (0x1)
	unsigned char unreflected_739[0xbf]; // 0x739 (0xbf) 
	int PublishRateLimitSeconds; // 0x7f8 (0x4)
	unsigned char unreflected_7fc[0xc]; // 0x7fc (0xc) 
	int BackupRateLimitSeconds; // 0x808 (0x4)
	unsigned char unreflected_80c[0xc]; // 0x80c (0xc) 
	int RestoreRateLimitSeconds; // 0x818 (0x4)
	unsigned char unreflected_81c[0x4c]; // 0x81c (0x4c) 
	struct TMap<struct FUniqueNetIdRepl, float> ReporterUniqueIds; // 0x868 (0x50)
	unsigned char padding_8b8[0x20]; // 0x8b8 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortLevelSaveComponent.RenameLevelInstance (Underlying native function: RenameLevelInstance 0x8717ab4)
	bool RenameLevelInstance(struct FGuid& LevelInstanceGuid, struct FString& NewLevelName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_RestoringStateChanged (Underlying native function: OnRep_RestoringStateChanged 0x8717550)
	void OnRepRestoringStateChanged(enum EBackupSaveState& OldValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_PaletteLinkCodes (Underlying native function: OnRep_PaletteLinkCodes 0x87174fc)
	void OnRepPaletteLinkCodes(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_OwnerCreativePermissions (Underlying native function: OnRep_OwnerCreativePermissions 0x87174e8)
	void OnRepOwnerCreativePermissions(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_LoadedPlotInstanceId (Underlying native function: OnRep_LoadedPlotInstanceId 0x87174a0)
	void OnRepLoadedPlotInstanceId(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_LoadedLinkData (Underlying native function: OnRep_LoadedLinkData 0x871748c)
	void OnRepLoadedLinkData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_Loaded (Underlying native function: OnRep_Loaded 0x8717478)
	void OnRepLoaded(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_LevelInstanceList (Underlying native function: OnRep_LevelInstanceList 0x871745c)
	void OnRepLevelInstanceList(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_LastCheckpointDate (Underlying native function: OnRep_LastCheckpointDate 0x87173cc)
	void OnRepLastCheckpointDate(struct FDateTime*& OldValue); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_IsAutoSaving (Underlying native function: OnRep_IsAutoSaving 0x8717314)
	void OnRepIsAutoSaving(bool& bOldValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_CachedAnalyticsData (Underlying native function: OnRep_CachedAnalyticsData 0x8717288)
	void OnRepCachedAnalyticsData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortLevelSaveComponent.OnRep_BackupSaveState (Underlying native function: OnRep_BackupSaveState 0x87171f8)
	void OnRepBackupSaveState(enum EBackupSaveState& OldValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortLevelSaveComponent.K2_GetLoadedLinkData (Underlying native function: K2_GetLoadedLinkData 0x87147e0)
	void K2GetLoadedLinkData(struct FCreativeLoadedLinkData& LinkData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelSaveComponent.IsLoaded (Underlying native function: IsLoaded 0x83d6f74)
	bool IsLoaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelSaveComponent.IsCurated (Underlying native function: IsCurated 0x8714780)
	bool IsCurated(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelSaveComponent.GetAccountIdOfOwner (Underlying native function: GetAccountIdOfOwner 0x8713960)
	struct FUniqueNetIdRepl GetAccountIdOfOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelSaveComponent.DestroyLevelInstance (Underlying native function: DestroyLevelInstance 0x8713670)
	bool DestroyLevelInstance(struct FGuid& LevelInstanceGuid); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortLevelSaveComponent.CloudSaveFinished (Underlying native function: CloudSaveFinished 0x87135a4)
	void CloudSaveFinished(struct FAsyncTaskResult& Result); // (Final | Native | Private | HasOutParms)
};

