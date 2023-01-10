// Class /Script/FortniteUI.FortActivityBrowserModeSetListEntry
// Size: 0x1400
class UFortActivityBrowserModeSetListEntry : public UCommonButtonBase
{
	unsigned char unreflected_1400[0x1400]; 

	/* Functions */

	// Function /Script/FortniteUI.FortActivityBrowserModeSetListEntry.OnSavedActivitySet (Has no native function)
	void OnSavedActivitySet(bool& IsSaved); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityBrowserModeSetListEntry.OnPreviewImageChanged (Has no native function)
	void OnPreviewImageChanged(bool& bIsLoading, class UTexture*& Texture); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityBrowserModeSetListEntry.OnPartySizeChanged (Has no native function)
	void OnPartySizeChanged(int& PartySize); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityBrowserModeSetListEntry.OnActivityNameSet (Has no native function)
	void OnActivityNameSet(struct FText& ActivityName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityBrowserModeSetListEntry.GetIsSavedActivity (Underlying native function: GetIsSavedActivity 0xa5340f4)
	bool GetIsSavedActivity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivityBrowserModeSetListEntry.GetInvalidActivityReason (Underlying native function: GetInvalidActivityReason 0xa534058)
	enum EFortInvalidActivityReason GetInvalidActivityReason(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

