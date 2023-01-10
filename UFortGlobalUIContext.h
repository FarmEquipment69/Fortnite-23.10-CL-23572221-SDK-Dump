// Class /Script/FortniteUI.FortGlobalUIContext
// Size: 0x568
class UFortGlobalUIContext : public UFortLocalPlayerSubsystem
{
	unsigned char unreflected_30[0x20]; // 0x30 (0x20) 
	struct FMulticastInlineDelegate SubGameChanged; // 0x50 (0x10)
	unsigned char unreflected_60[0x40]; // 0x60 (0x40) 
	bool bShouldSubgameSelectStartOnCampaignUpsell; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FMulticastInlineDelegate OnKeybindsChanged; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnInputActionHoldStarted; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnInputActionHoldStopped; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnRefreshHUDForRespawn; // 0xd8 (0x10)
	struct FMulticastInlineDelegate OnEnterVehicleDriver; // 0xe8 (0x10)
	struct FMulticastInlineDelegate OnEnterVehiclePassenger; // 0xf8 (0x10)
	struct FMulticastInlineDelegate OnExitVehicle; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnVehicleSeatChanged; // 0x118 (0x10)
	unsigned char unreflected_128[0x30]; // 0x128 (0x30) 
	struct FMulticastInlineDelegate OnScoreReportChanged; // 0x158 (0x10)
	unsigned char unreflected_168[0x60]; // 0x168 (0x60) 
	struct FMulticastInlineDelegate OnLoadingScreenVisibilityChanged; // 0x1c8 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerControllerConnectionChanged; // 0x1d8 (0x10)
	unsigned char unreflected_1e8[0x18]; // 0x1e8 (0x18) 
	struct TMap<struct FName, class UFortUIMessageManager*> MessageManagersByName; // 0x200 (0x50)
	struct TMap<enum EFortUIFeature, struct FFortUIFeatureStruct> Features; // 0x250 (0x50)
	unsigned char unreflected_2a0[0x140]; // 0x2a0 (0x140) 
	class UAthenaMatchReadyDesktopPopup* AthenaMatchReadyNotificationWidget; // 0x3e0 (0x8)
	unsigned char unreflected_3e8[0x10]; // 0x3e8 (0x10) 
	class UFortHelpItem* ActiveContextSpecificHelpItem; // 0x3f8 (0x8)
	bool bIsUIVisible; // 0x400 (0x1)
	bool bShowRateWidget; // 0x401 (0x1)
	unsigned char unreflected_402[0x6]; // 0x402 (0x6) 
	struct TMap<enum ESubGame, bool> IsAllContentInstalledCacheMap; // 0x408 (0x50)
	struct FText FeedbackTitle; // 0x458 (0x18)
	struct FDateTime* FirstLoginTime; // 0x470 (0x8)
	struct FTimerHandle* AddictionMsgTimer; // 0x478 (0x8)
	struct FUniqueNetIdRepl CurrentLocalPlayerUniqueNetId; // 0x480 (0x30)
	unsigned char unreflected_4b0[0x14]; // 0x4b0 (0x14) 
	bool bQuestMapTabRequested; // 0x4c4 (0x1)
	unsigned char unreflected_4c5[0x3]; // 0x4c5 (0x3) 
	struct FGameplayTag QuestMapChallengeTabRequested; // 0x4c8 (0x4)
	unsigned char padding_4cc[0x9c]; // 0x4cc (0x9c)

	/* Functions */

