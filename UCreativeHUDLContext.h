// Class /Script/FortniteUI.CreativeHUDLContext
// Size: 0x170
class UCreativeHUDLContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnRotationAxisChanged; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnScaleAxisChanged; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnCreativeGhostChanged; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnCreativeInvulnerableChanged; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnCreativeHeatmapToggled; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnDropToFloorChanged; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnPrecisionChanged; // 0x90 (0x10)
	struct FMulticastInlineDelegate OnMoveToolLineOfSightBlockingChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolEquippedChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleModified; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickMenuDisplayedChanged; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotationModified; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickbarEnabledChanged; // 0xf0 (0x10)
	struct FMulticastInlineDelegate OnCreativeModeEnabledChanged; // 0x100 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickbarActiveChanged; // 0x110 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickbarEquippedChanged; // 0x120 (0x10)
	struct FMulticastInlineDelegate OnPropPlaySoundCountdownChanged; // 0x130 (0x10)
	struct FMulticastInlineDelegate OnPropLockInPlaceChanged; // 0x140 (0x10)
	struct FMulticastInlineDelegate OnIsCreativeModeratorModeActiveChanged; // 0x150 (0x10)
	class AFortCreativeMoveTool* CurrentMoveTool; // 0x160 (0x8)
	bool bPropLockedInPlace; // 0x168 (0x1)
	unsigned char padding_169[0x7]; // 0x169 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.CreativeHUDLContext.OnWeaponEquipped (Underlying native function: OnWeaponEquipped 0xa4b2854)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.OnPlayerPawnSet (Underlying native function: OnPlayerPawnSet 0xa4b2820)
	void OnPlayerPawnSet(); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.OnPlayerControllerSet (Underlying native function: OnPlayerControllerSet 0xa4b280c)
	void OnPlayerControllerSet(); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.OnCreativeQuickbarComponentLoaded (Underlying native function: OnCreativeQuickbarComponentLoaded 0xa4b2664)
	void OnCreativeQuickbarComponentLoaded(); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.IsPropLockedInPlace (Underlying native function: IsPropLockedInPlace 0xa4b2178)
	bool IsPropLockedInPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativeHUDLContext.HandleOnCreativeModeEnabledChanged (Underlying native function: HandleOnCreativeModeEnabledChanged 0xa4b0f00)
	void HandleOnCreativeModeEnabledChanged(bool& bIsEnabled); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.GetScaleAxis (Underlying native function: GetScaleAxis 0xa4b02c0)
	enum EScaleAxis GetScaleAxis(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativeHUDLContext.GetRotationAxis (Underlying native function: GetRotationAxis 0xa4b0260)
	struct FRotator GetRotationAxis(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativeHUDLContext.GetPrecisionLevel (Underlying native function: GetPrecisionLevel 0xa4b015c)
	void GetPrecisionLevel(bool& SnappingEnabled, unsigned char& GridSnappingIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativeHUDLContext.GetOwningPlayerState (Underlying native function: GetOwningPlayerState 0xa4afd10)
	class AFortPlayerState* GetOwningPlayerState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativeHUDLContext.GetOwningPlayerPawn (Underlying native function: GetOwningPlayerPawn 0xa4afcec)
	class AFortPlayerPawn* GetOwningPlayerPawn(); // (Final | Native | Public | Const)

	// Function /Script/FortniteUI.CreativeHUDLContext.GetDropToFloorEnabled (Underlying native function: GetDropToFloorEnabled 0xa4aee8c)
	bool GetDropToFloorEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativeHUDLContext.GetCurrentHitTraceRule (Underlying native function: GetCurrentHitTraceRule 0xa4aeaac)
	enum EHitTraceRule GetCurrentHitTraceRule(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativeHUDLContext.GetCreativeItemListSourceFromPlaylist (Underlying native function: GetCreativeItemListSourceFromPlaylist 0xa4ae7d4)
	class UDataTable* GetCreativeItemListSourceFromPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnScaleAxisChanged (Underlying native function: ForwardOnScaleAxisChanged 0xa4ae1b0)
	void ForwardOnScaleAxisChanged(enum EScaleAxis& Axis); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnRotationAxisChanged (Underlying native function: ForwardOnRotationAxisChanged 0xa4ae130)
	void ForwardOnRotationAxisChanged(unsigned char& AxisIndex); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnPropLockedInPlacedChanged (Underlying native function: ForwardOnPropLockedInPlacedChanged 0xa4ae09c)
	void ForwardOnPropLockedInPlacedChanged(bool& bLockedInPlace); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnPrecisionChanged (Underlying native function: ForwardOnPrecisionChanged 0xa4adfd8)
	void ForwardOnPrecisionChanged(bool& bPrecisionOn, unsigned char& GridSnapIndex); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnMoveToolScaleModified (Underlying native function: ForwardOnMoveToolScaleModified 0xa4adf48)
	void ForwardOnMoveToolScaleModified(struct FVector& currentVector); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnMoveToolRotationModified (Underlying native function: ForwardOnMoveToolRotationModified 0xa4adeb8)
	void ForwardOnMoveToolRotationModified(struct FQuat& currentRotationOffset); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnLOSChanged (Underlying native function: ForwardOnLOSChanged 0xa4ade38)
	void ForwardOnLOSChanged(enum EHitTraceRule& HitTraceRule); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnDropToFloorChanged (Underlying native function: ForwardOnDropToFloorChanged 0x8c2b7ec)
	void ForwardOnDropToFloorChanged(bool& bDropToFloorOn); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnCreativeQuickMenuDisplayedChanged (Underlying native function: ForwardOnCreativeQuickMenuDisplayedChanged 0xa4adbf8)
	void ForwardOnCreativeQuickMenuDisplayedChanged(bool& bIsDisplayed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnCreativeQuickbarEquippedChanged (Underlying native function: ForwardOnCreativeQuickbarEquippedChanged 0xa4adda8)
	void ForwardOnCreativeQuickbarEquippedChanged(bool& bIsEquipped); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnCreativeQuickbarEnabledChanged (Underlying native function: ForwardOnCreativeQuickbarEnabledChanged 0xa4add18)
	void ForwardOnCreativeQuickbarEnabledChanged(bool& bIsEnabled); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnCreativeQuickbarActiveChanged (Underlying native function: ForwardOnCreativeQuickbarActiveChanged 0xa4adc88)
	void ForwardOnCreativeQuickbarActiveChanged(bool& bIsActive); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnCreativeInvulnerableChanged (Underlying native function: ForwardOnCreativeInvulnerableChanged 0xa4adb6c)
	void ForwardOnCreativeInvulnerableChanged(bool& bIsInvulnerable); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnCreativeHeatmapTogged (Underlying native function: ForwardOnCreativeHeatmapTogged 0x8717dfc)
	void ForwardOnCreativeHeatmapTogged(bool& bIsHeatmapToggled); // (Final | Native | Public)

	// Function /Script/FortniteUI.CreativeHUDLContext.ForwardOnCreativeGhostChanged (Underlying native function: ForwardOnCreativeGhostChanged 0xa4adae0)
	void ForwardOnCreativeGhostChanged(bool& bIsGhostEnabled); // (Final | Native | Public)
};

