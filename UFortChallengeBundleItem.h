// Class /Script/FortniteGame.FortChallengeBundleItem
// Size: 0x138
class UFortChallengeBundleItem : public UFortAccountItem
{
	int numquestscompleted; // 0x108 (0x4)
	int numprogressquestscompleted; // 0x10c (0x4)
	struct TArray<struct FString> GrantedQuestInstanceIds; // 0x110 (0x10)
	int maxallowedbundlelevel; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct FString challengebundlescheduleid; // 0x128 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortChallengeBundleItem.IsComplete (Underlying native function: IsComplete 0x840f14c)
	bool IsComplete(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItem.GetQuests (Underlying native function: GetQuests 0x840eb34)
	void GetQuests(class UFortQuestManager*& QuestManager, struct TArray<class UFortQuestItem*>& OwnedQuests, struct TArray<class UFortQuestItemDefinition*>& UnownedQuests, bool& bGetAllQuestsInChain); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItem.GetPercentageComplete (Underlying native function: GetPercentageComplete 0x840eae4)
	float GetPercentageComplete(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItem.GetChallengeDefinitionBP (Underlying native function: GetChallengeDefinitionBP 0x840e5c0)
	class UFortChallengeBundleItemDefinition* GetChallengeDefinitionBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItem.GetAchievedCount (Underlying native function: GetAchievedCount 0x840dfc8)
	void GetAchievedCount(int& OutTotalAchievedCount, int& OutTotalRequiredCount); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortChallengeBundleItem.CanLevelUpBundle (Underlying native function: CanLevelUpBundle 0x840df8c)
	bool CanLevelUpBundle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

