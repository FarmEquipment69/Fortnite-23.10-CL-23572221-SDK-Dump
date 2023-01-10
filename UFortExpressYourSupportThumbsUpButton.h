// Class /Script/FortniteUI.FortExpressYourSupportThumbsUpButton
// Size: 0x1470
class UFortExpressYourSupportThumbsUpButton : public UFortExpressYourSupportToggleButton
{
	class UFortSidebarOnboardTooltipWidget* SidebarOnboardingLikeIsland; // 0x1430 (0x8)
	struct FString SourceName; // 0x1438 (0x10)
	unsigned char padding_1448[0x28]; // 0x1448 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortExpressYourSupportThumbsUpButton.TrySendLikeAnalytic (Underlying native function: TrySendLikeAnalytic 0xa5369a0)
	void TrySendLikeAnalytic(class AFortPlayerPawn*& Pawn); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortExpressYourSupportThumbsUpButton.Refresh (Underlying native function: Refresh 0xa535fbc)
	void Refresh(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortExpressYourSupportThumbsUpButton.GetCreatorName (Underlying native function: GetCreatorName 0xa533dac)
	struct FString GetCreatorName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

