// Class /Script/FortniteGame.FortReplayContext
// Size: 0x2e8
class UFortReplayContext : public UBlueprintContextBase
{
	struct FFortReplayPlaybackState PlaybackState; // 0x30 (0x18)
	struct FFortReplayFXState EffectsState; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnReplayFXStateChange; // 0x58 (0x10)
	float TimeBeforeEvent; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FMulticastInlineDelegate OnPauseStateChanged; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnSessionIdWatermarkVisibilityChanged; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnReplayTimeChanged; // 0x90 (0x10)
	struct FMulticastInlineDelegate OnReplayTimelineChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnReplayPlaybackMultiplierChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnReplayHudVisibilityChanged; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnReplayHudNotificationSuppressionChanged; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnToggleReplayViewSettings; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnToggleReplayPlayerList; // 0xf0 (0x10)
	struct FMulticastInlineDelegate OnToggleHighlightsListEvent; // 0x100 (0x10)
	struct FMulticastInlineDelegate OnReplayLevelStreamingChanged; // 0x110 (0x10)
	struct FMulticastInlineDelegate OnSequencerReadyEvent; // 0x120 (0x10)
	struct FMulticastInlineDelegate OnReplayTimelineFocusChanged; // 0x130 (0x10)
	struct FMulticastInlineDelegate OnReplayTimelineMarkerAdded; // 0x140 (0x10)
	struct FMulticastInlineDelegate OnReplayTimelineMarkersCleared; // 0x150 (0x10)
	struct FMulticastInlineDelegate OnReplayScrubStart; // 0x160 (0x10)
	struct FMulticastInlineDelegate OnReplayScrubComplete; // 0x170 (0x10)
	struct FMulticastInlineDelegate OnToggleSequencer; // 0x180 (0x10)
	struct FMulticastInlineDelegate OnSequenceFinished; // 0x190 (0x10)
	struct FMulticastInlineDelegate OnSequenceShotChanged; // 0x1a0 (0x10)
	struct FMulticastInlineDelegate OnHighlightPlayingEvent; // 0x1b0 (0x10)
	unsigned char unreflected_1c0[0xc0]; // 0x1c0 (0xc0) 
	struct TArray<class UFortSpectateClickableMapIcon*> InteractiveMapIcons; // 0x280 (0x10)
	unsigned char UniqueMapIconVisibility_290[0x50]; // 0x290 (0x50) (UNHANDLED PROPERTY TYPE: MapProperty UID: 0)
	struct TWeakObjectPtr<class AFortPlayerControllerSpectating> SpectatingPC; // 0x2e0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortReplayContext.ToggleViewSettingsVisibility (Underlying native function: ToggleViewSettingsVisibility 0x8c2beac)
	void ToggleViewSettingsVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.TogglePlayPause (Underlying native function: TogglePlayPause 0x8c2be98)
	void TogglePlayPause(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.TogglePlayerListVisibility (Underlying native function: TogglePlayerListVisibility 0x8551550)
	void TogglePlayerListVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.ToggleIconVisibility (Underlying native function: ToggleIconVisibility 0x8c2bdf4)
	bool ToggleIconVisibility(class UClass*& ToToggle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.ToggleHUDVisibility (Underlying native function: ToggleHUDVisibility 0x8c2bdbc)
	void ToggleHUDVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.ToggleHighlightsListVisibility (Underlying native function: ToggleHighlightsListVisibility 0x8c2bdd8)
	void ToggleHighlightsListVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.TakeScreenshot (Underlying native function: TakeScreenshot 0x8c2bda8)
	void TakeScreenshot(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.SkipTo (Underlying native function: SkipTo 0x8c2bc7c)
	void SkipTo(float& TimeInSeconds); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.SkipForward (Underlying native function: SkipForward 0x8c2bbe8)
	void SkipForward(float& TimeInSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.SkipBack (Underlying native function: SkipBack 0x8c2bb50)
	void SkipBack(float& TimeInSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.SetSessionIdWatermarkVisible (Underlying native function: SetSessionIdWatermarkVisible 0x8c2b7ec)
	void SetSessionIdWatermarkVisible(bool& bIsVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.ReplayHUDCleanup (Underlying native function: ReplayHUDCleanup 0x303b138)
	void ReplayHUDCleanup(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.OnHighQualityFxEnabledChanged (Underlying native function: OnHighQualityFxEnabledChanged 0x8c2a068)
	void OnHighQualityFxEnabledChanged(bool& bEnabled); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortReplayContext.JumpToPreviousEvent (Underlying native function: JumpToPreviousEvent 0x8c29c28)
	void JumpToPreviousEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.JumpToNextEvent (Underlying native function: JumpToNextEvent 0x8c29bb4)
	void JumpToNextEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.JumpToEvent (Underlying native function: JumpToEvent 0x8c29b34)
	void JumpToEvent(int& EventIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.JumpReplayToTimelinePosition (Underlying native function: JumpReplayToTimelinePosition 0x8c29aa0)
	void JumpReplayToTimelinePosition(float& TimeRatio); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.IsDepthOfFieldActive (Underlying native function: IsDepthOfFieldActive 0x8c29798)
	bool IsDepthOfFieldActive(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.IncreasePlaybackMultiplier (Underlying native function: IncreasePlaybackMultiplier 0x8c29760)
	void IncreasePlaybackMultiplier(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.GetMaxMapZoomLevel (Underlying native function: GetMaxMapZoomLevel 0x8c282c8)
	float GetMaxMapZoomLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortReplayContext.GetEventTooltip (Underlying native function: GetEventTooltip 0x8c2818c)
	struct FString GetEventTooltip(int& EventIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.GetCameraNameFromType (Underlying native function: GetCameraNameFromType 0x263c75c)
	struct FText GetCameraNameFromType(enum ESpectatorCameraType& CamType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortReplayContext.DecreasePlaybackMultiplier (Underlying native function: DecreasePlaybackMultiplier 0x8c27efc)
	void DecreasePlaybackMultiplier(); // (Final | Native | Public | BlueprintCallable)
};

