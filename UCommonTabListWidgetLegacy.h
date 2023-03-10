// Class /Script/CommonUILegacy.CommonTabListWidgetLegacy
// Size: 0x390
class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase
{
	struct FMulticastInlineDelegate OnTabButtonCreated; // 0x370 (0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoved; // 0x380 (0x10)

	/* Functions */

	// DelegateFunction /Script/CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonRemoved__DelegateSignature (Has no native function)
	void OnTabButtonRemovedDelegateSignature(struct FName& TabId, class UCommonButtonLegacy*& TabButton); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonCreated__DelegateSignature (Has no native function)
	void OnTabButtonCreatedDelegateSignature(struct FName& TabId, class UCommonButtonLegacy*& TabButton); // (MulticastDelegate | Public | Delegate)

	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleTabRemoved (Underlying native function: HandleTabRemoved 0x6dd0e48)
	void HandleTabRemoved(struct FName& TabNameID, class UCommonButtonLegacy*& TabButton); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleTabCreated (Underlying native function: HandleTabCreated 0x6dd0d80)
	void HandleTabCreated(struct FName& TabNameID, class UCommonButtonLegacy*& TabButton); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonRemoved (Underlying native function: HandleOnTabButtonRemoved 0x27c59d0)
	void HandleOnTabButtonRemoved(struct FName& TabId, class UCommonButtonBase*& TabButton); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonCreated (Underlying native function: HandleOnTabButtonCreated 0x27c58b4)
	void HandleOnTabButtonCreated(struct FName& TabId, class UCommonButtonBase*& TabButton); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.GetTabButtonByID (Underlying native function: GetTabButtonByID 0x6dd077c)
	class UCommonButtonLegacy* GetTabButtonByID(struct FName& TabNameID); // (Final | Native | Protected | BlueprintCallable)
};

