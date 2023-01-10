// Class /Script/FortniteGame.BuildingFoundation
// Size: 0x12b0
class ABuildingFoundation : public ABuildingSMActor
{
	struct TArray<class UBuildingGroup*> BuildingGroups; // 0xde0 (0x10)
	struct TArray<struct TWeakObjectPtr<class UWorld>> AdditionalWorlds; // 0xdf0 (0x10)
	struct FVector BuildingDeconstructorOrigin; // 0xe00 (0x18)
	struct FVector BuildingDeconstructorExtent; // 0xe18 (0x18)
	unsigned char bConditionalFoundation; // 0xe30 (0x1)
	unsigned char bServerStreamedInLevel; // 0xe30 (0x1)
	unsigned char bShowHLODWhenDisabled; // 0xe30 (0x1)
	unsigned char bFlipXAxis; // 0xe30 (0x1)
	unsigned char bFlipYAxis; // 0xe30 (0x1)
	unsigned char bOverrideNavigationGraphCells; // 0xe30 (0x1)
	unsigned char bHasExcludedZone; // 0xe30 (0x1)
	unsigned char bForceDitheringTransition; // 0xe30 (0x1)
	unsigned char bStreamingDataBasedBounds; // 0xe31 (0x1)
	unsigned char unreflected_e32[0x1]; // 0xe32 (0x1) 
	enum EDynamicFoundationEnabledState FoundationEnabledState; // 0xe33 (0x1)
	enum EDynamicFoundationType DynamicFoundationType; // 0xe34 (0x1)
	struct TEnumAsByte<EBuildingFoundationType> FoundationType; // 0xe35 (0x1)
	unsigned char unreflected_e36[0x2]; // 0xe36 (0x2) 
	int NavExclusionMinX; // 0xe38 (0x4)
	int NavExclusionMaxX; // 0xe3c (0x4)
	int NavExclusionMinY; // 0xe40 (0x4)
	int NavExclusionMaxY; // 0xe44 (0x4)
	struct FBox StreamingBoundingBox; // 0xe48 (0x38)
	struct FName LevelToStream; // 0xe80 (0x4)
	unsigned char unreflected_e84[0x4]; // 0xe84 (0x4) 
	struct FGameplayTagQuery BuildingGroupFilter; // 0xe88 (0x48)
	struct FGameplayTag MapLocationTag; // 0xed0 (0x4)
	unsigned char unreflected_ed4[0xc]; // 0xed4 (0xc) 
	struct FSlateBrush LandIcon; // 0xee0 (0xc0)
	struct FVector LandIconWorldOffset; // 0xfa0 (0x18)
	struct FText MapLocationText; // 0xfb8 (0x18)
	struct FVector MapLocationTextOffset; // 0xfd0 (0x18)
	float LandIconAdditionalRenderYaw; // 0xfe8 (0x4)
	bool bRotateLandIconWorldOffset; // 0xfec (0x1)
	unsigned char unreflected_fed[0x3]; // 0xfed (0x3) 
	struct FVector MapLocationOverride; // 0xff0 (0x18)
	bool bShadowLayer; // 0x1008 (0x1)
	unsigned char unreflected_1009[0x7]; // 0x1009 (0x7) 
	struct FBuildingFoundationStreamingData StreamingData; // 0x1010 (0xc8)
	struct TArray<class AFortHLODSMActor*> SpawnedLODActors; // 0x10d8 (0x10)
	struct TArray<float> SpawnedLODActorsMinDrawDistances; // 0x10e8 (0x10)
	struct TArray<class AFortHLODSMActor*> ChildSpawnedLODActors; // 0x10f8 (0x10)
	struct TArray<class ALODActor*> HLODActors; // 0x1108 (0x10)
	class ABuildingFoundation* ParentFoundation; // 0x1118 (0x8)
	float ProxyMeshMaxDrawDistanceMultiplier; // 0x1120 (0x4)
	unsigned char unreflected_1124[0xc]; // 0x1124 (0xc) 
	class ULevelStreaming* LevelStreamInfo; // 0x1130 (0x8)
	unsigned char unreflected_1138[0x80]; // 0x1138 (0x80) 
	struct FDynamicBuildingFoundationRepData DynamicFoundationRepData; // 0x11b8 (0x38)
	unsigned char unreflected_11f0[0x10]; // 0x11f0 (0x10) 
	struct FTransform DynamicFoundationTransform; // 0x1200 (0x60)
	unsigned char unreflected_1260[0x40]; // 0x1260 (0x40) 
	struct FGuid FoundationGUID; // 0x12a0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingFoundation.UpdateMinimapDetailsLocation (Underlying native function: UpdateMinimapDetailsLocation 0x8358c14)
	void UpdateMinimapDetailsLocation(struct FVector& InLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.ShowHLODProxies (Underlying native function: ShowHLODProxies 0x8358b40)
	void ShowHLODProxies(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.SetDynamicFoundationTransform (Underlying native function: SetDynamicFoundationTransform 0x8358438)
	void SetDynamicFoundationTransform(struct FTransform& NewTransform); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.SetDynamicFoundationEnabled (Underlying native function: SetDynamicFoundationEnabled 0x6df775c)
	void SetDynamicFoundationEnabled(bool& bEnabled); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.OnStaticLevelShown (Underlying native function: OnStaticLevelShown 0x8357acc)
	void OnStaticLevelShown(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.OnRep_ServerStreamedInLevel (Underlying native function: OnRep_ServerStreamedInLevel 0x8357a58)
	void OnRepServerStreamedInLevel(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.OnRep_LevelToStream (Underlying native function: OnRep_LevelToStream 0x282ebc0)
	void OnRepLevelToStream(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.OnRep_DynamicFoundationRepData (Underlying native function: OnRep_DynamicFoundationRepData 0x835776c)
	void OnRepDynamicFoundationRepData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingFoundation.OnLevelStreamedOut (Underlying native function: OnLevelStreamedOut 0x8357378)
	void OnLevelStreamedOut(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.OnLevelStreamedIn (Underlying native function: OnLevelStreamedIn 0x8357364)
	void OnLevelStreamedIn(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.OnLevelShown (Underlying native function: OnLevelShown 0x8357350)
	void OnLevelShown(); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingFoundation.HideHLODProxies (Underlying native function: HideHLODProxies 0x835678c)
	void HideHLODProxies(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.GetStreamedInActors (Underlying native function: GetStreamedInActors 0x83564dc)
	bool GetStreamedInActors(struct TArray<class AActor*>& StreamedInActors); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyUnloadPreviewLevel (Underlying native function: EditorOnlyUnloadPreviewLevel 0x24f75e4)
	bool EditorOnlyUnloadPreviewLevel(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyRemoveAdditionalWorld (Underlying native function: EditorOnlyRemoveAdditionalWorld 0x8355dbc)
	bool EditorOnlyRemoveAdditionalWorld(struct FString& LevelToRemove); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyLoadPreviewLevel (Underlying native function: EditorOnlyLoadPreviewLevel 0x6ef1e14)
	bool EditorOnlyLoadPreviewLevel(bool& bCreateLevelInstance); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyGetAdditionalWorlds (Underlying native function: EditorOnlyGetAdditionalWorlds 0x7db30f4)
	struct TArray<struct FString> EditorOnlyGetAdditionalWorlds(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyExitBatchPreview (Underlying native function: EditorOnlyExitBatchPreview 0x273fd14)
	static void EditorOnlyExitBatchPreview(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyEnterBatchPreview (Underlying native function: EditorOnlyEnterBatchPreview 0x273fd14)
	static void EditorOnlyEnterBatchPreview(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyClearAdditionalWorlds (Underlying native function: EditorOnlyClearAdditionalWorlds 0x273fd14)
	void EditorOnlyClearAdditionalWorlds(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyAddTransformToPreviewLevel (Underlying native function: EditorOnlyAddTransformToPreviewLevel 0x8355cd8)
	bool EditorOnlyAddTransformToPreviewLevel(struct FTransform& DeltaTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.EditorOnlyAddAdditionalWorld (Underlying native function: EditorOnlyAddAdditionalWorld 0x6e90d24)
	void EditorOnlyAddAdditionalWorld(struct FString& LevelPackageName); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFoundation.DoesBuildingFoundationContainActor (Underlying native function: DoesBuildingFoundationContainActor 0x8355b44)
	bool DoesBuildingFoundationContainActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable | Const)
};

