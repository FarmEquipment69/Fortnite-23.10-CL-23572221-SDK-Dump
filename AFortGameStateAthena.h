// Class /Script/FortniteGame.FortGameStateAthena
// Size: 0x3060
class AFortGameStateAthena : public AFortGameStateZone
{
	unsigned char unreflected_1000[0x98]; // 0x1000 (0x98) 
	bool bCanBuildOnWaterGlobal; // 0x1098 (0x1)
	bool bBlockBuildOnWaterGlobal; // 0x1099 (0x1)
	unsigned char unreflected_109a[0x36]; // 0x109a (0x36) 
	struct FMulticastInlineDelegate OnNewContentUpdateMessageRecieved; // 0x10d0 (0x10)
	struct FMulticastInlineDelegate OnNewScreenLogMessageReceived; // 0x10e0 (0x10)
	bool bIsGrassFireBoundsUpdateEnabled; // 0x10f0 (0x1)
	bool bCanSpawnLoot; // 0x10f1 (0x1)
	unsigned char unreflected_10f2[0x1e]; // 0x10f2 (0x1e) 
	class UCurveTable* AthenaGameDataTable; // 0x1110 (0x8)
	struct TArray<struct FName> AthenaGameDataResetRows; // 0x1118 (0x10)
	class UCurveTable* ResetAthenaGameDataTable; // 0x1128 (0x8)
	unsigned char unreflected_1130[0x10]; // 0x1130 (0x10) 
	bool bIsUsingDownloadOnDemand; // 0x1140 (0x1)
	bool bWantsHoldoverPluginOnClient; // 0x1141 (0x1)
	unsigned char unreflected_1142[0x1e]; // 0x1142 (0x1e) 
	struct FMulticastInlineDelegate OnCurrentPlaylistLoaded; // 0x1160 (0x10)
	unsigned char unreflected_1170[0x48]; // 0x1170 (0x48) 
	bool bPlaylistDataIsLoaded; // 0x11b8 (0x1)
	unsigned char unreflected_11b9[0x1]; // 0x11b9 (0x1) 
	bool bPlaylistDataIsActivelyLoading; // 0x11ba (0x1)
	unsigned char unreflected_11bb[0x5]; // 0x11bb (0x5) 
	struct FMulticastInlineDelegate AllWinnersAnnounced; // 0x11c0 (0x10)
	struct FMulticastInlineDelegate WinnerInfoDisplayReadyCN; // 0x11d0 (0x10)
	struct FMulticastInlineDelegate CountdownTick; // 0x11e0 (0x10)
	struct FMulticastInlineDelegate CountdownStarted; // 0x11f0 (0x10)
	struct FMulticastInlineDelegate CountdownFinished; // 0x1200 (0x10)
	struct FMulticastInlineDelegate CountdownStopped; // 0x1210 (0x10)
	struct FMulticastInlineDelegate FinalCountdownTick; // 0x1220 (0x10)
	struct FMulticastInlineDelegate FinalCountdownStarted; // 0x1230 (0x10)
	struct FMulticastInlineDelegate FinalCountdownFinished; // 0x1240 (0x10)
	struct FMulticastInlineDelegate CurrentHighScoreUpdated; // 0x1250 (0x10)
	struct FMulticastInlineDelegate OnGoalScoreChanged; // 0x1260 (0x10)
	struct FMulticastInlineDelegate OnPickupSpawnedAndReady; // 0x1270 (0x10)
	struct FMulticastInlineDelegate OnPickupDestroy; // 0x1280 (0x10)
	struct FMulticastInlineDelegate GameModeMessageRequest; // 0x1290 (0x10)
	struct FMulticastInlineDelegate ContextTutorialGameModeMessageRequest; // 0x12a0 (0x10)
	struct FMulticastInlineDelegate HideGameModeMessageRequest; // 0x12b0 (0x10)
	struct FMulticastInlineDelegate GameModeMessageSuccess; // 0x12c0 (0x10)
	struct FMulticastInlineDelegate ShowGameModeMessage; // 0x12d0 (0x10)
	struct FMulticastInlineDelegate HideGameModeMessage; // 0x12e0 (0x10)
	struct FMulticastInlineDelegate ShowMarkerGameMode; // 0x12f0 (0x10)
	struct FMulticastInlineDelegate HideMarkerGameMode; // 0x1300 (0x10)
	struct FMulticastInlineDelegate RepositionGameModeMessage; // 0x1310 (0x10)
	struct FMulticastInlineDelegate SetDefaultPositionGameModeMessage; // 0x1320 (0x10)
	struct FMulticastInlineDelegate OnPlayerLeftCreativeIsland; // 0x1330 (0x10)
	struct FMulticastInlineDelegate OnPlayerJoinedCreativeIsland; // 0x1340 (0x10)
	struct FMulticastInlineDelegate MutatorGenericIntegerUpdated; // 0x1350 (0x10)
	struct FMulticastInlineDelegate MutatorGameplayEvent; // 0x1360 (0x10)
	struct FMulticastInlineDelegate OnSafeZoneIndicatorChanged; // 0x1370 (0x10)
	unsigned char unreflected_1380[0x48]; // 0x1380 (0x48) 
	float PlaylistEndTime; // 0x13c8 (0x4)
	unsigned char unreflected_13cc[0x4]; // 0x13cc (0x4) 
	float SafeZonePauseTime; // 0x13d0 (0x4)
	unsigned char unreflected_13d4[0x4]; // 0x13d4 (0x4) 
	int TotalFinalCountdownTime; // 0x13d8 (0x4)
	bool bForceTeamScorePlacementOnDeath; // 0x13dc (0x1)
	bool bPlaylistStoppedSafeZonePhases; // 0x13dd (0x1)
	bool bSkyTubesShuttingDown; // 0x13de (0x1)
	bool bSkyTubesDisabled; // 0x13df (0x1)
	unsigned char unreflected_13e0[0x8]; // 0x13e0 (0x8) 
	int ServerChangelistNumber; // 0x13e8 (0x4)
	unsigned char unreflected_13ec[0x4]; // 0x13ec (0x4) 
	class AFortSpecialActorReplicationInfo* SpecialActorData; // 0x13f0 (0x8)
	class AFortPropertyOverrideReplShared* ReplOverrideData; // 0x13f8 (0x8)
	struct TArray<class UClass*> BuildingActorClasses; // 0x1400 (0x10)
	struct FMulticastInlineDelegate WinnerAnnounced; // 0x1410 (0x10)
	struct FMulticastInlineDelegate WinningTeamAnnounced; // 0x1420 (0x10)
	struct FMulticastInlineDelegate GamePhaseChanged; // 0x1430 (0x10)
	struct FMulticastInlineDelegate WinningScoreDetermined; // 0x1440 (0x10)
	struct FMulticastInlineDelegate GamePhaseStepChanged; // 0x1450 (0x10)
	struct FMulticastInlineDelegate StormCapStateChanged; // 0x1460 (0x10)
	struct FMulticastInlineDelegate StormProgressStopped; // 0x1470 (0x10)
	struct FMulticastInlineDelegate ActiveTeamArrayBuiltEvent; // 0x1480 (0x10)
	struct FMulticastInlineDelegate OnPlayersLeftChanged; // 0x1490 (0x10)
	struct FMulticastInlineDelegate OnTeamsLeftChanged; // 0x14a0 (0x10)
	struct FMulticastInlineDelegate OnWinConditionMetCN; // 0x14b0 (0x10)
	struct FMulticastInlineDelegate UpdateNamedPoiColorDelegate; // 0x14c0 (0x10)
	struct FMulticastInlineDelegate OnWarmupCountdownEndTimeUpdated; // 0x14d0 (0x10)
	bool bSkipWinnerAnnounced; // 0x14e0 (0x1)
	bool bStopBuildingHealingOnDamage; // 0x14e1 (0x1)
	bool bIsInCountdown; // 0x14e2 (0x1)
	bool bIsInFinalCountdown; // 0x14e3 (0x1)
	float WarmupCountdownStartTime; // 0x14e4 (0x4)
	float WarmupCountdownEndTime; // 0x14e8 (0x4)
	float AircraftStartTime; // 0x14ec (0x4)
	float SafeZonesStartTime; // 0x14f0 (0x4)
	float EndGameStartTime; // 0x14f4 (0x4)
	float EndGameKickPlayerTime; // 0x14f8 (0x4)
	int TotalPlayers; // 0x14fc (0x4)
	int PlayersLeft; // 0x1500 (0x4)
	unsigned char unreflected_1504[0x4]; // 0x1504 (0x4) 
	struct TArray<> ClientVehicleClassesToLoad; // 0x1508 (0x10)
	struct TArray<class UFortItemDefinition*> ClientItemDefsToLoad; // 0x1518 (0x10)
	struct TArray<class AFortProjectileBase*> PredictedProjectiles; // 0x1528 (0x10)
	float RemainingFocalPointActorDuration; // 0x1538 (0x4)
	unsigned char unreflected_153c[0x4]; // 0x153c (0x4) 
	class AActor* FocalPointActor; // 0x1540 (0x8)
	float FocalPointRotationInterpSpeed; // 0x1548 (0x4)
	unsigned char unreflected_154c[0x4]; // 0x154c (0x4) 
	struct FVector_NetQuantize FocalPointOffset; // 0x1550 (0x18)
	float FocalPointFOV; // 0x1568 (0x4)
	unsigned char unreflected_156c[0x1c]; // 0x156c (0x1c) 
	bool bCheatRespawnEnabled; // 0x1588 (0x1)
	enum EAthenaStormCapState StormCapState; // 0x1589 (0x1)
	unsigned char unreflected_158a[0x2]; // 0x158a (0x2) 
	int CurrentPlayerCap; // 0x158c (0x4)
	struct FStormCapDamageThresholdInfo* DamageForStormCapMarking; // 0x1590 (0x8)
	struct TArray<int> TeamXPlayersLeft; // 0x1598 (0x10)
	struct TArray<struct FFortWinnerPlayerData> WinningPlayerList; // 0x15a8 (0x10)
	int TeamsLeft; // 0x15b8 (0x4)
	unsigned char unreflected_15bc[0x4]; // 0x15bc (0x4) 
	struct TArray<unsigned char> WinningTeamsCN; // 0x15c0 (0x10)
	struct TArray<class UObject*> ServerToClientPreloadList; // 0x15d0 (0x10)
	class UAthenaBattleBusItemDefinition* DefaultBattleBus; // 0x15e0 (0x8)
	bool bAllowUserPickedCosmeticBattleBus; // 0x15e8 (0x1)
	unsigned char unreflected_15e9[0x7]; // 0x15e9 (0x7) 
	struct TArray<struct FAircraftFlightInfo> TeamFlightPaths; // 0x15f0 (0x10)
	struct FAircraftFlightInfo FlightPathMidLine; // 0x1600 (0x48)
	struct FVector2D DropZoneCenter; // 0x1648 (0x10)
	struct FVector2D FlightPathSelectionCenter; // 0x1658 (0x10)
	struct FDateTime* UtcTimeStartedMatch; // 0x1668 (0x8)
	bool bIsLargeTeamGame; // 0x1670 (0x1)
	unsigned char unreflected_1671[0x7]; // 0x1671 (0x7) 
	class APlayerState* WinningPlayerState; // 0x1678 (0x8)
	unsigned char unreflected_1680[0x10]; // 0x1680 (0x10) 
	int WinningTeam; // 0x1690 (0x4)
	int WinningScore; // 0x1694 (0x4)
	int CurrentHighScore; // 0x1698 (0x4)
	int CurrentHighScoreTeam; // 0x169c (0x4)
	class USoundCue* SupplyDropWaveStartedSoundCue; // 0x16a0 (0x8)
	struct TArray<struct FText> KillFeedEntry; // 0x16a8 (0x10)
	unsigned char unreflected_16b8[0x10]; // 0x16b8 (0x10) 
	struct FMulticastInlineDelegate KillFeedUpdated; // 0x16c8 (0x10)
	struct TArray<class AFortPlayerState*> SpectatorArray; // 0x16d8 (0x10)
	struct TArray<class AFortPlayerState*> PartyMemberSpectatorArray; // 0x16e8 (0x10)
	enum EAirCraftBehavior AirCraftBehavior; // 0x16f8 (0x1)
	unsigned char unreflected_16f9[0x1]; // 0x16f9 (0x1) 
	bool bStormReachedFinalPosition; // 0x16fa (0x1)
	enum EFriendlyFireType FriendlyFireType; // 0x16fb (0x1)
	unsigned char unreflected_16fc[0x1c]; // 0x16fc (0x1c) 
	bool SpectateAPartyMemberAvailable; // 0x1718 (0x1)
	unsigned char unreflected_1719[0x117]; // 0x1719 (0x117) 
	struct FGameMemberInfoArray GameMemberInfoArray; // 0x1830 (0x120)
	unsigned char unreflected_1950[0x78]; // 0x1950 (0x78) 
	struct TArray<unsigned char> ActiveTeamNums; // 0x19c8 (0x10)
	int CurrentPlaylistId; // 0x19d8 (0x4)
	unsigned char unreflected_19dc[0x4]; // 0x19dc (0x4) 
	class AFortSafeZoneIndicator* SafeZoneIndicator; // 0x19e0 (0x8)
	class UMaterialInstanceDynamic* MinimapBackgroundMID; // 0x19e8 (0x8)
	class UMaterialInstanceDynamic* MinimapCircleMID; // 0x19f0 (0x8)
	class UMaterialInstanceDynamic* MinimapNextCircleMID; // 0x19f8 (0x8)
	class UMaterialInstanceDynamic* FullmapCircleMID; // 0x1a00 (0x8)
	class UMaterialInstanceDynamic* FullmapNextCircleMID; // 0x1a08 (0x8)
	struct FSlateBrush MinimapSafeZoneBrush; // 0x1a10 (0xc0)
	struct FSlateBrush MinimapCircleBrush; // 0x1ad0 (0xc0)
	struct FSlateBrush MinimapNextCircleBrush; // 0x1b90 (0xc0)
	struct FSlateBrush FullMapCircleBrush; // 0x1c50 (0xc0)
	struct FSlateBrush FullMapNextCircleBrush; // 0x1d10 (0xc0)
	struct FSlateBrush MinimapSafeZoneFinalPosBrush; // 0x1dd0 (0xc0)
	struct FSlateBrush AircraftPathBrush; // 0x1e90 (0xc0)
	struct FSlateBrush AircraftMidlinePathBrush; // 0x1f50 (0xc0)
	struct FSlateBrush AircraftPathTeamIndicatorBrush; // 0x2010 (0xc0)
	class UMaterialInterface* MiniMapBackgroundDrawingMaterial; // 0x20d0 (0x8)
	class UMaterialInterface* MiniMapCircleDrawingMaterial; // 0x20d8 (0x8)
	class UMaterialInterface* MiniMapNextCircleDrawingMaterial; // 0x20e0 (0x8)
	class UMaterialInterface* MiniMapRadiusTrackerCircleDrawingMaterial; // 0x20e8 (0x8)
	struct FName RadiusTrackerCircleCenterAndRadiusParameterName; // 0x20f0 (0x4)
	struct FName RadiusTrackerCircleColorParameterName; // 0x20f4 (0x4)
	struct TArray<struct FDynamicLandData> DynamicShadows; // 0x20f8 (0x10)
	struct TArray<struct FDynamicLandData> DynamicLands; // 0x2108 (0x10)
	class AFortAthenaMapInfo* MapInfo; // 0x2118 (0x8)
	class UMaterialParameterCollection* MinimapMPC; // 0x2120 (0x8)
	class AFortBroadcastSpectatorInfo* BroadcastSpectatorInfo; // 0x2128 (0x8)
	class USplatterGridSystem* SplatterGridSystem; // 0x2130 (0x8)
	class UFortCustomizationsPreloader* CustomizationsPreloader; // 0x2138 (0x8)
	struct TArray<struct FAICharacterPartsPreloadData> AICharacterPartsPreloadData; // 0x2140 (0x10)
	struct TArray<struct FAIPawnCustomizationPreloadData> AIPawnCustomizationPreloadData; // 0x2150 (0x10)
	unsigned char unreflected_2160[0x20]; // 0x2160 (0x20) 
	enum EAthenaGamePhase GamePhase; // 0x2180 (0x1)
	unsigned char unreflected_2181[0x7]; // 0x2181 (0x7) 
	struct FString ReasonWereInSetupPhase; // 0x2188 (0x10)
	enum EEventTournamentRound EventTournamentRound; // 0x2198 (0x1)
	bool bIsCustomMatch; // 0x2199 (0x1)
	unsigned char unreflected_219a[0x6]; // 0x219a (0x6) 
	struct FPlaylistPropertyArray CurrentPlaylistInfo; // 0x21a0 (0x1e8)
	unsigned char unreflected_2388[0x28]; // 0x2388 (0x28) 
	bool bGameModeWillSkipAircraft; // 0x23b0 (0x1)
	enum EAthenaGamePhaseStep GamePhaseStep; // 0x23b1 (0x1)
	unsigned char unreflected_23b2[0x2]; // 0x23b2 (0x2) 
	float GamePhaseStepTimeRemaining; // 0x23b4 (0x4)
	class USoundMix* LobbySoundMix; // 0x23b8 (0x8)
	int TotalPlayersBots; // 0x23c0 (0x4)
	int PlayerBotsLeft; // 0x23c4 (0x4)
	unsigned char unreflected_23c8[0x10]; // 0x23c8 (0x10) 
	struct TArray<class AFortAthenaAircraft*> Aircrafts; // 0x23d8 (0x10)
	unsigned char bAircraftIsLocked; // 0x23e8 (0x1)
	unsigned char unreflected_23e9[0x3]; // 0x23e9 (0x3) 
	enum ESafeZoneStartUp CachedSafeZoneStartUp; // 0x23ec (0x1)
	unsigned char unreflected_23ed[0x3]; // 0x23ed (0x3) 
	int LobbyAction; // 0x23f0 (0x4)
	unsigned char unreflected_23f4[0x4]; // 0x23f4 (0x4) 
	struct FGameplayMutatorEventData MutatorEventData; // 0x23f8 (0x10)
	struct FGameplayMutatorObjectDataArray MutatorObjectDataArray; // 0x2408 (0x118)
	int MutatorGenericInt0; // 0x2520 (0x4)
	int MutatorGenericInt1; // 0x2524 (0x4)
	int MutatorGenericInt2; // 0x2528 (0x4)
	unsigned char unreflected_252c[0x4]; // 0x252c (0x4) 
	class AFortAthenaMutator_AI* GameplayMutatorAI; // 0x2530 (0x8)
	class UFortMutatorListComponent* MutatorListComponent; // 0x2538 (0x8)
	float DefaultGliderRedeployCanRedeploy; // 0x2540 (0x4)
	float DefaultRedeployGliderLateralVelocityMult; // 0x2544 (0x4)
	float DefaultRedeployGliderHeightLimit; // 0x2548 (0x4)
	float DefaultParachuteDeployTraceForGroundDistance; // 0x254c (0x4)
	float DefaultAllowNeutralWallEditing; // 0x2550 (0x4)
	float DefaultRebootMachineHotfix; // 0x2554 (0x4)
	float SignalInStormRegenSpeed; // 0x2558 (0x4)
	float SignalInStormLostSpeed; // 0x255c (0x4)
	float StormCNDamageVulnerabilityLevel0; // 0x2560 (0x4)
	float StormCNDamageVulnerabilityLevel1; // 0x2564 (0x4)
	float StormCNDamageVulnerabilityLevel2; // 0x2568 (0x4)
	float StormCNDamageVulnerabilityLevel3; // 0x256c (0x4)
	struct FMeshNetworkStatus MeshNetworkStatus; // 0x2570 (0x3)
	unsigned char unreflected_2573[0x5]; // 0x2573 (0x5) 
	struct FMulticastInlineDelegate OnClientVolumeManagerReplicated; // 0x2578 (0x10)
	class UClass* VolumeManagerToUse; // 0x2588 (0x8)
	class UClass* PartyRiftPortalManagerToUse; // 0x2590 (0x8)
	unsigned char unreflected_2598[0x10]; // 0x2598 (0x10) 
	class AFortVolumeManager* VolumeManager; // 0x25a8 (0x8)
	class AFortPartyRiftPortalManager* PartyRiftPortalManager; // 0x25b0 (0x8)
	class AFortLocalizationService* LocalizationService; // 0x25b8 (0x8)
	class UFortSanitizationService* SanitizationService; // 0x25c0 (0x8)
	class UFortHermesLoadContext* HermesLoadContext; // 0x25c8 (0x8)
	struct FScalableFloat ResurrectionEnabledRow; // 0x25d0 (0x28)
	unsigned char unreflected_25f8[0x8]; // 0x25f8 (0x8) 
	struct FSlateBrush SpawnMachineIconBrush; // 0x2600 (0xc0)
	struct FSlateBrush SpawnCardIconBrush; // 0x26c0 (0xc0)
	unsigned char unreflected_2780[0x10]; // 0x2780 (0x10) 
	struct FScalableFloat SafeZoneDamageAttribute; // 0x2790 (0x28)
	unsigned char unreflected_27b8[0x8]; // 0x27b8 (0x8) 
	struct FSlateBrush EliminationSelfIconBrush; // 0x27c0 (0xc0)
	struct FSlateBrush EliminationSelfClampedIconBrush; // 0x2880 (0xc0)
	struct FSlateBrush EliminationSquadmateIconBrush; // 0x2940 (0xc0)
	struct FSlateBrush EliminationSquadmateClampedIconBrush; // 0x2a00 (0xc0)
	struct FSlateBrush EliminationTeammateIconBrush; // 0x2ac0 (0xc0)
	struct FSlateBrush EliminationTeammateClampedIconBrush; // 0x2b80 (0xc0)
	struct FSlateBrush EliminationEnemyIconBrush; // 0x2c40 (0xc0)
	struct FSlateBrush EliminationEnemyClampedIconBrush; // 0x2d00 (0xc0)
	struct TWeakObjectPtr<class UCurveFloat> EliminationFadeInCurve; // 0x2dc0 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> EliminationFadeOutCurve; // 0x2de8 (0x28)
	struct TWeakObjectPtr<class UCurveVector> EliminationScaleInCurve; // 0x2e10 (0x28)
	struct TWeakObjectPtr<class UCurveVector> EliminationScaleOutCurve; // 0x2e38 (0x28)
	float EliminationMarkerHUDMaxDistance; // 0x2e60 (0x4)
	float EliminationMarkerHUDZOffset; // 0x2e64 (0x4)
	unsigned char unreflected_2e68[0x20]; // 0x2e68 (0x20) 
	struct FGameplayTagContainer GoldenPoiLocationTags; // 0x2e88 (0x20)
	unsigned char unreflected_2ea8[0x90]; // 0x2ea8 (0x90) 
	class AUnicornDriver* UnicornDriver; // 0x2f38 (0x8)
	struct TArray<struct FString> ActiveEventNamesAtPlaylistLoad; // 0x2f40 (0x10)
	struct FScalableFloat NewItemDuringWarmupWeightAddMod; // 0x2f50 (0x28)
	float SmoothedWorldTimeSeconds; // 0x2f78 (0x4)
	float SmoothedWorldTimeSecondsDrift; // 0x2f7c (0x4)
	struct FGameplayTagContainer RolledLootGroupTags; // 0x2f80 (0x20)
	bool bEnvironmentDamageBlocked; // 0x2fa0 (0x1)
	unsigned char unreflected_2fa1[0x7]; // 0x2fa1 (0x7) 
	struct TArray<struct FString> ReticulatedSplineDefinitions; // 0x2fa8 (0x10)
	struct TArray<struct FAthenaStreamIdOverride> ReticulatedSplineIds; // 0x2fb8 (0x10)
	struct TArray<class AFortMissionStormShield*> StormShields; // 0x2fc8 (0x10)
	unsigned char unreflected_2fd8[0x10]; // 0x2fd8 (0x10) 
	bool bDamageComboHUDEnabled; // 0x2fe8 (0x1)
	unsigned char unreflected_2fe9[0x3]; // 0x2fe9 (0x3) 
	int DamageComboHUDMinHits; // 0x2fec (0x4)
	bool bEnableMatchesProxy; // 0x2ff0 (0x1)
	unsigned char unreflected_2ff1[0x7]; // 0x2ff1 (0x7) 
	struct FString MatchesProxyMatchId; // 0x2ff8 (0x10)
	struct FMulticastInlineDelegate EndGameTimeDilationCompleteDelegate; // 0x3008 (0x10)
	struct FScalableFloat DelayMovementInput; // 0x3018 (0x28)
	float DelayMovementInputReplicated; // 0x3040 (0x4)
	bool bCraftingEnabled; // 0x3044 (0x1)
	unsigned char padding_3045[0x1b]; // 0x3045 (0x1b)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateAthena.UpdateAllGoldenPoiColor (Underlying native function: UpdateAllGoldenPoiColor 0x80b2134)
	void UpdateAllGoldenPoiColor(struct FLinearColor& Color, struct FSlateFontInfo& Font); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldReturnToMatchmakingOriginOnMatchEnd (Underlying native function: ShouldReturnToMatchmakingOriginOnMatchEnd 0x80b20f8)
	bool ShouldReturnToMatchmakingOriginOnMatchEnd(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldPlayDeathSoundEffects (Underlying native function: ShouldPlayDeathSoundEffects 0x2763fbc)
	bool ShouldPlayDeathSoundEffects(class AActor*& Victim); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldHaveInfiniteResources (Underlying native function: ShouldHaveInfiniteResources 0x80b2068)
	bool ShouldHaveInfiniteResources(class APawn*& Pawn); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldEnterSpawningStartup (Underlying native function: ShouldEnterSpawningStartup 0x80b2034)
	bool ShouldEnterSpawningStartup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldDBNOTeamInfoFlash (Underlying native function: ShouldDBNOTeamInfoFlash 0x80b2010)
	bool ShouldDBNOTeamInfoFlash(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldBlockTrapPlacement (Underlying native function: ShouldBlockTrapPlacement 0x80b1f7c)
	bool ShouldBlockTrapPlacement(class APawn*& Pawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldBlockQuestProgressReport (Underlying native function: ShouldBlockQuestProgressReport 0x58d3ad0)
	bool ShouldBlockQuestProgressReport(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldAllowSquadSizeTracking (Underlying native function: ShouldAllowSquadSizeTracking 0x80b1f58)
	bool ShouldAllowSquadSizeTracking(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldAllowPartyRift (Underlying native function: ShouldAllowPartyRift 0x80b1f34)
	bool ShouldAllowPartyRift(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldAllowKeepPlayingTogether (Underlying native function: ShouldAllowKeepPlayingTogether 0x80b1f10)
	bool ShouldAllowKeepPlayingTogether(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationTextWorldPosition (Underlying native function: SetLocationTextWorldPosition 0x80b1d00)
	void SetLocationTextWorldPosition(struct FGameplayTag& LocationTag, struct FVector& Location); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationText (Underlying native function: SetLocationText 0x80b1bd4)
	void SetLocationText(struct FGameplayTag& LocationTag, struct FText& Text, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationFontInState (Underlying native function: SetLocationFontInState 0x80b1a3c)
	void SetLocationFontInState(struct FGameplayTag& LocationTag, struct FSlateFontInfo& Font, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationFontInAllStates (Underlying native function: SetLocationFontInAllStates 0x80b18e0)
	void SetLocationFontInAllStates(struct FGameplayTag& LocationTag, struct FSlateFontInfo& Font); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationFont (Underlying native function: SetLocationFont 0x80b18e0)
	void SetLocationFont(struct FGameplayTag& LocationTag, struct FSlateFontInfo& Font); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationColorInState (Underlying native function: SetLocationColorInState 0x80b17c8)
	void SetLocationColorInState(struct FGameplayTag& LocationTag, struct FLinearColor& Color, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationColor (Underlying native function: SetLocationColor 0x80b16e4)
	void SetLocationColor(struct FGameplayTag& LocationTag, struct FLinearColor& Color); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocation_StateColor (Underlying native function: SetLocation_StateColor 0x80b1dec)
	void SetLocationStateColor(struct FGameplayTag& LocationTag, struct FLinearColor& Color, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetFocalPointActor (Underlying native function: SetFocalPointActor 0x80b1548)
	void SetFocalPointActor(class AActor*& InFocalPointActor, struct FVector& InFocalPointOffset, float& InFocalPointFOV, float& InDuration, float& InInterpSpeed); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetFloatingIslandInformation (Underlying native function: SetFloatingIslandInformation 0x80b14a8)
	void SetFloatingIslandInformation(struct FVector& WorldPosition, bool& bActivated); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetDefaultParachuteDeployTraceForGroundDistance (Underlying native function: SetDefaultParachuteDeployTraceForGroundDistance 0x6df7bc0)
	void SetDefaultParachuteDeployTraceForGroundDistance(float& InDefaultParachuteDeployTraceForGroundDistance); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetCanSpawnLoot (Underlying native function: SetCanSpawnLoot 0x80b1428)
	void SetCanSpawnLoot(bool& bInCanSpawnLoot); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetAllLocations_StateColor (Underlying native function: SetAllLocations_StateColor 0x80b1350)
	void SetAllLocationsStateColor(struct FLinearColor& Color, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetAircrafts (Underlying native function: SetAircrafts 0x80b10b4)
	void SetAircrafts(struct TArray<class AFortAthenaAircraft*>& InAircrafts); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.RunPerfMemCheatScript_Client_Replicated (Underlying native function: RunPerfMemCheatScript_Client_Replicated 0x80b1030)
	void RunPerfMemCheatScriptClientReplicated(bool& bStartStatFiles); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortGameStateAthena.PauseFPSChartTimer (Underlying native function: PauseFPSChartTimer 0x80b101c)
	void PauseFPSChartTimer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OverrideSpawnPercentage (Underlying native function: OverrideSpawnPercentage 0x80b0f54)
	bool OverrideSpawnPercentage(class UClass*& BuildingContainerClass, float& SpawnPercentage); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.OverrideLocation_StateFontMaterial (Underlying native function: OverrideLocation_StateFontMaterial 0x80b0e40)
	void OverrideLocationStateFontMaterial(struct FGameplayTag& LocationTag, class UMaterialInterface*& Mat, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.OverrideAllLocations_StateFontMaterial (Underlying native function: OverrideAllLocations_StateFontMaterial 0x80b0d7c)
	void OverrideAllLocationsStateFontMaterial(class UMaterialInterface*& Mat, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.OnWinnerAnnounced (Has no native function)
	void OnWinnerAnnounced(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameStateAthena.OnSafeZonePhaseChanged (Underlying native function: OnSafeZonePhaseChanged 0x15de9fc)
	void OnSafeZonePhaseChanged(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WinningTeamsCN (Underlying native function: OnRep_WinningTeamsCN 0x80b0d18)
	void OnRepWinningTeamsCN(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WinningTeam (Underlying native function: OnRep_WinningTeam 0x29ba3b0)
	void OnRepWinningTeam(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WinningScore (Underlying native function: OnRep_WinningScore 0x80b0ce4)
	void OnRepWinningScore(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WinningPlayerState (Underlying native function: OnRep_WinningPlayerState 0x29ba184)
	void OnRepWinningPlayerState(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WinningPlayerList (Underlying native function: OnRep_WinningPlayerList 0x48383cc)
	void OnRepWinningPlayerList(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WantsHoldoverPluginOnClient (Underlying native function: OnRep_WantsHoldoverPluginOnClient 0x80b0cd0)
	void OnRepWantsHoldoverPluginOnClient(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_VolumeManager (Underlying native function: OnRep_VolumeManager 0x80b0cb4)
	void OnRepVolumeManager(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_UtcTimeStartedMatch (Underlying native function: OnRep_UtcTimeStartedMatch 0x2df65f8)
	void OnRepUtcTimeStartedMatch(struct FDateTime*& OldUtcTimeStartedMatch); // (Final | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_TeamsLeft (Underlying native function: OnRep_TeamsLeft 0x2a8c2f0)
	void OnRepTeamsLeft(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SupplyDropWaveStartedSoundCue (Underlying native function: OnRep_SupplyDropWaveStartedSoundCue 0x2afa6e8)
	void OnRepSupplyDropWaveStartedSoundCue(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_StormCapState (Underlying native function: OnRep_StormCapState 0x2fcb4d4)
	void OnRepStormCapState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SpectateAPartyMemberAvailable (Underlying native function: OnRep_SpectateAPartyMemberAvailable 0x2e61278)
	void OnRepSpectateAPartyMemberAvailable(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SpecialActorData (Underlying native function: OnRep_SpecialActorData 0x2fc4210)
	void OnRepSpecialActorData(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SkyTubesShuttingDown (Underlying native function: OnRep_SkyTubesShuttingDown 0x26a14dc)
	void OnRepSkyTubesShuttingDown(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SkyTubesDisabled (Underlying native function: OnRep_SkyTubesDisabled 0x26a1834)
	void OnRepSkyTubesDisabled(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_ServerChangelistNumber (Underlying native function: OnRep_ServerChangelistNumber 0x2bb7288)
	void OnRepServerChangelistNumber(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SafeZoneIndicator (Underlying native function: OnRep_SafeZoneIndicator 0x2aac8ec)
	void OnRepSafeZoneIndicator(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_ReticulatedSplineDefinitions (Underlying native function: OnRep_ReticulatedSplineDefinitions 0x80b0ca0)
	void OnRepReticulatedSplineDefinitions(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_PlaylistEndTime (Underlying native function: OnRep_PlaylistEndTime 0x80b0c8c)
	void OnRepPlaylistEndTime(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_PlayersLeft (Underlying native function: OnRep_PlayersLeft 0x207b998)
	void OnRepPlayersLeft(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_PlayerBotsLeft (Underlying native function: OnRep_PlayerBotsLeft 0x80b0c78)
	void OnRepPlayerBotsLeft(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MutatorGenericInt_2 (Underlying native function: OnRep_MutatorGenericInt_2 0x80b0c3c)
	void OnRepMutatorGenericInt2(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MutatorGenericInt_1 (Underlying native function: OnRep_MutatorGenericInt_1 0x80b0c00)
	void OnRepMutatorGenericInt1(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MutatorGenericInt_0 (Underlying native function: OnRep_MutatorGenericInt_0 0x80b0bc8)
	void OnRepMutatorGenericInt0(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MutatorEventData (Underlying native function: OnRep_MutatorEventData 0x80b0b5c)
	void OnRepMutatorEventData(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MeshNetworkStatus (Underlying native function: OnRep_MeshNetworkStatus 0x13039cc)
	void OnRepMeshNetworkStatus(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MapInfo (Underlying native function: OnRep_MapInfo 0x2773d2c)
	void OnRepMapInfo(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_IsUsingDownloadOnDemand (Underlying native function: OnRep_IsUsingDownloadOnDemand 0x80b0b20)
	void OnRepIsUsingDownloadOnDemand(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_GoldenPoiLocationTags (Underlying native function: OnRep_GoldenPoiLocationTags 0x80b0b0c)
	void OnRepGoldenPoiLocationTags(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_GamePhase (Underlying native function: OnRep_GamePhase 0x207ada4)
	void OnRepGamePhase(enum EAthenaGamePhase& OldGamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_FocalPointActor (Underlying native function: OnRep_FocalPointActor 0x80b0af8)
	void OnRepFocalPointActor(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_EventTournamentRound (Underlying native function: OnRep_EventTournamentRound 0x80b0ae4)
	void OnRepEventTournamentRound(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_EndGameKickPlayerTime (Underlying native function: OnRep_EndGameKickPlayerTime 0x4837328)
	void OnRepEndGameKickPlayerTime(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_DamageForStormCapMarking (Underlying native function: OnRep_DamageForStormCapMarking 0x273fd14)
	void OnRepDamageForStormCapMarking(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_CurrentPlaylistInfo (Underlying native function: OnRep_CurrentPlaylistInfo 0x1198fa4)
	void OnRepCurrentPlaylistInfo(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_CurrentPlaylistId (Underlying native function: OnRep_CurrentPlaylistId 0x273fd14)
	void OnRepCurrentPlaylistId(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_CurrentHighScore (Underlying native function: OnRep_CurrentHighScore 0x80b0ac8)
	void OnRepCurrentHighScore(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_ClientItemDefsToLoad (Underlying native function: OnRep_ClientItemDefsToLoad 0x2774328)
	void OnRepClientItemDefsToLoad(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_BroadcastSpectatorInfo (Underlying native function: OnRep_BroadcastSpectatorInfo 0x80b0aa4)
	void OnRepBroadcastSpectatorInfo(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_bPlaylistStoppedSafeZonePhases (Underlying native function: OnRep_bPlaylistStoppedSafeZonePhases 0x80b0d2c)
	void OnRepbPlaylistStoppedSafeZonePhases(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_Aircraft (Underlying native function: OnRep_Aircraft 0x2fd2a64)
	void OnRepAircraft(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_AIPawnCustomizationPreloadData (Underlying native function: OnRep_AIPawnCustomizationPreloadData 0x2df0480)
	void OnRepAIPawnCustomizationPreloadData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_AICharacterPartsPreloadData (Underlying native function: OnRep_AICharacterPartsPreloadData 0x298a79c)
	void OnRepAICharacterPartsPreloadData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnLoadedAllAdditionalContent (Underlying native function: OnLoadedAllAdditionalContent 0x80b0a24)
	void OnLoadedAllAdditionalContent(bool& bSuccess); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnDownloadedAnyAdditionalContent (Underlying native function: OnDownloadedAnyAdditionalContent 0x80b09a4)
	void OnDownloadedAnyAdditionalContent(bool& bSuccess); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortGameStateAthena.OnCurrentPlaylistLoaded__DelegateSignature (Has no native function)
	void OnCurrentPlaylistLoadedDelegateSignature(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortGameStateAthena.IsWorldResourceWidgetVisible (Underlying native function: IsWorldResourceWidgetVisible 0x80b08e0)
	bool IsWorldResourceWidgetVisible(class AFortPlayerController*& Controller, struct TEnumAsByte<EFortResourceType>& ResourceType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsWeaponReticleWidgetVisible (Underlying native function: IsWeaponReticleWidgetVisible 0x80b081c)
	bool IsWeaponReticleWidgetVisible(class AFortPlayerController*& Controller, class AFortWeapon*& Weapon); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsVKPlayPlaylist (Underlying native function: IsVKPlayPlaylist 0x80b07e0)
	bool IsVKPlayPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsVKEditPlaylist (Underlying native function: IsVKEditPlaylist 0x80b07a4)
	bool IsVKEditPlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsTherePersistenceDevices (Underlying native function: IsTherePersistenceDevices 0x80b0650)
	bool IsTherePersistenceDevices(class APawn*& SwitchingPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsTeleportToCreativeHubAllowed (Underlying native function: IsTeleportToCreativeHubAllowed 0x80b0584)
	bool IsTeleportToCreativeHubAllowed(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsTeamSwitchAllowed (Underlying native function: IsTeamSwitchAllowed 0x80b04f4)
	bool IsTeamSwitchAllowed(class APawn*& SwitchingPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsStormCN (Underlying native function: IsStormCN 0x80b0314)
	bool IsStormCN(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsPlaygroundModePlaylist (Underlying native function: IsPlaygroundModePlaylist 0x80b04b8)
	bool IsPlaygroundModePlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsPlayerTriggeredRespawnAllowed (Underlying native function: IsPlayerTriggeredRespawnAllowed 0x80b0428)
	bool IsPlayerTriggeredRespawnAllowed(class AFortPlayerState*& PlayerState); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsPlayerClearPersistanceIslandDataAllowed (Underlying native function: IsPlayerClearPersistanceIslandDataAllowed 0x80b0398)
	bool IsPlayerClearPersistanceIslandDataAllowed(class APawn*& SwitchingPawn); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsPapayaPlaylist (Underlying native function: IsPapayaPlaylist 0x80b0374)
	bool IsPapayaPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsNoBuildBRPlaylist (Underlying native function: IsNoBuildBRPlaylist 0x80b0338)
	bool IsNoBuildBRPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsLastManStandingCN (Underlying native function: IsLastManStandingCN 0x80b0314)
	bool IsLastManStandingCN(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsLargePreviewDisabledOnMobile (Underlying native function: IsLargePreviewDisabledOnMobile 0x80b02d8)
	bool IsLargePreviewDisabledOnMobile(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsGuidedTutorialPlaylist (Underlying native function: IsGuidedTutorialPlaylist 0x80b029c)
	bool IsGuidedTutorialPlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsGamePhaseStepNotificationWidgetVisible (Underlying native function: IsGamePhaseStepNotificationWidgetVisible 0x1e92428)
	bool IsGamePhaseStepNotificationWidgetVisible(class AController*& Controller, enum EAthenaGamePhaseStep& PhaseStepType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsGamePhaseNotificationSkipped (Underlying native function: IsGamePhaseNotificationSkipped 0x80b0208)
	bool IsGamePhaseNotificationSkipped(enum EAthenaGamePhaseStep& GamePhaseToSkip); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsExperiencePlayOnly (Underlying native function: IsExperiencePlayOnly 0x80b01cc)
	bool IsExperiencePlayOnly(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeUtilitySpawningAllowedPlaylist (Underlying native function: IsCreativeUtilitySpawningAllowedPlaylist 0x80b0190)
	bool IsCreativeUtilitySpawningAllowedPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeRoyalePlaylist (Underlying native function: IsCreativeRoyalePlaylist 0x80b0154)
	bool IsCreativeRoyalePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeOrPlaygroundModePlaylist (Underlying native function: IsCreativeOrPlaygroundModePlaylist 0x2c8f7f8)
	bool IsCreativeOrPlaygroundModePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeOrBattleLabModePlaylist (Underlying native function: IsCreativeOrBattleLabModePlaylist 0x80b0130)
	bool IsCreativeOrBattleLabModePlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeModePlaylist (Underlying native function: IsCreativeModePlaylist 0x80ae21c)
	bool IsCreativeModePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeMMPlaylist (Underlying native function: IsCreativeMMPlaylist 0x80b00f4)
	bool IsCreativeMMPlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeLTMPlaylist (Underlying native function: IsCreativeLTMPlaylist 0x2a05c54)
	bool IsCreativeLTMPlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCompetitivePlaylist (Underlying native function: IsCompetitivePlaylist 0x80b00d4)
	bool IsCompetitivePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsBattleRoyalePlaylist (Underlying native function: IsBattleRoyalePlaylist 0x80b0044)
	bool IsBattleRoyalePlaylist(bool& bExplicitCheck); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsBattleLabModePlaylist (Underlying native function: IsBattleLabModePlaylist 0x80b0008)
	bool IsBattleLabModePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsAsyncPhysicsPlaylist (Underlying native function: IsAsyncPhysicsPlaylist 0x80affdc)
	bool IsAsyncPhysicsPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsAnyCreativePlaylist (Underlying native function: IsAnyCreativePlaylist 0x80affa0)
	bool IsAnyCreativePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.InitializeAnimationSharing (Underlying native function: InitializeAnimationSharing 0x80aff20)
	void InitializeAnimationSharing(class UFortPlaylistAthena*& FortAthenaPlaylist); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HasValidFocalPointActor (Underlying native function: HasValidFocalPointActor 0x80aff04)
	bool HasValidFocalPointActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleHideGameModeMessageRequest (Underlying native function: HandleHideGameModeMessageRequest 0x80afdb8)
	void HandleHideGameModeMessageRequest(enum EAthenaGameMsgType& MsgType, bool& bInstantHide, bool& bClearQueue, int& MessageChannel); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeShowMarker (Underlying native function: HandleGameModeShowMarker 0x80afcf4)
	void HandleGameModeShowMarker(int& PlayerId, int& InstanceID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeMessageSuccess (Underlying native function: HandleGameModeMessageSuccess 0x80afc64)
	void HandleGameModeMessageSuccess(class AFortPlayerController*& OwnerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeMessageRequest (Underlying native function: HandleGameModeMessageRequest 0x80afbc0)
	void HandleGameModeMessageRequest(struct FAthenaGameMessageData& MessageData); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeMessageReposition (Underlying native function: HandleGameModeMessageReposition 0x80afac0)
	void HandleGameModeMessageReposition(struct FVector2D& Position, struct TEnumAsByte<EHorizontalAlignment>& HorizontalAlignment, struct TEnumAsByte<EVerticalAlignment>& VerticalAlignment); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeMessageDefaultPosition (Underlying native function: HandleGameModeMessageDefaultPosition 0x80afaa4)
	void HandleGameModeMessageDefaultPosition(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeHideMarker (Underlying native function: HandleGameModeHideMarker 0x80af9e0)
	void HandleGameModeHideMarker(int& PlayerId, int& InstanceID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleContextTutorialGameModeMessageRequest (Underlying native function: HandleContextTutorialGameModeMessageRequest 0x80af8ec)
	void HandleContextTutorialGameModeMessageRequest(struct FAthenaGameMessageData& MessageData, class UFortContextualTutorialController*& OwnedController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.GetTotalPlayers (Underlying native function: GetTotalPlayers 0x80af8c4)
	struct FTotalPlayers GetTotalPlayers(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetTimedWinConditionTime (Underlying native function: GetTimedWinConditionTime 0x80af89c)
	float GetTimedWinConditionTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetTeamPOIName (Underlying native function: GetTeamPOIName 0x80af7c0)
	struct FText GetTeamPOIName(unsigned char& Team); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetSquadMemberPlayerStates (Underlying native function: GetSquadMemberPlayerStates 0x80af5b4)
	struct TArray<class AFortPlayerStateAthena*> GetSquadMemberPlayerStates(class AFortPlayerStateAthena*& InstigatingPlayerState, bool& bIncludeSelf); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetShouldPlayRespawnTimerSFX (Underlying native function: GetShouldPlayRespawnTimerSFX 0x80af590)
	bool GetShouldPlayRespawnTimerSFX(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetShouldDisplayCountdownTimerText (Underlying native function: GetShouldDisplayCountdownTimerText 0x80af56c)
	bool GetShouldDisplayCountdownTimerText(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetScoringModeWinningGoal (Underlying native function: GetScoringModeWinningGoal 0x80af544)
	float GetScoringModeWinningGoal(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.GetSafeZonePhase (Underlying native function: GetSafeZonePhase 0x80af520)
	int GetSafeZonePhase(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetSafeZoneIndicator (Underlying native function: GetSafeZoneIndicator 0x80af508)
	class AFortSafeZoneIndicator* GetSafeZoneIndicator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPoiGridTagsForLocation (Underlying native function: GetPoiGridTagsForLocation 0x80af448)
	struct FGameplayTagContainer GetPoiGridTagsForLocation(struct FVector& Location); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPlaylistType (Underlying native function: GetPlaylistType 0x80af40c)
	enum EFortPlaylistType GetPlaylistType(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPlaylistTeams (Underlying native function: GetPlaylistTeams 0x80af360)
	bool GetPlaylistTeams(struct TArray<unsigned char>& OutTeams); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPlayersLeftForUI (Underlying native function: GetPlayersLeftForUI 0x80af32c)
	struct FPlayersLeft GetPlayersLeftForUI(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPlayersLeft (Underlying native function: GetPlayersLeft 0x80af304)
	struct FPlayersLeft GetPlayersLeft(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPartyRiftPortalManager (Underlying native function: GetPartyRiftPortalManager 0x80af2ec)
	class AFortPartyRiftPortalManager* GetPartyRiftPortalManager(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenSiphonWoodValue (Underlying native function: GetOverridenSiphonWoodValue 0x80af25c)
	float GetOverridenSiphonWoodValue(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenSiphonStoneValue (Underlying native function: GetOverridenSiphonStoneValue 0x80af1cc)
	float GetOverridenSiphonStoneValue(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenSiphonMetalValue (Underlying native function: GetOverridenSiphonMetalValue 0x80af13c)
	float GetOverridenSiphonMetalValue(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenSiphonHealthValue (Underlying native function: GetOverridenSiphonHealthValue 0x80af0ac)
	float GetOverridenSiphonHealthValue(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenSiphonGoldValue (Underlying native function: GetOverridenSiphonGoldValue 0x80af01c)
	float GetOverridenSiphonGoldValue(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenDamageSelfWeaponQuery (Underlying native function: GetOverridenDamageSelfWeaponQuery 0x80aef6c)
	struct FGameplayTagQuery GetOverridenDamageSelfWeaponQuery(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenDamageSelfTargetQuery (Underlying native function: GetOverridenDamageSelfTargetQuery 0x80aeebc)
	struct FGameplayTagQuery GetOverridenDamageSelfTargetQuery(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenDamageSelfRequiresNonZeroDamage (Underlying native function: GetOverridenDamageSelfRequiresNonZeroDamage 0x80aee2c)
	bool GetOverridenDamageSelfRequiresNonZeroDamage(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenDamageSelfDamageToDeal (Underlying native function: GetOverridenDamageSelfDamageToDeal 0x80aed9c)
	float GetOverridenDamageSelfDamageToDeal(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverriddenVehicleTrickScore (Underlying native function: GetOverriddenVehicleTrickScore 0x80aecd0)
	float GetOverriddenVehicleTrickScore(class AFortPlayerController*& Controller, float& InTrickScore); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.GetMutatorByInterface (Underlying native function: GetMutatorByInterface 0x80aec04)
	class AFortGameplayMutator* GetMutatorByInterface(class AActor*& ContextActor, class UClass*& MutatorInterface); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameStateAthena.GetMutatorByClass (Underlying native function: GetMutatorByClass 0x80aeb38)
	class AFortGameplayMutator* GetMutatorByClass(class AActor*& ContextActor, class UClass*& MutatorClass); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameStateAthena.GetMaxPlaylistPlayers (Underlying native function: GetMaxPlaylistPlayers 0x80aeaec)
	int GetMaxPlaylistPlayers(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetEndGameReturnToMatchmakingOriginDelay (Underlying native function: GetEndGameReturnToMatchmakingOriginDelay 0x80aeab0)
	float GetEndGameReturnToMatchmakingOriginDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetDamageComboHUDMinHits (Underlying native function: GetDamageComboHUDMinHits 0x80aea98)
	int GetDamageComboHUDMinHits(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetCurrentPlaylistName (Underlying native function: GetCurrentPlaylistName 0x80aea70)
	struct FName GetCurrentPlaylistName(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetBattleBusForPlayer (Underlying native function: GetBattleBusForPlayer 0x80ae9e0)
	class UAthenaBattleBusItemDefinition* GetBattleBusForPlayer(class AFortPlayerControllerAthena*& PC); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetAvgPlayerMMR (Underlying native function: GetAvgPlayerMMR 0x80ae9bc)
	int GetAvgPlayerMMR(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetAthenaPlaylistContextTags (Underlying native function: GetAthenaPlaylistContextTags 0x80ae96c)
	struct FGameplayTagContainer GetAthenaPlaylistContextTags(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetAircraft (Underlying native function: GetAircraft 0x80ae8e0)
	class AFortAthenaAircraft* GetAircraft(int& AircraftIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GatherCustomCharacterPartOverridesFromMutator (Underlying native function: GatherCustomCharacterPartOverridesFromMutator 0x80ae7f8)
	void GatherCustomCharacterPartOverridesFromMutator(class AFortPlayerController*& FortPC, struct TArray<class UCustomCharacterPart*>& OutOverrides); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.EvaluateDBNOMutator (Underlying native function: EvaluateDBNOMutator 0x80ae714)
	bool EvaluateDBNOMutator(class AFortPlayerState*& PS, struct FDBNOCustomSettings& OutDBNOSetting); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.DoesPlayerHaveLimitedLives (Underlying native function: DoesPlayerHaveLimitedLives 0x80ae5f4)
	void DoesPlayerHaveLimitedLives(class AFortPlayerState*& PlayerState, bool& bPlayerLivesAreLimited, int& RespawnsRemaining); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.CanUseSlowMotionOnVictory (Underlying native function: CanUseSlowMotionOnVictory 0x2e9d618)
	bool CanUseSlowMotionOnVictory(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.CanSpawnActorOfClass (Underlying native function: CanSpawnActorOfClass 0x80ae43c)
	struct FEvaluationResult CanSpawnActorOfClass(class AActor*& InstigatorActor, class UClass*& ActorClassToSpawn, struct FVector& Location, struct FRotator& Rotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.CanSpawnActor (Underlying native function: CanSpawnActor 0x80ae27c)
	struct FEvaluationResult CanSpawnActor(class AActor*& InstigatorActor, class AActor*& ActorToSpawn, struct FVector& Location, struct FRotator& Rotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.CanRespawnOnStarterIsland (Underlying native function: CanRespawnOnStarterIsland 0x80ae258)
	bool CanRespawnOnStarterIsland(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.CanChangeGameplayOptions (Underlying native function: CanChangeGameplayOptions 0x80ae21c)
	bool CanChangeGameplayOptions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.AreSkyTubesEnabled (Underlying native function: AreSkyTubesEnabled 0x80ae1f0)
	bool AreSkyTubesEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

