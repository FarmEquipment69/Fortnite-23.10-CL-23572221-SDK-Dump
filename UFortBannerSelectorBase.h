// Class /Script/SaveTheWorldUI.FortBannerSelectorBase
// Size: 0x520
class UFortBannerSelectorBase : public UCommonActivatablePanelLegacy
{
	class UEditableText* BannerName; // 0x4e0 (0x8)
	int BannerNameMaxLength; // 0x4e8 (0x4)
	unsigned char unreflected_4ec[0x4]; // 0x4ec (0x4) 
	class UBorder* ErrorBorder; // 0x4f0 (0x8)
	class UCommonTextBlock* ErrorText; // 0x4f8 (0x8)
	bool bFilterHomeBaseNameWithOSS; // 0x500 (0x1)
	unsigned char padding_501[0x1f]; // 0x501 (0x1f)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortBannerSelectorBase.UpdateErrorText (Underlying native function: UpdateErrorText 0x71eadb4)
	void UpdateErrorText(struct FText& ErrorMessageText); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortBannerSelectorBase.OnHomebaseNameCommitSucceeded (Has no native function)
	void OnHomebaseNameCommitSucceeded(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortBannerSelectorBase.OnHomebaseNameCommitFailed (Has no native function)
	void OnHomebaseNameCommitFailed(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortBannerSelectorBase.IsPlayerNameValid (Underlying native function: IsPlayerNameValid 0x71e7a08)
	void IsPlayerNameValid(struct FText& PlayerName, bool& OutIsValid, struct FText& OutErrorText); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortBannerSelectorBase.HasIllegalChars (Underlying native function: HasIllegalChars 0x71e76f0)
	bool HasIllegalChars(struct FString& NewBannerName); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortBannerSelectorBase.HandleBannerNameChanged (Underlying native function: HandleBannerNameChanged 0x71e6b6c)
	void HandleBannerNameChanged(struct FText& Text); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortBannerSelectorBase.CompleteHomebaseName (Underlying native function: CompleteHomebaseName 0x71e66f8)
	void CompleteHomebaseName(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortBannerSelectorBase.CompleteHomebaseBannerSelection (Underlying native function: CompleteHomebaseBannerSelection 0x71e66e4)
	void CompleteHomebaseBannerSelection(); // (Final | Native | Public | BlueprintCallable)
};

