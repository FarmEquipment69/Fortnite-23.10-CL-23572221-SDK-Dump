// Class /Script/FortniteGame.FortMinigameManager
// Size: 0xb0
class UFortMinigameManager : public UFortControllerComponent
{
	class AController* PlayerController; // 0xa0 (0x8)
	class AFortMinigame* CurrentMinigame; // 0xa8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameManager.SendStatEventWithTags (Underlying native function: SendStatEventWithTags 0x88c8de4)
	void SendStatEventWithTags(enum EFortQuestObjectiveStatEvent& Type, class UObject*& TargetObject, struct FGameplayTagContainer& TargetTags, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& ContextTags, int& Count); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameManager.GetSourceAndContextTags (Underlying native function: GetSourceAndContextTags 0x88c49f4)
	void GetSourceAndContextTags(struct FGameplayTagContainer& OutSourceTags, struct FGameplayTagContainer& OutContextTags); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

