// Class /Script/FortniteGame.FortGameInstance
// Size: 0xe80
class UFortGameInstance : public UGameInstance
{
	unsigned char unreflected_1c0[0x58]; // 0x1c0 (0x58) 
	struct FMulticastInlineDelegate OnKairosLoadElectraPlayer; // 0x218 (0x10)
	struct TSet<struct FName> EventFlagsForcedOnByHotfix; // 0x228 (0x50)
	struct TSet<struct FName> EventFlagsForcedOffByHotfix; // 0x278 (0x50)
	struct TSet<struct FString> CosmeticsBlacklistedByHotfix; // 0x2c8 (0x50)
	struct TSet<struct FString> CosmeticsBlacklistedByHotfixInCompetitive; // 0x318 (0x50)
	struct TSet<struct FString> CosmeticsProhibitedByHotfixInCampaign; // 0x368 (0x50)
	struct TSet<struct FString> CosmeticsProhibitedByHotfixInAthena; // 0x3b8 (0x50)
	struct TSet<struct FString> NiagaraAssetsBlacklistedByHotfix; // 0x408 (0x50)
	struct TSet<struct FString> CascadeAssetsBlockedByHotfix; // 0x458 (0x50)
	bool bBattleRoyaleMatchmakingEnabled; // 0x4a8 (0x1)
	bool bCreativeModeProfileEnabled; // 0x4a9 (0x1)
	unsigned char unreflected_4aa[0x6]; // 0x4aa (0x6) 
	struct TArray<struct FPlaylistOverrideData> PlaylistOverrides; // 0x4b0 (0x10)
	struct TArray<struct FAudioDynamicSoundData> DynamicSoundData; // 0x4c0 (0x10)
	struct TArray<struct FPlaylistFrontEndSettings> FrontEndPlaylistData; // 0x4d0 (0x10)
	bool bDeprecatePlaylistAccessData; // 0x4e0 (0x1)
	unsigned char unreflected_4e1[0x7]; // 0x4e1 (0x7) 
	struct FAthenaDataTableSet AthenaDataTables; // 0x4e8 (0x38)
	struct TMap<struct TWeakObjectPtr<class UDataTable>, class UDataTable*> CachedBaseDataTables; // 0x520 (0x50)
	struct TMap<struct TWeakObjectPtr<class UCurveTable>, class UCurveTable*> CachedBaseCurveTables; // 0x570 (0x50)
	bool bOverridingCurrentEmoteMusicFFT; // 0x5c0 (0x1)
	unsigned char unreflected_5c1[0x3]; // 0x5c1 (0x3) 
	float CurrentEmoteMusicFFT100hz; // 0x5c4 (0x4)
	float CurrentEmoteMusicFFT2000hz; // 0x5c8 (0x4)
	float EmoteMusicEnvelopeBeatCount; // 0x5cc (0x4)
	unsigned char unreflected_5d0[0x10]; // 0x5d0 (0x10) 
	class UKairosHeartbeatManager* KairosHeartbeatManager; // 0x5e0 (0x8)
	unsigned char unreflected_5e8[0x8]; // 0x5e8 (0x8) 
	class UMcpProfileManager* ProfileManager; // 0x5f0 (0x8)
	class UFortInventoryManager* InventoryManager; // 0x5f8 (0x8)
	unsigned char unreflected_600[0x10]; // 0x600 (0x10) 
	class UFortMatchmaking* Matchmaking; // 0x610 (0x8)
	class UFortMatchmakingV2* MatchmakingV2; // 0x618 (0x8)
	class UFortRejoinCheck* RejoinCheck; // 0x620 (0x8)
	class UFortSocialManager* SocialManager; // 0x628 (0x8)
	class UFortGameModeManager* GameModeManager; // 0x630 (0x8)
	class UFortMatchAnalytics* MatchAnalytics; // 0x638 (0x8)
	class UFortPartySpectateAnalytics* PartySpectateAnalytics; // 0x640 (0x8)
	class USidecarSys* SidecarSys; // 0x648 (0x8)
	unsigned char unreflected_650[0x210]; // 0x650 (0x210) 
	struct FGuid GlobalUnregistrationSaveGUID; // 0x860 (0x10)
	unsigned char unreflected_870[0x30]; // 0x870 (0x30) 
	class UFortTooltipManager* TooltipManager; // 0x8a0 (0x8)
	unsigned char unreflected_8a8[0x50]; // 0x8a8 (0x50) 
	struct TArray<class UFortRegisteredPlayerInfo*> RegisteredPlayers; // 0x8f8 (0x10)
	unsigned char unreflected_908[0x18]; // 0x908 (0x18) 
	class UFortUpdateManager* UpdateManager; // 0x920 (0x8)
	class UDataAssetDirectoryManager* DataAssetDirectoryManager; // 0x928 (0x8)
	class UFortInteractabilityTracker* InteractabilityTracker; // 0x930 (0x8)
	unsigned char unreflected_938[0x10]; // 0x938 (0x10) 
	class UFortChat* Chatroom; // 0x948 (0x8)
	struct TArray<struct TWeakObjectPtr<class UFortRegisteredPlayerInfo>> RegisteredPlayerInfosAwaitingRefresh; // 0x950 (0x10)
	struct FString LastGameHighlightGroupId; // 0x960 (0x10)
	unsigned char unreflected_970[0x20]; // 0x970 (0x20) 
	class UFortSeasonalEventManager* SeasonalEventManager; // 0x990 (0x8)
	class UFortTournamentManager* TournamentManager; // 0x998 (0x8)
	class UFortPushNotificationManager* MobilePushNotificationManager; // 0x9a0 (0x8)
	unsigned char unreflected_9a8[0x18]; // 0x9a8 (0x18) 
	float BroadcastFeatureStatusRate; // 0x9c0 (0x4)
	unsigned char unreflected_9c4[0x1c]; // 0x9c4 (0x1c) 
	class UFortMissionGenerator* CurrentMissionGenerator; // 0x9e0 (0x8)
	unsigned char unreflected_9e8[0x68]; // 0x9e8 (0x68) 
	struct FMulticastInlineDelegate OnSubGameChangedBP; // 0xa50 (0x10)
	unsigned char unreflected_a60[0x38]; // 0xa60 (0x38) 
	class UFortAppActivationSoundMixManager* AppActivationSoundMixManager; // 0xa98 (0x8)
	unsigned char unreflected_aa0[0x40]; // 0xaa0 (0x40) 
	int KairosUIResX; // 0xae0 (0x4)
	int KairosUIResY; // 0xae4 (0x4)
	unsigned char unreflected_ae8[0x40]; // 0xae8 (0x40) 
	struct TArray<struct FWebEnvUrl> KairosWebUrls; // 0xb28 (0x10)
	unsigned char unreflected_b38[0x10]; // 0xb38 (0x10) 
	int KairosMinSupportedAppVersion; // 0xb48 (0x4)
	float KairosHotfixCheckTimer; // 0xb4c (0x4)
	float KairosHotfixCheckVariance; // 0xb50 (0x4)
	unsigned char unreflected_b54[0x1c]; // 0xb54 (0x1c) 
	class UFortPlaylistManager* PlaylistManager; // 0xb70 (0x8)
	unsigned char unreflected_b78[0x10]; // 0xb78 (0x10) 
	struct TArray<class UFortLocalPlayer*> LoggedInPlayers; // 0xb88 (0x10)
	struct TArray<enum EAppStore> StoreSupport; // 0xb98 (0x10)
	struct TArray<enum EAppStore> StoreSupportAndroidSamsung; // 0xba8 (0x10)
	struct TArray<enum EAppStore> StoreSupportAndroidSideloadSamsung; // 0xbb8 (0x10)
	struct TArray<enum EAppStore> StoreSupportAndroidSideloadOther; // 0xbc8 (0x10)
	struct TArray<enum EAppStore> StoreSupportPartner; // 0xbd8 (0x10)
	unsigned char unreflected_be8[0x58]; // 0xbe8 (0x58) 
	class UFortMaterialCacheManager* MaterialCacheManager; // 0xc40 (0x8)
	unsigned char unreflected_c48[0x48]; // 0xc48 (0x48) 
	class UReplayVideoManager* ReplayVideoManager; // 0xc90 (0x8)
	class UVideoExtractionBootstrapper* ExtractionBootstrapper; // 0xc98 (0x8)
	unsigned char unreflected_ca0[0x8]; // 0xca0 (0x8) 
	class UPegasusDriver* PegasusDriver; // 0xca8 (0x8)
	struct FSoftClassPath ContentBeaconClientV2ClassPath; // 0xcb0 (0x18)
	struct TWeakObjectPtr<class AContentBeaconClientV2> ContentBeaconClientV2; // 0xcc8 (0x8)
	struct TWeakObjectPtr<class AContentBeaconClientV2> MatchmakingContentBeacon; // 0xcd0 (0x8)
	unsigned char unreflected_cd8[0xc8]; // 0xcd8 (0xc8) 
	class UDAD_IslandQuerier* DADIslandQuerier; // 0xda0 (0x8)
	class UDAD_CreativeUserOptionsCollection* DADCreativeUserOptionsCollection; // 0xda8 (0x8)
	class UFortCreativeDiscoverySurfaceManager* CreativeDiscoverySurfaceManager; // 0xdb0 (0x8)
	struct TArray<struct TWeakObjectPtr<class UClass>> DisabledPhysicsAssets; // 0xdb8 (0x10)
	unsigned char padding_dc8[0xb8]; // 0xdc8 (0xb8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameInstance.UninstallFortniteBROnNextBoot (Underlying native function: UninstallFortniteBROnNextBoot 0x7dab194)
	bool UninstallFortniteBROnNextBoot(bool& bRestartApp, bool& bPromptForRestart); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.UninstallAllOptionalContentOnNextBoot (Underlying native function: UninstallAllOptionalContentOnNextBoot 0x7dab194)
	bool UninstallAllOptionalContentOnNextBoot(bool& bRestartApp, bool& bPromptForRestart); // (0x00000002 | Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.SetUserSetting (Underlying native function: SetUserSetting 0x86827ac)
	void SetUserSetting(struct FString& Key, struct FString& Value, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.SetOverrideCurrentMusicFFT (Underlying native function: SetOverrideCurrentMusicFFT 0x86826d8)
	void SetOverrideCurrentMusicFFT(float& FFT100hz, float& FFT2000hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameInstance.SetMultipleUserSettings (Underlying native function: SetMultipleUserSettings 0x8682570)
	void SetMultipleUserSettings(struct TMap<struct FString, struct FString>& Settings, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.SetHotfixCompleteCallback (Underlying native function: SetHotfixCompleteCallback 0x8682494)
	void SetHotfixCompleteCallback(struct FWebJSFunction& Callback); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.SetFeatureStatusCallback (Underlying native function: SetFeatureStatusCallback 0x86823b8)
	void SetFeatureStatusCallback(struct FWebJSFunction& Callback); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.SetErrorSimulationCommands (Underlying native function: SetErrorSimulationCommands 0x86821f8)
	void SetErrorSimulationCommands(struct FString& CommandLine); // (0x00000002 | Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.ResumeOptionalContentInstall (Underlying native function: ResumeOptionalContentInstall 0x86821e4)
	void ResumeOptionalContentInstall(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortGameInstance.RequestBroadcast (Underlying native function: RequestBroadcast 0x868217c)
	void RequestBroadcast(); // (0x00000002 | Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.PauseOptionalContentInstall (Underlying native function: PauseOptionalContentInstall 0x8682168)
	void PauseOptionalContentInstall(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortGameInstance.PauseContentInstall (Underlying native function: PauseContentInstall 0x8682134)
	void PauseContentInstall(); // (0x00000002 | Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.OpenUpdateApp (Underlying native function: OpenUpdateApp 0x868211c)
	void OpenUpdateApp(); // (0x00000002 | Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.OnTournamentDataRefreshed (Underlying native function: OnTournamentDataRefreshed 0x8682108)
	void OnTournamentDataRefreshed(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameInstance.KairosSubmitBugReport (Underlying native function: KairosSubmitBugReport 0x8681f60)
	void KairosSubmitBugReport(struct FString& Subject, struct FString& Body, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.IsContentUpToDate (Underlying native function: IsContentUpToDate 0x8681e54)
	void IsContentUpToDate(enum EFortGameFeature& Feature, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetUserSetting (Underlying native function: GetUserSetting 0x8681c6c)
	void GetUserSetting(struct FString& Key, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetProjectVersion (Underlying native function: GetProjectVersion 0x8681bb4)
	void GetProjectVersion(struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetLinkDataManager (Underlying native function: GetLinkDataManager 0x8681b4c)
	class UFortLinkDataManager* GetLinkDataManager(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameInstance.GetHotfixHasApplied (Underlying native function: GetHotfixHasApplied 0x8681a20)
	void GetHotfixHasApplied(struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetFeatureRequiredSizesRequiredOnly (Underlying native function: GetFeatureRequiredSizesRequiredOnly 0x8681914)
	void GetFeatureRequiredSizesRequiredOnly(enum EFortGameFeature& Feature, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetFeatureRequiredSizesOptionalOnly (Underlying native function: GetFeatureRequiredSizesOptionalOnly 0x8681808)
	void GetFeatureRequiredSizesOptionalOnly(enum EFortGameFeature& Feature, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetFeatureRequiredSizes (Underlying native function: GetFeatureRequiredSizes 0x8681700)
	void GetFeatureRequiredSizes(enum EFortGameFeature& Feature, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetEventManager (Underlying native function: GetEventManager 0x86816e8)
	class UFortSeasonalEventManager* GetEventManager(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameInstance.GetDataAssetDirectoryManager (Underlying native function: GetDataAssetDirectoryManager 0x8384118)
	class UDataAssetDirectoryManager* GetDataAssetDirectoryManager(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameInstance.GetDADIslandQuerier (Underlying native function: GetDADIslandQuerier 0x86816d0)
	class UDAD_IslandQuerier* GetDADIslandQuerier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameInstance.GetDADCreativeUserOptionsCollection (Underlying native function: GetDADCreativeUserOptionsCollection 0x86816b8)
	class UDAD_CreativeUserOptionsCollection* GetDADCreativeUserOptionsCollection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameInstance.GetContentState (Underlying native function: GetContentState 0x86815b0)
	void GetContentState(enum EFortGameFeature& Feature, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetAnalyticsSessionDetails (Underlying native function: GetAnalyticsSessionDetails 0x86814d4)
	void GetAnalyticsSessionDetails(struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.DebugCreatePlayerWithLoginInfo (Underlying native function: DebugCreatePlayerWithLoginInfo 0x8681228)
	void DebugCreatePlayerWithLoginInfo(int& ControllerId, struct FString& Email, struct FString& Password); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortGameInstance.DebugCreateBackgroundPlayer (Underlying native function: DebugCreateBackgroundPlayer 0x6e8edb4)
	void DebugCreateBackgroundPlayer(int& ControllerId); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortGameInstance.ContinueDelayedStartup (Underlying native function: ContinueDelayedStartup 0x86811ec)
	void ContinueDelayedStartup(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortGameInstance.ClearOverrideCurrentMusicFFT (Underlying native function: ClearOverrideCurrentMusicFFT 0x86811d4)
	void ClearOverrideCurrentMusicFFT(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameInstance.CheckLatestClient (Underlying native function: CheckLatestClient 0x8681100)
	void CheckLatestClient(struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.ChangeActiveGameFeature (Underlying native function: ChangeActiveGameFeature 0x8680f6c)
	void ChangeActiveGameFeature(struct FString& FeatureString); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortGameInstance.CancelUninstallFortniteBROnNextBoot (Underlying native function: CancelUninstallFortniteBROnNextBoot 0x24f75e4)
	bool CancelUninstallFortniteBROnNextBoot(); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.CancelUninstallAllOptionalContentOnNextBoot (Underlying native function: CancelUninstallAllOptionalContentOnNextBoot 0x24f75e4)
	bool CancelUninstallAllOptionalContentOnNextBoot(); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.CancelOptionalContentInstall (Underlying native function: CancelOptionalContentInstall 0x8680f58)
	void CancelOptionalContentInstall(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortGameInstance.CancelContentInstall (Underlying native function: CancelContentInstall 0x8680f24)
	void CancelContentInstall(); // (Net | NetReliable | Native | Event | NetResponse | Public)
};

