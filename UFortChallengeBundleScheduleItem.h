// Class /Script/FortniteGame.FortChallengeBundleScheduleItem
// Size: 0x118
class UFortChallengeBundleScheduleItem : public UFortAccountItem
{
	struct TArray<struct FString> GrantedBundles; // 0x108 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortChallengeBundleScheduleItem.GetScheduleDefinitionBP (Underlying native function: GetScheduleDefinitionBP 0x840effc)
	class UFortChallengeBundleScheduleDefinition* GetScheduleDefinitionBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleScheduleItem.GetPercentageComplete (Underlying native function: GetPercentageComplete 0x840eb0c)
	float GetPercentageComplete(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleScheduleItem.GetAchievedCount (Underlying native function: GetAchievedCount 0x840e0a0)
	void GetAchievedCount(int& OutTotalAchievedCount, int& OutTotalRequiredCount); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

