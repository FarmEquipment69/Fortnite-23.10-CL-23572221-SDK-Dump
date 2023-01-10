// Class /Script/FortniteGame.FortAthenaCreativePortal
// Size: 0xf98
class AFortAthenaCreativePortal : public ABuildingGameplayActor
{
	unsigned char unreflected_9d8[0x8]; // 0x9d8 (0x8) 
	int PortalIndex; // 0x9e0 (0x4)
	unsigned char unreflected_9e4[0x4]; // 0x9e4 (0x4) 
	class AActor* DestinationActor; // 0x9e8 (0x8)
	struct FString OverrideImageURL; // 0x9f0 (0x10)
	struct FVector MarkerDetailsPointerOrigin; // 0xa00 (0x18)
	float MaxInstantTeleportDistance; // 0xa18 (0x4)
	unsigned char unreflected_a1c[0x4]; // 0xa1c (0x4) 
	struct FText LoadingText; // 0xa20 (0x18)
	struct FText UnloadingText; // 0xa38 (0x18)
	struct FText SavingText; // 0xa50 (0x18)
	struct FText TeleportingPlayersText; // 0xa68 (0x18)
	struct FText TeleportingVehiclesText; // 0xa80 (0x18)
	class AFortVolume* LinkedVolume; // 0xa98 (0x8)
	bool bReturnToCreativeHub; // 0xaa0 (0x1)
	bool bInErrorState; // 0xaa1 (0x1)
	bool bUserInitiatedLoad; // 0xaa2 (0x1)
	unsigned char unreflected_aa3[0x5]; // 0xaa3 (0x5) 
	struct FCreativeIslandData CachedEditIslandData; // 0xaa8 (0x58)
	struct FCreativeLoadedLinkData IslandInfo; // 0xb00 (0x2c0)
	struct FText VolumeStatus; // 0xdc0 (0x18)
	struct FString EditOverridePlaylist; // 0xdd8 (0x10)
	unsigned char unreflected_de8[0x18]; // 0xde8 (0x18) 
	struct FText SanitizedTitle; // 0xe00 (0x18)
	struct FText SanitizedTagline; // 0xe18 (0x18)
	struct FText SanitizedCreatorName; // 0xe30 (0x18)
	unsigned char unreflected_e48[0x8]; // 0xe48 (0x8) 
	class UPrimitiveComponent* InteractComponent; // 0xe50 (0x8)
	class UCapsuleComponent* OverlapComponent; // 0xe58 (0x8)
	unsigned char CurrentPopulation; // 0xe60 (0x1)
	unsigned char MaxAvailablePopulation; // 0xe61 (0x1)
	unsigned char unreflected_e62[0x6]; // 0xe62 (0x6) 
	struct FUniqueNetIdRepl OwningPlayer; // 0xe68 (0x30)
	struct TArray<struct FUniqueNetIdRepl> PlayersReady; // 0xe98 (0x10)
	bool bIsPublishedPortal; // 0xea8 (0x1)
	bool bIsUsingUGC; // 0xea9 (0x1)
	unsigned char unreflected_eaa[0x6]; // 0xeaa (0x6) 
	struct FVector TeleportLocation; // 0xeb0 (0x18)
	struct FScalableFloat TeleportExitDistance; // 0xec8 (0x28)
	unsigned char bTeleportLocationIsIslandStart; // 0xef0 (0x1)
	bool bDisallowPortalInteract; // 0xef1 (0x1)
	bool bLocalClientLacksPermission; // 0xef2 (0x1)
	bool bPortalOpen; // 0xef3 (0x1)
	unsigned char unreflected_ef4[0x4]; // 0xef4 (0x4) 
	struct FLocalPortalState PortalStateForLocalPlayer; // 0xef8 (0x20)
	unsigned char unreflected_f18[0x18]; // 0xf18 (0x18) 
	class AFortPlayerStateAthena* CachedOwningPlayerState; // 0xf30 (0x8)
	unsigned char unreflected_f38[0x10]; // 0xf38 (0x10) 
	class UTexture2DDynamic* ThumbnailTexture; // 0xf48 (0x8)
	unsigned char unreflected_f50[0x10]; // 0xf50 (0x10) 
	struct TWeakObjectPtr<class UCapsuleComponent> InteractIconPlacementCapsule; // 0xf60 (0x8)
	unsigned char unreflected_f68[0x12]; // 0xf68 (0x12) 
	unsigned char bForceUpdateInteraction; // 0xf7a (0x1)
	unsigned char padding_f7b[0x1d]; // 0xf7b (0x1d)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaCreativePortal.UpdateThumbnail (Underlying native function: UpdateThumbnail 0x7fee000)
	void UpdateThumbnail(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.UpdateIslandDisplayName (Underlying native function: UpdateIslandDisplayName 0x7fedfec)
	void UpdateIslandDisplayName(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.TeleportVehicle (Underlying native function: TeleportVehicle 0x7fedf6c)
	void TeleportVehicle(class AFortAthenaVehicle*& Vehicle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.TeleportPlayerToLinkedVolume (Underlying native function: TeleportPlayerToLinkedVolume 0x6d23b2c)
	void TeleportPlayerToLinkedVolume(class AFortPlayerPawn*& PlayerPawn, bool& bUseSpawnTags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.TeleportPlayerForPlotLoadComplete (Underlying native function: TeleportPlayerForPlotLoadComplete 0x7fede68)
	void TeleportPlayerForPlotLoadComplete(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.TeleportPlayer (Underlying native function: TeleportPlayer 0x7feddc4)
	void TeleportPlayer(class AFortPlayerPawn*& PlayerPawn, struct FRotator& TeleportRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.StartedPlotLoadForUser (Underlying native function: StartedPlotLoadForUser 0x7fedce4)
	void StartedPlotLoadForUser(struct FAsyncTaskResult& Result); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.ShouldPausePortalUpdates_Client (Underlying native function: ShouldPausePortalUpdates_Client 0x7feda78)
	bool ShouldPausePortalUpdatesClient(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.SetOverlapComponent (Underlying native function: SetOverlapComponent 0x7fed874)
	void SetOverlapComponent(class UCapsuleComponent*& InOverlapComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.SetInteractionInteractComponent (Underlying native function: SetInteractionInteractComponent 0x7fed7f4)
	void SetInteractionInteractComponent(class UPrimitiveComponent*& PrimitiveComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.SetInteractionDisplayWidget (Underlying native function: SetInteractionDisplayWidget 0x7fed774)
	void SetInteractionDisplayWidget(class UUserWidget*& DisplayWidget); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.SetHUDPointerOrigin (Underlying native function: SetHUDPointerOrigin 0x7fed6ec)
	void SetHUDPointerOrigin(struct FVector& NewPointerOrigin); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.ServerOnInteractWithIslandPortal (Has no native function)
	void ServerOnInteractWithIslandPortal(class AFortPlayerPawn*& InteractingPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.PortalOpenChanged (Has no native function)
	void PortalOpenChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.PopulationChanged (Has no native function)
	void PopulationChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OwningPlayerChanged (Has no native function)
	void OwningPlayerChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OverlappingOnBeginPlay (Has no native function)
	void OverlappingOnBeginPlay(class AActor*& Actor); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnVolumeManagerUserGeneratedContentRestrictionsChanged (Underlying native function: OnVolumeManagerUserGeneratedContentRestrictionsChanged 0x7fecfd8)
	void OnVolumeManagerUserGeneratedContentRestrictionsChanged(class AFortVolume*& Volume, bool& bRestrictionEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnUserGeneratedContentRestrictionsChanged (Underlying native function: OnUserGeneratedContentRestrictionsChanged 0x7fecf58)
	void OnUserGeneratedContentRestrictionsChanged(bool& bRestrictionEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnUnloadPlotComplete (Underlying native function: OnUnloadPlotComplete 0x7fecf44)
	void OnUnloadPlotComplete(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnUGCPaletteChanged (Underlying native function: OnUGCPaletteChanged 0x7fececc)
	void OnUGCPaletteChanged(struct TArray<struct FString>& UpdatedLinkCodes); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnThumbnailTextureReady (Has no native function)
	void OnThumbnailTextureReady(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_VolumeStatus (Underlying native function: OnRep_VolumeStatus 0x7feceb8)
	void OnRepVolumeStatus(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_PublishedPortal (Underlying native function: OnRep_PublishedPortal 0x7fecdd8)
	void OnRepPublishedPortal(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_PortalOpen (Underlying native function: OnRep_PortalOpen 0x7fecdc4)
	void OnRepPortalOpen(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_PopulationChanged (Underlying native function: OnRep_PopulationChanged 0x7fecd94)
	void OnRepPopulationChanged(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_PlayersReady (Underlying native function: OnRep_PlayersReady 0x7fecdc4)
	void OnRepPlayersReady(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_OwningPlayer (Underlying native function: OnRep_OwningPlayer 0x7fecda8)
	void OnRepOwningPlayer(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_MaxAvailablePopulationChanged (Underlying native function: OnRep_MaxAvailablePopulationChanged 0x7fecd94)
	void OnRepMaxAvailablePopulationChanged(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_IsUsingUGC (Underlying native function: OnRep_IsUsingUGC 0x7fecd30)
	void OnRepIsUsingUGC(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_IslandInfo (Underlying native function: OnRep_IslandInfo 0x7fecd44)
	void OnRepIslandInfo(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_ErrorState (Underlying native function: OnRep_ErrorState 0x7fecd1c)
	void OnRepErrorState(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnRep_CachedEditIslandData (Underlying native function: OnRep_CachedEditIslandData 0x7feb4fc)
	void OnRepCachedEditIslandData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnReceivedNewIslandInfo (Has no native function)
	void OnReceivedNewIslandInfo(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnOverlapEnd (Underlying native function: OnOverlapEnd 0x7fec948)
	void OnOverlapEnd(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnOverlapBegin (Underlying native function: OnOverlapBegin 0x7fec748)
	void OnOverlapBegin(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.OnClientLoadedStateChanged (Underlying native function: OnClientLoadedStateChanged 0x7fec720)
	void OnClientLoadedStateChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.NotifyTeleportedVehicle (Underlying native function: NotifyTeleportedVehicle 0x7fec69c)
	void NotifyTeleportedVehicle(class AActor*& VehicleActor); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.NotifyTeleportedPlayerPawn (Has no native function)
	void NotifyTeleportedPlayerPawn(class AFortPlayerPawn*& PlayerPawn, bool& bTeleportedToIslandStart); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.LogIslandTeleportation (Underlying native function: LogIslandTeleportation 0x7fec604)
	void LogIslandTeleportation(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.IsRunningMatchmakingFlowToEdit (Underlying native function: IsRunningMatchmakingFlowToEdit 0x7fec3d4)
	bool IsRunningMatchmakingFlowToEdit(class AFortPlayerController*& PlayerToMatchmake); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.IsPortalOpenForRole (Underlying native function: IsPortalOpenForRole 0x7fec344)
	bool IsPortalOpenForRole(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.IsPortalOpen (Underlying native function: IsPortalOpen 0x7fec320)
	bool IsPortalOpen(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.IsPortalInteractable (Underlying native function: IsPortalInteractable 0x7fec2b8)
	bool IsPortalInteractable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.IsInErrorStateForRole (Underlying native function: IsInErrorStateForRole 0x7fec1c8)
	bool IsInErrorStateForRole(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetVolumeDisplayName (Underlying native function: GetVolumeDisplayName 0x7febd2c)
	struct FText GetVolumeDisplayName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetThumbnailWidth (Underlying native function: GetThumbnailWidth 0x7febcf0)
	int GetThumbnailWidth(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetThumbnailHeight (Underlying native function: GetThumbnailHeight 0x7febcb4)
	int GetThumbnailHeight(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetTagline (Underlying native function: GetTagline 0x7febc40)
	struct FText GetTagline(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetPrivacy (Underlying native function: GetPrivacy 0x7febb8c)
	enum EMMSPrivacy GetPrivacy(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetPopulation (Underlying native function: GetPopulation 0x7febb74)
	unsigned char GetPopulation(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetPlayerState (Underlying native function: GetPlayerState 0x7febb50)
	class AFortPlayerStateAthena* GetPlayerState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetMnemonic (Underlying native function: GetMnemonic 0x7febadc)
	struct FString GetMnemonic(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetLinkedVolume (Underlying native function: GetLinkedVolume 0x7febac4)
	class AFortVolume* GetLinkedVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetIsPublishedPortal (Underlying native function: GetIsPublishedPortal 0x7feb9e0)
	bool GetIsPublishedPortal(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetIslandID (Underlying native function: GetIslandID 0x7feba3c)
	struct FString GetIslandID(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetIslandDescriptionTags (Underlying native function: GetIslandDescriptionTags 0x7feb9f8)
	struct TArray<struct FCreativeIslandDescriptionTag> GetIslandDescriptionTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetImageURL (Underlying native function: GetImageURL 0x7feb894)
	struct FString GetImageURL(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetHUDPointerOrigin (Underlying native function: GetHUDPointerOrigin 0x7feb86c)
	struct FVector GetHUDPointerOrigin(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetDescriptionTags (Underlying native function: GetDescriptionTags 0x7feb77c)
	struct TArray<struct FString> GetDescriptionTags(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetCreatorName (Underlying native function: GetCreatorName 0x7feb708)
	struct FText GetCreatorName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.GetCachedEditIslandDataIslandName (Underlying native function: GetCachedEditIslandDataIslandName 0x58be0f0)
	struct FText GetCachedEditIslandDataIslandName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.FinishedReadingCloudFiles (Underlying native function: FinishedReadingCloudFiles 0x7feb53c)
	void FinishedReadingCloudFiles(struct FAsyncTaskResult& Result); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.ErrorStateChanged (Has no native function)
	void ErrorStateChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.DisplayNameChanged (Has no native function)
	void DisplayNameChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.CuratedPortalChanged (Has no native function)
	void CuratedPortalChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.ClientSaveStateChanged (Underlying native function: ClientSaveStateChanged 0x7feb47c)
	void ClientSaveStateChanged(bool& bSaving); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.ClientSaveDisplayChanged (Has no native function)
	void ClientSaveDisplayChanged(bool& bSaving); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.Client_OnIsValkyrieEditPortalChanged (Underlying native function: Client_OnIsValkyrieEditPortalChanged 0x7feb4fc)
	void ClientOnIsValkyrieEditPortalChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.CheckMinigameOnTeleportComplete (Underlying native function: CheckMinigameOnTeleportComplete 0x7feb39c)
	void CheckMinigameOnTeleportComplete(class AFortPlayerPawn*& PlayerPawn, bool& bTeleportedToIslandStart); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.BP_OnOverlapEnd (Has no native function)
	void BPOnOverlapEnd(class AActor*& OtherActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.BP_OnOverlapBegin (Has no native function)
	void BPOnOverlapBegin(class AActor*& OtherActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.BlueprintUseMobileHighlight (Has no native function)
	bool BlueprintUseMobileHighlight(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.BlueprintDisplayMobileInteractPrompt (Has no native function)
	bool BlueprintDisplayMobileInteractPrompt(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaCreativePortal.AttemptCancelMatchmakingToEdit (Underlying native function: AttemptCancelMatchmakingToEdit 0x7fea860)
	void AttemptCancelMatchmakingToEdit(class AFortPlayerController*& PlayerToMatchmake); // (Final | Native | Private | BlueprintCallable)
};

