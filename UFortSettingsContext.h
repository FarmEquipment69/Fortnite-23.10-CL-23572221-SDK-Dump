// Class /Script/FortniteUI.FortSettingsContext
// Size: 0x108
class UFortSettingsContext : public UBlueprintContextBase
{
	unsigned char unreflected_30[0xc]; // 0x30 (0xc) 
	float MinGammaValue; // 0x3c (0x4)
	float MaxGammaValue; // 0x40 (0x4)
	unsigned char padding_44[0xc4]; // 0x44 (0xc4)

	/* Functions */

	// Function /Script/FortniteUI.FortSettingsContext.YawInversionReset (Underlying native function: YawInversionReset 0xa5026c8)
	void YawInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.YawInversionChanged (Underlying native function: YawInversionChanged 0xa502648)
	void YawInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.YawForMotionInversionReset (Underlying native function: YawForMotionInversionReset 0xa5025c8)
	void YawForMotionInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.YawForMotionInversionChanged (Underlying native function: YawForMotionInversionChanged 0xa5025c8)
	void YawForMotionInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.UpdateGammaSettings (Underlying native function: UpdateGammaSettings 0xa502414)
	void UpdateGammaSettings(float& GammaValue); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortSettingsContext.TouchVerticalSensitivityValueChanged (Underlying native function: TouchVerticalSensitivityValueChanged 0xa5022a4)
	void TouchVerticalSensitivityValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchTargetingMultiplierValueChanged (Underlying native function: TouchTargetingMultiplierValueChanged 0xa502220)
	void TouchTargetingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchLookSensitivityChanged (Underlying native function: TouchLookSensitivityChanged 0xa50219c)
	void TouchLookSensitivityChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchLookAccelerationMultiplierValueChanged (Underlying native function: TouchLookAccelerationMultiplierValueChanged 0xa502118)
	void TouchLookAccelerationMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchEditModeMultiplierValueChanged (Underlying native function: TouchEditModeMultiplierValueChanged 0xa502094)
	void TouchEditModeMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchDragScopedSensitivityValueChanged (Underlying native function: TouchDragScopedSensitivityValueChanged 0xa502010)
	void TouchDragScopedSensitivityValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchBuildingMultiplierValueChanged (Underlying native function: TouchBuildingMultiplierValueChanged 0xa501f8c)
	void TouchBuildingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TargetingToggleChanged (Underlying native function: TargetingToggleChanged 0xa501f0c)
	void TargetingToggleChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TargetingMultiplierValueChanged (Underlying native function: TargetingMultiplierValueChanged 0xa501e88)
	void TargetingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TapInteractChanged (Underlying native function: TapInteractChanged 0xa501e08)
	void TapInteractChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SprintToggleChanged (Underlying native function: SprintToggleChanged 0xa501cc4)
	void SprintToggleChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SprintCancelsReloadChanged (Underlying native function: SprintCancelsReloadChanged 0x6df775c)
	void SprintCancelsReloadChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SoundFXVolumeChanged (Underlying native function: SoundFXVolumeChanged 0xa501c40)
	void SoundFXVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SliderSettingReset (Underlying native function: SliderSettingReset 0xa501ae4)
	void SliderSettingReset(enum ESettingType& InSettingType, struct FText& NameText, float& PreviousValue, float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SliderSettingChanged (Underlying native function: SliderSettingChanged 0xa501988)
	void SliderSettingChanged(enum ESettingType& InSettingType, struct FText& NameText, float& PreviousValue, float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ShowViewerCountChanged (Underlying native function: ShowViewerCountChanged 0xa5018e0)
	void ShowViewerCountChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ShowTemperatureChanged (Underlying native function: ShowTemperatureChanged 0xa501870)
	void ShowTemperatureChanged(bool& IsChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ShowSeasonLevelChanged (Underlying native function: ShowSeasonLevelChanged 0xa5017d0)
	void ShowSeasonLevelChanged(bool& bInChanged); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetVoiceChatSettings (Underlying native function: SetVoiceChatSettings 0xa501690)
	void SetVoiceChatSettings(enum ESocialCommsPermission& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetVoiceChatPTTEnabled (Underlying native function: SetVoiceChatPTTEnabled 0xa501610)
	void SetVoiceChatPTTEnabled(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetVoiceChatEnabled (Underlying native function: SetVoiceChatEnabled 0xa501590)
	void SetVoiceChatEnabled(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetVoiceChat3DEnabled (Underlying native function: SetVoiceChat3DEnabled 0xa501510)
	void SetVoiceChat3DEnabled(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetVisualizeAudioSources (Underlying native function: SetVisualizeAudioSources 0xa501490)
	void SetVisualizeAudioSources(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetSubtitlesEnabled (Underlying native function: SetSubtitlesEnabled 0xa50125c)
	void SetSubtitlesEnabled(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetShowVoiceIndicators (Underlying native function: SetShowVoiceIndicators 0xa50115c)
	void SetShowVoiceIndicators(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetQuality (Underlying native function: SetQuality 0xa5010f0)
	void SetQuality(int& NewQuality); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetLockPrimaryInputMethodToMouse (Underlying native function: SetLockPrimaryInputMethodToMouse 0xa501070)
	void SetLockPrimaryInputMethodToMouse(bool& bLock); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetIgnoreGamepadInput (Underlying native function: SetIgnoreGamepadInput 0xa500f70)
	void SetIgnoreGamepadInput(bool& bIgnore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetEnableRudderControl (Underlying native function: SetEnableRudderControl 0xa500e60)
	void SetEnableRudderControl(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetColorBlindStrength (Underlying native function: SetColorBlindStrength 0xa500de0)
	void SetColorBlindStrength(int& InColorBlindStrength); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetColorBlindMode (Underlying native function: SetColorBlindMode 0xa500d60)
	void SetColorBlindMode(int& InMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetAutoJoinGameVoiceChannel (Underlying native function: SetAutoJoinGameVoiceChannel 0xa500ce0)
	void SetAutoJoinGameVoiceChannel(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetAllowSidekickFeature1 (Underlying native function: SetAllowSidekickFeature1 0xa500c40)
	void SetAllowSidekickFeature1(bool& bInChecked); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortSettingsContext.SetAllowGameVolumeWhenMinimized (Underlying native function: SetAllowGameVolumeWhenMinimized 0xa500ba4)
	void SetAllowGameVolumeWhenMinimized(enum EFortAllowBackgroundAudioSetting& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ScopedMultiplierValueChanged (Underlying native function: ScopedMultiplierValueChanged 0xa500a84)
	void ScopedMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SafeZoneChanged (Underlying native function: SafeZoneChanged 0xa500a10)
	void SafeZoneChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.RudderMaxThrottleChanged (Underlying native function: RudderMaxThrottleChanged 0xa50098c)
	void RudderMaxThrottleChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.RudderDeadZoneChanged (Underlying native function: RudderDeadZoneChanged 0xa500908)
	void RudderDeadZoneChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.RotatorSettingReset (Underlying native function: RotatorSettingReset 0xa5007b0)
	void RotatorSettingReset(enum ESettingType& InSettingType, struct FText& NameText, int& PreviousValue, int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.RotatorSettingChanged (Underlying native function: RotatorSettingChanged 0xa500658)
	void RotatorSettingChanged(enum ESettingType& InSettingType, struct FText& NameText, int& PreviousValue, int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ResetGamepadMoveStickDeadZone (Underlying native function: ResetGamepadMoveStickDeadZone 0xa5005a4)
	void ResetGamepadMoveStickDeadZone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ResetGamepadLookStickDeadZone (Underlying native function: ResetGamepadLookStickDeadZone 0xa50055c)
	void ResetGamepadLookStickDeadZone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PowerSaverModeChanged (Underlying native function: PowerSaverModeChanged 0xa4ffe0c)
	void PowerSaverModeChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchInversionReset (Underlying native function: PitchInversionReset 0xa4ffc38)
	void PitchInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchInversionChanged (Underlying native function: PitchInversionChanged 0xa4ffbb8)
	void PitchInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForMotionInversionReset (Underlying native function: PitchForMotionInversionReset 0xa4ffb38)
	void PitchForMotionInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForMotionInversionChanged (Underlying native function: PitchForMotionInversionChanged 0xa4ffb38)
	void PitchForMotionInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForAircraftSecondaryInversionReset (Underlying native function: PitchForAircraftSecondaryInversionReset 0xa4ffab8)
	void PitchForAircraftSecondaryInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForAircraftSecondaryInversionChanged (Underlying native function: PitchForAircraftSecondaryInversionChanged 0xa4ffab8)
	void PitchForAircraftSecondaryInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForAircraftPrimaryInversionReset (Underlying native function: PitchForAircraftPrimaryInversionReset 0xa4ffa38)
	void PitchForAircraftPrimaryInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForAircraftPrimaryInversionChanged (Underlying native function: PitchForAircraftPrimaryInversionChanged 0xa4ffa38)
	void PitchForAircraftPrimaryInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PeripheralLightingChanged (Underlying native function: PeripheralLightingChanged 0xa4ff9b8)
	void PeripheralLightingChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OpenSettingsIfSaved (Underlying native function: OpenSettingsIfSaved 0xa4ff9a4)
	void OpenSettingsIfSaved(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnTurboBuildReset (Underlying native function: OnTurboBuildReset 0xa4ff924)
	void OnTurboBuildReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnTurboBuildChanged (Underlying native function: OnTurboBuildChanged 0xa4ff8a4)
	void OnTurboBuildChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnTouchEditChanged (Underlying native function: OnTouchEditChanged 0xa4ff824)
	void OnTouchEditChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnSmartBuildChanged (Underlying native function: OnSmartBuildChanged 0xa4ff784)
	void OnSmartBuildChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnSlideButtonHoldTimeChanged (Underlying native function: OnSlideButtonHoldTimeChanged 0xa4ff700)
	void OnSlideButtonHoldTimeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnShowGlobalChatEnabledChanged (Underlying native function: OnShowGlobalChatEnabledChanged 0xa4ff680)
	void OnShowGlobalChatEnabledChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnShadowPlayHighlightsChanged (Underlying native function: OnShadowPlayHighlightsChanged 0xa4ff600)
	void OnShadowPlayHighlightsChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnReplayRecordingPreferenceChanged (Underlying native function: OnReplayRecordingPreferenceChanged 0xa4ff580)
	void OnReplayRecordingPreferenceChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnQuickEditChanged (Underlying native function: OnQuickEditChanged 0xa4ff500)
	void OnQuickEditChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnPlayerSurveysAllowedChanged (Underlying native function: OnPlayerSurveysAllowedChanged 0xa4ff480)
	void OnPlayerSurveysAllowedChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnPlaceDangerMarkerWhenTargetingChanged (Underlying native function: OnPlaceDangerMarkerWhenTargetingChanged 0xa4ff400)
	void OnPlaceDangerMarkerWhenTargetingChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnLocalNotificationsChanged (Underlying native function: OnLocalNotificationsChanged 0xa4ff300)
	void OnLocalNotificationsChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnLargeTeamsReplayRecordingPreferenceChanged (Underlying native function: OnLargeTeamsReplayRecordingPreferenceChanged 0xa4ff280)
	void OnLargeTeamsReplayRecordingPreferenceChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnHUDScaleChanged (Underlying native function: OnHUDScaleChanged 0xa4ff1fc)
	void OnHUDScaleChanged(float& bInHUDScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnGamepadAutoRunChanged (Underlying native function: OnGamepadAutoRunChanged 0xa4ff17c)
	void OnGamepadAutoRunChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnForceFeedbackChanged (Underlying native function: OnForceFeedbackChanged 0xa4ff0fc)
	void OnForceFeedbackChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChangedAthena (Underlying native function: OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChangedAthena 0xa4ff07c)
	void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChangedAthena(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged (Underlying native function: OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged 0xa4feffc)
	void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnEnableTryBuildOnFocusChanged (Underlying native function: OnEnableTryBuildOnFocusChanged 0xa4fef7c)
	void OnEnableTryBuildOnFocusChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnEnablePreferredItemSlotsChanged (Underlying native function: OnEnablePreferredItemSlotsChanged 0xa4feedc)
	void OnEnablePreferredItemSlotsChanged(bool& bInChanged); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnEditModeAimAssistChanged (Underlying native function: OnEditModeAimAssistChanged 0xa4fee5c)
	void OnEditModeAimAssistChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnEditConfirmOnReleaseChanged (Underlying native function: OnEditConfirmOnReleaseChanged 0xa4feddc)
	void OnEditConfirmOnReleaseChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnEditButtonHoldTimeChanged (Underlying native function: OnEditButtonHoldTimeChanged 0xa4fed58)
	void OnEditButtonHoldTimeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnDisablePreEditsWhenPlacingBuildingChanged (Underlying native function: OnDisablePreEditsWhenPlacingBuildingChanged 0xa4fecd8)
	void OnDisablePreEditsWhenPlacingBuildingChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnCrossplayPreferenceChanged (Underlying native function: OnCrossplayPreferenceChanged 0xa4fec58)
	void OnCrossplayPreferenceChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnCreativeTurboDeleteReset (Underlying native function: OnCreativeTurboDeleteReset 0xa4febd8)
	void OnCreativeTurboDeleteReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnCreativeTurboDeleteChanged (Underlying native function: OnCreativeTurboDeleteChanged 0xa4febd8)
	void OnCreativeTurboDeleteChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnCreativeModeReplayRecordingPreferenceChanged (Underlying native function: OnCreativeModeReplayRecordingPreferenceChanged 0xa4feb58)
	void OnCreativeModeReplayRecordingPreferenceChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnContextTutorialChanged (Underlying native function: OnContextTutorialChanged 0xa4fead8)
	void OnContextTutorialChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnClipRemindersEnabledChanged (Underlying native function: OnClipRemindersEnabledChanged 0xa4fe9f4)
	void OnClipRemindersEnabledChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnBuildingPossessionChanged (Underlying native function: OnBuildingPossessionChanged 0xa4fe974)
	void OnBuildingPossessionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoSortConsumablesToRightChanged (Underlying native function: OnAutoSortConsumablesToRightChanged 0xa4fe830)
	void OnAutoSortConsumablesToRightChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoPickupWeaponsConsolePCChanged (Underlying native function: OnAutoPickupWeaponsConsolePCChanged 0xa4fe7b0)
	void OnAutoPickupWeaponsConsolePCChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoPickupWeaponsChanged (Underlying native function: OnAutoPickupWeaponsChanged 0xa4fe730)
	void OnAutoPickupWeaponsChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoOpenDoorsChanged (Underlying native function: OnAutoOpenDoorsChanged 0xa4fe6b0)
	void OnAutoOpenDoorsChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoClamberChanged (Underlying native function: OnAutoClamberChanged 0xa4fe610)
	void OnAutoClamberChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoChangeMaterialReset (Underlying native function: OnAutoChangeMaterialReset 0xa4fe590)
	void OnAutoChangeMaterialReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoChangeMaterialChanged (Underlying native function: OnAutoChangeMaterialChanged 0xa4fe510)
	void OnAutoChangeMaterialChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAimAssistReset (Underlying native function: OnAimAssistReset 0xa4fe490)
	void OnAimAssistReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAimAssistChanged (Underlying native function: OnAimAssistChanged 0xa4fe410)
	void OnAimAssistChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MusicVolumeChanged (Underlying native function: MusicVolumeChanged 0xa4fe38c)
	void MusicVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MouseSensitivityYChanged (Underlying native function: MouseSensitivityYChanged 0xa4fe308)
	void MouseSensitivityYChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MouseSensitivityXChanged (Underlying native function: MouseSensitivityXChanged 0xa4fe284)
	void MouseSensitivityXChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MouseSensitivityMultiplierForAircraftChanged (Underlying native function: MouseSensitivityMultiplierForAircraftChanged 0xa4fe200)
	void MouseSensitivityMultiplierForAircraftChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MotionTargetingMultiplierValueChanged (Underlying native function: MotionTargetingMultiplierValueChanged 0xa4fe17c)
	void MotionTargetingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MotionScopedMultiplierValueChanged (Underlying native function: MotionScopedMultiplierValueChanged 0xa4fe0f8)
	void MotionScopedMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MotionHarvestingToolMultiplierValueChanged (Underlying native function: MotionHarvestingToolMultiplierValueChanged 0xa4fe074)
	void MotionHarvestingToolMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MotionControlEnabledValueChanged (Underlying native function: MotionControlEnabledValueChanged 0xa4fdff4)
	void MotionControlEnabledValueChanged(bool& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MotionAxisValueChanged (Underlying native function: MotionAxisValueChanged 0xa4fdf74)
	void MotionAxisValueChanged(int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MasterVolumeChanged (Underlying native function: MasterVolumeChanged 0xa4fdef0)
	void MasterVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.InWorldInteractChanged (Underlying native function: InWorldInteractChanged 0xa4fd900)
	void InWorldInteractChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.HoldToSwapPickupChanged (Underlying native function: HoldToSwapPickupChanged 0xa4fd880)
	void HoldToSwapPickupChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.HideOtherPlayerNamesChanged (Underlying native function: HideOtherPlayerNamesChanged 0xa4fd704)
	void HideOtherPlayerNamesChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.HiddenMatchmakingDelayMaxReset (Underlying native function: HiddenMatchmakingDelayMaxReset 0xa4fd6f0)
	void HiddenMatchmakingDelayMaxReset(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.HiddenMatchmakingDelayMaxChanged (Underlying native function: HiddenMatchmakingDelayMaxChanged 0xa4fd670)
	void HiddenMatchmakingDelayMaxChanged(int& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GyroSensitivityValueChanged (Underlying native function: GyroSensitivityValueChanged 0xa4fcd80)
	void GyroSensitivityValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetYawInversionState (Underlying native function: GetYawInversionState 0xa4fcd5c)
	bool GetYawInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetYawForMotionInversionState (Underlying native function: GetYawForMotionInversionState 0xa4fcd38)
	bool GetYawForMotionInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetVoiceChatSettings (Underlying native function: GetVoiceChatSettings 0xa4fccfc)
	enum ESocialCommsPermission GetVoiceChatSettings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetVoiceChatPTTEnabled (Underlying native function: GetVoiceChatPTTEnabled 0xa4fccc0)
	bool GetVoiceChatPTTEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetVoiceChatEnabled (Underlying native function: GetVoiceChatEnabled 0xa4fcc80)
	bool GetVoiceChatEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetVoiceChat3DEnabled (Underlying native function: GetVoiceChat3DEnabled 0xa4fcc44)
	bool GetVoiceChat3DEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetVisualizeAudioSources (Underlying native function: GetVisualizeAudioSources 0xa4fcc08)
	bool GetVisualizeAudioSources(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTurboBuild (Underlying native function: GetTurboBuild 0xa4fc768)
	bool GetTurboBuild(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchVerticalSensitivityValue (Underlying native function: GetTouchVerticalSensitivityValue 0xa4fc740)
	float GetTouchVerticalSensitivityValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchTargetingMultiplierValue (Underlying native function: GetTouchTargetingMultiplierValue 0xa4fc718)
	float GetTouchTargetingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchLookSensitivityValue (Underlying native function: GetTouchLookSensitivityValue 0xa4fc6f0)
	float GetTouchLookSensitivityValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchLookAccelerationMultiplier (Underlying native function: GetTouchLookAccelerationMultiplier 0xa4fc6c8)
	float GetTouchLookAccelerationMultiplier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchEditState (Underlying native function: GetTouchEditState 0xa4fc68c)
	bool GetTouchEditState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchEditModeMultiplierValue (Underlying native function: GetTouchEditModeMultiplierValue 0xa4fc664)
	float GetTouchEditModeMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchDragScopedSensitivityValue (Underlying native function: GetTouchDragScopedSensitivityValue 0xa4fc63c)
	float GetTouchDragScopedSensitivityValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchBuildingMultiplierValue (Underlying native function: GetTouchBuildingMultiplierValue 0xa4fc614)
	float GetTouchBuildingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTargetTypeIndicatorVisible (Underlying native function: GetTargetTypeIndicatorVisible 0xa4fb5d4)
	bool GetTargetTypeIndicatorVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTargetingToggleState (Underlying native function: GetTargetingToggleState 0xa4fb638)
	bool GetTargetingToggleState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTargetingMultiplierValue (Underlying native function: GetTargetingMultiplierValue 0xa4fb610)
	float GetTargetingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTapInteractState (Underlying native function: GetTapInteractState 0xa4fb5b0)
	bool GetTapInteractState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSubtitlesEnabled (Underlying native function: GetSubtitlesEnabled 0xa4fb574)
	bool GetSubtitlesEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSprintToggleState (Underlying native function: GetSprintToggleState 0xa4fb550)
	bool GetSprintToggleState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSprintCancelsReloadState (Underlying native function: GetSprintCancelsReloadState 0x24f75e4)
	bool GetSprintCancelsReloadState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSoundFXVolumeValue (Underlying native function: GetSoundFXVolumeValue 0xa4fb528)
	float GetSoundFXVolumeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSmartBuildState (Underlying native function: GetSmartBuildState 0xa4fb22c)
	bool GetSmartBuildState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSliderSettingValue (Underlying native function: GetSliderSettingValue 0xa4fb19c)
	float GetSliderSettingValue(enum ESettingType& InSettingType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetSlideButtonHoldTimeValue (Underlying native function: GetSlideButtonHoldTimeValue 0xa4fb174)
	float GetSlideButtonHoldTimeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetShowVoiceIndicators (Underlying native function: GetShowVoiceIndicators 0xa4fb120)
	bool GetShowVoiceIndicators(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetShowViewerCountEnabled (Underlying native function: GetShowViewerCountEnabled 0xa4fb0fc)
	bool GetShowViewerCountEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetShowTemperature (Underlying native function: GetShowTemperature 0xa4fb0bc)
	bool GetShowTemperature(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetShowSeasonLevel (Underlying native function: GetShowSeasonLevel 0xa4fb07c)
	bool GetShowSeasonLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetShowGlobalChatEnabled (Underlying native function: GetShowGlobalChatEnabled 0xa4fb040)
	bool GetShowGlobalChatEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetShadowPlayHighlightsEnabled (Underlying native function: GetShadowPlayHighlightsEnabled 0xa4fb000)
	bool GetShadowPlayHighlightsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSettingDisplayNames (Underlying native function: GetSettingDisplayNames 0xa4faf3c)
	struct TArray<struct FText> GetSettingDisplayNames(enum ESettingType& InSettingType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetScopedMultiplierValue (Underlying native function: GetScopedMultiplierValue 0xa4faf14)
	float GetScopedMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSafeZoneValue (Underlying native function: GetSafeZoneValue 0xa4faee4)
	float GetSafeZoneValue(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetRudderMaxThrottle (Underlying native function: GetRudderMaxThrottle 0xa4faebc)
	float GetRudderMaxThrottle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetRudderDeadZone (Underlying native function: GetRudderDeadZone 0xa4fae94)
	float GetRudderDeadZone(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetRotatorSettingValue (Underlying native function: GetRotatorSettingValue 0xa4fae08)
	int GetRotatorSettingValue(enum ESettingType& InSettingType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetReplayRecordingEnabled (Underlying native function: GetReplayRecordingEnabled 0xa4fade4)
	bool GetReplayRecordingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetQuickEditState (Underlying native function: GetQuickEditState 0xa4fada8)
	bool GetQuickEditState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetQuality (Underlying native function: GetQuality 0xa4fad78)
	int GetQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPreferredItemSlotType (Underlying native function: GetPreferredItemSlotType 0xa4facec)
	enum EFortPreferredItemSlotItemType GetPreferredItemSlotType(int& SlotIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPowerSaverMode (Underlying native function: GetPowerSaverMode 0xa4facb0)
	bool GetPowerSaverMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPlayerSurveysAllowed (Underlying native function: GetPlayerSurveysAllowed 0xa4fac74)
	bool GetPlayerSurveysAllowed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPlaceDangerMarkerWhenTargeting (Underlying native function: GetPlaceDangerMarkerWhenTargeting 0xa4fac38)
	bool GetPlaceDangerMarkerWhenTargeting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPitchInversionState (Underlying native function: GetPitchInversionState 0xa4fac14)
	bool GetPitchInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPitchForMotionInversionState (Underlying native function: GetPitchForMotionInversionState 0xa4fabf0)
	bool GetPitchForMotionInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPitchForAircraftSecondaryInversionState (Underlying native function: GetPitchForAircraftSecondaryInversionState 0xa4fabcc)
	bool GetPitchForAircraftSecondaryInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPitchForAircraftPrimaryInversionState (Underlying native function: GetPitchForAircraftPrimaryInversionState 0xa4faba8)
	bool GetPitchForAircraftPrimaryInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPeripheralLightingEnabled (Underlying native function: GetPeripheralLightingEnabled 0xa4fab84)
	bool GetPeripheralLightingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMusicVolumeValue (Underlying native function: GetMusicVolumeValue 0x2c10ad4)
	float GetMusicVolumeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMouseSensitivityValue (Underlying native function: GetMouseSensitivityValue 0xa4fa598)
	struct FVector2D GetMouseSensitivityValue(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMouseSensitivityMultiplierForAircraft (Underlying native function: GetMouseSensitivityMultiplierForAircraft 0xa4fa570)
	float GetMouseSensitivityMultiplierForAircraft(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionTargetingMultiplierValue (Underlying native function: GetMotionTargetingMultiplierValue 0xa4fa548)
	float GetMotionTargetingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionScopedMultiplierValue (Underlying native function: GetMotionScopedMultiplierValue 0xa4fa520)
	float GetMotionScopedMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionHarvestingToolMultiplierValue (Underlying native function: GetMotionHarvestingToolMultiplierValue 0xa4fa4f8)
	float GetMotionHarvestingToolMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionControlsEnabledValue (Underlying native function: GetMotionControlsEnabledValue 0xa4fa4b8)
	bool GetMotionControlsEnabledValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionAxisValue (Underlying native function: GetMotionAxisValue 0xa4fa494)
	int GetMotionAxisValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionAxisNames (Underlying native function: GetMotionAxisNames 0xa4fa458)
	struct TArray<struct FText> GetMotionAxisNames(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetMasterVolumeValue (Underlying native function: GetMasterVolumeValue 0xa4fa104)
	float GetMasterVolumeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetLockPrimaryInputMethodToMouse (Underlying native function: GetLockPrimaryInputMethodToMouse 0xa4fa0c8)
	bool GetLockPrimaryInputMethodToMouse(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetLocalNotificationsState (Underlying native function: GetLocalNotificationsState 0xa4fa0a4)
	bool GetLocalNotificationsState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetLargeTeamsReplayRecordingEnabled (Underlying native function: GetLargeTeamsReplayRecordingEnabled 0xa4fa008)
	bool GetLargeTeamsReplayRecordingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetInWorldInteractState (Underlying native function: GetInWorldInteractState 0xa4f9f60)
	bool GetInWorldInteractState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetIgnoreGamepadInput (Underlying native function: GetIgnoreGamepadInput 0xa4f9f24)
	bool GetIgnoreGamepadInput(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHUDScaleRaw (Underlying native function: GetHUDScaleRaw 0xa4f9d60)
	float GetHUDScaleRaw(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHUDScale (Underlying native function: GetHUDScale 0xa4f9d24)
	float GetHUDScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHoldToSwapPickupState (Underlying native function: GetHoldToSwapPickupState 0xa4f9f00)
	bool GetHoldToSwapPickupState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHitNumbersMode (Underlying native function: GetHitNumbersMode 0xa4f9ec4)
	enum EHitNumbersMode GetHitNumbersMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHitFeedbackMode (Underlying native function: GetHitFeedbackMode 0xa4f9e88)
	enum EHitFeedbackMode GetHitFeedbackMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHideOtherPlayerNames (Underlying native function: GetHideOtherPlayerNames 0xa4f9e64)
	bool GetHideOtherPlayerNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHiddenMatchmakingDelayMax (Underlying native function: GetHiddenMatchmakingDelayMax 0xa4f9d88)
	int GetHiddenMatchmakingDelayMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGyroSensitivityValue (Underlying native function: GetGyroSensitivityValue 0xa4f9c50)
	float GetGyroSensitivityValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGammaSettings (Underlying native function: GetGammaSettings 0xa4f9c28)
	float GetGammaSettings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadTargetingMultiplierValue (Underlying native function: GetGamepadTargetingMultiplierValue 0xa4f9c00)
	float GetGamepadTargetingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadScopedMultiplierValue (Underlying native function: GetGamepadScopedMultiplierValue 0xa4f9bd8)
	float GetGamepadScopedMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadMoveStickDeadZone (Underlying native function: GetGamepadMoveStickDeadZone 0xa4f9bb0)
	float GetGamepadMoveStickDeadZone(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadLookStickDeadZone (Underlying native function: GetGamepadLookStickDeadZone 0xa4f9b88)
	float GetGamepadLookStickDeadZone(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadLookSensitivityValue (Underlying native function: GetGamepadLookSensitivityValue 0xa4f9b58)
	struct FVector2D GetGamepadLookSensitivityValue(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadEditModeMultiplierValue (Underlying native function: GetGamepadEditModeMultiplierValue 0xa4f9b30)
	float GetGamepadEditModeMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadBuildingMultiplierValue (Underlying native function: GetGamepadBuildingMultiplierValue 0xa4f9b08)
	float GetGamepadBuildingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadAutoRunState (Underlying native function: GetGamepadAutoRunState 0xa4f9ae4)
	bool GetGamepadAutoRunState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetForceFeedbackState (Underlying native function: GetForceFeedbackState 0xa4f9a40)
	bool GetForceFeedbackState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetFocusOnFirstBuildingPieceWhenQuickbarSwappedStateAthena (Underlying native function: GetFocusOnFirstBuildingPieceWhenQuickbarSwappedStateAthena 0xa4f9a1c)
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedStateAthena(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState (Underlying native function: GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState 0xa4f99f8)
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetFirstPersonCameraState (Underlying native function: GetFirstPersonCameraState 0xa4f99d4)
	bool GetFirstPersonCameraState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEnableTryBuildOnFocus (Underlying native function: GetEnableTryBuildOnFocus 0xa4f9998)
	bool GetEnableTryBuildOnFocus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEnableRudderControl (Underlying native function: GetEnableRudderControl 0xa4f995c)
	bool GetEnableRudderControl(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEnablePreferredItemSlots (Underlying native function: GetEnablePreferredItemSlots 0xa4f991c)
	bool GetEnablePreferredItemSlots(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEditModeAimAssistState (Underlying native function: GetEditModeAimAssistState 0xa4f98e0)
	bool GetEditModeAimAssistState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEditConfirmOnReleaseState (Underlying native function: GetEditConfirmOnReleaseState 0xa4f98a4)
	bool GetEditConfirmOnReleaseState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEditButtonHoldTimeValue (Underlying native function: GetEditButtonHoldTimeValue 0xa4f987c)
	float GetEditButtonHoldTimeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetDisablePreEditsWhenPlacingBuildingState (Underlying native function: GetDisablePreEditsWhenPlacingBuildingState 0xa4f96e0)
	bool GetDisablePreEditsWhenPlacingBuildingState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetDialogVolumeValue (Underlying native function: GetDialogVolumeValue 0xa4f96b8)
	float GetDialogVolumeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetCrossplayPreference (Underlying native function: GetCrossplayPreference 0xa4f94f8)
	bool GetCrossplayPreference(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetCreativeTurboDelete (Underlying native function: GetCreativeTurboDelete 0xa4f94d4)
	bool GetCreativeTurboDelete(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetCreativeModeReplayRecordingEnabled (Underlying native function: GetCreativeModeReplayRecordingEnabled 0xa4f94b0)
	bool GetCreativeModeReplayRecordingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetContextTutorialState (Underlying native function: GetContextTutorialState 0xa4f948c)
	bool GetContextTutorialState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetColorBlindStrength (Underlying native function: GetColorBlindStrength 0xa4f911c)
	int GetColorBlindStrength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetColorBlindModeNames (Underlying native function: GetColorBlindModeNames 0xa4f90e0)
	struct TArray<struct FText> GetColorBlindModeNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetColorBlindMode (Underlying native function: GetColorBlindMode 0xa4f90a4)
	int GetColorBlindMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetClipRemindersEnabled (Underlying native function: GetClipRemindersEnabled 0xa4f9068)
	bool GetClipRemindersEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetCinematicsVolume (Underlying native function: GetCinematicsVolume 0xa4f9040)
	float GetCinematicsVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetChatVolumeValue (Underlying native function: GetChatVolumeValue 0xa4f8f4c)
	float GetChatVolumeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetBuildingPossessionShown (Underlying native function: GetBuildingPossessionShown 0xa4f8e44)
	bool GetBuildingPossessionShown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoSortConsumablesToRight (Underlying native function: GetAutoSortConsumablesToRight 0xa4f8e08)
	bool GetAutoSortConsumablesToRight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoPickupWeaponsConsolePC (Underlying native function: GetAutoPickupWeaponsConsolePC 0xa4f8dcc)
	bool GetAutoPickupWeaponsConsolePC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoPickupWeapons (Underlying native function: GetAutoPickupWeapons 0xa4f8d90)
	bool GetAutoPickupWeapons(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoOpenDoors (Underlying native function: GetAutoOpenDoors 0xa4f8d50)
	bool GetAutoOpenDoors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoJoinGameVoiceChannel (Underlying native function: GetAutoJoinGameVoiceChannel 0xa4f8d14)
	bool GetAutoJoinGameVoiceChannel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoEquipState (Underlying native function: GetAutoEquipState 0xa4f8cf0)
	bool GetAutoEquipState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoClamberEnabled (Underlying native function: GetAutoClamberEnabled 0xa4f8cb4)
	bool GetAutoClamberEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoChangeMaterial (Underlying native function: GetAutoChangeMaterial 0xa4f8c90)
	bool GetAutoChangeMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAnonymousModeEnabled (Underlying native function: GetAnonymousModeEnabled 0xa4f8c6c)
	bool GetAnonymousModeEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAnonymousCharacterModeEnabled (Underlying native function: GetAnonymousCharacterModeEnabled 0xa4f8c48)
	bool GetAnonymousCharacterModeEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAllowSidekickFeature1 (Underlying native function: GetAllowSidekickFeature1 0xa4f8c0c)
	bool GetAllowSidekickFeature1(); // (Final | Native | Public | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAllowGameVolumeWhenMinimized (Underlying native function: GetAllowGameVolumeWhenMinimized 0xa4f8bd0)
	enum EFortAllowBackgroundAudioSetting GetAllowGameVolumeWhenMinimized(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAimAssistState (Underlying native function: GetAimAssistState 0xa4f8b90)
	bool GetAimAssistState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadTargetingMultiplierValueChanged (Underlying native function: GamepadTargetingMultiplierValueChanged 0xa4f8b0c)
	void GamepadTargetingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadScopedMultiplierValueChanged (Underlying native function: GamepadScopedMultiplierValueChanged 0xa4f8a88)
	void GamepadScopedMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadMoveStickDeadZoneChanged (Underlying native function: GamepadMoveStickDeadZoneChanged 0xa4f8a04)
	void GamepadMoveStickDeadZoneChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadLookStickDeadZoneChanged (Underlying native function: GamepadLookStickDeadZoneChanged 0xa4f8980)
	void GamepadLookStickDeadZoneChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadLookSensitivityYChanged (Underlying native function: GamepadLookSensitivityYChanged 0xa4f88fc)
	void GamepadLookSensitivityYChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadLookSensitivityXChanged (Underlying native function: GamepadLookSensitivityXChanged 0xa4f8878)
	void GamepadLookSensitivityXChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadEditModeMultiplierValueChanged (Underlying native function: GamepadEditModeMultiplierValueChanged 0xa4f87f4)
	void GamepadEditModeMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadBuildingMultiplierValueChanged (Underlying native function: GamepadBuildingMultiplierValueChanged 0xa4f8770)
	void GamepadBuildingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.FirstPersonCameraChanged (Underlying native function: FirstPersonCameraChanged 0xa4f86f0)
	void FirstPersonCameraChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.DialogVolumeChanged (Underlying native function: DialogVolumeChanged 0xa4f7f5c)
	void DialogVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.CinematicsVolumeChanged (Underlying native function: CinematicsVolumeChanged 0xa4f7e7c)
	void CinematicsVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ChatVolumeChanged (Underlying native function: ChatVolumeChanged 0xa4f7dc0)
	void ChatVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.AutoEquipChanged (Underlying native function: AutoEquipChanged 0xa4f79cc)
	void AutoEquipChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.AnonymousModeChanged (Underlying native function: AnonymousModeChanged 0xa4f78e8)
	void AnonymousModeChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.AnonymousCharacterModeChanged (Underlying native function: AnonymousCharacterModeChanged 0xa4f7868)
	void AnonymousCharacterModeChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)
};

