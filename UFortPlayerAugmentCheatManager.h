// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager
// Size: 0x28
class UFortPlayerAugmentCheatManager : public UChildCheatManager
{

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.StartAugmentGrantingFlow (Underlying native function: StartAugmentGrantingFlow 0x273fd14)
	void StartAugmentGrantingFlow(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.SetPlayerAugmentRollCountSinceLastUnlock (Underlying native function: SetPlayerAugmentRollCountSinceLastUnlock 0x6e8edb4)
	void SetPlayerAugmentRollCountSinceLastUnlock(int& RollCount); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ServerLogDynamicWeightsForPlayer (Underlying native function: ServerLogDynamicWeightsForPlayer 0x6df775c)
	void ServerLogDynamicWeightsForPlayer(bool& bVeryDetailedReport); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ResetAugmentGrantingToSeed (Underlying native function: ResetAugmentGrantingToSeed 0x6e8edb4)
	void ResetAugmentGrantingToSeed(int& Seed); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugmentsFromBots (Underlying native function: RemoveAllAugmentsFromBots 0x273fd14)
	void RemoveAllAugmentsFromBots(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugments (Underlying native function: RemoveAllAugments 0x273fd14)
	void RemoveAllAugments(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.LogPlayerAugmentsLockStatus (Underlying native function: LogPlayerAugmentsLockStatus 0x273fd14)
	void LogPlayerAugmentsLockStatus(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugmentToBots (Underlying native function: GiveAugmentToBots 0x66e4ab4)
	void GiveAugmentToBots(struct FString& AugmentName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugment (Underlying native function: GiveAugment 0x66e4ab4)
	void GiveAugment(struct FString& AugmentName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ForceSelectionAugments (Underlying native function: ForceSelectionAugments 0x6ee98dc)
	void ForceSelectionAugments(struct FString& AugmentNameFirst, struct FString& AugmentNameSecond); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectPlayerAugment (Underlying native function: CollectPlayerAugment 0x6ee971c)
	void CollectPlayerAugment(struct FString& TagMatch); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectAllPlayerAugments (Underlying native function: CollectAllPlayerAugments 0x273fd14)
	void CollectAllPlayerAugments(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)
};

