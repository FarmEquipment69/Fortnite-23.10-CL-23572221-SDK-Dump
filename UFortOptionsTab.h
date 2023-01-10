// Class /Script/FortniteUI.FortOptionsTab
// Size: 0x3e0
class UFortOptionsTab : public UCommonActivatableWidget
{
	struct FMulticastInlineDelegate OnTabSettingChanged; // 0x3a8 (0x10)
	struct FMulticastInlineDelegate OnTabActivated; // 0x3b8 (0x10)
	struct FMulticastInlineDelegate OnTabDeactivated; // 0x3c8 (0x10)
	enum ESettingTab TabType; // 0x3d8 (0x1)
	unsigned char padding_3d9[0x7]; // 0x3d9 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortOptionsTab.UpdateOptionsTab (Has no native function)
	void UpdateOptionsTab(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortOptionsTab.TempNew_UpdateOptionsTab (Underlying native function: TempNew_UpdateOptionsTab 0x662da48)
	void TempNewUpdateOptionsTab(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsTab.ResetOptionsToDefault (Underlying native function: ResetOptionsToDefault 0x662da60)
	void ResetOptionsToDefault(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsTab.IsControllerDefaultInputType (Underlying native function: IsControllerDefaultInputType 0xa663b9c)
	bool IsControllerDefaultInputType(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortOptionsTab.IsAthena (Underlying native function: IsAthena 0xa663b30)
	bool IsAthena(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsTab.DeactivateTab (Underlying native function: DeactivateTab 0x280e53c)
	void DeactivateTab(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsTab.CenterOnTab (Has no native function)
	void CenterOnTab(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortOptionsTab.AreParentalControlsEnabled (Underlying native function: AreParentalControlsEnabled 0xa6622e0)
	bool AreParentalControlsEnabled(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsTab.ActivateTab (Underlying native function: ActivateTab 0x182d3cc)
	void ActivateTab(); // (Native | Protected | BlueprintCallable)
};

