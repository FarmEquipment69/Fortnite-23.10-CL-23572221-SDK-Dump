// Class /Script/SaveTheWorldUI.FortDailyRewards
// Size: 0x520
class UFortDailyRewards : public UFortActivatablePanel
{
	unsigned char unreflected_520[0x520]; 

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortDailyRewards.TryGetDailyRewardsData (Underlying native function: TryGetDailyRewardsData 0x7247dd0)
	bool TryGetDailyRewardsData(struct FFortDailyRewardsData& OutDailyRewardsData, int& ItemCardsPerSchedule, int& MinEpicRewards); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortDailyRewards.TryClaimDailyRewards (Underlying native function: TryClaimDailyRewards 0x7247c6c)
	bool TryClaimDailyRewards(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortDailyRewards.SetupDailyRewards (Has no native function)
	void SetupDailyRewards(); // (Event | Public | BlueprintEvent)
};

