// Class /Script/FortniteGame.FortPlayerControllerAthena
// Size: 0x48e0
class AFortPlayerControllerAthena : public AFortPlayerControllerZone
{
	float FireAbilityToWeaponSwitchTime; // 0x3958 (0x4)
	unsigned char unreflected_395c[0x14]; // 0x395c (0x14) 
	struct FMulticastInlineDelegate OnAircraftStateChange; // 0x3970 (0x10)
	unsigned char unreflected_3980[0x8]; // 0x3980 (0x8) 
	struct FMulticastInlineDelegate OnItemDropSpawnedDelegate; // 0x3988 (0x10)
	struct FMulticastInlineDelegate OnItemDroppedDueToOverflow; // 0x3998 (0x10)
	class UFortWorldItemDefinition* SwappingItemDefinition; // 0x39a8 (0x8)
	float WinScreenDelayTime; // 0x39b0 (0x4)
	bool bSkipPlayWinEffects; // 0x39b4 (0x1)
	bool bAllowPlayersCreditOnLeave; // 0x39b5 (0x1)
	unsigned char unreflected_39b6[0x1]; // 0x39b6 (0x1) 
	bool bLockingOnFocalPoint; // 0x39b7 (0x1)
	class AActor* FocalPoint; // 0x39b8 (0x8)
	struct FVector_NetQuantize FocalPointOffset; // 0x39c0 (0x18)
	float FocalPointFOV; // 0x39d8 (0x4)
	float FocalPointDuration; // 0x39dc (0x4)
	unsigned char unreflected_39e0[0x8]; // 0x39e0 (0x8) 
	struct FMulticastInlineDelegate OnUsingFocalPointChanged; // 0x39e8 (0x10)
	struct FMulticastInlineDelegate OnFocalPointActorChanged; // 0x39f8 (0x10)
	struct FMulticastInlineDelegate OnCinematicCameraSkipped; // 0x3a08 (0x10)
	struct FMulticastInlineDelegate OnSkydiveLeaderChanged; // 0x3a18 (0x10)
	struct FMulticastInlineDelegate OnClientDonationSuccessDelegate; // 0x3a28 (0x10)
	unsigned char unreflected_3a38[0x38]; // 0x3a38 (0x38) 
	float SkydiveLeaderManualCameraTime; // 0x3a70 (0x4)
	unsigned char unreflected_3a74[0x4]; // 0x3a74 (0x4) 
	struct FRotator InterpolatedSkydiveFollowerViewRotation; // 0x3a78 (0x18)
	unsigned char unreflected_3a90[0x18]; // 0x3a90 (0x18) 
	class AFortPlayerState* SkydiveLeader; // 0x3aa8 (0x8)
	unsigned char unreflected_3ab0[0x8]; // 0x3ab0 (0x8) 
	struct FMulticastInlineDelegate OnPickupProjectileCreatedDelegate; // 0x3ab8 (0x10)
	class AFortPlayerStateAthena* LastDownedVictim; // 0x3ac8 (0x8)
	class AFortPlayerStateAthena* LastElimVictim; // 0x3ad0 (0x8)
	unsigned char unreflected_3ad8[0x8]; // 0x3ad8 (0x8) 
	struct FMulticastInlineDelegate OnCameraInStormWallChangeDelegate; // 0x3ae0 (0x10)
	unsigned char unreflected_3af0[0x18]; // 0x3af0 (0x18) 
	bool bLeaveDisconnectedPawnsInGame; // 0x3b08 (0x1)
	unsigned char unreflected_3b09[0x7]; // 0x3b09 (0x7) 
	class AFortPlayerPawn* DisconnectedPawn; // 0x3b10 (0x8)
	class AFortPlayerPawn* PreviousPawn; // 0x3b18 (0x8)
	bool bReplicateViewTargetInventory; // 0x3b20 (0x1)
	unsigned char bHasHadValidPawn; // 0x3b21 (0x1)
	unsigned char bClientNotifiedOfWin; // 0x3b21 (0x1)
	unsigned char bClientNotifiedOfTeamWin; // 0x3b21 (0x1)
	unsigned char bClientNotifiedOfLoss; // 0x3b21 (0x1)
	unsigned char bHideWarmUpLoadingScreen; // 0x3b21 (0x1)
	unsigned char unreflected_3b22[0x46]; // 0x3b22 (0x46) 
	struct TArray<struct FString> PlayersTalking; // 0x3b68 (0x10)
	struct FMulticastInlineDelegate TalkingPlayersChanged; // 0x3b78 (0x10)
	bool bHighlightRecordingEnabled; // 0x3b88 (0x1)
	bool bPlaceDangerMarkerWhenTargeting; // 0x3b89 (0x1)
	bool bDeferringStartRecordingHighlights; // 0x3b8a (0x1)
	unsigned char unreflected_3b8b[0x5]; // 0x3b8b (0x5) 
	struct FString HighlightGroupId; // 0x3b90 (0x10)
	int CachedHighlightCount; // 0x3ba0 (0x4)
	float HighlightFirstKillTime; // 0x3ba4 (0x4)
	int HighlightKillMultiple; // 0x3ba8 (0x4)
	int HighlightDownMultiple; // 0x3bac (0x4)
	float HighlightKillCooldown; // 0x3bb0 (0x4)
	float HighlightKillRewindTime; // 0x3bb4 (0x4)
	float CabinModeCheckTimeInterval; // 0x3bb8 (0x4)
	float CabinModeRestartTimeInterval; // 0x3bbc (0x4)
	float RespawnCameraTime; // 0x3bc0 (0x4)
	float RespawnCameraHoldPositionTime; // 0x3bc4 (0x4)
	struct FVector RespawnCameraInitialLocOffsetInAir; // 0x3bc8 (0x18)
	struct FVector RespawnCameraInitialLocOffsetOnGround; // 0x3be0 (0x18)
	struct FRotator RespawnCameraInitialRotOffsetInAir; // 0x3bf8 (0x18)
	struct FRotator RespawnCameraInitialRotOffsetOnGround; // 0x3c10 (0x18)
	float RespawnCameraOffsetFromHit; // 0x3c28 (0x4)
	bool bNextRespawnInAir; // 0x3c2c (0x1)
	unsigned char unreflected_3c2d[0x3]; // 0x3c2d (0x3) 
	struct FName RespawnCameraBehavior; // 0x3c30 (0x4)
	unsigned char unreflected_3c34[0x2c]; // 0x3c34 (0x2c) 
	int MaximumNumberOfPawnsToSearchForEmoteMusic; // 0x3c60 (0x4)
	unsigned char unreflected_3c64[0xc]; // 0x3c64 (0xc) 
	float PickupSwapHoldTime; // 0x3c70 (0x4)
	bool bUseNewPickupSwapLogic; // 0x3c74 (0x1)
	unsigned char unreflected_3c75[0x3]; // 0x3c75 (0x3) 
	float SpectatorLevelStreamDistance; // 0x3c78 (0x4)
	float RespawnLevelStreamDistance; // 0x3c7c (0x4)
	struct FMulticastInlineDelegate SpectatorStreamingChanged; // 0x3c80 (0x10)
	struct FMulticastInlineDelegate InGameLoadScreenChanged; // 0x3c90 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerChangedTeams; // 0x3ca0 (0x10)
	unsigned char unreflected_3cb0[0x20]; // 0x3cb0 (0x20) 
	struct FLevelStreamRequestHandshakeState LevelStreamRequestHandshakeState; // 0x3cd0 (0x1)
	unsigned char unreflected_3cd1[0x37]; // 0x3cd1 (0x37) 
	struct FMulticastInlineDelegate OnCreativePlotLinkedVolumeChanged; // 0x3d08 (0x10)
	struct FMulticastInlineDelegate OnCreativePermissionsChanged; // 0x3d18 (0x10)
	struct FMulticastInlineDelegate OnCreativeContentFilterChanged; // 0x3d28 (0x10)
	struct FMulticastInlineDelegate OnClientLeaveIsland; // 0x3d38 (0x10)
	struct FMulticastInlineDelegate OnClientForcedOffIsland; // 0x3d48 (0x10)
	unsigned char unreflected_3d58[0x10]; // 0x3d58 (0x10) 
	struct FMulticastInlineDelegate OnMakeNewCreativePlotFinished; // 0x3d68 (0x10)
	struct FMulticastInlineDelegate OnDestroyCreativePlotFinished; // 0x3d78 (0x10)
	struct FMulticastInlineDelegate OnRestoreCreativePlotFinished; // 0x3d88 (0x10)
	struct FMulticastInlineDelegate OnDuplicateCreativePlotFinished; // 0x3d98 (0x10)
	struct FMulticastInlineDelegate OnIslandEntriesChanged; // 0x3da8 (0x10)
	unsigned char unreflected_3db8[0x10]; // 0x3db8 (0x10) 
	struct FMulticastInlineDelegate OnUpdateCreativePlotName; // 0x3dc8 (0x10)
	struct FMulticastInlineDelegate OnUpdateCreativeDescriptionTags; // 0x3dd8 (0x10)
	unsigned char unreflected_3de8[0x18]; // 0x3de8 (0x18) 
	class ACameraActor* RespawnCameraActor; // 0x3e00 (0x8)
	bool bDelayedTeleporting; // 0x3e08 (0x1)
	bool bBlockTeleporting; // 0x3e09 (0x1)
	unsigned char unreflected_3e0a[0x2]; // 0x3e0a (0x2) 
	int MaxPlotCount; // 0x3e0c (0x4)
	unsigned char unreflected_3e10[0x68]; // 0x3e10 (0x68) 
	struct FMulticastInlineDelegate InGameMatchmakingReadyCheckStarted; // 0x3e78 (0x10)
	struct FMulticastInlineDelegate InGameMatchmakingReadyCheckComplete; // 0x3e88 (0x10)
	struct FMulticastInlineDelegate InGameMatchmakingReadyCheckCanceled; // 0x3e98 (0x10)
	struct FMulticastInlineDelegate InGameMatchmakingStarted; // 0x3ea8 (0x10)
	struct FMulticastInlineDelegate InGameMatchmakingComplete; // 0x3eb8 (0x10)
	struct FMulticastInlineDelegate InGameMatchmakingStateChanged; // 0x3ec8 (0x10)
	struct FMulticastInlineDelegate InGameMatchmakingQueuedStatusUpdated; // 0x3ed8 (0x10)
	struct FMulticastInlineDelegate InGameMatchmakingError; // 0x3ee8 (0x10)
	struct FMulticastInlineDelegate OnInGameMatchmakingCanceled; // 0x3ef8 (0x10)
	struct FMulticastInlineDelegate OnInGameMatchmakingUpdateCheckFailed; // 0x3f08 (0x10)
	struct FMulticastInlineDelegate OnInGameContentDownloadStarted; // 0x3f18 (0x10)
	struct FMulticastInlineDelegate OnInGameMatchmakingUtilityStateChanged; // 0x3f28 (0x10)
	bool bNoInGameMatchmaking; // 0x3f38 (0x1)
	unsigned char unreflected_3f39[0x37]; // 0x3f39 (0x37) 
	class USoundBase* AudioOnExitAircraft; // 0x3f70 (0x8)
	class USoundBase* AudioOnExitAircraftHornDoppler; // 0x3f78 (0x8)
	float MinQuickChatCooldown; // 0x3f80 (0x4)
	float QuickChatOffCooldownTime; // 0x3f84 (0x4)
	bool bMarkedAlive; // 0x3f88 (0x1)
	unsigned char unreflected_3f89[0x7]; // 0x3f89 (0x7) 
	struct TArray<struct FCreativeIslandData> CreativeIslands; // 0x3f90 (0x10)
	bool bIsAllowedToPublish; // 0x3fa0 (0x1)
	unsigned char unreflected_3fa1[0x7]; // 0x3fa1 (0x7) 
	struct TWeakObjectPtr<class UFortGamepadSettings> GamepadSettingsAssetPtr; // 0x3fa8 (0x28)
	unsigned char unreflected_3fd0[0x18]; // 0x3fd0 (0x18) 
	struct FLinearColor TeamMemberIndicatorColor; // 0x3fe8 (0x10)
	unsigned char unreflected_3ff8[0x28]; // 0x3ff8 (0x28) 
	bool bMatchStatsForPlayerSent; // 0x4020 (0x1)
	bool bAddedBookProgressStatsToGamemode; // 0x4021 (0x1)
	bool bHasSentMatchEndedQuestProgress; // 0x4022 (0x1)
	unsigned char unreflected_4023[0x5]; // 0x4023 (0x5) 
	struct FQuickBarData QuickBarDefinitions[0x3]; // 0x4028 (0x10) (ARRAY) 
	unsigned char unreflected_4058[0x11]; // 0x4058 (0x11) 
	bool bEnableBroadcastRemoteClientInfo; // 0x4069 (0x1)
	unsigned char unreflected_406a[0x6]; // 0x406a (0x6) 
	class AFortBroadcastRemoteClientInfo* BroadcastRemoteClientInfo; // 0x4070 (0x8)
	unsigned char unreflected_4078[0x8]; // 0x4078 (0x8) 
	class UFortHero* StrongMyHero; // 0x4080 (0x8)
	struct TArray<struct TWeakObjectPtr<class UObject>> ClientGameWorldHolds; // 0x4088 (0x10)
	unsigned char unreflected_4098[0x28]; // 0x4098 (0x28) 
	float EndMatchHeartbeatTimerDelay; // 0x40c0 (0x4)
	unsigned char unreflected_40c4[0x4]; // 0x40c4 (0x4) 
	double EndMatchHeartbeatTimestamp; // 0x40c8 (0x8)
	class AFortPlayerStartWarmup* WarmupPlayerStart; // 0x40d0 (0x8)
	class UInputComponent* FullScreenScoreboardInputComponent; // 0x40d8 (0x8)
	class UInputComponent* CurrentFullscreenInputComponent; // 0x40e0 (0x8)
	class UInputComponent* GameChannelRecommendationInputComponent; // 0x40e8 (0x8)
	class UInputComponent* QuickWeaponInputComponent; // 0x40f0 (0x8)
	unsigned char unreflected_40f8[0x16d]; // 0x40f8 (0x16d) 
	bool bUseTrapPicker; // 0x4265 (0x1)
	unsigned char unreflected_4266[0x22]; // 0x4266 (0x22) 
	bool bRichPresenceUsesCreativeActivityName; // 0x4288 (0x1)
	unsigned char unreflected_4289[0x2f]; // 0x4289 (0x2f) 
	float DoubleTapEditTime; // 0x42b8 (0x4)
	unsigned char unreflected_42bc[0x4]; // 0x42bc (0x4) 
	class UAthenaPlayerMatchReport* MatchReport; // 0x42c0 (0x8)
	unsigned char unreflected_42c8[0x10]; // 0x42c8 (0x10) 
	class UClass* MinimapIndicatorClass; // 0x42d8 (0x8)
	class UClass* MinimapChallengeIndicatorClass; // 0x42e0 (0x8)
	class UFortMiniMapChallengeIndicators* MinimapChallengeIndicators; // 0x42e8 (0x8)
	bool bEnableInGameChallengeLocationIndicators; // 0x42f0 (0x1)
	unsigned char unreflected_42f1[0x7]; // 0x42f1 (0x7) 
	class UClass* SquadMarkerActorClass; // 0x42f8 (0x8)
	unsigned char unreflected_4300[0xc]; // 0x4300 (0xc) 
	int UnprocessedXp; // 0x430c (0x4)
	float XpReceivedLastAtTime; // 0x4310 (0x4)
	int BuildingsCreated; // 0x4314 (0x4)
	int BuildingsEdited; // 0x4318 (0x4)
	int BuildingsRepaired; // 0x431c (0x4)
	int BuildingsUpgraded; // 0x4320 (0x4)
	float BuildingActionDoneLastAtTime; // 0x4324 (0x4)
	struct FBuildingStats BuildingMatchStats; // 0x4328 (0x20)
	struct TArray<struct FBuildingEditAnalyticEvent> BuildingAnalyticsArray; // 0x4348 (0x10)
	float TimeStartedTrackingBuildingAnalytics; // 0x4358 (0x4)
	unsigned char unreflected_435c[0xdc]; // 0x435c (0xdc) 
	class AFortVolume* CreativePlotLinkedVolume; // 0x4438 (0x8)
	struct FCreativePlotSessionData CreativePlotSessionData; // 0x4440 (0x14)
	unsigned char unreflected_4454[0x4]; // 0x4454 (0x4) 
	class AFortAthenaCreativePortal* OwnedPortal; // 0x4458 (0x8)
	class AFortAthenaPartyRiftPortal* OwnedPartyRiftPortal; // 0x4460 (0x8)
	unsigned char unreflected_4468[0x48]; // 0x4468 (0x48) 
	struct FMulticastInlineDelegate OnHUDMessageToggled; // 0x44b0 (0x10)
	struct TArray<struct FItemAndCount> CachedPurchasedItems; // 0x44c0 (0x10)
	struct FMinigameSpawnData PendingMinigameSpawnData; // 0x44d0 (0x3)
	unsigned char unreflected_44d3[0x15]; // 0x44d3 (0x15) 
	class UFortPlaysetItemDefinition* CurrentPlayset; // 0x44e8 (0x8)
	float DestructedBuildingInGridTimeoutOverride; // 0x44f0 (0x4)
	unsigned char unreflected_44f4[0x4]; // 0x44f4 (0x4) 
	struct FText ClientRespawnText; // 0x44f8 (0x18)
	struct FText ClientRebootingText; // 0x4510 (0x18)
	struct FText ClientIslandTravelText; // 0x4528 (0x18)
	struct FText ClientTravelToCreativeHubText; // 0x4540 (0x18)
	struct TArray<class AActor*> VolumesLoading; // 0x4558 (0x10)
	struct TArray<class AActor*> VolumesUnloading; // 0x4568 (0x10)
	class UAthenaMarkerComponent* MarkerComponent; // 0x4578 (0x8)
	class UAthenaResurrectionComponent* ResurrectionComponent; // 0x4580 (0x8)
	class UFortControllerComponent_SeasonItem* SeasonItemComponent; // 0x4588 (0x8)
	unsigned char unreflected_4590[0x8]; // 0x4590 (0x8) 
	class UFortControllerComponent_HeldDeviceUsage* HeldDeviceUsageComponent; // 0x4598 (0x8)
	unsigned char unreflected_45a0[0x18]; // 0x45a0 (0x18) 
	class UFortPlayerControllerAthenaXPComponent* XPComponent; // 0x45b8 (0x8)
	class UFortControllerComponent_MapDiscoverability* DiscoverabilityComponent; // 0x45c0 (0x8)
	class UFortControllerComponent_TransientQuests* TransientQuestsComponent; // 0x45c8 (0x8)
	class UFortControllerComponent_Quests* QuestsComponent; // 0x45d0 (0x8)
	class UFortControllerComponent_SkydiveFeedback* SkydiveFeedback; // 0x45d8 (0x8)
	class UFortControllerComponent_IndicatedActorManagement* IndicatedActorManagementComponent; // 0x45e0 (0x8)
	class UFortControllerComponent_LocalizationService* LocalizationServiceComponent; // 0x45e8 (0x8)
	class UFortControllerComponent_ToxicityService* ToxicityServiceComponent; // 0x45f0 (0x8)
	class UFortControllerComponent_RechargeWeapons* RechargingWeaponsComponent; // 0x45f8 (0x8)
	class UFortControllerComponent_InventoryService* InventoryServiceComponent; // 0x4600 (0x8)
	class UFortControllerComponent_RadiusTracker* RadiusTrackerComponent; // 0x4608 (0x8)
	class UFortControllerComponent_MinigameActivity* MinigameActivityComponent; // 0x4610 (0x8)
	class UCreativeAnalyticsComponent* CreativeAnalyticsComponent; // 0x4618 (0x8)
	struct FScalableFloat SightWeatherCapRadius; // 0x4620 (0x28)
	double TimeSinceLastCreativeSpawn; // 0x4648 (0x8)
	unsigned char unreflected_4650[0x20]; // 0x4650 (0x20) 
	struct FCompositeBool IgnoreSignifanceBasedCustomDepthRendering; // 0x4670 (0x18)
	class UCreativeUserContentManager* CreativeUserContentManager; // 0x4688 (0x8)
	struct TWeakObjectPtr<class UClass> CreativeUserContentManagerClassSoftClassPtr; // 0x4690 (0x28)
	unsigned char unreflected_46b8[0x10]; // 0x46b8 (0x10) 
	class UFortCreativeObjectTrackingComponent* CreativeObjectTrackingComponent; // 0x46c8 (0x8)
	class UFortCreativeEntitlementComponent* CreativeEntitlementComponent; // 0x46d0 (0x8)
	struct FMulticastInlineDelegate OnPreviewScreenshotCameraActivated; // 0x46d8 (0x10)
	unsigned char unreflected_46e8[0x118]; // 0x46e8 (0x118) 
	struct FQuickBarEquippedItemGuids PrimaryQuickBarSlotItemGuids; // 0x4800 (0xa4)
	unsigned char unreflected_48a4[0x34]; // 0x48a4 (0x34) 
	bool bIgnoreSpectatorViewRotation; // 0x48d8 (0x1)
	bool bIgnorePlayerInfoAbandonStateForSpecialEventRtmm; // 0x48d9 (0x1)
	unsigned char padding_48da[0x6]; // 0x48da (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerAthena.WriteCreateBuildingAnalytics (Underlying native function: WriteCreateBuildingAnalytics 0x812666c)
	void WriteCreateBuildingAnalytics(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.UpdateUGCRestrictedForVolume (Underlying native function: UpdateUGCRestrictedForVolume 0x8126574)
	void UpdateUGCRestrictedForVolume(class AFortVolume*& Volume, bool& bRestricted); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.UpdateRichPresenceTimer (Underlying native function: UpdateRichPresenceTimer 0x8126560)
	void UpdateRichPresenceTimer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.UpdateCreativePlotName (Underlying native function: UpdateCreativePlotName 0x81263ec)
	void UpdateCreativePlotName(struct FString& IslandId, struct FString& locale, struct FString& Title); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.UpdateCreativePlotData (Underlying native function: UpdateCreativePlotData 0x81262c8)
	void UpdateCreativePlotData(class AFortVolume*& VolumeToPublish, struct FCreativeIslandInfo& MyInfo); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.UpdateCreativeIslandDescriptionTags (Underlying native function: UpdateCreativeIslandDescriptionTags 0x8125fe0)
	void UpdateCreativeIslandDescriptionTags(struct FString& IslandId, struct FString& locale, struct TArray<struct FString>& DescriptionTags); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.TellServer_ClientReceivedPlaysetDataForVolume (Underlying native function: TellServer_ClientReceivedPlaysetDataForVolume 0x8125e70)
	void TellServerClientReceivedPlaysetDataForVolume(struct FFortPlaysetStreamingData& PlaysetData, class AActor*& Volume); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.TeleportToPlaygroundLobbyIsland (Underlying native function: TeleportToPlaygroundLobbyIsland 0x8125e5c)
	void TeleportToPlaygroundLobbyIsland(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.StopRecordingHighlights (Underlying native function: StopRecordingHighlights 0x8125e48)
	void StopRecordingHighlights(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.StartRespawnLoading (Underlying native function: StartRespawnLoading 0x8125e34)
	void StartRespawnLoading(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.StartMatchmakingByLinkCode (Underlying native function: StartMatchmakingByLinkCode 0x8125c44)
	void StartMatchmakingByLinkCode(struct FOnlineLinkId& LinkCode, struct FName& PlaylistName, bool& bIsPrivateMatch); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.StartCreativeMatchmakingReadyCheck (Underlying native function: StartCreativeMatchmakingReadyCheck 0x8125a14)
	void StartCreativeMatchmakingReadyCheck(struct FString& LinkId, struct FName& PlaylistName, bool& OutDidStartMatchmakingImmediately, bool& isPrivateMatch); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ShowHighlightSummary (Underlying native function: ShowHighlightSummary 0x8125a00)
	void ShowHighlightSummary(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.SetUseOverrideDesiredRotation (Underlying native function: SetUseOverrideDesiredRotation 0x8125774)
	void SetUseOverrideDesiredRotation(bool& bNewUseDesiredRotation, float& NewDuration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.SetupClientRespawnTimerAndLocation (Underlying native function: SetupClientRespawnTimerAndLocation 0x812583c)
	void SetupClientRespawnTimerAndLocation(struct FVector& RespawnLoc, struct FRotator& RespawnRot, struct FVector& OldPlayerLocation, bool& bCalculateRespawnData, bool& bAllowCreativeOverride); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.SetOverrideDesiredRotation (Underlying native function: SetOverrideDesiredRotation 0x8125408)
	void SetOverrideDesiredRotation(struct FRotator& NewDesiredRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.SetIgnoreSpectatorViewRotation (Underlying native function: SetIgnoreSpectatorViewRotation 0x81252c4)
	void SetIgnoreSpectatorViewRotation(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.SetIgnoreSignifanceBasedCustomDepthRendering (Underlying native function: SetIgnoreSignifanceBasedCustomDepthRendering 0x81250e0)
	void SetIgnoreSignifanceBasedCustomDepthRendering(bool& bValue, class UObject*& ModifyingObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.SetFocalPointWithDuration (Underlying native function: SetFocalPointWithDuration 0x8124f48)
	void SetFocalPointWithDuration(class AActor*& InFocalPoint, struct FVector& InFocalPointOffset, float& InFocalPointFOV, float& InDuration, float& InInterpSpeed); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.SetFocalPoint (Underlying native function: SetFocalPoint 0x8124df8)
	void SetFocalPoint(class AActor*& InFocalPoint, struct FVector& InFocalPointOffset, float& InFocalPointFOV, float& InInterpSpeed); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerUpdateUserCameraPreview (Underlying native function: ServerUpdateUserCameraPreview 0x8124dac)
	void ServerUpdateUserCameraPreview(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerUpdateSkydiveLocation (Underlying native function: ServerUpdateSkydiveLocation 0x8124b80)
	void ServerUpdateSkydiveLocation(struct FString& LocationStr, struct FVector& Location); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerUpdatePrimaryQuickBarSlots (Underlying native function: ServerUpdatePrimaryQuickBarSlots 0x8124acc)
	void ServerUpdatePrimaryQuickBarSlots(struct FQuickBarEquippedItemGuids& SlotItemGuids); // (Net | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerUpdateLevelStreamingHandshakeData (Underlying native function: ServerUpdateLevelStreamingHandshakeData 0x8124a1c)
	void ServerUpdateLevelStreamingHandshakeData(bool& bClientLevelStreamingState); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerUpdateHeatmapBoundsForCurrentVolume (Underlying native function: ServerUpdateHeatmapBoundsForCurrentVolume 0x81249d0)
	void ServerUpdateHeatmapBoundsForCurrentVolume(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerUpdateCreativePlotName (Underlying native function: ServerUpdateCreativePlotName 0x58e2e30)
	void ServerUpdateCreativePlotName(struct FString& IslandId, struct FString& locale, struct FString& Title); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerUpdateCreativePlotData (Underlying native function: ServerUpdateCreativePlotData 0x58e2c30)
	void ServerUpdateCreativePlotData(class AFortVolume*& VolumeToPublish, struct FCreativeIslandInfo& MyInfo); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerUnloadDownloadedContentByLinkId (Underlying native function: ServerUnloadDownloadedContentByLinkId 0x8124914)
	void ServerUnloadDownloadedContentByLinkId(struct FOnlineLinkId& LinkId); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerTryFindPlotItemForDefinition (Underlying native function: ServerTryFindPlotItemForDefinition 0x8124890)
	void ServerTryFindPlotItemForDefinition(class UFortCreativeRealEstatePlotItemDefinition*& PlotDefinition); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerToggleAutoRestartMinigame (Underlying native function: ServerToggleAutoRestartMinigame 0x8124844)
	void ServerToggleAutoRestartMinigame(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerTickForDoneTeleporting (Underlying native function: ServerTickForDoneTeleporting 0x81247c0)
	void ServerTickForDoneTeleporting(class AFortAthenaCreativePortal*& Portal); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerThankBusDriverCheck (Underlying native function: ServerThankBusDriverCheck 0x8124774)
	void ServerThankBusDriverCheck(); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerThankBusDriver (Underlying native function: ServerThankBusDriver 0x8124728)
	void ServerThankBusDriver(); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerTeleportViaCreativePortal (Underlying native function: ServerTeleportViaCreativePortal 0x81246a4)
	void ServerTeleportViaCreativePortal(int& PortalIndex); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerTeleportToPlaygroundLobbyIsland (Underlying native function: ServerTeleportToPlaygroundLobbyIsland 0x8124658)
	void ServerTeleportToPlaygroundLobbyIsland(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerTeleportToPlaygroundIslandDock (Underlying native function: ServerTeleportToPlaygroundIslandDock 0x812460c)
	void ServerTeleportToPlaygroundIslandDock(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerStopWaitLTMLoading (Underlying native function: ServerStopWaitLTMLoading 0x81245f4)
	void ServerStopWaitLTMLoading(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerStopSavingCreativePlot (Underlying native function: ServerStopSavingCreativePlot 0x81245a8)
	void ServerStopSavingCreativePlot(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerStartUnloadingVolume (Underlying native function: ServerStartUnloadingVolume 0x8124508)
	void ServerStartUnloadingVolume(class AActor*& VolumeToUnload); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerStartMinigame (Underlying native function: ServerStartMinigame 0x81244bc)
	void ServerStartMinigame(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerStartLoadingVolume (Underlying native function: ServerStartLoadingVolume 0x812441c)
	void ServerStartLoadingVolume(class AActor*& VolumeToLoad); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerStartInteractWithPartyRiftPortal (Underlying native function: ServerStartInteractWithPartyRiftPortal 0x812427c)
	void ServerStartInteractWithPartyRiftPortal(class AFortAthenaPartyRiftPortal*& Portal, struct FString& Reason); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerStartInteractWithIslandPortal (Underlying native function: ServerStartInteractWithIslandPortal 0x81241f8)
	void ServerStartInteractWithIslandPortal(class AFortAthenaCreativePortal*& Portal); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSpawnPickup (Underlying native function: ServerSpawnPickup 0x8124120)
	void ServerSpawnPickup(struct FFortItemEntry& CreativeItem); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSpawnCreativeSupplyDrop (Underlying native function: ServerSpawnCreativeSupplyDrop 0x8124080)
	void ServerSpawnCreativeSupplyDrop(class UClass*& InSupplyDropClass); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerShowSeasonLevel (Underlying native function: ServerShowSeasonLevel 0x8124034)
	void ServerShowSeasonLevel(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSetTeam (Underlying native function: ServerSetTeam 0x8123ec0)
	void ServerSetTeam(unsigned char& InTeam); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSetStreamingTestStreamingLevels (Underlying native function: ServerSetStreamingTestStreamingLevels 0x8123e3c)
	void ServerSetStreamingTestStreamingLevels(bool& streaming); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSetRespawnData (Underlying native function: ServerSetRespawnData 0x8123d08)
	void ServerSetRespawnData(struct FVector& RespawnLoc, struct FRotator& RespawnRot, float& RespawnCameraDist); // (Final | 0x00000002 | Native | Public | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSetReceiveEmailSignups (Underlying native function: ServerSetReceiveEmailSignups 0x8123c58)
	void ServerSetReceiveEmailSignups(bool& bSignUp); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSetPlayset (Underlying native function: ServerSetPlayset 0x8123bb8)
	void ServerSetPlayset(class UFortPlaysetItemDefinition*& NewPlayset); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSetOnCreativePortalLoadedDelegate (Underlying native function: ServerSetOnCreativePortalLoadedDelegate 0x8123b34)
	void ServerSetOnCreativePortalLoadedDelegate(int& PortalIndex); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSetMinigameTeamAndClassSlot (Underlying native function: ServerSetMinigameTeamAndClassSlot 0x8123a04)
	void ServerSetMinigameTeamAndClassSlot(unsigned char& InTeam, unsigned char& InClassSlotIndex, bool& bDeferred); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSetMinigameClassSlot (Underlying native function: ServerSetMinigameClassSlot 0x8123980)
	void ServerSetMinigameClassSlot(unsigned char& InClassSlotIndex); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSelectMutatorItem (Underlying native function: ServerSelectMutatorItem 0x812385c)
	void ServerSelectMutatorItem(class AFortGameplayMutator*& Mutator, int& ItemIndex, int& PayloadData); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerSaveIslandCheckpoint (Underlying native function: ServerSaveIslandCheckpoint 0x81237bc)
	void ServerSaveIslandCheckpoint(class AFortAthenaCreativePortal*& Portal); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerRestartMinigame (Underlying native function: ServerRestartMinigame 0x8123770)
	void ServerRestartMinigame(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerRespondToAbandonMatch (Underlying native function: ServerRespondToAbandonMatch 0x81236c0)
	void ServerRespondToAbandonMatch(bool& bAbandon); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerResetCurrentVolumeWithoutTeleport (Underlying native function: ServerResetCurrentVolumeWithoutTeleport 0x81236a8)
	void ServerResetCurrentVolumeWithoutTeleport(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerResetCameraPreviewToDefaultLocation (Underlying native function: ServerResetCameraPreviewToDefaultLocation 0x812365c)
	void ServerResetCameraPreviewToDefaultLocation(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerRequestObjectTrackingDetails (Underlying native function: ServerRequestObjectTrackingDetails 0x81235d8)
	void ServerRequestObjectTrackingDetails(class AFortVolume*& Volume); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerRequestNewSkydiveLeader (Underlying native function: ServerRequestNewSkydiveLeader 0x812358c)
	void ServerRequestNewSkydiveLeader(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerRemoveDownloadOnDemandContent (Underlying native function: ServerRemoveDownloadOnDemandContent 0x81234d0)
	void ServerRemoveDownloadOnDemandContent(struct FOnlineLinkId& LinkId); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerReloadCreativePlot (Underlying native function: ServerReloadCreativePlot 0x8123484)
	void ServerReloadCreativePlot(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerReleasePortal (Underlying native function: ServerReleasePortal 0x8123438)
	void ServerReleasePortal(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerPlaySquadQuickChatMessage (Underlying native function: ServerPlaySquadQuickChatMessage 0x81232c0)
	void ServerPlaySquadQuickChatMessage(struct FAthenaQuickChatActiveEntry& ChatEntry, struct FUniqueNetIdRepl& SenderID); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerNotifyOstrichShieldOvercharge (Underlying native function: ServerNotifyOstrichShieldOvercharge 0x8123274)
	void ServerNotifyOstrichShieldOvercharge(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerNotifyOstrichSelfDestruct (Underlying native function: ServerNotifyOstrichSelfDestruct 0x8123228)
	void ServerNotifyOstrichSelfDestruct(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerNotifyClientReachedMaxWaitingTimeForDeviceReplication (Underlying native function: ServerNotifyClientReachedMaxWaitingTimeForDeviceReplication 0x81231dc)
	void ServerNotifyClientReachedMaxWaitingTimeForDeviceReplication(); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerMarkSkydiveLocationsComplete (Underlying native function: ServerMarkSkydiveLocationsComplete 0x81231c4)
	void ServerMarkSkydiveLocationsComplete(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerLookedAtFocalPoint (Underlying native function: ServerLookedAtFocalPoint 0x81231ac)
	void ServerLookedAtFocalPoint(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerLoadPlotForPortalFromMnemonic (Underlying native function: ServerLoadPlotForPortalFromMnemonic 0x81230a4)
	void ServerLoadPlotForPortalFromMnemonic(class AFortAthenaCreativePortal*& Portal, struct FOnlineLinkId& LinkId); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerLoadPlotForPortal (Underlying native function: ServerLoadPlotForPortal 0x8122edc)
	void ServerLoadPlotForPortal(class AFortAthenaCreativePortal*& Portal, struct FString& PlotItemId); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerLoadIslandCheckpoint (Underlying native function: ServerLoadIslandCheckpoint 0x8122e3c)
	void ServerLoadIslandCheckpoint(class AFortAthenaCreativePortal*& Portal); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerInvalidateRespawnOnWaitingForLevelStreamingFailed (Underlying native function: ServerInvalidateRespawnOnWaitingForLevelStreamingFailed 0x8122e24)
	void ServerInvalidateRespawnOnWaitingForLevelStreamingFailed(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerInsertExtraStreamingTestSkydiveStates (Underlying native function: ServerInsertExtraStreamingTestSkydiveStates 0x8122e0c)
	void ServerInsertExtraStreamingTestSkydiveStates(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerGiveCreativeItem (Underlying native function: ServerGiveCreativeItem 0x8122ce4)
	void ServerGiveCreativeItem(struct FFortItemEntry& CreativeItem, struct FGuid& ItemToRemoveGuid); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerGenerateMockMatchReport (Underlying native function: ServerGenerateMockMatchReport 0x8122c98)
	void ServerGenerateMockMatchReport(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerFriendGameMemberAdded (Underlying native function: ServerFriendGameMemberAdded 0x8122bcc)
	void ServerFriendGameMemberAdded(class AFortPlayerStateAthena*& FriendPSA, bool& bIsEpicFriend); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerEnteredCursorMode (Underlying native function: ServerEnteredCursorMode 0x8122bb4)
	void ServerEnteredCursorMode(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerEnteredCameraMode (Underlying native function: ServerEnteredCameraMode 0x8122b9c)
	void ServerEnteredCameraMode(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerEndUnloadingVolume (Underlying native function: ServerEndUnloadingVolume 0x8122afc)
	void ServerEndUnloadingVolume(class AActor*& VolumeToUnload); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerEndMinigame (Underlying native function: ServerEndMinigame 0x8122a4c)
	void ServerEndMinigame(bool& bAbandon); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerEndLoadingVolume (Underlying native function: ServerEndLoadingVolume 0x81229ac)
	void ServerEndLoadingVolume(class AActor*& VolumeToLoad); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerEnableHideOtherPlayersNames (Underlying native function: ServerEnableHideOtherPlayersNames 0x8122994)
	void ServerEnableHideOtherPlayersNames(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerEnableAnonymousMode (Underlying native function: ServerEnableAnonymousMode 0x8122948)
	void ServerEnableAnonymousMode(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerEnableAnonymousCharacterMode (Underlying native function: ServerEnableAnonymousCharacterMode 0x81228fc)
	void ServerEnableAnonymousCharacterMode(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerDownloadContentByLinkId (Underlying native function: ServerDownloadContentByLinkId 0x81227e4)
	void ServerDownloadContentByLinkId(struct FOnlineLinkId& LinkId, bool& bStripProjectId); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerDBNOReviveInterrupted (Underlying native function: ServerDBNOReviveInterrupted 0x8122744)
	void ServerDBNOReviveInterrupted(class AFortPlayerPawnAthena*& DBNOPawn); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerCreativeUnlockItemCategory (Underlying native function: ServerCreativeUnlockItemCategory 0x81224ac)
	void ServerCreativeUnlockItemCategory(struct FString& ItemCategory, struct FString& ItemSubcategory); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerCreativeRenameLevelInstance (Underlying native function: ServerCreativeRenameLevelInstance 0x81222d0)
	void ServerCreativeRenameLevelInstance(struct FGuid& LevelInstanceGuid, struct FString& NewLevelName); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerCreativeDeleteLevelInstance (Underlying native function: ServerCreativeDeleteLevelInstance 0x812220c)
	void ServerCreativeDeleteLevelInstance(struct FGuid& LevelInstanceGuid); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerCreativeCreateNewLevelInstance (Underlying native function: ServerCreativeCreateNewLevelInstance 0x81221c0)
	void ServerCreativeCreateNewLevelInstance(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerCreateProfileGoCollectionForSublevels (Underlying native function: ServerCreateProfileGoCollectionForSublevels 0x8121f2c)
	void ServerCreateProfileGoCollectionForSublevels(struct FString& SublevelSearchString, int& GridStepsX, int& GridStepsY, int& RotationSteps, int& Quad); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerClientIsReadyToRespawn (Underlying native function: ServerClientIsReadyToRespawn 0x8121ee0)
	void ServerClientIsReadyToRespawn(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerClearSkydiveLeader (Underlying native function: ServerClearSkydiveLeader 0x8121e94)
	void ServerClearSkydiveLeader(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerClaimPortal (Underlying native function: ServerClaimPortal 0x8121e48)
	void ServerClaimPortal(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerBroadcastDeviceButtonComponentClickedDelegate (Underlying native function: ServerBroadcastDeviceButtonComponentClickedDelegate 0x8121da8)
	void ServerBroadcastDeviceButtonComponentClickedDelegate(class UFortCreativeDeviceButtonComponent*& DeviceButtonComponent); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerBeginEndPreview (Underlying native function: ServerBeginEndPreview 0x8121cf8)
	void ServerBeginEndPreview(bool& bInBegin); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerApplyOverrideWrapToVehicle (Underlying native function: ServerApplyOverrideWrapToVehicle 0x8121c40)
	void ServerApplyOverrideWrapToVehicle(struct TWeakObjectPtr<class UAthenaItemWrapDefinition>& ItemWrap); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerApplyOverrideWrapToItem (Underlying native function: ServerApplyOverrideWrapToItem 0x8121b1c)
	void ServerApplyOverrideWrapToItem(struct FGuid& Guid, struct TWeakObjectPtr<class UAthenaItemWrapDefinition>& ItemWrap); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerAlertForceOthersOffIsland (Underlying native function: ServerAlertForceOthersOffIsland 0x8121ad0)
	void ServerAlertForceOthersOffIsland(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerAddToCachedPurchased (Underlying native function: ServerAddToCachedPurchased 0x81219e4)
	void ServerAddToCachedPurchased(class UFortItemDefinition*& ItemDefinition, int& Count); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ServerAddDownloadOnDemandContent (Underlying native function: ServerAddDownloadOnDemandContent 0x8121928)
	void ServerAddDownloadOnDemandContent(struct FOnlineLinkId& LinkId); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.SendPhysicsBallHitToServer (Underlying native function: SendPhysicsBallHitToServer 0x81215c4)
	void SendPhysicsBallHitToServer(class AFortPhysicsPawnObject*& PhysicsObject, float& ClientPing, class APawn*& HittingPawn, struct FVector& VelocityOfHitter, struct FVector& HitNormal, struct FTimeStampedPhysicsPawnState& ClientBallState); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.SendClientPhysicsBallStateToServer (Underlying native function: SendClientPhysicsBallStateToServer 0x81213c4)
	void SendClientPhysicsBallStateToServer(class AFortPhysicsPawnObject*& PhysicsObject, float& ClientPing, struct FTimeStampedPhysicsPawnState& ClientBallState); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RevokeCreativeTool (Has no native function)
	void RevokeCreativeTool(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RestoreCreativePlot (Underlying native function: RestoreCreativePlot 0x8121248)
	void RestoreCreativePlot(struct FString& IslandId); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RespawnTurnCameraBackOn (Underlying native function: RespawnTurnCameraBackOn 0x8121234)
	void RespawnTurnCameraBackOn(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RespawnPlayerAfterDeath (Underlying native function: RespawnPlayerAfterDeath 0x81211b4)
	void RespawnPlayerAfterDeath(bool& bEnterSkydiving); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ResetMyCurrentCreativePlot (Underlying native function: ResetMyCurrentCreativePlot 0x8121168)
	void ResetMyCurrentCreativePlot(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RequestFocalPoint (Underlying native function: RequestFocalPoint 0x812100c)
	void RequestFocalPoint(class AActor*& InFocalPoint, struct FVector& InFocalPointOffset, float& InFocalPointFOV); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ReportCreativePlot (Underlying native function: ReportCreativePlot 0x8120d74)
	void ReportCreativePlot(struct FString& PrivateIslandOwnerID, struct FString& PlotInstanceId); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RemoveDroppableTaggedItems (Underlying native function: RemoveDroppableTaggedItems 0x8120cb0)
	void RemoveDroppableTaggedItems(struct FGameplayTagContainer& GameplayTagContainer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RemoveDroppableItems (Underlying native function: RemoveDroppableItems 0x273fd14)
	void RemoveDroppableItems(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RemoveAllInventoryItems (Underlying native function: RemoveAllInventoryItems 0x273fd14)
	void RemoveAllInventoryItems(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ReduceDroppableResources (Underlying native function: ReduceDroppableResources 0x6df7bc0)
	void ReduceDroppableResources(float& ReductionPercentage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RecordTeamStats (Underlying native function: RecordTeamStats 0x8120af8)
	void RecordTeamStats(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RecordMatchStats (Underlying native function: RecordMatchStats 0x8120ae4)
	void RecordMatchStats(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.RecordContentDownloadModules (Underlying native function: RecordContentDownloadModules 0x8120ad0)
	void RecordContentDownloadModules(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.QuickWeapon4 (Underlying native function: QuickWeapon4 0x8120abc)
	void QuickWeapon4(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.QuickWeapon3 (Underlying native function: QuickWeapon3 0x8120aa8)
	void QuickWeapon3(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.QuickWeapon2 (Underlying native function: QuickWeapon2 0x8120a94)
	void QuickWeapon2(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.QuickWeapon1 (Underlying native function: QuickWeapon1 0x8120a80)
	void QuickWeapon1(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.PublishCreativePlot (Underlying native function: PublishCreativePlot 0x8120938)
	void PublishCreativePlot(class AFortVolume*& VolumeToPublish, struct FCreativePublishOptions& MyPublishOptions); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.PrepareClientForRespawning (Underlying native function: PrepareClientForRespawning 0x8120924)
	void PrepareClientForRespawning(); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.PreLobbyIslandTeleport (Underlying native function: PreLobbyIslandTeleport 0x273fd14)
	void PreLobbyIslandTeleport(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.PostLobbyIslandTeleport (Underlying native function: PostLobbyIslandTeleport 0x6df70d4)
	void PostLobbyIslandTeleport(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.PlayWinEffects (Has no native function)
	void PlayWinEffects(class APawn*& FinisherPawn, class UFortWeaponItemDefinition*& FinishingWeapon, enum EDeathCause& DeathCause, bool& bAudioOnly); // (0x00000002 | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.PlayVictoryStinger (Has no native function)
	void PlayVictoryStinger(class USoundCue*& VictoryStingerCue); // (0x00000002 | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnServerMarkerAdded (Underlying native function: OnServerMarkerAdded 0x81207a0)
	void OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnRep_TrackedVictimsShared (Underlying native function: OnRep_TrackedVictimsShared 0x812078c)
	void OnRepTrackedVictimsShared(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnRep_SkydiveLeader (Underlying native function: OnRep_SkydiveLeader 0x8120778)
	void OnRepSkydiveLeader(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnRep_FocalPoint (Underlying native function: OnRep_FocalPoint 0x8120658)
	void OnRepFocalPoint(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnRep_CreativePlotLinkedVolume (Underlying native function: OnRep_CreativePlotLinkedVolume 0x8120644)
	void OnRepCreativePlotLinkedVolume(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnRep_CreativeIslands (Underlying native function: OnRep_CreativeIslands 0x8120630)
	void OnRepCreativeIslands(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnPostGameForced (Underlying native function: OnPostGameForced 0x81205e4)
	void OnPostGameForced(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnMinigameStarted (Underlying native function: OnMinigameStarted 0x81204d0)
	void OnMinigameStarted(); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnMinigameEnded (Underlying native function: OnMinigameEnded 0x81204bc)
	void OnMinigameEnded(); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnMatchmakingPartyReady (Underlying native function: OnMatchmakingPartyReady 0x81204a8)
	void OnMatchmakingPartyReady(); // (Final | Native | Public)

	// DelegateFunction /Script/FortniteGame.FortPlayerControllerAthena.OnIslandMetatdataUpdateComplete__DelegateSignature (Has no native function)
	void OnIslandMetatdataUpdateCompleteDelegateSignature(struct FString& Error); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnHeatmapChanged (Underlying native function: OnHeatmapChanged 0x8120424)
	void OnHeatmapChanged(class UFortVolumeObjectTrackingComponent*& InVolumeObjectTrackingComponent); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnFortPlayerPawnAthenaDied (Underlying native function: OnFortPlayerPawnAthenaDied 0x81203a4)
	void OnFortPlayerPawnAthenaDied(class AFortPlayerPawnAthena*& FortPlayerPawnAthena); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnCreativePlotLinkedVolumeMinigameChanged (Underlying native function: OnCreativePlotLinkedVolumeMinigameChanged 0x81202a0)
	void OnCreativePlotLinkedVolumeMinigameChanged(class AFortMinigame*& Minigame); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnClientVolumeManagerReplicated (Underlying native function: OnClientVolumeManagerReplicated 0x812028c)
	void OnClientVolumeManagerReplicated(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.OnClientEnterVolume (Underlying native function: OnClientEnterVolume 0x81201c8)
	void OnClientEnterVolume(class APlayerState*& InPlayerState, class AFortVolume*& InVolume); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.NotifyCinematicCameraSkipped (Underlying native function: NotifyCinematicCameraSkipped 0x8120018)
	void NotifyCinematicCameraSkipped(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.MultiKillExpired (Underlying native function: MultiKillExpired 0x8120004)
	void MultiKillExpired(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.MakeNewCreativePlotFromLinkCode (Underlying native function: MakeNewCreativePlotFromLinkCode 0x811fc64)
	void MakeNewCreativePlotFromLinkCode(struct FString& LinkCode, struct FString& locale, struct FString& Title); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.MakeNewCreativePlot (Underlying native function: MakeNewCreativePlot 0x811f994)
	void MakeNewCreativePlot(class UFortCreativeRealEstatePlotItemDefinition*& PlotType, struct FString& locale, struct FString& Title); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsUnderPlotLimit (Underlying native function: IsUnderPlotLimit 0x811f6b4)
	bool IsUnderPlotLimit(int& MaxIslands, int& NumIslands, bool& bIncludeDeleted); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsTryToFireRestrictedByTypeCooldowns (Underlying native function: IsTryToFireRestrictedByTypeCooldowns 0x811f680)
	bool IsTryToFireRestrictedByTypeCooldowns(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsTeleportingToLobby (Underlying native function: IsTeleportingToLobby 0x811f5cc)
	bool IsTeleportingToLobby(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsPlayerRebootingNow (Underlying native function: IsPlayerRebootingNow 0x811f5a8)
	bool IsPlayerRebootingNow(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsPlayerInReadOnlyVolume (Underlying native function: IsPlayerInReadOnlyVolume 0x811f55c)
	bool IsPlayerInReadOnlyVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsPlayerInPublishedVolume (Underlying native function: IsPlayerInPublishedVolume 0x811f538)
	bool IsPlayerInPublishedVolume(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsPlayerInFeaturedVolume (Underlying native function: IsPlayerInFeaturedVolume 0x811f4b8)
	bool IsPlayerInFeaturedVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsPlayerInAVolumeTheyCanCreateIn (Underlying native function: IsPlayerInAVolumeTheyCanCreateIn 0x811f470)
	bool IsPlayerInAVolumeTheyCanCreateIn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsPlayerInAMinigame (Underlying native function: IsPlayerInAMinigame 0x811f44c)
	bool IsPlayerInAMinigame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsPiPFullScreen (Underlying native function: IsPiPFullScreen 0x811f434)
	bool IsPiPFullScreen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsPartyMemberReadyCheckStatusInProgress (Underlying native function: IsPartyMemberReadyCheckStatusInProgress 0x811f410)
	bool IsPartyMemberReadyCheckStatusInProgress(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsOnPublishedIsland (Underlying native function: IsOnPublishedIsland 0x811f3ec)
	bool IsOnPublishedIsland(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsMatchmaking (Underlying native function: IsMatchmaking 0x811f37c)
	bool IsMatchmaking(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsLoadingScreenActive (Underlying native function: IsLoadingScreenActive 0x811f364)
	bool IsLoadingScreenActive(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsInPublicMatchmadeCreativeMinigame (Underlying native function: IsInPublicMatchmadeCreativeMinigame 0x811f340)
	bool IsInPublicMatchmadeCreativeMinigame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsClientNotifiedOfWin (Underlying native function: IsClientNotifiedOfWin 0x811f324)
	bool IsClientNotifiedOfWin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsClientNotifiedOfTeamWin (Underlying native function: IsClientNotifiedOfTeamWin 0x811f308)
	bool IsClientNotifiedOfTeamWin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.IsClientNotifiedOfLoss (Underlying native function: IsClientNotifiedOfLoss 0x811f2ec)
	bool IsClientNotifiedOfLoss(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.HighlightNumberReturned (Underlying native function: HighlightNumberReturned 0x811f26c)
	void HighlightNumberReturned(int& NumHighlights); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.HasPendingMinigameSpawnData (Underlying native function: HasPendingMinigameSpawnData 0x811f254)
	bool HasPendingMinigameSpawnData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.HasPartyRiftPortal (Underlying native function: HasPartyRiftPortal 0x811f238)
	bool HasPartyRiftPortal(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.HasItems (Underlying native function: HasItems 0x811f1b0)
	bool HasItems(struct TArray<enum EFortItemType>& ExcludedItemTypes); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.HandlePlayersLeftChanged (Underlying native function: HandlePlayersLeftChanged 0x811f134)
	void HandlePlayersLeftChanged(int& NumPlayersLeft); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.HandleGamePhaseStepChanged (Underlying native function: HandleGamePhaseStepChanged 0x811f06c)
	void HandleGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0x811ef98)
	void HandleGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetTransientQuestsComponent (Underlying native function: GetTransientQuestsComponent 0x811ee5c)
	class UFortControllerComponent_TransientQuests* GetTransientQuestsComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetTrackedVictims (Underlying native function: GetTrackedVictims 0x811ed78)
	void GetTrackedVictims(class AFortPlayerStateAthena*& EliminatedVictim, class AFortPlayerStateAthena*& DownedVictim); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetSquadMemberPlayerStates (Underlying native function: GetSquadMemberPlayerStates 0x811e8bc)
	struct TArray<class AFortPlayerStateAthena*> GetSquadMemberPlayerStates(bool& bIncludeSelf); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetSquadKillsCount (Underlying native function: GetSquadKillsCount 0x811e84c)
	int GetSquadKillsCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetSquadKills (Underlying native function: GetSquadKills 0x811e7b0)
	void GetSquadKills(struct TArray<int>& Kills); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetProfilePlotEntries (Underlying native function: GetProfilePlotEntries 0x811e4b8)
	int GetProfilePlotEntries(bool& bIncludeDeleted); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetPlaysetSize (Underlying native function: GetPlaysetSize 0x811e1f0)
	void GetPlaysetSize(int& SizeX, int& SizeY, int& SizeZ); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetPlayset (Underlying native function: GetPlayset 0x811e1d8)
	class UFortPlaysetItemDefinition* GetPlayset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetPlaylistGameTypeText (Underlying native function: GetPlaylistGameTypeText 0x811e104)
	struct FText GetPlaylistGameTypeText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetPartyRiftPortal (Underlying native function: GetPartyRiftPortal 0x811df9c)
	class AFortAthenaPartyRiftPortal* GetPartyRiftPortal(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetOverflowCountIfItemWasAddedToInventory (Underlying native function: GetOverflowCountIfItemWasAddedToInventory 0x811deb8)
	int GetOverflowCountIfItemWasAddedToInventory(struct FFortItemEntry& ItemEntry); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetMinigame (Underlying native function: GetMinigame 0x811de94)
	class AFortMinigame* GetMinigame(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetMaxNumberOfPlots (Underlying native function: GetMaxNumberOfPlots 0x811de70)
	int GetMaxNumberOfPlots(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetMatchReport (Underlying native function: GetMatchReport 0x811de48)
	class UAthenaPlayerMatchReport* GetMatchReport(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetIsSpectating (Underlying native function: GetIsSpectating 0x811de08)
	bool GetIsSpectating(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetInventorySpace (Underlying native function: GetInventorySpace 0x6e8e624)
	int GetInventorySpace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetIgnoreSpectatorViewRotation (Underlying native function: GetIgnoreSpectatorViewRotation 0x811ddcc)
	bool GetIgnoreSpectatorViewRotation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetIgnoreSignifanceBasedCustomDepthRendering (Underlying native function: GetIgnoreSignifanceBasedCustomDepthRendering 0x811dd74)
	bool GetIgnoreSignifanceBasedCustomDepthRendering(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetGameStateAthena (Underlying native function: GetGameStateAthena 0x811dd50)
	class AFortGameStateAthena* GetGameStateAthena(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetCurrentVolumeOrCreativePlotLinkedVolume (Underlying native function: GetCurrentVolumeOrCreativePlotLinkedVolume 0x811dbf4)
	class AFortVolume* GetCurrentVolumeOrCreativePlotLinkedVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetCurrentFortVolumeType (Underlying native function: GetCurrentFortVolumeType 0x811db78)
	enum EFortVolumeType GetCurrentFortVolumeType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetCurrentBuildingSpeedModifier (Has no native function)
	float GetCurrentBuildingSpeedModifier(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetCurrentBuildingCostModifier (Has no native function)
	float GetCurrentBuildingCostModifier(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetCreativeUserContentManager (Underlying native function: GetCreativeUserContentManager 0x811db60)
	class UCreativeUserContentManager* GetCreativeUserContentManager(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetCreativePlotLinkedVolume (Underlying native function: GetCreativePlotLinkedVolume 0x811db48)
	class AFortVolume* GetCreativePlotLinkedVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.GetCachedHighlightCount (Underlying native function: GetCachedHighlightCount 0x811d990)
	int GetCachedHighlightCount(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.FollowSpecialActor (Underlying native function: FollowSpecialActor 0x811d930)
	void FollowSpecialActor(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.EnableCreativeContentManagerBasedOnPlaylist (Underlying native function: EnableCreativeContentManagerBasedOnPlaylist 0x273fd14)
	void EnableCreativeContentManagerBasedOnPlaylist(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.DuplicateCreativePlot (Underlying native function: DuplicateCreativePlot 0x811d590)
	void DuplicateCreativePlot(struct FString& IslandId, struct FString& locale, struct FString& Title); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.DestroyCreativePlot (Underlying native function: DestroyCreativePlot 0x811d2ec)
	void DestroyCreativePlot(struct FString& IslandId); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientUpdateGeneratedSkydivePath (Underlying native function: ClientUpdateGeneratedSkydivePath 0x811cfa8)
	void ClientUpdateGeneratedSkydivePath(struct FString& LocationStr, struct FVector& DropLocationStr, struct FVector& GlideLocationStr, struct FVector& LandingLocationStr); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientUnloadedContentForLinkCodeResult (Underlying native function: ClientUnloadedContentForLinkCodeResult 0x811ccc0)
	void ClientUnloadedContentForLinkCodeResult(struct FOnlineLinkId& LinkId, bool& bSuccess, struct FString& ErrorMessage); // (Net | NetReliable | Native | Event | Public | NetClient | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientTryEndRebootInteraction (Underlying native function: ClientTryEndRebootInteraction 0x811cca8)
	void ClientTryEndRebootInteraction(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientStopWaitLTMLoading (Underlying native function: ClientStopWaitLTMLoading 0x811cc90)
	void ClientStopWaitLTMLoading(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientStartWaitLTMLoading (Underlying native function: ClientStartWaitLTMLoading 0x811cc78)
	void ClientStartWaitLTMLoading(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientStartRespawnPreparation (Underlying native function: ClientStartRespawnPreparation 0x811cab8)
	void ClientStartRespawnPreparation(struct FVector& RespawnLoc, struct FRotator& RespawnRot, float& RespawnCameraDist, struct FName& InRespawnCameraBehavior, struct FText& HUDReasonText); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientSignalPortalLoadCompleteViaDelegate (Underlying native function: ClientSignalPortalLoadCompleteViaDelegate 0x811ca24)
	void ClientSignalPortalLoadCompleteViaDelegate(struct FAsyncTaskResult& Result); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientSetStreamingTestStreamingLevels (Underlying native function: ClientSetStreamingTestStreamingLevels 0x811c9a0)
	void ClientSetStreamingTestStreamingLevels(bool& streaming); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientSetDeathReport (Underlying native function: ClientSetDeathReport 0x811c8f0)
	void ClientSetDeathReport(struct FFortPlayerDeathReport& InDeathReport); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientSendTeamStatsForPlayer (Underlying native function: ClientSendTeamStatsForPlayer 0x811c86c)
	void ClientSendTeamStatsForPlayer(struct FAthenaMatchTeamStats*& TeamStats); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientSendStateEncryptionKey (Underlying native function: ClientSendStateEncryptionKey 0x811c7d8)
	void ClientSendStateEncryptionKey(struct FPlayerStateEncryptionKey& Key); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientSendMatchStatsForPlayer (Underlying native function: ClientSendMatchStatsForPlayer 0x811c71c)
	void ClientSendMatchStatsForPlayer(struct FAthenaMatchStats& Stats); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientSendEndMatchReportHeartbeat (Underlying native function: ClientSendEndMatchReportHeartbeat 0x811c704)
	void ClientSendEndMatchReportHeartbeat(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientSendEndBattleRoyaleMatchForPlayer (Underlying native function: ClientSendEndBattleRoyaleMatchForPlayer 0x811c5f4)
	void ClientSendEndBattleRoyaleMatchForPlayer(bool& bSuccess, struct FAthenaRewardResult& Result); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientSendDebugPoiVolumeData (Underlying native function: ClientSendDebugPoiVolumeData 0x811c49c)
	void ClientSendDebugPoiVolumeData(struct FString& PoiVolumes); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientSendDebugPoiLocationTags (Underlying native function: ClientSendDebugPoiLocationTags 0x811c3ec)
	void ClientSendDebugPoiLocationTags(struct FGameplayTagContainer& InPoiTags); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientRequestLevelStreamingHandshake (Underlying native function: ClientRequestLevelStreamingHandshake 0x811c3d4)
	void ClientRequestLevelStreamingHandshake(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientReportTournamentPlacementPointsScored (Underlying native function: ClientReportTournamentPlacementPointsScored 0x811c310)
	void ClientReportTournamentPlacementPointsScored(int& Placement, int& PointsEarned); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientReportPhaseFound (Underlying native function: ClientReportPhaseFound 0x811c1b8)
	void ClientReportPhaseFound(struct FString& Phase); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientReceiveSquadQuickChatMessage (Underlying native function: ClientReceiveSquadQuickChatMessage 0x811c0d0)
	void ClientReceiveSquadQuickChatMessage(struct FAthenaQuickChatActiveEntry& ChatEntry, class AFortPlayerController*& SenderPC); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientReceiveKillNotification (Underlying native function: ClientReceiveKillNotification 0x811c008)
	void ClientReceiveKillNotification(class AFortPlayerStateZone*& Killer, class AFortPlayerStateZone*& Killed); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientPublishCreativePlotComplete (Underlying native function: ClientPublishCreativePlotComplete 0x811bd98)
	void ClientPublishCreativePlotComplete(struct FString& ResultErrorCode, struct FString& LinkJson); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientPreviewScreenshotModeActivated (Underlying native function: ClientPreviewScreenshotModeActivated 0x811bccc)
	void ClientPreviewScreenshotModeActivated(bool& bSuccess, bool& bForceQuit); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientOnCreativePlotReported (Underlying native function: ClientOnCreativePlotReported 0x811bbdc)
	void ClientOnCreativePlotReported(bool& bWasSuccessful, struct FOnlineLinkId& LinkId); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientNotifyWon (Underlying native function: ClientNotifyWon 0x811bae0)
	void ClientNotifyWon(class APawn*& FinisherPawn, class UFortWeaponItemDefinition*& FinishingWeapon, enum EDeathCause& DeathCause); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientNotifyTeamWon (Underlying native function: ClientNotifyTeamWon 0x811b9e4)
	void ClientNotifyTeamWon(class APawn*& FinisherPawn, class UFortWeaponItemDefinition*& FinishingWeapon, enum EDeathCause& DeathCause); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientNotifyTeamLost (Underlying native function: ClientNotifyTeamLost 0x811b9cc)
	void ClientNotifyTeamLost(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientNotifyLost (Underlying native function: ClientNotifyLost 0x811b904)
	void ClientNotifyLost(class APawn*& WinningPawn, enum EEndOfMatchReason& LostReason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientNotifyAbortRespawn (Underlying native function: ClientNotifyAbortRespawn 0x811b8ec)
	void ClientNotifyAbortRespawn(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientMutatorEvent (Underlying native function: ClientMutatorEvent 0x811b7f0)
	void ClientMutatorEvent(class AFortGameplayMutator*& Mutator, int& EventId, int& PayloadData); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientMarkSkydivePathsComplete (Underlying native function: ClientMarkSkydivePathsComplete 0x811b7d8)
	void ClientMarkSkydivePathsComplete(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientHideScreenWhileRespawning (Underlying native function: ClientHideScreenWhileRespawning 0x811b744)
	void ClientHideScreenWhileRespawning(struct FText& HUDReasonText); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientFinishTeleportingForMinigame (Underlying native function: ClientFinishTeleportingForMinigame 0x811b6b0)
	void ClientFinishTeleportingForMinigame(struct FRotator& Rotation); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientFadeCameraPreMinigameTeleport (Underlying native function: ClientFadeCameraPreMinigameTeleport 0x811b698)
	void ClientFadeCameraPreMinigameTeleport(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientFadeCameraForScoreScreen (Underlying native function: ClientFadeCameraForScoreScreen 0x811b680)
	void ClientFadeCameraForScoreScreen(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientEnterCameraMode (Underlying native function: ClientEnterCameraMode 0x811b668)
	void ClientEnterCameraMode(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientDownloadedContentForLinkCodeResult (Underlying native function: ClientDownloadedContentForLinkCodeResult 0x811b380)
	void ClientDownloadedContentForLinkCodeResult(struct FOnlineLinkId& LinkId, bool& bSuccess, struct FString& ErrorMessage); // (Net | NetReliable | Native | Event | Public | NetClient | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientCycleQuickBarToCreativeItem (Underlying native function: ClientCycleQuickBarToCreativeItem 0x811b2b4)
	void ClientCycleQuickBarToCreativeItem(struct FGuid& CreativeItemGuid, class UFortWorldItemDefinition*& CreativeItemDef); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientCreativeTimerDeviceUpdateRequested (Underlying native function: ClientCreativeTimerDeviceUpdateRequested 0x811b1b0)
	void ClientCreativeTimerDeviceUpdateRequested(class AFortCreativeTimerDevice*& TimerDevice, unsigned char& CurrentState, float& ServerTimeFinished); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientCreativeTimerDeviceClearRequested (Underlying native function: ClientCreativeTimerDeviceClearRequested 0x811b12c)
	void ClientCreativeTimerDeviceClearRequested(class AFortCreativeTimerDevice*& TimerDevice); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientCheckIfSafeToTurnOnCamera (Underlying native function: ClientCheckIfSafeToTurnOnCamera 0x811b114)
	void ClientCheckIfSafeToTurnOnCamera(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientBroadcastPlotItemID (Underlying native function: ClientBroadcastPlotItemID 0x811afbc)
	void ClientBroadcastPlotItemID(struct FString& PlotID); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientBroadcastOnUpdateCreativePlotName (Underlying native function: ClientBroadcastOnUpdateCreativePlotName 0x811aeb4)
	void ClientBroadcastOnUpdateCreativePlotName(bool& bSuccess, struct FText& Reason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientBroadcastOnUpdateCreativeDescriptionTags (Underlying native function: ClientBroadcastOnUpdateCreativeDescriptionTags 0x811add0)
	void ClientBroadcastOnUpdateCreativeDescriptionTags(bool& bSuccess, struct FText& Reason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientBroadcastOnRestoreCreativePlotFinished (Underlying native function: ClientBroadcastOnRestoreCreativePlotFinished 0x811acec)
	void ClientBroadcastOnRestoreCreativePlotFinished(bool& bSuccess, struct FText& Reason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientBroadcastOnMakeNewCreativePlotFinished (Underlying native function: ClientBroadcastOnMakeNewCreativePlotFinished 0x811ac08)
	void ClientBroadcastOnMakeNewCreativePlotFinished(bool& bSuccess, struct FText& Reason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientBroadcastOnDuplicateCreativePlotFinished (Underlying native function: ClientBroadcastOnDuplicateCreativePlotFinished 0x811ab24)
	void ClientBroadcastOnDuplicateCreativePlotFinished(bool& bSuccess, struct FText& Reason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientBroadcastOnDestroyCreativePlotFinished (Underlying native function: ClientBroadcastOnDestroyCreativePlotFinished 0x811aa40)
	void ClientBroadcastOnDestroyCreativePlotFinished(bool& bSuccess, struct FText& Reason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientBotStopDogpile (Underlying native function: ClientBotStopDogpile 0x811aa28)
	void ClientBotStopDogpile(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientBotStartDogpile (Underlying native function: ClientBotStartDogpile 0x811a994)
	void ClientBotStartDogpile(struct FVector& DogpilePosition); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientAutoEquipFirstItem (Underlying native function: ClientAutoEquipFirstItem 0x811a8b8)
	void ClientAutoEquipFirstItem(struct FGuid& ItemGuid, bool& bForceExecution); // (Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientAlertPortalDoneTeleporting (Underlying native function: ClientAlertPortalDoneTeleporting 0x811a8a0)
	void ClientAlertPortalDoneTeleporting(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientAlertLeaveIsland (Underlying native function: ClientAlertLeaveIsland 0x811a888)
	void ClientAlertLeaveIsland(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientAlertForcedOffIsland (Underlying native function: ClientAlertForcedOffIsland 0x811a870)
	void ClientAlertForcedOffIsland(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClientAddProfileGoCollection (Underlying native function: ClientAddProfileGoCollection 0x811a6c4)
	void ClientAddProfileGoCollection(struct FString& CollectionName, struct TArray<struct FProfileGoScenario>& NewScenarios); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.Client_DisplayReceivedMultipleInstanceLoot (Underlying native function: Client_DisplayReceivedMultipleInstanceLoot 0x811d25c)
	void ClientDisplayReceivedMultipleInstanceLoot(struct TArray<struct FGiftUINotificationInfo>& ItemsReceived); // (0x00000002 | Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.Client_DisplayQuestUpdate (Underlying native function: Client_DisplayQuestUpdate 0x811d1c8)
	void ClientDisplayQuestUpdate(struct TArray<struct FFortDisplayQuestUpdateData>& UpdateData); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClearRespawnAfterDeathTimer (Underlying native function: ClearRespawnAfterDeathTimer 0x811a6b0)
	void ClearRespawnAfterDeathTimer(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClearPendingMinigameSpawnData (Underlying native function: ClearPendingMinigameSpawnData 0x811a698)
	void ClearPendingMinigameSpawnData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClearInventorySpaces (Underlying native function: ClearInventorySpaces 0x6e8edb4)
	void ClearInventorySpaces(int& NumSpaces); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ClearDroppableItems (Underlying native function: ClearDroppableItems 0x6df775c)
	void ClearDroppableItems(bool& bAllowShouldDropItemOverride); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.CheckIfSafeToTurnOnCamera (Underlying native function: CheckIfSafeToTurnOnCamera 0x811a684)
	void CheckIfSafeToTurnOnCamera(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.CheckIfSafeToRespawn (Underlying native function: CheckIfSafeToRespawn 0x811a670)
	void CheckIfSafeToRespawn(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.CheckIfLevelStreamingCompleteForHandshake (Underlying native function: CheckIfLevelStreamingCompleteForHandshake 0x811a65c)
	void CheckIfLevelStreamingCompleteForHandshake(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.CheckIfClientLoadedLTM (Underlying native function: CheckIfClientLoadedLTM 0x811a648)
	void CheckIfClientLoadedLTM(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.CanPlayerCreateInCurrentVolume (Underlying native function: CanPlayerCreateInCurrentVolume 0x811a41c)
	bool CanPlayerCreateInCurrentVolume(class AFortVolume*& OutCurrentVolume); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.CanPlayerCreateInCurrentExperience (Underlying native function: CanPlayerCreateInCurrentExperience 0x811a3f8)
	bool CanPlayerCreateInCurrentExperience(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.CanFollowSpecialActor (Underlying native function: CanFollowSpecialActor 0x811a3d4)
	bool CanFollowSpecialActor(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.CancelMatchmaking (Underlying native function: CancelMatchmaking 0x811a5c8)
	void CancelMatchmaking(enum EMatchmakingCancelReasonV2& CancelReason); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.CancelCreativeMatchmakingReadyCheck (Underlying native function: CancelCreativeMatchmakingReadyCheck 0x811a5b4)
	void CancelCreativeMatchmakingReadyCheck(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.BroadcastOnPickupProjectileCreated (Underlying native function: BroadcastOnPickupProjectileCreated 0x811a06c)
	void BroadcastOnPickupProjectileCreated(class UFortItemDefinition*& ItemDefinition); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.BroadcastOnHUDMessageToggled (Underlying native function: BroadcastOnHUDMessageToggled 0x8119f1c)
	void BroadcastOnHUDMessageToggled(struct FHUDMessageData& HUDMessageData, bool& bShowMessage); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.BroadcastDeviceButtonComponentClickedDelegate (Underlying native function: BroadcastDeviceButtonComponentClickedDelegate 0x8119e20)
	void BroadcastDeviceButtonComponentClickedDelegate(class UFortCreativeDeviceButtonComponent*& DeviceButtonComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerAthena.ApplyOverrideWrapToVehicle (Underlying native function: ApplyOverrideWrapToVehicle 0x8119c28)
	void ApplyOverrideWrapToVehicle(struct TWeakObjectPtr<class UAthenaItemWrapDefinition>& ItemWrap); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

