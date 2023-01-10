// Class /Script/FortniteGame.FortVolumeManager
// Size: 0x5f0
class AFortVolumeManager : public AInfo
{
	unsigned char unreflected_288[0x30]; // 0x288 (0x30) 
	struct FMulticastInlineDelegate OnClientEnterVolume; // 0x2b8 (0x10)
	struct FMulticastInlineDelegate OnClientExitVolume; // 0x2c8 (0x10)
	struct FMulticastInlineDelegate OnVolumeStateChanged; // 0x2d8 (0x10)
	struct TArray<class AFortVolume*> VolumeObjects; // 0x2e8 (0x10)
	struct FFortVolumeActiveUsers VolumeActivePlayers; // 0x2f8 (0x210)
	unsigned char unreflected_508[0x68]; // 0x508 (0x68) 
	struct TWeakObjectPtr<class UCreativeAssetCostDirectory> AssetCostDirectory; // 0x570 (0x28)
	unsigned char bInSpawningStartup; // 0x598 (0x1)
	unsigned char unreflected_599[0xf]; // 0x599 (0xf) 
	struct TArray<struct FVolumePlayerStateInfo> PendingPlayers; // 0x5a8 (0x10)
	unsigned char unreflected_5b8[0x8]; // 0x5b8 (0x8) 
	class UFortCreativeGeneralThrottleManager* FortCreativeGeneralThrottleManager; // 0x5c0 (0x8)
	struct FMulticastInlineDelegate OnClientVolumeUGCViewableStateChanged; // 0x5c8 (0x10)
	struct FMulticastInlineDelegate OnServerVolumeUGCViewableStateChanged; // 0x5d8 (0x10)
	unsigned char padding_5e8[0x8]; // 0x5e8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortVolumeManager.WillVolumeDeleteAfterActorSpawn (Underlying native function: WillVolumeDeleteAfterActorSpawn 0x83d9290)
	bool WillVolumeDeleteAfterActorSpawn(class AFortVolume*& Volume); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.VolumeContainsUser (Underlying native function: VolumeContainsUser 0x83d91c8)
	bool VolumeContainsUser(class APlayerState*& PlayerState, class AFortVolume*& Volume); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.TryActivateQueuedVolumes (Underlying native function: TryActivateQueuedVolumes 0x83d9148)
	void TryActivateQueuedVolumes(enum EAthenaGamePhase& GamePhase); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeManager.SpawnVolume (Underlying native function: SpawnVolume 0x83d8f9c)
	class AFortVolume* SpawnVolume(class UClass*& VolumeActor, class AActor*& VolumeOwner, class UFortPlaysetItemDefinition*& Playset, struct FVector& Location, struct FRotator& Rotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeManager.ShouldShowPublishWatermarkForVolume (Underlying native function: ShouldShowPublishWatermarkForVolume 0x83d8bb0)
	bool ShouldShowPublishWatermarkForVolume(class AFortVolume*& Volume, struct FString& CreatorName, struct FString& CreativeMnemonic, struct FText& Title, int& CreativeVersion); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.ResetVolumeAndLevelRecord (Underlying native function: ResetVolumeAndLevelRecord 0x83d87b8)
	void ResetVolumeAndLevelRecord(class AFortVolume*& Volume, class AFortPlayerController*& RequestingFortPC); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeManager.RemovePawnNotRespawningInsideVolume (Underlying native function: RemovePawnNotRespawningInsideVolume 0x83d84e4)
	void RemovePawnNotRespawningInsideVolume(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortVolumeManager.IncrementUserIslandLoading (Underlying native function: IncrementUserIslandLoading 0x83d7ca4)
	void IncrementUserIslandLoading(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortVolumeManager.HandleVolumeReset (Underlying native function: HandleVolumeReset 0x83d7aa0)
	void HandleVolumeReset(class AFortVolume*& VolumeResetting); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeManager.HandleSpatialLoadingStateChanged (Underlying native function: HandleSpatialLoadingStateChanged 0x83d79c8)
	void HandleSpatialLoadingStateChanged(enum ESpatialLoadingState& NewState, class AFortVolume*& Volume); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeManager.HandlePlayerPawnPossessed (Underlying native function: HandlePlayerPawnPossessed 0x83d7914)
	void HandlePlayerPawnPossessed(class APawn*& Pawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortVolumeManager.HandleActorHealthChanged (Underlying native function: HandleActorHealthChanged 0x83d784c)
	void HandleActorHealthChanged(class AActor*& Actor, float& NewHealth); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeManager.GetVolumesForLocation (Underlying native function: GetVolumesForLocation 0x83d7748)
	bool GetVolumesForLocation(struct FVector& Location, struct TArray<class AFortVolume*>& Volumes); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.GetVolumesForActor (Underlying native function: GetVolumesForActor 0x83d7618)
	bool GetVolumesForActor(class AActor*& Actor, struct TArray<class AFortVolume*>& Volumes, bool& bUseActorBounds); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.GetVolumePlayerCount (Underlying native function: GetVolumePlayerCount 0x83d7584)
	int GetVolumePlayerCount(class AFortVolume*& Volume); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.GetVolumeManager (Underlying native function: GetVolumeManager 0x83d7428)
	static void GetVolumeManager(class UObject*& WorldContextObject, class AFortVolumeManager*& OutVolumeManager, enum EVolumeValidityResult& OutIsValid); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeManager.GetVolumeForPlayerState (Underlying native function: GetVolumeForPlayerState 0x83d7398)
	class AFortVolume* GetVolumeForPlayerState(class APlayerState*& PlayerState); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.GetVolumeForLocationWithComponent (Underlying native function: GetVolumeForLocationWithComponent 0x83d7240)
	class AFortVolume* GetVolumeForLocationWithComponent(struct FVector& Location, class UClass*& ComponentType, struct TArray<class UActorComponent*>& OutComponents); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeManager.GetVolumeForLocation (Underlying native function: GetVolumeForLocation 0x83d719c)
	class AFortVolume* GetVolumeForLocation(struct FVector& Location); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.GetVolumeForActorWithComponent (Underlying native function: GetVolumeForActorWithComponent 0x83d701c)
	class AFortVolume* GetVolumeForActorWithComponent(class AActor*& Actor, class UClass*& ComponentType, struct TArray<class UActorComponent*>& OutComponents, bool& bUseActorBounds); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeManager.GetVolumeForActor (Underlying native function: GetVolumeForActor 0x83d6f8c)
	class AFortVolume* GetVolumeForActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.GetPlayerStateFromNetID (Underlying native function: GetPlayerStateFromNetID 0x83d6e6c)
	class AFortPlayerState* GetPlayerStateFromNetID(struct FUniqueNetIdRepl& UniqueNetId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.GetNearestIslandVolumeForLocation (Underlying native function: GetNearestIslandVolumeForLocation 0x83d6cf8)
	class AFortVolume* GetNearestIslandVolumeForLocation(struct FVector& Location, struct FVector& OutNearestPoint, float& Padding); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.GetMinigameFromVolume (Underlying native function: GetMinigameFromVolume 0x83d6c68)
	class AFortMinigame* GetMinigameFromVolume(class AActor*& Actor); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.GetMinigameForVolume (Underlying native function: GetMinigameForVolume 0x83d6be8)
	static class AFortMinigame* GetMinigameForVolume(class AActor*& Volume); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeManager.GetMinigameForPlayerState (Underlying native function: GetMinigameForPlayerState 0x83d6b68)
	static class AFortMinigame* GetMinigameForPlayerState(class APlayerState*& PlayerState); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeManager.GetAllPlayerStatesInVolume (Underlying native function: GetAllPlayerStatesInVolume 0x83d680c)
	struct TArray<class APlayerState*> GetAllPlayerStatesInVolume(class AFortVolume*& Volume); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.GetAllPlayersInVolume (Underlying native function: GetAllPlayersInVolume 0x83d68d8)
	struct TArray<class AController*> GetAllPlayersInVolume(class AFortVolume*& Volume); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVolumeManager.EnterReadOnlyForVolume (Underlying native function: EnterReadOnlyForVolume 0x83d6508)
	void EnterReadOnlyForVolume(class AFortVolume*& Volume); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVolumeManager.DoesThermometerHaveBudgetForActor (Underlying native function: DoesThermometerHaveBudgetForActor 0x83d6350)
	struct FEvaluationResult DoesThermometerHaveBudgetForActor(class AActor*& InstigatorActor, class AActor*& TestActor, struct FVector& Location, struct FRotator& Rotation); // (Final | Native | Public | HasOutParms | HasDefaults | Const)

	// Function /Script/FortniteGame.FortVolumeManager.DestroyBuildingWhenNotInSameVolumeAsPlayerController (Underlying native function: DestroyBuildingWhenNotInSameVolumeAsPlayerController 0x83d61a8)
	void DestroyBuildingWhenNotInSameVolumeAsPlayerController(class AFortPlayerController*& PlayerController, class ABuildingActor*& TestBuildingActor); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortVolumeManager.DecrementUserIslandLoading (Underlying native function: DecrementUserIslandLoading 0x83d6194)
	void DecrementUserIslandLoading(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortVolumeManager.CanCreatePlayset (Underlying native function: CanCreatePlayset 0x83d5ef0)
	static bool CanCreatePlayset(class AFortPlayerPawn*& Thrower, struct FVector& StartLocation, struct FRotator& PlaysetRotation, class UFortPlaysetItemDefinition*& NewPlayset); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortVolumeManager.AttemptAddToVolumeAfterDelay (Underlying native function: AttemptAddToVolumeAfterDelay 0x83d5c8c)
	void AttemptAddToVolumeAfterDelay(class AActor*& Actor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeManager.AreIslandsLoading (Underlying native function: AreIslandsLoading 0x83d5c70)
	bool AreIslandsLoading(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortVolumeManager.AddOrRemovePawnAfterVehicleChange (Underlying native function: AddOrRemovePawnAfterVehicleChange 0x83d5b4c)
	void AddOrRemovePawnAfterVehicleChange(class AFortPlayerPawn*& FortPawn, class AActor*& NewVehicle, class AActor*& OldVehicle); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeManager.AddOrRemovePawn (Underlying native function: AddOrRemovePawn 0x83d5674)
	void AddOrRemovePawn(class AFortPawn*& FortPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVolumeManager.ActorsAreInSameVolume (Underlying native function: ActorsAreInSameVolume 0x83d54fc)
	bool ActorsAreInSameVolume(class AActor*& Left, class AActor*& Right); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

