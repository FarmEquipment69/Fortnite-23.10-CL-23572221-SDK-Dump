// Class /Script/FortniteUI.FortPostGameScreen
// Size: 0x420
class UFortPostGameScreen : public UCommonActivatableWidget
{
	struct FFortPostGameScreenConfig PostGameScreenConfig; // 0x3a8 (0x4)
	bool bCanGoBackToThisScreen; // 0x3ac (0x1)
	unsigned char padding_3ad[0x73]; // 0x3ad (0x73)

	/* Functions */

	// Function /Script/FortniteUI.FortPostGameScreen.GoToPreviousScreen (Underlying native function: GoToPreviousScreen 0xa3a03b0)
	void GoToPreviousScreen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPostGameScreen.GoToNextScreen (Underlying native function: GoToNextScreen 0xa3a039c)
	void GoToNextScreen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPostGameScreen.BP_ShouldDisplay (Underlying native function: BP_ShouldDisplay 0x8e0c314)
	bool BPShouldDisplay(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortPostGameScreen.BP_OnToggleBlurRequest (Underlying native function: BP_OnToggleBlurRequest 0xa3a01f0)
	void BPOnToggleBlurRequest(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortPostGameScreen.BP_OnFadeOutOverlayRequest (Underlying native function: BP_OnFadeOutOverlayRequest 0xa3a01d4)
	void BPOnFadeOutOverlayRequest(); // (Final | Native | Protected | BlueprintCallable)
};

