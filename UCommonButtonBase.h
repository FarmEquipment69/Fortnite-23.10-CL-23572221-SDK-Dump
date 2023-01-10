// Class /Script/CommonUI.CommonButtonBase
// Size: 0x13e0
class UCommonButtonBase : public UCommonUserWidget
{
	int MinWidth; // 0x290 (0x4)
	int MinHeight; // 0x294 (0x4)
	class UClass* style; // 0x298 (0x8)
	bool bHideInputAction; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x7]; // 0x2a1 (0x7) 
	struct FSlateSound PressedSlateSoundOverride; // 0x2a8 (0x18)
	struct FSlateSound HoveredSlateSoundOverride; // 0x2c0 (0x18)
	struct FSlateSound SelectedPressedSlateSoundOverride; // 0x2d8 (0x18)
	struct FSlateSound SelectedHoveredSlateSoundOverride; // 0x2f0 (0x18)
	struct FSlateSound LockedPressedSlateSoundOverride; // 0x308 (0x18)
	struct FSlateSound LockedHoveredSlateSoundOverride; // 0x320 (0x18)
	unsigned char bApplyAlphaOnDisable; // 0x338 (0x1)
	unsigned char bLocked; // 0x338 (0x1)
	unsigned char bSelectable; // 0x338 (0x1)
	unsigned char bShouldSelectUponReceivingFocus; // 0x338 (0x1)
	unsigned char bInteractableWhenSelected; // 0x338 (0x1)
	unsigned char bToggleable; // 0x338 (0x1)
	unsigned char bTriggerClickedAfterSelection; // 0x338 (0x1)
	unsigned char bDisplayInputActionWhenNotInteractable; // 0x338 (0x1)
	unsigned char bHideInputActionWithKeyboard; // 0x339 (0x1)
	unsigned char bShouldUseFallbackDefaultInputAction; // 0x339 (0x1)
	struct TEnumAsByte<EButtonClickMethod> ClickMethod; // 0x33a (0x1)
	struct TEnumAsByte<EButtonTouchMethod> TouchMethod; // 0x33b (0x1)
	struct TEnumAsByte<EButtonPressMethod> PressMethod; // 0x33c (0x1)
	unsigned char unreflected_33d[0x3]; // 0x33d (0x3) 
	int InputPriority; // 0x340 (0x4)
	unsigned char unreflected_344[0x4]; // 0x344 (0x4) 
	struct FDataTableRowHandle TriggeringInputAction; // 0x348 (0x10)
	unsigned char unreflected_358[0x10]; // 0x358 (0x10) 
	struct FMulticastInlineDelegate OnSelectedChangedBase; // 0x368 (0x10)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x378 (0x10)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x388 (0x10)
	struct FMulticastInlineDelegate OnButtonBaseHovered; // 0x398 (0x10)
	struct FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x3a8 (0x10)
	unsigned char unreflected_3b8[0x4]; // 0x3b8 (0x4) 
	bool bIsPersistentBinding; // 0x3bc (0x1)
	enum ECommonInputMode InputModeOverride; // 0x3bd (0x1)
	unsigned char unreflected_3be[0x32]; // 0x3be (0x32) 
	class UMaterialInstanceDynamic* SingleMaterialStyleMID; // 0x3f0 (0x8)
	unsigned char unreflected_3f8[0x8]; // 0x3f8 (0x8) 
	struct FButtonStyle NormalStyle; // 0x400 (0x3b0)
	struct FButtonStyle SelectedStyle; // 0x7b0 (0x3b0)
	struct FButtonStyle DisabledStyle; // 0xb60 (0x3b0)
	struct FButtonStyle LockedStyle; // 0xf10 (0x3b0)
	unsigned char bStopDoubleClickPropagation; // 0x12c0 (0x1)
	unsigned char unreflected_12c1[0x117]; // 0x12c1 (0x117) 
	class UCommonActionWidget* InputActionWidget; // 0x13d8 (0x8)

	/* Functions */

	// Function /Script/CommonUI.CommonButtonBase.StopDoubleClickPropagation (Underlying native function: StopDoubleClickPropagation 0x6630868)
	void StopDoubleClickPropagation(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringInputAction (Underlying native function: SetTriggeringInputAction 0x1ba5644)
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetTriggeredInputAction (Underlying native function: SetTriggeredInputAction 0x6630670)
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetTouchMethod (Underlying native function: SetTouchMethod 0x663055c)
	void SetTouchMethod(struct TEnumAsByte<EButtonTouchMethod>& InTouchMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetStyle (Underlying native function: SetStyle 0x163fcf0)
	void SetStyle(class UClass*& InStyle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction (Underlying native function: SetShouldUseFallbackDefaultInputAction 0x663023c)
	void SetShouldUseFallbackDefaultInputAction(bool& bInShouldUseFallbackDefaultInputAction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus (Underlying native function: SetShouldSelectUponReceivingFocus 0x66301bc)
	void SetShouldSelectUponReceivingFocus(bool& bInShouldSelectUponReceivingFocus); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride (Underlying native function: SetSelectedPressedSoundOverride 0x66300a4)
	void SetSelectedPressedSoundOverride(class USoundBase*& sound); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetSelectedInternal (Underlying native function: SetSelectedInternal 0x662ff98)
	void SetSelectedInternal(bool& bInSelected, bool& bAllowSound, bool& bBroadcast); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride (Underlying native function: SetSelectedHoveredSoundOverride 0x662ff00)
	void SetSelectedHoveredSoundOverride(class USoundBase*& sound); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetPressMethod (Underlying native function: SetPressMethod 0x662fe00)
	void SetPressMethod(struct TEnumAsByte<EButtonPressMethod>& InPressMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetPressedSoundOverride (Underlying native function: SetPressedSoundOverride 0x662fe80)
	void SetPressedSoundOverride(class USoundBase*& sound); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetMinDimensions (Underlying native function: SetMinDimensions 0x22eab30)
	void SetMinDimensions(int& InMinWidth, int& InMinHeight); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetLockedPressedSoundOverride (Underlying native function: SetLockedPressedSoundOverride 0x662fb48)
	void SetLockedPressedSoundOverride(class USoundBase*& sound); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride (Underlying native function: SetLockedHoveredSoundOverride 0x662fab0)
	void SetLockedHoveredSoundOverride(class USoundBase*& sound); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetIsToggleable (Underlying native function: SetIsToggleable 0x662f6c4)
	void SetIsToggleable(bool& bInIsToggleable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetIsSelected (Underlying native function: SetIsSelected 0x662f600)
	void SetIsSelected(bool& InSelected, bool& bGiveClickFeedback); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetIsSelectable (Underlying native function: SetIsSelectable 0x662f580)
	void SetIsSelectable(bool& bInIsSelectable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetIsLocked (Underlying native function: SetIsLocked 0x662f4bc)
	void SetIsLocked(bool& bInIsLocked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractionEnabled (Underlying native function: SetIsInteractionEnabled 0x15add60)
	void SetIsInteractionEnabled(bool& bInIsInteractionEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractableWhenSelected (Underlying native function: SetIsInteractableWhenSelected 0x662f3bc)
	void SetIsInteractableWhenSelected(bool& bInInteractableWhenSelected); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetIsFocusable (Underlying native function: SetIsFocusable 0x662f33c)
	void SetIsFocusable(bool& bInIsFocusable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetInputActionProgressMaterial (Underlying native function: SetInputActionProgressMaterial 0x662f154)
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetHoveredSoundOverride (Underlying native function: SetHoveredSoundOverride 0x662f0d4)
	void SetHoveredSoundOverride(class USoundBase*& sound); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetHideInputAction (Underlying native function: SetHideInputAction 0x662efcc)
	void SetHideInputAction(bool& bInHideInputAction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.SetClickMethod (Underlying native function: SetClickMethod 0x662ebe8)
	void SetClickMethod(struct TEnumAsByte<EButtonClickMethod>& InClickMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringInputActionChanged (Has no native function)
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.OnTriggeredInputActionChanged (Has no native function)
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.OnInputMethodChanged (Underlying native function: OnInputMethodChanged 0x662e1c4)
	void OnInputMethodChanged(enum ECommonInputType& CurrentInputType); // (Native | Protected)

	// Function /Script/CommonUI.CommonButtonBase.OnCurrentTextStyleChanged (Has no native function)
	void OnCurrentTextStyleChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.OnActionProgress (Has no native function)
	void OnActionProgress(float& HeldPercent); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.OnActionComplete (Has no native function)
	void OnActionComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionProgress (Underlying native function: NativeOnActionProgress 0x662e090)
	void NativeOnActionProgress(float& HeldPercent); // (Native | Protected)

	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionComplete (Underlying native function: NativeOnActionComplete 0x662e078)
	void NativeOnActionComplete(); // (Native | Protected)

	// Function /Script/CommonUI.CommonButtonBase.IsPressed (Underlying native function: IsPressed 0x662e030)
	bool IsPressed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.IsInteractionEnabled (Underlying native function: IsInteractionEnabled 0x662df60)
	bool IsInteractionEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.HandleTriggeringActionCommited (Underlying native function: HandleTriggeringActionCommited 0x662dc34)
	void HandleTriggeringActionCommited(bool& bPassThrough); // (Native | Protected | HasOutParms)

	// Function /Script/CommonUI.CommonButtonBase.HandleFocusReceived (Underlying native function: HandleFocusReceived 0x662da60)
	void HandleFocusReceived(); // (Native | Protected)

	// Function /Script/CommonUI.CommonButtonBase.HandleFocusLost (Underlying native function: HandleFocusLost 0x662da48)
	void HandleFocusLost(); // (Native | Protected)

	// Function /Script/CommonUI.CommonButtonBase.HandleButtonReleased (Underlying native function: HandleButtonReleased 0x26a6904)
	void HandleButtonReleased(); // (Final | Native | Protected)

	// Function /Script/CommonUI.CommonButtonBase.HandleButtonPressed (Underlying native function: HandleButtonPressed 0x26a6850)
	void HandleButtonPressed(); // (Final | Native | Protected)

	// Function /Script/CommonUI.CommonButtonBase.HandleButtonClicked (Underlying native function: HandleButtonClicked 0x1594ff4)
	void HandleButtonClicked(); // (Final | Native | Protected)

	// Function /Script/CommonUI.CommonButtonBase.GetStyle (Underlying native function: GetStyle 0x662d730)
	class UCommonButtonStyle* GetStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.GetSingleMaterialStyleMID (Underlying native function: GetSingleMaterialStyleMID 0x29685d4)
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus (Underlying native function: GetShouldSelectUponReceivingFocus 0x662d66c)
	bool GetShouldSelectUponReceivingFocus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.GetSelected (Underlying native function: GetSelected 0x26c9658)
	bool GetSelected(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.GetLocked (Underlying native function: GetLocked 0x662cedc)
	bool GetLocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.GetIsFocusable (Underlying native function: GetIsFocusable 0x662ce3c)
	bool GetIsFocusable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.GetInputAction (Underlying native function: GetInputAction 0x662cda0)
	bool GetInputAction(struct FDataTableRowHandle& InputActionRow); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyleClass (Underlying native function: GetCurrentTextStyleClass 0x15ac9f0)
	class UClass* GetCurrentTextStyleClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyle (Underlying native function: GetCurrentTextStyle 0x662ca78)
	class UCommonTextStyle* GetCurrentTextStyle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.GetCurrentCustomPadding (Underlying native function: GetCurrentCustomPadding 0x662c9d8)
	void GetCurrentCustomPadding(struct Fmargin& OutCustomPadding); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.GetCurrentButtonPadding (Underlying native function: GetCurrentButtonPadding 0x662c938)
	void GetCurrentButtonPadding(struct Fmargin& OutButtonPadding); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonButtonBase.DisableButtonWithReason (Underlying native function: DisableButtonWithReason 0x662c260)
	void DisableButtonWithReason(struct FText& DisabledReason); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.ClearSelection (Underlying native function: ClearSelection 0x662c15c)
	void ClearSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnSelected (Has no native function)
	void BPOnSelected(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnReleased (Has no native function)
	void BPOnReleased(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnPressed (Has no native function)
	void BPOnPressed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockedChanged (Has no native function)
	void BPOnLockedChanged(bool& bIsLocked); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockDoubleClicked (Has no native function)
	void BPOnLockDoubleClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockClicked (Has no native function)
	void BPOnLockClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnInputMethodChanged (Has no native function)
	void BPOnInputMethodChanged(enum ECommonInputType& CurrentInputType); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusReceived (Has no native function)
	void BPOnFocusReceived(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusLost (Has no native function)
	void BPOnFocusLost(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnEnabled (Has no native function)
	void BPOnEnabled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnDoubleClicked (Has no native function)
	void BPOnDoubleClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnDisabled (Has no native function)
	void BPOnDisabled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnDeselected (Has no native function)
	void BPOnDeselected(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonButtonBase.BP_OnClicked (Has no native function)
	void BPOnClicked(); // (Event | Protected | BlueprintEvent)
};

