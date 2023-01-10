// Class /Script/FortniteUI.AthenaHUDContext
// Size: 0x488
class UAthenaHUDContext : public UBlueprintContextBase
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FMulticastInlineDelegate OnLocalPlayerWon; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerDeathOnWin; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnLocalTeamWon; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnLocalTeamLost; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerLost; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerKilledPlayer; // 0x88 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerDBNOStateChanged; // 0x98 (0x10)
	struct FMulticastInlineDelegate OnPawnEmoteStopped; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnUIGameplayCue; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerBeginSkydiving; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnAthenaAutoFireChanged; // 0xd8 (0x10)
	struct FMulticastInlineDelegate OnAthenaGamePhaseChanged; // 0xe8 (0x10)
	struct FMulticastInlineDelegate OnPlayerFiredWeapon; // 0xf8 (0x10)
	struct FMulticastInlineDelegate OnShowUrgentQuestMessage; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnDuelChange; // 0x118 (0x10)
	struct FMulticastInlineDelegate OnLowPerformanceMode; // 0x128 (0x10)
	struct FMulticastInlineDelegate OnPTTStateChange; // 0x138 (0x10)
	struct FMulticastInlineDelegate OnCanPTTChange; // 0x148 (0x10)
	struct FMulticastInlineDelegate ShowMobilePickerDelegate; // 0x158 (0x10)
	struct FMulticastInlineDelegate OnPlayerNameChangeDelegate; // 0x168 (0x10)
	struct FMulticastInlineDelegate OnResurrectingNowDelegate; // 0x178 (0x10)
	struct FMulticastInlineDelegate OnAllWinnersAnnouncedDelegate; // 0x188 (0x10)
	struct FMulticastInlineDelegate OnSignalQualityChangeDelegate; // 0x198 (0x10)
	struct FMulticastInlineDelegate OnForwardStartedFalling; // 0x1a8 (0x10)
	struct FMulticastInlineDelegate OnSpecialActorListChanged; // 0x1b8 (0x10)
	unsigned char unreflected_1c8[0x18]; // 0x1c8 (0x18) 
	struct FMulticastInlineDelegate OnFireStopped; // 0x1e0 (0x10)
	struct FMulticastInlineDelegate OnPostGameWidgetPlacementChange; // 0x1f0 (0x10)
	struct FMulticastInlineDelegate OnForceStartPostGameFlow; // 0x200 (0x10)
	struct FMulticastInlineDelegate OnForceAllQuickbarsMinimizedChanged; // 0x210 (0x10)
	struct FMulticastInlineDelegate OnPlaylistExtensionWidgetCreatedNotSupported; // 0x220 (0x10)
	struct FMulticastInlineDelegate OnClearPlaylistExtensionWidgetNotSupported; // 0x230 (0x10)
	struct FMulticastInlineDelegate OnStartPostGameMenu; // 0x240 (0x10)
	struct FMulticastInlineDelegate OnRecoverFromPostGameMenu; // 0x250 (0x10)
	struct FMulticastInlineDelegate OnOverrideInventoryPanel; // 0x260 (0x10)
	unsigned char unreflected_270[0x1a0]; // 0x270 (0x1a0) 
	struct TWeakObjectPtr<class UWidget> MoveButtonWidgetPtr; // 0x410 (0x8)
	struct FAthenaWinnerInfo WinnerInfo; // 0x418 (0x20)
	unsigned char unreflected_438[0x1]; // 0x438 (0x1) 
	bool bMoveButtonMode; // 0x439 (0x1)
	bool bPendingAttachToHUD; // 0x43a (0x1)
	bool bLocalPlayerWonMatch; // 0x43b (0x1)
	struct TWeakObjectPtr<class AFortPlayerPawnAthena> BoundPlayerPawn; // 0x43c (0x8)
	unsigned char unreflected_444[0x4]; // 0x444 (0x4) 
	class UAthenaPlayerViewModel* PlayerViewModel; // 0x448 (0x8)
	unsigned char padding_450[0x38]; // 0x450 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.AthenaHUDContext.VictoryStingerTimeUntilFadeOut (Underlying native function: VictoryStingerTimeUntilFadeOut 0xa4b5a34)
	float VictoryStingerTimeUntilFadeOut(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.UseTapToShoot (Underlying native function: UseTapToShoot 0x8744110)
	bool UseTapToShoot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.UseOrRleoadFromHUDStop (Underlying native function: UseOrRleoadFromHUDStop 0xa4b5a08)
	void UseOrRleoadFromHUDStop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.UseOrRleoadFromHUDStart (Underlying native function: UseOrRleoadFromHUDStart 0xa4b59dc)
	void UseOrRleoadFromHUDStart(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.UpdateSelectedWidgetMoveOffsetVector (Underlying native function: UpdateSelectedWidgetMoveOffsetVector 0xa4b5900)
	void UpdateSelectedWidgetMoveOffsetVector(struct FVector2D& VectorOffset, float& fMoveScale); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.TryBestUseForActor (Underlying native function: TryBestUseForActor 0xa4b5834)
	void TryBestUseForActor(class AActor*& ActorToUse); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.TakeMovementInputFromHUD (Underlying native function: TakeMovementInputFromHUD 0xa4b57ac)
	void TakeMovementInputFromHUD(struct FVector2D& MoveVector); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.TakeLookStickInputFromHUD (Underlying native function: TakeLookStickInputFromHUD 0xa4b5724)
	void TakeLookStickInputFromHUD(struct FVector2D& LookStickPosition); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.TakeLookInputFromHUD (Underlying native function: TakeLookInputFromHUD 0xa4b5694)
	void TakeLookInputFromHUD(struct FRotator& LookRotator); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.TakeItemSelectionInputFromHUD (Underlying native function: TakeItemSelectionInputFromHUD 0xa4b54b4)
	void TakeItemSelectionInputFromHUD(int& TouchIndex, int& SlotIdx, bool& bIsUsing, enum EFortQuickBars& InQuickBar, bool& bReloadOrUseIfAlreadySelected, bool& bStopUseImmediately); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SwitchToPrimaryQuickbar (Underlying native function: SwitchToPrimaryQuickbar 0xa4b5488)
	void SwitchToPrimaryQuickbar(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SwapQuickBarFocusFromHUD (Underlying native function: SwapQuickBarFocusFromHUD 0xa4b53b0)
	void SwapQuickBarFocusFromHUD(enum EFortQuickBars& InQuickBar, int& SlotOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.StopTargettingFromHUD (Underlying native function: StopTargettingFromHUD 0xa4b5378)
	void StopTargettingFromHUD(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.StopItemSelectionInputFromHUD (Underlying native function: StopItemSelectionInputFromHUD 0xa4b5280)
	void StopItemSelectionInputFromHUD(int& TouchIndex, int& SlotIdx, enum EFortQuickBars& InQuickBar); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.StartPostGameMenu (Underlying native function: StartPostGameMenu 0xa4b5264)
	void StartPostGameMenu(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.ShowUrgentQuestMessage (Underlying native function: ShowUrgentQuestMessage 0xa4b4f70)
	void ShowUrgentQuestMessage(struct FUrgentQuestData& UrgentQuestData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.ShowMobilePicker__DelegateSignature (Has no native function)
	void ShowMobilePickerDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaHUDContext.ShowMobilePicker (Underlying native function: ShowMobilePicker 0xa4b4ec4)
	void ShowMobilePicker(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.ShowMarkerGameModeMessage (Underlying native function: ShowMarkerGameModeMessage 0xa4b4de4)
	void ShowMarkerGameModeMessage(int& PlayerId, int& InstanceID); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.ShowGameModeMessage (Underlying native function: ShowGameModeMessage 0xa4b4db4)
	void ShowGameModeMessage(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.ShowDuelUpdate (Underlying native function: ShowDuelUpdate 0xa4b4c9c)
	void ShowDuelUpdate(enum EDuelState& DuelState, struct FDuelOverlayData& DuelOverlayData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.ShouldVictoryUIPushEmoteInput (Underlying native function: ShouldVictoryUIPushEmoteInput 0xa4b4c64)
	bool ShouldVictoryUIPushEmoteInput(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.ShouldPlayCustomEndScreenAtLoss (Underlying native function: ShouldPlayCustomEndScreenAtLoss 0xa4b4b54)
	bool ShouldPlayCustomEndScreenAtLoss(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.ShouldDisplayScoreUI (Underlying native function: ShouldDisplayScoreUI 0xa4b4b30)
	bool ShouldDisplayScoreUI(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.ShouldDisplayPlacement (Underlying native function: ShouldDisplayPlacement 0xa4b4b0c)
	bool ShouldDisplayPlacement(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.ShouldAlwaysDisplaySquadInfo (Underlying native function: ShouldAlwaysDisplaySquadInfo 0xa4b4a88)
	bool ShouldAlwaysDisplaySquadInfo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SetTargetingToggleable (Underlying native function: SetTargetingToggleable 0xa4b44a8)
	void SetTargetingToggleable(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SetSelectWidgetToMoveMode (Underlying native function: SetSelectWidgetToMoveMode 0xa4b3fbc)
	void SetSelectWidgetToMoveMode(bool& bSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SetSelectedInventoryItem (Underlying native function: SetSelectedInventoryItem 0xa4b4058)
	void SetSelectedInventoryItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SetResourceMaterial (Underlying native function: SetResourceMaterial 0xa4b3e10)
	void SetResourceMaterial(struct TEnumAsByte<EFortResourceType>& NewMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SetPTTState (Underlying native function: SetPTTState 0xa4b3b3c)
	void SetPTTState(enum EPTTState& NewPushToTalkState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SetPostGameWidgetPlacement (Underlying native function: SetPostGameWidgetPlacement 0xa4b3bbc)
	void SetPostGameWidgetPlacement(struct FName& WidgetPlacement); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SetLockOnStickCoords (Underlying native function: SetLockOnStickCoords 0xa4b3a20)
	void SetLockOnStickCoords(struct FVector2D& LockOnCoords); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SetLocalPlayerWonMatch (Underlying native function: SetLocalPlayerWonMatch 0xa4b3794)
	void SetLocalPlayerWonMatch(bool& bLocalPlayerWon); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.SelectWidgetToMove (Underlying native function: SelectWidgetToMove 0xa4b2df8)
	void SelectWidgetToMove(class UWidget*& Widget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.ReloadFromHUD (Underlying native function: ReloadFromHUD 0xa4b2c64)
	void ReloadFromHUD(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.RecoverFromPostGameMenu (Underlying native function: RecoverFromPostGameMenu 0xa4b2c48)
	void RecoverFromPostGameMenu(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.PushGameOverEmoteInput (Underlying native function: PushGameOverEmoteInput 0xa4b2c20)
	void PushGameOverEmoteInput(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.PTTStateChange__DelegateSignature (Has no native function)
	void PTTStateChangeDelegateSignature(enum EPTTState& NewPushToTalkState); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaHUDContext.OwnerOrWeaponHasTag (Underlying native function: OwnerOrWeaponHasTag 0xa4b29a8)
	bool OwnerOrWeaponHasTag(struct FGameplayTag& InTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.OverrideInventoryPanel (Underlying native function: OverrideInventoryPanel 0xa4b2918)
	void OverrideInventoryPanel(class UUserWidget*& Widget); // (Final | Native | Public | BlueprintCallable | Const)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnStartPostGameMenu__DelegateSignature (Has no native function)
	void OnStartPostGameMenuDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnSpecialActorListChanged__DelegateSignature (Has no native function)
	void OnSpecialActorListChangedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnSignalQualityChange__DelegateSignature (Has no native function)
	void OnSignalQualityChangeDelegateSignature(float& NewQuality); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnShowUrgentQuestMessage__DelegateSignature (Has no native function)
	void OnShowUrgentQuestMessageDelegateSignature(struct FUrgentQuestData& UrgentQuestData, float& EventTimeRemaining); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnResurrectingNow__DelegateSignature (Has no native function)
	void OnResurrectingNowDelegateSignature(bool& bResurrectingNow); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnRecoverFromPostGameMenu__DelegateSignature (Has no native function)
	void OnRecoverFromPostGameMenuDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaHUDContext.OnReadyForWinnerInfoDisplay (Underlying native function: OnReadyForWinnerInfoDisplay 0xa4b2834)
	void OnReadyForWinnerInfoDisplay(); // (Final | Native | Private)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnPostGameWidgetPlacement__DelegateSignature (Has no native function)
	void OnPostGameWidgetPlacementDelegateSignature(struct FName& WidgetPlacement); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnPlaylistExtensionWidgetCreatedNotSupported__DelegateSignature (Has no native function)
	void OnPlaylistExtensionWidgetCreatedNotSupportedDelegateSignature(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& Widget); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnPlayerNameChange__DelegateSignature (Has no native function)
	void OnPlayerNameChangeDelegateSignature(struct FString& NewName); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnPlayerFiredWeapon__DelegateSignature (Has no native function)
	void OnPlayerFiredWeaponDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnPawnEmoteStopped__DelegateSignature (Has no native function)
	void OnPawnEmoteStoppedDelegateSignature(class UFortItemDefinition*& MontageItemDef, class AFortPawn*& PawnEmoting); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnOverrideInventoryPanel__DelegateSignature (Has no native function)
	void OnOverrideInventoryPanelDelegateSignature(class UUserWidget*& Widget); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnLowPerformanceMode__DelegateSignature (Has no native function)
	void OnLowPerformanceModeDelegateSignature(bool& bInLowPerformanceMode); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnLocalTeamWon__DelegateSignature (Has no native function)
	void OnLocalTeamWonDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnLocalTeamLost__DelegateSignature (Has no native function)
	void OnLocalTeamLostDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnLocalPlayerWon__DelegateSignature (Has no native function)
	void OnLocalPlayerWonDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnLocalPlayerLost__DelegateSignature (Has no native function)
	void OnLocalPlayerLostDelegateSignature(enum EEndOfMatchReason& LostReason); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnLocalPlayerKilledPlayer__DelegateSignature (Has no native function)
	void OnLocalPlayerKilledPlayerDelegateSignature(class AFortPlayerStateAthena*& Player); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnLocalPlayerDeathOnWin__DelegateSignature (Has no native function)
	void OnLocalPlayerDeathOnWinDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnLocalPlayerDBNOStateChanged__DelegateSignature (Has no native function)
	void OnLocalPlayerDBNOStateChangedDelegateSignature(bool& bIsDBNO); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnLocalPlayerBeginSkydiving__DelegateSignature (Has no native function)
	void OnLocalPlayerBeginSkydivingDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnForwardStartedFalling__DelegateSignature (Has no native function)
	void OnForwardStartedFallingDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnForceStartPostGameFlow__DelegateSignature (Has no native function)
	void OnForceStartPostGameFlowDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnForceAllQuickbarsMinimizedChanged__DelegateSignature (Has no native function)
	void OnForceAllQuickbarsMinimizedChangedDelegateSignature(bool& bEnabled); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnFireStopped__DelegateSignature (Has no native function)
	void OnFireStoppedDelegateSignature(int& StopFireIndex); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnDuelStarted__DelegateSignature (Has no native function)
	void OnDuelStartedDelegateSignature(enum EDuelState& DuelState, struct FDuelOverlayData& DuelOverlayData); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnClearPlaylistExtensionWidgetNotSupported__DelegateSignature (Has no native function)
	void OnClearPlaylistExtensionWidgetNotSupportedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnCanPTTChange__DelegateSignature (Has no native function)
	void OnCanPTTChangeDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnAthenaHUDAllWinnersAnnounced__DelegateSignature (Has no native function)
	void OnAthenaHUDAllWinnersAnnouncedDelegateSignature(struct FAthenaWinnerInfo& WinnerInfo); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnAthenaGamePhaseChanged__DelegateSignature (Has no native function)
	void OnAthenaGamePhaseChangedDelegateSignature(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& NewPhase); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteUI.AthenaHUDContext.OnAthenaAutoFireChanged__DelegateSignature (Has no native function)
	void OnAthenaAutoFireChangedDelegateSignature(bool& bEntering); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaHUDContext.OnAllWinnersAnnounced (Underlying native function: OnAllWinnersAnnounced 0x2eb28a0)
	void OnAllWinnersAnnounced(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDContext.JumpFromHudStart (Underlying native function: JumpFromHudStart 0xa4b2504)
	void JumpFromHudStart(int& TouchIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.JumpFromHudEnd (Underlying native function: JumpFromHudEnd 0xa4b24f0)
	void JumpFromHudEnd(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.IsVictoryUICinematic (Underlying native function: IsVictoryUICinematic 0xa4b24b8)
	bool IsVictoryUICinematic(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsUsingScope (Underlying native function: IsUsingScope 0xa4b2494)
	bool IsUsingScope(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsUsingDynamicUI (Underlying native function: IsUsingDynamicUI 0xa4b2464)
	bool IsUsingDynamicUI(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsTargeting (Underlying native function: IsTargeting 0xa4b21c8)
	bool IsTargeting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsRunningOnBattery (Underlying native function: IsRunningOnBattery 0xa4b2190)
	bool IsRunningOnBattery(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsOperatingTurret (Underlying native function: IsOperatingTurret 0xa4b2138)
	bool IsOperatingTurret(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsMovingSelectedWidget (Underlying native function: IsMovingSelectedWidget 0xa4b20a8)
	bool IsMovingSelectedWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsInSelectWidgetToMoveMode (Underlying native function: IsInSelectWidgetToMoveMode 0xa4b2090)
	bool IsInSelectWidgetToMoveMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsInBuildMode (Underlying native function: IsInBuildMode 0xa4b2050)
	bool IsInBuildMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsFiringFromTouch (Underlying native function: IsFiringFromTouch 0xa4b1fc4)
	bool IsFiringFromTouch(int& TouchIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsCurrentWeaponFiring (Underlying native function: IsCurrentWeaponFiring 0xa4b1f58)
	bool IsCurrentWeaponFiring(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsCurrentWeaponChargeable (Underlying native function: IsCurrentWeaponChargeable 0xa4b1f34)
	bool IsCurrentWeaponChargeable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsCrouching (Underlying native function: IsCrouching 0xa4b1ef8)
	bool IsCrouching(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsAutoRunEnabled (Underlying native function: IsAutoRunEnabled 0xa4b1eb0)
	bool IsAutoRunEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.IsActionBound (Underlying native function: IsActionBound 0xa4b1d60)
	bool IsActionBound(struct FName& ActionName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.HideGameModeMessage (Underlying native function: HideGameModeMessage 0xa4b1aac)
	void HideGameModeMessage(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.HasWifi (Underlying native function: HasWifi 0x2830cb8)
	bool HasWifi(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.HasLockOnTarget (Underlying native function: HasLockOnTarget 0xa4b19c0)
	bool HasLockOnTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.HasFiringTouch (Underlying native function: HasFiringTouch 0xa4b19a4)
	bool HasFiringTouch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.HasAutofireTarget (Underlying native function: HasAutofireTarget 0xa4b1980)
	bool HasAutofireTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.HandleUIGameplayCue (Underlying native function: HandleUIGameplayCue 0xa4b1814)
	void HandleUIGameplayCue(struct FName& CueName, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaHUDContext.HandleSpectatorViewTargetChanged (Underlying native function: HandleSpectatorViewTargetChanged 0xa4b1800)
	void HandleSpectatorViewTargetChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDContext.HandlePawnEmoteStopped (Underlying native function: HandlePawnEmoteStopped 0xa4b15a8)
	void HandlePawnEmoteStopped(class UFortItemDefinition*& MontageItemDef, class AFortPawn*& PawnEmoting); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDContext.HandleOnNPCUnconvertEvent (Underlying native function: HandleOnNPCUnconvertEvent 0xa4b1294)
	void HandleOnNPCUnconvertEvent(class AFortPawn*& UnconvertedFortPawn, enum EUnconvertReason& UnconvertReason); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDContext.HandleOnNPCConvertEvent (Underlying native function: HandleOnNPCConvertEvent 0xa4b0f90)
	void HandleOnNPCConvertEvent(class AFortPawn*& ConvertedFortPawn); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDContext.HandleLocalPlayerDBNOStateChanged (Underlying native function: HandleLocalPlayerDBNOStateChanged 0x2df6420)
	void HandleLocalPlayerDBNOStateChanged(class AFortPawn*& FortPawn, bool& bIsDBNO); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDContext.HandleLocalPlayerBeginSkydiving (Underlying native function: HandleLocalPlayerBeginSkydiving 0xa4b0ee4)
	void HandleLocalPlayerBeginSkydiving(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDContext.HandleGamePhaseChange (Underlying native function: HandleGamePhaseChange 0x19f1458)
	void HandleGamePhaseChange(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaHUDContext.GetWinnerText (Underlying native function: GetWinnerText 0xa4b0c38)
	void GetWinnerText(struct FText& ReturnText, struct FText& WinnerName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.GetVictoryText (Underlying native function: GetVictoryText 0xa4b0b6c)
	struct FText GetVictoryText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetVictoryStinger (Underlying native function: GetVictoryStinger 0xa4b0b34)
	class USoundCue* GetVictoryStinger(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetTouchInteractMode (Underlying native function: GetTouchInteractMode 0xa4b0aec)
	enum ETouchInteractMode GetTouchInteractMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetSquadSize (Underlying native function: GetSquadSize 0xa4b0640)
	int GetSquadSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetSquadConnectedCount (Underlying native function: GetSquadConnectedCount 0xa4b0600)
	int GetSquadConnectedCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetPTTState (Underlying native function: GetPTTState 0x1a13980)
	enum EPTTState GetPTTState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetPlayerName (Underlying native function: GetPlayerName 0xa4afed0)
	struct FString GetPlayerName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetPlayerColor (Underlying native function: GetPlayerColor 0xa4afda4)
	struct FLinearColor GetPlayerColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetLocalTime (Underlying native function: GetLocalTime 0xa4af6f8)
	void GetLocalTime(int& Hours, int& Minutes); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetLocalPlayerWonMatch (Underlying native function: GetLocalPlayerWonMatch 0xa4af6e0)
	bool GetLocalPlayerWonMatch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetJumpPressedTouchIndex (Underlying native function: GetJumpPressedTouchIndex 0x2d7b3d4)
	int GetJumpPressedTouchIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetInteractPressedTouchIndex (Underlying native function: GetInteractPressedTouchIndex 0x83d6720)
	int GetInteractPressedTouchIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetInLowPerformanceMode (Underlying native function: GetInLowPerformanceMode 0x21e4894)
	bool GetInLowPerformanceMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetHUDInfoDataAsset (Underlying native function: GetHUDInfoDataAsset 0xa4af210)
	class UFortAthenaHUDInfoDataAsset* GetHUDInfoDataAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetGliderDisplayName (Underlying native function: GetGliderDisplayName 0xa4af1bc)
	struct FText GetGliderDisplayName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetGamePhase (Underlying native function: GetGamePhase 0xa4af180)
	enum EAthenaGamePhase GetGamePhase(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetGameOverDelayTime (Underlying native function: GetGameOverDelayTime 0xa4af158)
	float GetGameOverDelayTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetCustomDBNOWidgetClass (Underlying native function: GetCustomDBNOWidgetClass 0xa4aedf8)
	struct TWeakObjectPtr<class UClass> GetCustomDBNOWidgetClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetCustomDBNOReviveMaterial (Underlying native function: GetCustomDBNOReviveMaterial 0xa4aed64)
	struct TWeakObjectPtr<class UMaterialInterface> GetCustomDBNOReviveMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetCanPTT (Underlying native function: GetCanPTT 0x2e3e674)
	bool GetCanPTT(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.GetBoundActions (Underlying native function: GetBoundActions 0xa4ae740)
	struct TArray<struct FName> GetBoundActions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.GetBatteryLevel (Underlying native function: GetBatteryLevel 0x6e8e624)
	float GetBatteryLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.ForwardOnSpecialActorListChanged (Underlying native function: ForwardOnSpecialActorListChanged 0xa4ae230)
	void ForwardOnSpecialActorListChanged(struct FSpecialActorRepData& SpecialActorData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaHUDContext.ForceVictoryRoyaleUI (Underlying native function: ForceVictoryRoyaleUI 0xa4adac0)
	void ForceVictoryRoyaleUI(); // (Final | Native | Public)

	// Function /Script/FortniteUI.AthenaHUDContext.ForceStartPostGameFlow (Underlying native function: ForceStartPostGameFlow 0xa4adaac)
	void ForceStartPostGameFlow(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.ForceFireFromHUDStop (Underlying native function: ForceFireFromHUDStop 0xa4ada74)
	void ForceFireFromHUDStop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.FireFromHUDStop (Underlying native function: FireFromHUDStop 0xa4ad9b0)
	void FireFromHUDStop(int& TouchIndex, class UWidget*& DebugWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.FireFromHUDStart (Underlying native function: FireFromHUDStart 0xa4ad8ec)
	void FireFromHUDStart(int& TouchIndex, class UWidget*& DebugWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.ExecuteActionNameFromHUDWithEventType (Underlying native function: ExecuteActionNameFromHUDWithEventType 0xa4ad828)
	void ExecuteActionNameFromHUDWithEventType(struct FName& ActionName, struct TEnumAsByte<EInputEvent>& KeyEvent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.ExecuteActionNameFromHUD (Underlying native function: ExecuteActionNameFromHUD 0xa4ad7a4)
	void ExecuteActionNameFromHUD(struct FName& ActionName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.EndUseFromHUD (Underlying native function: EndUseFromHUD 0xa4ad778)
	void EndUseFromHUD(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.EnableAutoRunFromHUD (Underlying native function: EnableAutoRunFromHUD 0xa4ad6f8)
	void EnableAutoRunFromHUD(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.DoesPlaylistUIExtensionSlotContainWidget (Underlying native function: DoesPlaylistUIExtensionSlotContainWidget 0xa4ad618)
	bool DoesPlaylistUIExtensionSlotContainWidget(enum EUIExtensionSlot& PlaylistSlot); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.DisplayPlayerWonTime (Underlying native function: DisplayPlayerWonTime 0xa4ad5f0)
	float DisplayPlayerWonTime(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDContext.CycleQuickbar (Underlying native function: CycleQuickbar 0xa4ad5c8)
	void CycleQuickbar(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.CanShootInVehicle (Underlying native function: CanShootInVehicle 0xa4ad43c)
	bool CanShootInVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.CanCurrentWeaponAutoFireFromReticle (Underlying native function: CanCurrentWeaponAutoFireFromReticle 0xa4ad364)
	bool CanCurrentWeaponAutoFireFromReticle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.CanAutoRun (Underlying native function: CanAutoRun 0xa4ad274)
	bool CanAutoRun(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDContext.BeginUseFromHUD (Underlying native function: BeginUseFromHUD 0xa4ad1c0)
	void BeginUseFromHUD(); // (Final | Native | Public | BlueprintCallable)
};