	// Function /Script/FortniteUI.FortGlobalUIContext.UnregisterScriptedActions (Underlying native function: UnregisterScriptedActions 0xa4d7bd8)
	void UnregisterScriptedActions(struct TArray<class UClass*>& ScriptedActions); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.UnregisterScriptedAction (Underlying native function: UnregisterScriptedAction 0xa4d7b1c)
	void UnregisterScriptedAction(class UClass*& ScriptedAction); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.UnregisterInputAction (Underlying native function: UnregisterInputAction 0xa4d7a14)
	void UnregisterInputAction(class UUserWidget*& UserWidget, struct FDataTableRowHandle& InputActionRow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.UnbindToFeatureState (Underlying native function: UnbindToFeatureState 0xa4d7938)
	void UnbindToFeatureState(enum EFortUIFeature& Feature, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.TetherChanged (Underlying native function: TetherChanged 0xa4d784c)
	void TetherChanged(bool& bIsTethered); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShowWebURL (Underlying native function: ShowWebURL 0xa4d76a4)
	bool ShowWebURL(struct FString& URL, enum EFortUrlType& URLType); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShowVehicleHealthBarOnPlayerHUD (Underlying native function: ShowVehicleHealthBarOnPlayerHUD 0xa4d7680)
	bool ShowVehicleHealthBarOnPlayerHUD(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShowCreativeContentDownloadDialog (Underlying native function: ShowCreativeContentDownloadDialog 0xa4d7444)
	bool ShowCreativeContentDownloadDialog(struct FDelegate& OnSubGameContentReadyCallback, struct FDelegate& OnSubGameContentCanceledCallback); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShowConsoleAccountPicker (Underlying native function: ShowConsoleAccountPicker 0xa4d735c)
	void ShowConsoleAccountPicker(int& ControllerIndex, struct FDelegate& CompletionDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShouldShowRateWidget (Underlying native function: ShouldShowRateWidget 0x724342c)
	bool ShouldShowRateWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShouldShowPhoenixDisplay (Underlying native function: ShouldShowPhoenixDisplay 0xa4d71e8)
	bool ShouldShowPhoenixDisplay(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetRatingWidgetFeedbackTitle (Underlying native function: SetRatingWidgetFeedbackTitle 0xa4d708c)
	void SetRatingWidgetFeedbackTitle(struct FText& Title); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetInputMode (Underlying native function: SetInputMode 0x2e0bda4)
	void SetInputMode(enum EFortInputMode& InMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetHideStwItemRefundHelp (Underlying native function: SetHideStwItemRefundHelp 0xa4d6dd0)
	void SetHideStwItemRefundHelp(bool& bInHideHelp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetHidePerkRecombobulatorHelp (Underlying native function: SetHidePerkRecombobulatorHelp 0xa4d6d24)
	void SetHidePerkRecombobulatorHelp(bool& bInHideHelp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetCurrentInputPresetName (Underlying native function: SetCurrentInputPresetName 0xa4d6ac0)
	void SetCurrentInputPresetName(struct FString& InputPresetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetCurrentCustomInputTemplatePresetName (Underlying native function: SetCurrentCustomInputTemplatePresetName 0xa4d6918)
	void SetCurrentCustomInputTemplatePresetName(struct FString& InputPresetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetContextHelpItem (Underlying native function: SetContextHelpItem 0xa4d688c)
	void SetContextHelpItem(class UFortHelpItem*& ContextSpecificHelpItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SendLeaveZoneAnalytic (Underlying native function: SendLeaveZoneAnalytic 0xa4d6878)
	void SendLeaveZoneAnalytic(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SendExperienceRatingAnalytic (Underlying native function: SendExperienceRatingAnalytic 0xa4d629c)
	void SendExperienceRatingAnalytic(struct FString& RatingType, struct FString& FeedbackSentBy, struct FText& RatingQuestion, int& StarCount, struct FString& GameSessionId, struct FString& Comment); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.RunLauncherWithOptions (Underlying native function: RunLauncherWithOptions 0xa4d611c)
	void RunLauncherWithOptions(struct FString& Options); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ReturnToSubGameSelect (Underlying native function: ReturnToSubGameSelect 0xa4d60f8)
	void ReturnToSubGameSelect(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.RegisterScriptedActions (Underlying native function: RegisterScriptedActions 0xa4d5d20)
	void RegisterScriptedActions(struct TArray<class UClass*>& ScriptedActions); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.RegisterScriptedAction (Underlying native function: RegisterScriptedAction 0xa4d5c64)
	void RegisterScriptedAction(class UClass*& ScriptedAction); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.RegisterInputAction (Underlying native function: RegisterInputAction 0xa4d5b08)
	void RegisterInputAction(class UUserWidget*& UserWidget, struct FDataTableRowHandle& InputActionRow, struct FDelegate& CommitedEvent, int& InFilterPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.RefreshHUDForRespawn (Underlying native function: RefreshHUDForRespawn 0xa4d5af4)
	void RefreshHUDForRespawn(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.QuitGame (Underlying native function: QuitGame 0x1829ae8)
	void QuitGame(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortGlobalUIContext.OnQueryFortBackendVersionDelegate__DelegateSignature (Has no native function)
	void OnQueryFortBackendVersionDelegateDelegateSignature(struct FFortBackendVersion& FortBackendVersion); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortGlobalUIContext.OnLocalPlayerControllerConnectionChangedDelegate__DelegateSignature (Has no native function)
	void OnLocalPlayerControllerConnectionChangedDelegateDelegateSignature(bool& bConnected); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortGlobalUIContext.OnLoadingScreenVisibilityChangedDelegate__DelegateSignature (Has no native function)
	void OnLoadingScreenVisibilityChangedDelegateDelegateSignature(bool& IsVisible); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortGlobalUIContext.Logout (Underlying native function: Logout 0xa4d5524)
	void Logout(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsUsingGamepad (Underlying native function: IsUsingGamepad 0x24eb104)
	bool IsUsingGamepad(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsPendingLogout (Underlying native function: IsPendingLogout 0xa4d5244)
	bool IsPendingLogout(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsMobileApp (Underlying native function: IsMobileApp 0x2fd9178)
	bool IsMobileApp(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsInZone (Underlying native function: IsInZone 0x18c1fec)
	bool IsInZone(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsInOutpostZone (Underlying native function: IsInOutpostZone 0xa4d51a0)
	bool IsInOutpostZone(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsGamepadAttached (Underlying native function: IsGamepadAttached 0x2830cb8)
	bool IsGamepadAttached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsDesktopPlatform (Underlying native function: IsDesktopPlatform 0x2830cb8)
	bool IsDesktopPlatform(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsCustomGamepadConfig (Underlying native function: IsCustomGamepadConfig 0xa4d50d0)
	bool IsCustomGamepadConfig(int& ConfigIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsCurrentlyShowingLoadingScreen (Underlying native function: IsCurrentlyShowingLoadingScreen 0xa4d50ac)
	bool IsCurrentlyShowingLoadingScreen(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsCreativeModeAccessLimited (Underlying native function: IsCreativeModeAccessLimited 0xa4d5088)
	bool IsCreativeModeAccessLimited(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsAllContentInstalled (Underlying native function: IsAllContentInstalled 0xa4d4f70)
	bool IsAllContentInstalled(enum ESubGame& SubGame); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortGlobalUIContext.InputActionHoldStopped (Underlying native function: InputActionHoldStopped 0xa4d4ea0)
	void InputActionHoldStopped(struct FName& InputActionName, bool& bCompletedSuccessfully); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.InputActionHoldStarted (Underlying native function: InputActionHoldStarted 0xa4d4dd4)
	void InputActionHoldStarted(struct FName& InputActionName, float& HoldDuration); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.HideBang (Underlying native function: HideBang 0xa4d4d50)
	void HideBang(enum EFortBangType& Type); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.HandleVehicleSeatChanged (Underlying native function: HandleVehicleSeatChanged 0xa4d4844)
	void HandleVehicleSeatChanged(int& SeatIndex); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetUseActionName (Underlying native function: GetUseActionName 0x29e3610)
	struct FName GetUseActionName(enum ECommonInputType& OverrideInputType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetTrapPickerActionName (Underlying native function: GetTrapPickerActionName 0xa4d39e8)
	struct FName GetTrapPickerActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetTrapHotbarActionName (Underlying native function: GetTrapHotbarActionName 0xa4d3950)
	struct FName GetTrapHotbarActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetTrapConfirmActionName (Underlying native function: GetTrapConfirmActionName 0xa4d38b4)
	struct FName GetTrapConfirmActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetTopLevelHelpItems (Underlying native function: GetTopLevelHelpItems 0xa4d3378)
	void GetTopLevelHelpItems(struct TArray<class UFortHelpItem*>& ActiveHelpEntries); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetToggleInventoryActionName (Underlying native function: GetToggleInventoryActionName 0xa4d334c)
	struct FName GetToggleInventoryActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetTargetActionName (Underlying native function: GetTargetActionName 0xa4d31ac)
	struct FName GetTargetActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetSwitchQuickBarActionName (Underlying native function: GetSwitchQuickBarActionName 0xa4d3110)
	struct FName GetSwitchQuickBarActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetSubGame (Underlying native function: GetSubGame 0x296b2b8)
	enum ESubGame GetSubGame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetSessionId (Underlying native function: GetSessionId 0xa4d2e8c)
	struct FString GetSessionId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetSessionConnectString (Underlying native function: GetSessionConnectString 0xa4d2e3c)
	struct FString GetSessionConnectString(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetScoreReport (Underlying native function: GetScoreReport 0xa4d2e18)
	class UFortUIScoreReport* GetScoreReport(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetRotatePrimitiveClockwiseActionName (Underlying native function: GetRotatePrimitiveClockwiseActionName 0xa4d2d48)
	struct FName GetRotatePrimitiveClockwiseActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetQuestManager (Underlying native function: GetQuestManager 0x2af478c)
	class UFortQuestManager* GetQuestManager(enum ESubGame& SubGame); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetPickerConfirmActionName (Underlying native function: GetPickerConfirmActionName 0xa4d2388)
	struct FName GetPickerConfirmActionName(enum EFortPickerMode& PickerMode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetPickerCancelActionName (Underlying native function: GetPickerCancelActionName 0xa4d2284)
	struct FName GetPickerCancelActionName(enum EFortPickerMode& PickerMode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetPerformBuildingImprovementInteractionActionName (Underlying native function: GetPerformBuildingImprovementInteractionActionName 0xa4d21e8)
	struct FName GetPerformBuildingImprovementInteractionActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetPerformBuildingEditInteractionActionName (Underlying native function: GetPerformBuildingEditInteractionActionName 0xa4d214c)
	struct FName GetPerformBuildingEditInteractionActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetMessageManager (Underlying native function: GetMessageManager 0xa4d1d58)
	class UFortUIMessageManager* GetMessageManager(struct FName& ManagerName, bool& bCreatedNew); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetLastMissionRewardReport (Underlying native function: GetLastMissionRewardReport 0xa4d1bd4)
	class UFortUIRewardReport* GetLastMissionRewardReport(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetLastGameSummaryInfo (Underlying native function: GetLastGameSummaryInfo 0xa4d1b18)
	struct FGameSummaryInfo GetLastGameSummaryInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetKeyForAction (Underlying native function: GetKeyForAction 0xa4d19b8)
	struct FKey GetKeyForAction(struct FName& Action, bool& bForceGamepadKey, struct FName& PresetNameOverride); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetKBMPlayerInputPresetNamesForSubGame (Underlying native function: GetKBMPlayerInputPresetNamesForSubGame 0xa4d1880)
	void GetKBMPlayerInputPresetNamesForSubGame(enum ESubGame& SubGame, struct TArray<struct FString>& InputPresetNames, struct TArray<struct FText>& InputPresetFriendlyNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetKBMPlayerInputPresetDescriptionForSubGame (Underlying native function: GetKBMPlayerInputPresetDescriptionForSubGame 0xa4d1700)
	void GetKBMPlayerInputPresetDescriptionForSubGame(enum ESubGame& SubGame, int& CurrentPreset, struct FText& InputPresetDescription, struct FText& InputPresetSubDescription); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetJumpActionName (Underlying native function: GetJumpActionName 0xa4d16d4)
	struct FName GetJumpActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetInputTypeIcon (Underlying native function: GetInputTypeIcon 0x2bb8038)
	class UTexture2D* GetInputTypeIcon(enum ECommonInputType& InputType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetInputPriority (Underlying native function: GetInputPriority 0x28a804c)
	int GetInputPriority(enum EInputPriority& Priority); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetInputActionGroup (Underlying native function: GetInputActionGroup 0xa4d133c)
	bool GetInputActionGroup(struct FName& ActionName, enum EFortInputActionGroup& OutInputActionGroup); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetHoagieBoostName (Underlying native function: GetHoagieBoostName 0xa4d1290)
	struct FName GetHoagieBoostName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetHideStwItemRefundHelp (Underlying native function: GetHideStwItemRefundHelp 0xa4d1248)
	bool GetHideStwItemRefundHelp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetHidePerkRecombobulatorHelp (Underlying native function: GetHidePerkRecombobulatorHelp 0xa4d1200)
	bool GetHidePerkRecombobulatorHelp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetFireActionName (Underlying native function: GetFireActionName 0xa4d1008)
	struct FName GetFireActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetFeedbackTitle (Underlying native function: GetFeedbackTitle 0xa4d0f94)
	struct FText GetFeedbackTitle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetFeatureState (Underlying native function: GetFeatureState 0x16408d4)
	void GetFeatureState(enum EFortUIFeature& Feature, enum EFortUIFeatureState& OutFeatureState, enum EFortUIFeatureStateReason& OutReason); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCustomGamepadInputPresetName (Underlying native function: GetCustomGamepadInputPresetName 0xa4d07e0)
	struct FString GetCustomGamepadInputPresetName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCurrentInputPresetName (Underlying native function: GetCurrentInputPresetName 0xa4d05e4)
	struct FString GetCurrentInputPresetName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeToggleInvulnerablityName (Underlying native function: GetCreativeToggleInvulnerablityName 0xa4d03f8)
	struct FName GetCreativeToggleInvulnerablityName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeToggleHeatmapName (Underlying native function: GetCreativeToggleHeatmapName 0xa4d038c)
	struct FName GetCreativeToggleHeatmapName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeToggleGhostName (Underlying native function: GetCreativeToggleGhostName 0xa4d0320)
	struct FName GetCreativeToggleGhostName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeQuickbarActivateClutchName (Underlying native function: GetCreativeQuickbarActivateClutchName 0xa4d02b4)
	struct FName GetCreativeQuickbarActivateClutchName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveToolMultiSelectName (Underlying native function: GetCreativeMoveToolMultiSelectName 0xa4d0248)
	struct FName GetCreativeMoveToolMultiSelectName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveToolEquippedGrabOrLetGoName (Underlying native function: GetCreativeMoveToolEquippedGrabOrLetGoName 0xa4d01dc)
	struct FName GetCreativeMoveToolEquippedGrabOrLetGoName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveToolEquippedDeleteName (Underlying native function: GetCreativeMoveToolEquippedDeleteName 0xa4d0170)
	struct FName GetCreativeMoveToolEquippedDeleteName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveToolEquippedCopyGrabOrDuplicateName (Underlying native function: GetCreativeMoveToolEquippedCopyGrabOrDuplicateName 0xa4d0104)
	struct FName GetCreativeMoveToolEquippedCopyGrabOrDuplicateName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveToolClearMultiSelectName (Underlying native function: GetCreativeMoveToolClearMultiSelectName 0xa4d0098)
	struct FName GetCreativeMoveToolClearMultiSelectName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelySwitchAxisName (Underlying native function: GetCreativeMoveObjectsFreelySwitchAxisName 0xa4d002c)
	struct FName GetCreativeMoveObjectsFreelySwitchAxisName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyRotateCounterclockwiseName (Underlying native function: GetCreativeMoveObjectsFreelyRotateCounterclockwiseName 0xa4cffc0)
	struct FName GetCreativeMoveObjectsFreelyRotateCounterclockwiseName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyRotateClockwiseName (Underlying native function: GetCreativeMoveObjectsFreelyRotateClockwiseName 0xa4cff54)
	struct FName GetCreativeMoveObjectsFreelyRotateClockwiseName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyPushName (Underlying native function: GetCreativeMoveObjectsFreelyPushName 0xa4cfee8)
	struct FName GetCreativeMoveObjectsFreelyPushName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyPullName (Underlying native function: GetCreativeMoveObjectsFreelyPullName 0xa4cfe7c)
	struct FName GetCreativeMoveObjectsFreelyPullName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyExitName (Underlying native function: GetCreativeMoveObjectsFreelyExitName 0xa4cfe10)
	struct FName GetCreativeMoveObjectsFreelyExitName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyDuplicateName (Underlying native function: GetCreativeMoveObjectsFreelyDuplicateName 0xa4cfda4)
	struct FName GetCreativeMoveObjectsFreelyDuplicateName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyDropToFloorName (Underlying native function: GetCreativeMoveObjectsFreelyDropToFloorName 0xa4cfd38)
	struct FName GetCreativeMoveObjectsFreelyDropToFloorName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyChangePrecisionLevelName (Underlying native function: GetCreativeMoveObjectsFreelyChangePrecisionLevelName 0xa4cfccc)
	struct FName GetCreativeMoveObjectsFreelyChangePrecisionLevelName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveBuildingsOnGridRotateCounterclockwiseName (Underlying native function: GetCreativeMoveBuildingsOnGridRotateCounterclockwiseName 0xa4cfc60)
	struct FName GetCreativeMoveBuildingsOnGridRotateCounterclockwiseName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveBuildingsOnGridRotateClockwiseName (Underlying native function: GetCreativeMoveBuildingsOnGridRotateClockwiseName 0xa4cfbf4)
	struct FName GetCreativeMoveBuildingsOnGridRotateClockwiseName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveBuildingsOnGridMirrorName (Underlying native function: GetCreativeMoveBuildingsOnGridMirrorName 0xa4cfb88)
	struct FName GetCreativeMoveBuildingsOnGridMirrorName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveBuildingsOnGridExitName (Underlying native function: GetCreativeMoveBuildingsOnGridExitName 0xa4cfb1c)
	struct FName GetCreativeMoveBuildingsOnGridExitName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveBuildingsOnGridDuplicateName (Underlying native function: GetCreativeMoveBuildingsOnGridDuplicateName 0xa4cfab0)
	struct FName GetCreativeMoveBuildingsOnGridDuplicateName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeModeLimitedAccessEndTime (Underlying native function: GetCreativeModeLimitedAccessEndTime 0xa4cfa84)
	struct FDateTime* GetCreativeModeLimitedAccessEndTime(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeFlyUpActionName (Underlying native function: GetCreativeFlyUpActionName 0xa4cfa18)
	struct FName GetCreativeFlyUpActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeFlyDownActionName (Underlying native function: GetCreativeFlyDownActionName 0xa4cf9ac)
	struct FName GetCreativeFlyDownActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCollectionBookManager (Underlying native function: GetCollectionBookManager 0xa4cf7f0)
	class UFortCollectionBookManager* GetCollectionBookManager(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetChangeMaterialActionName (Underlying native function: GetChangeMaterialActionName 0xa4cf798)
	struct FName GetChangeMaterialActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetBuildConfirmActionName (Underlying native function: GetBuildConfirmActionName 0xa4cf5ec)
	struct FName GetBuildConfirmActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetBrushForKey (Underlying native function: GetBrushForKey 0xa4cf3e8)
	bool GetBrushForKey(struct FKey& Key, struct FSlateBrush& Brush); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetAltInteractionActionName (Underlying native function: GetAltInteractionActionName 0x2a5c4fc)
	struct FName GetAltInteractionActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetAllPlayerInputPresetNamesForSubGame (Underlying native function: GetAllPlayerInputPresetNamesForSubGame 0xa4cefc8)
	void GetAllPlayerInputPresetNamesForSubGame(enum ESubGame& SubGame, struct TArray<struct FString>& InputPresetNames, struct TArray<struct FText>& InputPresetFriendlyNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetActionForKey (Underlying native function: GetActionForKey 0xa4cec70)
	struct FName GetActionForKey(struct FName& PresetName, struct FKey& Key, enum EFortInputActionGroup& InputActionGroup, bool& bIsUsingGamepad); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.ForceSetFeatureState (Underlying native function: ForceSetFeatureState 0xa4ce664)
	void ForceSetFeatureState(enum EFortUIFeature& Feature, enum EFortUIFeatureState& ForcedState, enum EFortUIFeatureStateReason& Reason); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ExitVehicle (Underlying native function: ExitVehicle 0xa4ce4ec)
	void ExitVehicle(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.EnterVehiclePassenger (Underlying native function: EnterVehiclePassenger 0xa4ce1c8)
	void EnterVehiclePassenger(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.EnterVehicleDriver (Underlying native function: EnterVehicleDriver 0xa4ce1ac)
	void EnterVehicleDriver(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.DrawAttention (Underlying native function: DrawAttention 0xa4cdda8)
	static void DrawAttention(class UWidget*& BaseWidget); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.DisplayStateContent (Underlying native function: DisplayStateContent 0xa4cdd04)
	void DisplayStateContent(bool& bDisplay); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.CopyToClipboard (Underlying native function: CopyToClipboard 0xa4cd78c)
	void CopyToClipboard(struct FString& ClipboardText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ContentInstallationProgress (Underlying native function: ContentInstallationProgress 0x86b0154)
	float ContentInstallationProgress(enum ESubGame& SubGame); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.ClearRatingWidgetInfo (Underlying native function: ClearRatingWidgetInfo 0xa4cd774)
	void ClearRatingWidgetInfo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ClearLastMissionReports (Underlying native function: ClearLastMissionReports 0xa4cd760)
	void ClearLastMissionReports(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ClearLastGameSummaryInfo (Underlying native function: ClearLastGameSummaryInfo 0xa4cd718)
	void ClearLastGameSummaryInfo(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.CheckFlag (Underlying native function: CheckFlag 0xa4cd57c)
	static void CheckFlag(struct FString& FlagName, enum EFlagStatus& OutStatus); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.CanPlay (Underlying native function: CanPlay 0xa4ccea4)
	bool CanPlay(enum ESubGame& SubGame, struct FText& DenialReason); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.CanMatchmake (Underlying native function: CanMatchmake 0xa4ccdb8)
	bool CanMatchmake(enum ESubGame& SubGame, struct FText& DenialReason); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortGlobalUIContext.BindToFeatureStateAndInitialize (Underlying native function: BindToFeatureStateAndInitialize 0xa4cc67c)
	void BindToFeatureStateAndInitialize(enum EFortUIFeature& Feature, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.AllowQuit (Underlying native function: AllowQuit 0x2d7b584)
	bool AllowQuit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.AllowLogout (Underlying native function: AllowLogout 0xa4cc314)
	bool AllowLogout(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

