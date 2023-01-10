// Class /Script/FortniteUI.AthenaAccountContext
// Size: 0x30
class UAthenaAccountContext : public UBlueprintContextBase
{

	/* Functions */

	// Function /Script/FortniteUI.AthenaAccountContext.SimulateBattleBookPurchase (Underlying native function: SimulateBattleBookPurchase 0xa4b5068)
	void SimulateBattleBookPurchase(int& NumLevelsToPurchase, int& BonusLevelsGranted, bool& bOverLimit); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaAccountContext.ShouldReplaceBattleStarsWithAlternateReward (Underlying native function: ShouldReplaceBattleStarsWithAlternateReward 0xa4b4b8c)
	bool ShouldReplaceBattleStarsWithAlternateReward(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.IsAtMaxBattlePassTier (Underlying native function: IsAtMaxBattlePassTier 0xa4b1e40)
	bool IsAtMaxBattlePassTier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.GetCurrentSeasonNumberAsText (Underlying native function: GetCurrentSeasonNumberAsText 0xa4aeb88)
	struct FText GetCurrentSeasonNumberAsText(bool& bFullText); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.GetCurrentSeasonNumber (Underlying native function: GetCurrentSeasonNumber 0xa4aeb38)
	int GetCurrentSeasonNumber(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.GetCurrentSeasonDefinition (Underlying native function: GetCurrentSeasonDefinition 0xa4aeaf4)
	class UAthenaSeasonItemDefinition* GetCurrentSeasonDefinition(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaAccountContext.GetCurrentChapterNumberAsText (Underlying native function: GetCurrentChapterNumberAsText 0xa4ae988)
	struct FText GetCurrentChapterNumberAsText(bool& bFullText); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.GetCurrentChapterAndSeasonText (Underlying native function: GetCurrentChapterAndSeasonText 0xa4ae8cc)
	struct FText GetCurrentChapterAndSeasonText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaAccountContext.GetBattleBookPurchaseLimit (Underlying native function: GetBattleBookPurchaseLimit 0xa4ae668)
	void GetBattleBookPurchaseLimit(int& MaxNumLevelsPossibleToPurchase, int& BonusLevelsGranted); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

