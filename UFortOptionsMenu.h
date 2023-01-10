// Class /Script/FortniteUI.FortOptionsMenu
// Size: 0xf90
class UFortOptionsMenu : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x20]; // 0x4e0 (0x20) 
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x500 (0x3)
	unsigned char unreflected_503[0x5]; // 0x503 (0x5) 
	struct FDataTableRowHandle ApplyInputAction; // 0x508 (0x10)
	struct FDataTableRowHandle ApplyAndTestInputAction; // 0x518 (0x10)
	struct FDataTableRowHandle TestInputAction; // 0x528 (0x10)
	struct FDataTableRowHandle ToggleModeInputAction; // 0x538 (0x10)
	struct FDataTableRowHandle ResetToDefaultInputAction; // 0x548 (0x10)
	struct FDataTableRowHandle InputsResetToDefaulInputAction; // 0x558 (0x10)
	struct FDataTableRowHandle BackDataInputAction; // 0x568 (0x10)
	class UClass* VideoTabClass; // 0x578 (0x8)
	struct TWeakObjectPtr<class UClass> TabVideoOptions; // 0x580 (0x28)
	class UClass* GameplayTabClass; // 0x5a8 (0x8)
	class UClass* HUDTabClass; // 0x5b0 (0x8)
	class UClass* TouchOptionsClass; // 0x5b8 (0x8)
	class UClass* KeyboardMouseClass; // 0x5c0 (0x8)
	class UClass* ControllerSensitivityTabClass; // 0x5c8 (0x8)
	struct TWeakObjectPtr<class UClass> ControllerSettingsOptions; // 0x5d0 (0x28)
	class UClass* AudioOptionsClass; // 0x5f8 (0x8)
	class UClass* InputTabClass; // 0x600 (0x8)
	struct TWeakObjectPtr<class UClass> TabInputOptions; // 0x608 (0x28)
	class UClass* GamepadTabClass; // 0x630 (0x8)
	class UClass* GamepadTabClassV2; // 0x638 (0x8)
	struct TWeakObjectPtr<class UClass> TabGamepadOptions; // 0x640 (0x28)
	struct TWeakObjectPtr<class UClass> TabGamepadOptionsV2; // 0x668 (0x28)
	class UClass* AccountTabClass; // 0x690 (0x8)
	struct TWeakObjectPtr<class UClass> TabAccountOptions; // 0x698 (0x28)
	class UClass* BorderBackgroundStyle; // 0x6c0 (0x8)
	class UClass* ProgressModalClass; // 0x6c8 (0x8)
	class UClass* IconTabButtonClass; // 0x6d0 (0x8)
	class UFortProgressModal* SavingModalInstance; // 0x6d8 (0x8)
	struct TArray<struct FName> TabIds; // 0x6e0 (0x10)
	struct TArray<struct FFortTabButtonLabelInfo> TabLabels; // 0x6f0 (0x10)
	struct TArray<class UFortOptionsTab*> TabWidgets; // 0x700 (0x10)
	struct FTimerHandle* ResetVideoOptionsTimer; // 0x710 (0x8)
	unsigned char unreflected_718[0x8]; // 0x718 (0x8) 
	struct FSlateBrush VideoBrush; // 0x720 (0xc0)
	struct FSlateBrush GameplayBrush; // 0x7e0 (0xc0)
	struct FSlateBrush GameUIBrush; // 0x8a0 (0xc0)
	struct FSlateBrush TouchOptionsBrush; // 0x960 (0xc0)
	struct FSlateBrush KeyboardMouseBrush; // 0xa20 (0xc0)
	struct FSlateBrush ControllerSensitivityBrush; // 0xae0 (0xc0)
	struct FSlateBrush AudioBrush; // 0xba0 (0xc0)
	struct FSlateBrush InputBrush; // 0xc60 (0xc0)
	struct FSlateBrush GamepadOptionsBrush; // 0xd20 (0xc0)
	struct FSlateBrush AccountPrivacyBrush; // 0xde0 (0xc0)
	struct FGameplayTagContainer HUDHideOnMenuTags; // 0xea0 (0x20)
	bool bVideoTabSelected; // 0xec0 (0x1)
	bool bApplyVisible; // 0xec1 (0x1)
	bool bIsLanguageConfirmationVisible; // 0xec2 (0x1)
	bool bIsLeavingOptionsMenu; // 0xec3 (0x1)
	unsigned char unreflected_ec4[0x4]; // 0xec4 (0x4) 
	class USizeBox* SizeBoxHeadingLeto; // 0xec8 (0x8)
	class UFortTabListWidgetBase* TabListCategories; // 0xed0 (0x8)
	class UCommonWidgetSwitcherLegacy* SettingTabSwitcher; // 0xed8 (0x8)
	class UCommonTextBlock* TextTitle; // 0xee0 (0x8)
	class UNamedSlot* SavingLayer; // 0xee8 (0x8)
	class UCommonBorder* message; // 0xef0 (0x8)
	class UCommonButtonLegacy* ButtonClose; // 0xef8 (0x8)
	class UCommonButtonLegacy* VideoSettingsAccept; // 0xf00 (0x8)
	class UCommonButtonLegacy* VideoSettingsCancel; // 0xf08 (0x8)
	class UCommonBorder* BorderBackground; // 0xf10 (0x8)
	unsigned char padding_f18[0x78]; // 0xf18 (0x78)

	/* Functions */

	// Function /Script/FortniteUI.FortOptionsMenu.UpdateHeaderTextByTabId (Underlying native function: UpdateHeaderTextByTabId 0xa663938)
	void UpdateHeaderTextByTabId(struct FName& TabId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.UpdateBasedOnActiveWidget (Underlying native function: UpdateBasedOnActiveWidget 0xa664b78)
	void UpdateBasedOnActiveWidget(class UWidget*& ActiveWidget, bool& bShouldCenterOnTab); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.UpdateAllOptionTabs (Underlying native function: UpdateAllOptionTabs 0xa664b64)
	void UpdateAllOptionTabs(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ShowVideoOptions (Underlying native function: ShowVideoOptions 0xa664ac0)
	bool ShowVideoOptions(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ShowUnsavedConfirmation (Underlying native function: ShowUnsavedConfirmation 0xa664aac)
	void ShowUnsavedConfirmation(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ShowTouchAndMotionOptions (Underlying native function: ShowTouchAndMotionOptions 0xa664a88)
	bool ShowTouchAndMotionOptions(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ShowNewControllerSenseOptions (Underlying native function: ShowNewControllerSenseOptions 0xa664a64)
	bool ShowNewControllerSenseOptions(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ShowInputOptions (Underlying native function: ShowInputOptions 0xa664a40)
	bool ShowInputOptions(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ShowControllerOptions (Underlying native function: ShowControllerOptions 0xa664a1c)
	bool ShowControllerOptions(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ShowAccountOptions (Underlying native function: ShowAccountOptions 0xa6649f8)
	bool ShowAccountOptions(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ShouldUseNewControllerSettings (Underlying native function: ShouldUseNewControllerSettings 0xa6649d8)
	bool ShouldUseNewControllerSettings(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortOptionsMenu.SetOverrideResetToDefaultModal (Underlying native function: SetOverrideResetToDefaultModal 0xa664940)
	void SetOverrideResetToDefaultModal(bool& bOverride); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.SetBackground (Underlying native function: SetBackground 0xa6646b4)
	void SetBackground(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.SetApplyOrTest (Underlying native function: SetApplyOrTest 0xa664634)
	void SetApplyOrTest(bool& bShowApply); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ResetGameOptionsToDefault (Underlying native function: ResetGameOptionsToDefault 0xa664538)
	void ResetGameOptionsToDefault(class UFortOptionsTab*& OptionsTab); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ResetClientHUDSettings (Underlying native function: ResetClientHUDSettings 0xa664510)
	void ResetClientHUDSettings(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ResetActionHandlerStates (Underlying native function: ResetActionHandlerStates 0xa664490)
	void ResetActionHandlerStates(bool& bIsBackButtonDisabled); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.RequestTab (Underlying native function: RequestTab 0xa6642f8)
	void RequestTab(struct FName& TabId, struct FString& SettingDevName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.OnVideoCancel (Underlying native function: OnVideoCancel 0xa6642e4)
	void OnVideoCancel(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.OnVideoAccept (Underlying native function: OnVideoAccept 0xa6642b4)
	void OnVideoAccept(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.OnToggleModeInternal (Underlying native function: OnToggleModeInternal 0xa664228)
	void OnToggleModeInternal(bool& PassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortOptionsMenu.OnTest (Underlying native function: OnTest 0xa66419c)
	void OnTest(bool& PassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortOptionsMenu.OnTabSettingChanged (Underlying native function: OnTabSettingChanged 0xa664188)
	void OnTabSettingChanged(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.OnShowResetToDefaultModal (Has no native function)
	void OnShowResetToDefaultModal(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortOptionsMenu.OnSettingsTabListPopulated (Has no native function)
	void OnSettingsTabListPopulated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortOptionsMenu.OnRestoreToInitial (Underlying native function: OnRestoreToInitial 0xa66416c)
	void OnRestoreToInitial(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.OnResetToDefaults (Underlying native function: OnResetToDefaults 0xa6640ec)
	void OnResetToDefaults(int& PresetToSet); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.OnResetToDefaultInternal (Underlying native function: OnResetToDefaultInternal 0xa664070)
	void OnResetToDefaultInternal(bool& PassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortOptionsMenu.OnReset (Underlying native function: OnReset 0xa66405c)
	void OnReset(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.OnInputsResetToDefault (Has no native function)
	void OnInputsResetToDefault(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortOptionsMenu.OnInputResetToDefaultInternal (Underlying native function: OnInputResetToDefaultInternal 0xa663fc4)
	void OnInputResetToDefaultInternal(bool& PassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortOptionsMenu.OnBackInternal (Underlying native function: OnBackInternal 0xa663f38)
	void OnBackInternal(bool& PassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortOptionsMenu.OnBack (Has no native function)
	void OnBack(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortOptionsMenu.OnApplySettingsInternal (Underlying native function: OnApplySettingsInternal 0xa663eb4)
	void OnApplySettingsInternal(bool& PassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortOptionsMenu.OnApplyAndTest (Underlying native function: OnApplyAndTest 0xa663e28)
	void OnApplyAndTest(bool& PassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortOptionsMenu.NotifyTabsOfActivationState (Underlying native function: NotifyTabsOfActivationState 0xa663da8)
	void NotifyTabsOfActivationState(class UFortOptionsTab*& ActivatedTab); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.NeedsVideoChangeConfirmation (Underlying native function: NeedsVideoChangeConfirmation 0xa663d84)
	bool NeedsVideoChangeConfirmation(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.NeedsLanguageChangeConfirmation (Underlying native function: NeedsLanguageChangeConfirmation 0xa663d60)
	bool NeedsLanguageChangeConfirmation(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.MenuInitialize (Underlying native function: MenuInitialize 0xa663d4c)
	void MenuInitialize(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.HandleTabSelected (Underlying native function: HandleTabSelected 0xa663938)
	void HandleTabSelected(struct FName& TabId); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortOptionsMenu.HandleTabGamepadConfigActionHandlerStates (Has no native function)
	void HandleTabGamepadConfigActionHandlerStates(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortOptionsMenu.HandleResetAvailableActionHandlerStates (Underlying native function: HandleResetAvailableActionHandlerStates 0xa663924)
	void HandleResetAvailableActionHandlerStates(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.HandleReset (Underlying native function: HandleReset 0xa663910)
	void HandleReset(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.HandleApply (Underlying native function: HandleApply 0xa662e2c)
	void HandleApply(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.HandleActiveWidgetChanged (Underlying native function: HandleActiveWidgetChanged 0xa662ce8)
	void HandleActiveWidgetChanged(class UWidget*& ActiveWidget, int& ActiveWidgetIndex); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortOptionsMenu.ExitIfTabSaved (Underlying native function: ExitIfTabSaved 0xa6625c4)
	void ExitIfTabSaved(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ClearCachedEula (Underlying native function: ClearCachedEula 0xa662588)
	void ClearCachedEula(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.CenterOnActiveTab (Underlying native function: CenterOnActiveTab 0xa662394)
	void CenterOnActiveTab(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.ApplySettingss (Underlying native function: ApplySettingss 0xa6621dc)
	void ApplySettingss(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenu.AddTabs (Underlying native function: AddTabs 0xa662004)
	void AddTabs(class UClass*& WidgetClass, struct FText& DisplayName, struct FName& NameId, struct FSlateBrush& Icon, enum ESettingTab& TabType); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

