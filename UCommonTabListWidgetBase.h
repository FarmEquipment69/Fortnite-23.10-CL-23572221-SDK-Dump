// Class /Script/CommonUI.CommonTabListWidgetBase
// Size: 0x370
class UCommonTabListWidgetBase : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnTabSelected; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnTabButtonCreation; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoval; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnTabListRebuilt; // 0x2c0 (0x10)
	struct FDataTableRowHandle NextTabInputActionData; // 0x2d0 (0x10)
	struct FDataTableRowHandle PreviousTabInputActionData; // 0x2e0 (0x10)
	bool bAutoListenForInput; // 0x2f0 (0x1)
	bool bDeferRebuildingTabList; // 0x2f1 (0x1)
	unsigned char unreflected_2f2[0x2]; // 0x2f2 (0x2) 
	struct TWeakObjectPtr<class UCommonAnimatedSwitcher> LinkedSwitcher; // 0x2f4 (0x8)
	unsigned char unreflected_2fc[0x4]; // 0x2fc (0x4) 
	class UCommonButtonGroupBase* TabButtonGroup; // 0x300 (0x8)
	unsigned char unreflected_308[0x8]; // 0x308 (0x8) 
	struct TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID; // 0x310 (0x50)
	unsigned char padding_360[0x10]; // 0x360 (0x10)

	/* Functions */

	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabVisibility (Underlying native function: SetTabVisibility 0x6630418)
	void SetTabVisibility(struct FName& TabNameID, enum ESlateVisibility& NewVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled (Underlying native function: SetTabInteractionEnabled 0x6630354)
	void SetTabInteractionEnabled(struct FName& TabNameID, bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabEnabled (Underlying native function: SetTabEnabled 0x1cf4f18)
	void SetTabEnabled(struct FName& TabNameID, bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTabListWidgetBase.SetListeningForInput (Underlying native function: SetListeningForInput 0x662f970)
	void SetListeningForInput(bool& bShouldListen); // (Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher (Underlying native function: SetLinkedSwitcher 0x23a6f78)
	void SetLinkedSwitcher(class UCommonAnimatedSwitcher*& CommonSwitcher); // (Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTabListWidgetBase.SelectTabByID (Underlying native function: SelectTabByID 0x662e758)
	bool SelectTabByID(struct FName& TabNameID, bool& bSuppressClickFeedback); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveTab (Underlying native function: RemoveTab 0x662e3c0)
	bool RemoveTab(struct FName& TabNameID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveAllTabs (Underlying native function: RemoveAllTabs 0x662e3ac)
	void RemoveAllTabs(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTabListWidgetBase.RegisterTab (Underlying native function: RegisterTab 0x662e270)
	bool RegisterTab(struct FName& TabNameID, class UClass*& ButtonWidgetType, class UWidget*& ContentWidget, int& TabIndex); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature (Has no native function)
	void OnTabSelectedDelegateSignature(struct FName& TabId); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature (Has no native function)
	void OnTabListRebuiltDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature (Has no native function)
	void OnTabButtonRemovalDelegateSignature(struct FName& TabId, class UCommonButtonBase*& TabButton); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature (Has no native function)
	void OnTabButtonCreationDelegateSignature(struct FName& TabId, class UCommonButtonBase*& TabButton); // (MulticastDelegate | Public | Delegate)

	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabRemoval (Underlying native function: HandleTabRemoval 0x282a11c)
	void HandleTabRemoval(struct FName& TabNameID, class UCommonButtonBase*& TabButton); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabCreation (Underlying native function: HandleTabCreation 0x1b71590)
	void HandleTabCreation(struct FName& TabNameID, class UCommonButtonBase*& TabButton); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected (Underlying native function: HandleTabButtonSelected 0x269b6a8)
	void HandleTabButtonSelected(class UCommonButtonBase*& SelectedTabButton, int& ButtonIndex); // (Final | Native | Protected)

	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction (Underlying native function: HandlePreviousTabInputAction 0x662dbb8)
	void HandlePreviousTabInputAction(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP (Has no native function)
	void HandlePreLinkedSwitcherChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP (Has no native function)
	void HandlePostLinkedSwitcherChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction (Underlying native function: HandleNextTabInputAction 0x662da78)
	void HandleNextTabInputAction(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex (Underlying native function: GetTabIdAtIndex 0x662d810)
	struct FName GetTabIdAtIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabCount (Underlying native function: GetTabCount 0x28208c0)
	int GetTabCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID (Underlying native function: GetTabButtonBaseByID 0x662d754)
	class UCommonButtonBase* GetTabButtonBaseByID(struct FName& TabNameID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonTabListWidgetBase.GetSelectedTabId (Underlying native function: GetSelectedTabId 0x662d484)
	struct FName GetSelectedTabId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher (Underlying native function: GetLinkedSwitcher 0x662ce70)
	class UCommonAnimatedSwitcher* GetLinkedSwitcher(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTabListWidgetBase.GetActiveTab (Underlying native function: GetActiveTab 0x662c63c)
	struct FName GetActiveTab(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonTabListWidgetBase.DisableTabWithReason (Underlying native function: DisableTabWithReason 0x662c31c)
	void DisableTabWithReason(struct FName& TabNameID, struct FText& Reason); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

