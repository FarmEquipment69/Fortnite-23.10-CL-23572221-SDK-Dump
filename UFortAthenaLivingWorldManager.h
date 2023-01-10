// Class /Script/LagerRuntime.FortAthenaLivingWorldManager
// Size: 0x970
class UFortAthenaLivingWorldManager : public UGameStateComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct TWeakObjectPtr<class UFortAthenaLivingWorldConfigData> DefaultLagerConfig; // 0xa8 (0x28)
	struct TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides; // 0xd0 (0x10)
	struct FScalableFloat LagerEnabled; // 0xe0 (0x28)
	struct TMap<struct FGameplayTag, class UClass*> TaggedSpawnActionClassMap; // 0x108 (0x50)
	struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> PointProviders; // 0x158 (0x10)
	unsigned char unreflected_168[0x8]; // 0x168 (0x8) 
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0x170 (0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0x230 (0x10)
	struct FSlateBrush SpecialActorCompassIconBrush; // 0x240 (0xc0)
	struct FVector2D SpecialActorCompassIconScale; // 0x300 (0x10)
	struct TArray<class UClass*> SpawnedSingleUseSpawnerData; // 0x310 (0x10)
	class UWorld* CachedWorld; // 0x320 (0x8)
	class UFortAthenaLivingWorldConfigData* CachedConfig; // 0x328 (0x8)
	struct TArray<class UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances; // 0x330 (0x10)
	class UFortSeasonalEventManager* CachedSeasonalEventManager; // 0x340 (0x8)
	struct TArray<struct TWeakObjectPtr<class UClass>> ActorClassToPreloadOnClient; // 0x348 (0x10)
	struct FFortAthenaLivingWorldPlayerTracker PlayerTracker; // 0x358 (0xb0)
	struct FFortAthenaLivingWorldPreloader Preloader; // 0x408 (0xe0)
	unsigned char unreflected_4e8[0x1b0]; // 0x4e8 (0x1b0) 
	struct TArray<class AActor*> RuntimePointProviderList; // 0x698 (0x10)
	struct TSet<class AActor*> RuntimePointProviderOwners; // 0x6a8 (0x50)
	unsigned char unreflected_6f8[0x1f0]; // 0x6f8 (0x1f0) 
	struct TMap<class UClass*, class UFortAthenaLivingWorldSpawnAction*> SpawnActionCache; // 0x8e8 (0x50)
	class AActor* EQSHelper; // 0x938 (0x8)
	class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* DebugDensityMinimapIndicator; // 0x940 (0x8)
	unsigned char padding_948[0x28]; // 0x948 (0x28)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.UnregisterDensityReservoir (Underlying native function: UnregisterDensityReservoir 0x6e920f4)
	void UnregisterDensityReservoir(class AActor*& ActorDensityReservoir); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEvent (Underlying native function: TrySpawnEvent 0x6e91f28)
	bool TrySpawnEvent(struct FDataTableRowHandle& EventEntry, struct FTransform& SpawnLocation, struct FDelegate& OnRequestFinished, int& RequestId); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.StartEncounter (Underlying native function: StartEncounter 0x6e91c0c)
	class UFortAthenaLivingWorldEncounterInstance* StartEncounter(struct TWeakObjectPtr<class UFortAthenaLivingWorldEncounter>& EncounterType, struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders, class AActor*& ActorDensityReservoir); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.ResetEncounter (Underlying native function: ResetEncounter 0x6e91798)
	void ResetEncounter(class UFortAthenaLivingWorldEncounterInstance*& EncounterInstance); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration (Underlying native function: RequestEventGeneration 0x6e91768)
	void RequestEventGeneration(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RegisterDensityReservoir (Underlying native function: RegisterDensityReservoir 0x6e912a0)
	void RegisterDensityReservoir(class AActor*& ActorDensityReservoir, float& Density, float& Range); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget (Underlying native function: QueryEventBudget 0x6e911c0)
	int QueryEventBudget(struct FDataTableRowHandle& EventEntry, class AActor*& SpawnLocation); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization (Underlying native function: OnWorldFinishedInitialization 0x6e90fd0)
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy (Underlying native function: OnUnmanagedDensityReservoirActorDestroy 0x6e90e6c)
	void OnUnmanagedDensityReservoirActorDestroy(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy (Underlying native function: OnSpawnedActorDestroy 0x6e90ca4)
	void OnSpawnedActorDestroy(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator (Underlying native function: OnRep_DebugDensityMinimapIndicator 0x6df70d4)
	void OnRepDebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator*& OldMapIndicator); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnRep_ActorClassToPreloadOnClient (Underlying native function: OnRep_ActorClassToPreloadOnClient 0x2fd94d4)
	void OnRepActorClassToPreloadOnClient(); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded (Underlying native function: OnPatrolPathAdded 0x6e90a50)
	void OnPatrolPathAdded(class AFortAthenaPatrolPath*& PatrolPath); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnDebugSpawnEventSpawned (Underlying native function: OnDebugSpawnEventSpawned 0x6e8fec4)
	void OnDebugSpawnEventSpawned(struct TArray<class AActor*>& SpawnedActors, bool& bSuccess); // (Final | Native | Private | HasOutParms)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0x6e8fcb8)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned (Underlying native function: OnActorSpawned 0x6e8f794)
	void OnActorSpawned(class AActor*& Actor, int& RequestId); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider (Underlying native function: LivingWorldManagerUnregisterPointProvider 0x6e8ee18)
	static void LivingWorldManagerUnregisterPointProvider(class AActor*& PointProvider); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging (Underlying native function: LivingWorldManagerToggleVerboseLogging 0x273fd14)
	void LivingWorldManagerToggleVerboseLogging(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents (Underlying native function: LivingWorldManagerToggleGenerateEvents 0x273fd14)
	void LivingWorldManagerToggleGenerateEvents(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleDensityDisplay (Underlying native function: LivingWorldManagerToggleDensityDisplay 0x273fd14)
	void LivingWorldManagerToggleDensityDisplay(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap (Underlying native function: LivingWorldManagerToggleActorMinimap 0x6e8f5f8)
	void LivingWorldManagerToggleActorMinimap(struct FString& Name); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSetEventGenerationEnabled (Underlying native function: LivingWorldManagerSetEventGenerationEnabled 0x6df775c)
	void LivingWorldManagerSetEventGenerationEnabled(bool& bInGenerateEvents); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider (Underlying native function: LivingWorldManagerRegisterPointProvider 0x6e8ee18)
	static void LivingWorldManagerRegisterPointProvider(class AActor*& PointProvider); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor (Underlying native function: LivingWorldManagerProviderDebugActor 0x6e8edb4)
	void LivingWorldManagerProviderDebugActor(int& ProviderIndex); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents (Underlying native function: LivingWorldManagerGenerateEvents 0x273fd14)
	void LivingWorldManagerGenerateEvents(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush (Underlying native function: LivingWorldManagerFlush 0x273fd14)
	void LivingWorldManagerFlush(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpSpawnCount (Underlying native function: LivingWorldManagerDumpSpawnCount 0x273fd14)
	void LivingWorldManagerDumpSpawnCount(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpPrefabLevelBounds (Underlying native function: LivingWorldManagerDumpPrefabLevelBounds 0x273fd14)
	void LivingWorldManagerDumpPrefabLevelBounds(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpEventInstances (Underlying native function: LivingWorldManagerDumpEventInstances 0x273fd14)
	void LivingWorldManagerDumpEventInstances(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDebugEvent (Underlying native function: LivingWorldManagerDebugEvent 0x6e8e794)
	void LivingWorldManagerDebugEvent(struct FString& EventName, int& DebugIndex, struct FString& RuntimeSpawnDataName, struct FString& EncounterName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.IsEncounterCategoryActive (Underlying native function: IsEncounterCategoryActive 0x6e8e650)
	bool IsEncounterCategoryActive(struct TWeakObjectPtr<class UFortAthenaLivingWorldEncounter>& EncounterType); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.GetOwningEncounter (Underlying native function: GetOwningEncounter 0x6e8e354)
	class UFortAthenaLivingWorldEncounterInstance* GetOwningEncounter(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.GetLivingWorldManager (Underlying native function: GetLivingWorldManager 0x6e8e298)
	static class UFortAthenaLivingWorldManager* GetLivingWorldManager(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.EndEncounter (Underlying native function: EndEncounter 0x6e8e0a8)
	void EndEncounter(class UFortAthenaLivingWorldEncounterInstance*& EncounterInstance); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.CancelSpawnRequest (Underlying native function: CancelSpawnRequest 0x6e8de9c)
	void CancelSpawnRequest(int& RequestId); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.BuildDataRegistryResolverScope_Implementation (Underlying native function: BuildDataRegistryResolverScope_Implementation 0x6e8dc50)
	bool BuildDataRegistryResolverScopeImplementation(struct TArray<struct FName>& InOutResolverScopes, int& InOutPriority); // (Native | Public | HasOutParms | Const)
};

