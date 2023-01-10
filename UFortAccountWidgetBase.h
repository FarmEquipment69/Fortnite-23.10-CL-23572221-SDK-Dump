// Class /Script/FortniteUI.FortAccountWidgetBase
// Size: 0x2c8
class UFortAccountWidgetBase : public UCommonUserWidget
{
	unsigned char unreflected_2c8[0x2c8]; 

	/* Functions */

	// Function /Script/FortniteUI.FortAccountWidgetBase.OnAccountInfoChanged (Has no native function)
	void OnAccountInfoChanged(struct FFortPublicAccountInfo& Result); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAccountWidgetBase.HandleCurrentlyViewedAccountInfoChanged (Underlying native function: HandleCurrentlyViewedAccountInfoChanged 0x11a6948)
	void HandleCurrentlyViewedAccountInfoChanged(struct FFortPublicAccountInfo& NewInfo); // (Native | Protected)

	// Function /Script/FortniteUI.FortAccountWidgetBase.GetSeasonBannerInfo (Underlying native function: GetSeasonBannerInfo 0xa5f50bc)
	struct FAthenaSeasonBannerLevel GetSeasonBannerInfo(int& Level); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAccountWidgetBase.GetNextSeasonReward (Underlying native function: GetNextSeasonReward 0xa5f4eb0)
	bool GetNextSeasonReward(struct FFortItemQuantityPair& Reward, int& RewardLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAccountWidgetBase.GetNextSeasonChaseReward (Underlying native function: GetNextSeasonChaseReward 0xa5f4d7c)
	bool GetNextSeasonChaseReward(struct FFortItemQuantityPair& Reward, int& RewardLevel, int& StartingLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAccountWidgetBase.GetCurrentSeasonNumberAsText (Underlying native function: GetCurrentSeasonNumberAsText 0x1e09ba8)
	struct FText GetCurrentSeasonNumberAsText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAccountWidgetBase.GetCurrentChapterAsText (Underlying native function: GetCurrentChapterAsText 0x1e09ac0)
	struct FText GetCurrentChapterAsText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

