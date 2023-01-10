// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
// Size: 0x38
class UFortCheatManager_FakeKillRelevancy : public UFortCheatManager_Coupled
{

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyTestAlgorithm (Underlying native function: FakeKillRelevancyTestAlgorithm 0x735afdc)
	void FakeKillRelevancyTestAlgorithm(int& NumPlayers, struct FString& MaxPlayersRemainingAfterPhases, int& MinSquadSize, int& MaxSquadSize, int& Iterations, int& LogVerbosity); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyStartNextWave (Underlying native function: FakeKillRelevancyStartNextWave 0x273fd14)
	void FakeKillRelevancyStartNextWave(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancySetUpPhase (Underlying native function: FakeKillRelevancySetUpPhase 0x735adec)
	void FakeKillRelevancySetUpPhase(int& MaxPlayersRemaining, struct FString& ReasonGameplayTagString, int& NumWaves, float& RelevancyDelay); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyReset (Underlying native function: FakeKillRelevancyReset 0x273fd14)
	void FakeKillRelevancyReset(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyDebug (Underlying native function: FakeKillRelevancyDebug 0x6df7bc0)
	void FakeKillRelevancyDebug(float& TextScale); // (Final | Exec | Native | Public)
};

