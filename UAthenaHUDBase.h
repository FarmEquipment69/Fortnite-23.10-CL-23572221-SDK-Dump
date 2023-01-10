// Class /Script/FortniteUI.AthenaHUDBase
// Size: 0x5a8
class UAthenaHUDBase : public UFortUIStateWidgetBase
{
	unsigned char unreflected_3c0[0x30]; // 0x3c0 (0x30) 
	struct TArray<class UUserWidget*> MinigameWidgets; // 0x3f0 (0x10)
	struct TArray<class UFortWeaponReticleExtensionData*> WeaponReticleExtensionDatas; // 0x400 (0x10)
	class UClass* KairosHUDLayerClass; // 0x410 (0x8)
	struct TArray<struct FMutatorAddedWidgets> MutatorAddedWidgets; // 0x418 (0x10)
	unsigned char unreflected_428[0x60]; // 0x428 (0x60) 
	class UFortWeaponReticleExtensionWidgetBase* CurrentCustomReticleExtension; // 0x488 (0x8)
	struct TArray<class UFortWeaponReticleExtensionWidgetBase*> RecentReticleExtensions; // 0x490 (0x10)
	class UAthenaMapScreenContainer* MapScreenContainer; // 0x4a0 (0x8)
	class UAthenaHUDMenu* AthenaHUDMenu; // 0x4a8 (0x8)
	class UCommonActivatableWidget* TitleBar; // 0x4b0 (0x8)
	struct TSet<enum EUIExtensionSlot> RelevantExtensionSlots; // 0x4b8 (0x50)
	struct TArray<struct FUIExtension> TournamentUIExtensions; // 0x508 (0x10)
	struct TArray<struct FUIExtension> ArenaTournamentUIExtensions; // 0x518 (0x10)
	class UDynamicUIScene* PreloadMenuScene; // 0x528 (0x8)
	struct TWeakObjectPtr<class UClass> NewEmotePicker; // 0x530 (0x28)
	struct TWeakObjectPtr<class UClass> SquadComsPickerClass; // 0x558 (0x28)
	struct TWeakObjectPtr<class UClass> WeaponWheelClass; // 0x580 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.AthenaHUDBase.SetZoneCompleted (Underlying native function: SetZoneCompleted 0xa2ea884)
	void SetZoneCompleted(bool& bValue); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaHUDBase.ReleaseMenu (Underlying native function: ReleaseMenu 0xa2ea398)
	void ReleaseMenu(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaHUDBase.PreloadMenu (Underlying native function: PreloadMenu 0xa2ea384)
	void PreloadMenu(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaHUDBase.PlaylistExtensionWidgetCreatedNotSupported (Underlying native function: PlaylistExtensionWidgetCreatedNotSupported 0xa2ea29c)
	void PlaylistExtensionWidgetCreatedNotSupported(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& Widget); // (Final | Native | Private | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaHUDBase.OnHUDScaleChanged (Has no native function)
	void OnHUDScaleChanged(float& HUDScale); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaHUDBase.OnExtensionWidgetRemoved (Has no native function)
	void OnExtensionWidgetRemoved(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& Widget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaHUDBase.OnExtensionWidgetCreated (Has no native function)
	void OnExtensionWidgetCreated(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& Widget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0x279aa5c)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleUpdateMinigameUIExtensions (Underlying native function: HandleUpdateMinigameUIExtensions 0xa2e98e8)
	void HandleUpdateMinigameUIExtensions(class AFortMinigame*& Minigame); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleRecoverFromPostGame (Underlying native function: HandleRecoverFromPostGame 0xa2e9520)
	void HandleRecoverFromPostGame(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaHUDBase.HandlePickerOpenRequest (Underlying native function: HandlePickerOpenRequest 0xa2e9428)
	void HandlePickerOpenRequest(enum EFortPickerMode& Mode, int& InitialOption, bool& bIgnoreFirstAccept); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleOnMutatorRemoved (Underlying native function: HandleOnMutatorRemoved 0xa2e9280)
	void HandleOnMutatorRemoved(class AFortGameplayMutator*& NewMutator); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleOnMutatorAdded (Underlying native function: HandleOnMutatorAdded 0xa2e9200)
	void HandleOnMutatorAdded(class AFortGameplayMutator*& NewMutator); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleNewPanelFromMutator (Underlying native function: HandleNewPanelFromMutator 0xa2e9008)
	void HandleNewPanelFromMutator(class UClass*& PanelClass); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleMinigamePlayModeChanged (Underlying native function: HandleMinigamePlayModeChanged 0xa2e8f40)
	void HandleMinigamePlayModeChanged(class AFortMinigame*& Minigame, bool& bIsInPlayMode); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleMinigameHideHUD (Underlying native function: HandleMinigameHideHUD 0xa2e8ec0)
	void HandleMinigameHideHUD(bool& bLoading); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleLocalPlayerDied (Underlying native function: HandleLocalPlayerDied 0xa2e8de0)
	void HandleLocalPlayerDied(struct FFortPlayerDeathReport& DeathReport); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0x47cc0ec)
	void HandleGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleCursorModeChanging (Underlying native function: HandleCursorModeChanging 0x284cb3c)
	void HandleCursorModeChanging(bool& bCursorModeEnabled, struct FName& ActionName); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaHUDBase.HandleCursorModeChanged (Has no native function)
	void HandleCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CustomWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaHUDBase.GetZoneCompleted (Underlying native function: GetZoneCompleted 0x8e41b40)
	bool GetZoneCompleted(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaHUDBase.BindVolumeEvents (Underlying native function: BindVolumeEvents 0x7fbbf50)
	void BindVolumeEvents(); // (Native | Protected)
};

