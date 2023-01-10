// Class /Script/CommonUILegacy.CommonPopupMenuLegacy
// Size: 0x4f8
class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy
{
	bool bUseInputStack; // 0x4e0 (0x1)
	unsigned char unreflected_4e1[0x3]; // 0x4e1 (0x3) 
	struct TWeakObjectPtr<class UMenuAnchor> OwningMenuAnchor; // 0x4e4 (0x8)
	struct TWeakObjectPtr<class UObject> ContextProvidingObject; // 0x4ec (0x8)
	unsigned char padding_4f4[0x4]; // 0x4f4 (0x4)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor (Underlying native function: SetOwningMenuAnchor 0x6dd1ffc)
	void SetOwningMenuAnchor(class UMenuAnchor*& MenuAnchor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider (Underlying native function: SetContextProvider 0x6dd1ae4)
	void SetContextProvider(class UObject*& ContextProvidingObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.RequestClose (Underlying native function: RequestClose 0x6dd1494)
	void RequestClose(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged (Underlying native function: OnIsOpenChanged 0x6dd113c)
	void OnIsOpenChanged(bool& IsOpen); // (Final | Native | Protected)

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePreDifferentContextProviderSet (Underlying native function: HandlePreDifferentContextProviderSet 0x6dd0d68)
	void HandlePreDifferentContextProviderSet(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePostDifferentContextProviderSet (Underlying native function: HandlePostDifferentContextProviderSet 0x6dd0d50)
	void HandlePostDifferentContextProviderSet(); // (Native | Event | Protected | BlueprintEvent)
};

