// Class /Script/FortniteGame.FortCreativeRoundSettings
// Size: 0xfc0
class AFortCreativeRoundSettings : public ABuildingProp
{
	int RoundIndex; // 0xef8 (0x4)
	bool bKeepItemsBetweenRoundsOverride; // 0xefc (0x1)
	bool bKeepItemsBetweenRounds; // 0xefd (0x1)
	unsigned char unreflected_efe[0x2]; // 0xefe (0x2) 
	int KeepItemsBetweenRounds; // 0xf00 (0x4)
	float PercentageOfResourcesKeptBetweenRounds; // 0xf04 (0x4)
	bool bReloadAndRestockWeaponsEachRoundOverride; // 0xf08 (0x1)
	bool bReloadAndRestockWeaponsEachRound; // 0xf09 (0x1)
	unsigned char unreflected_f0a[0x2]; // 0xf0a (0x2) 
	int ReloadAndRestockWeaponsEachRound; // 0xf0c (0x4)
	bool bIsRelevantThisRound; // 0xf10 (0x1)
	bool bEnableOnMinigameStart; // 0xf11 (0x1)
	unsigned char unreflected_f12[0x2]; // 0xf12 (0x2) 
	int Active; // 0xf14 (0x4)
	bool bActiveDuringMinigame; // 0xf18 (0x1)
	unsigned char unreflected_f19[0x3]; // 0xf19 (0x3) 
	int WinningTeamOnMessageReceived; // 0xf1c (0x4)
	bool bLastStandingWinsOverride; // 0xf20 (0x1)
	bool bLastStandingWins; // 0xf21 (0x1)
	unsigned char unreflected_f22[0x2]; // 0xf22 (0x2) 
	int LastTeamStandingWins; // 0xf24 (0x4)
	struct TMap<class UFortWorldItemDefinition*, int> RestockAmmoAmounts; // 0xf28 (0x50)
	int DefaultRestockAmmoAmount; // 0xf78 (0x4)
	unsigned char padding_f7c[0x44]; // 0xf7c (0x44)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeRoundSettings.SetResourceGivenToWinnersPerRound (Underlying native function: SetResourceGivenToWinnersPerRound 0x8552554)
	void SetResourceGivenToWinnersPerRound(struct TEnumAsByte<EFortResourceType>& InResourceType, int& Amount); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.SetResourceGivenPerRound (Underlying native function: SetResourceGivenPerRound 0x8552484)
	void SetResourceGivenPerRound(struct TEnumAsByte<EFortResourceType>& InResourceType, int& Amount); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.IsActive (Underlying native function: IsActive 0x83adfd0)
	bool IsActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.GetRoundIndex (Underlying native function: GetRoundIndex 0x854dae0)
	int GetRoundIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.GetResourceGivenToWinnersPerRound (Underlying native function: GetResourceGivenToWinnersPerRound 0x854da48)
	int GetResourceGivenToWinnersPerRound(struct TEnumAsByte<EFortResourceType>& InResourceType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.GetResourceGivenPerRound (Underlying native function: GetResourceGivenPerRound 0x854d9b0)
	int GetResourceGivenPerRound(struct TEnumAsByte<EFortResourceType>& InResourceType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.EndRound (Underlying native function: EndRound 0x854c8e0)
	void EndRound(class AFortPlayerController*& InstigatorPC); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.ClearResourcesGivenToWinnersPerRound (Underlying native function: ClearResourcesGivenToWinnersPerRound 0x854b504)
	void ClearResourcesGivenToWinnersPerRound(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeRoundSettings.ClearResourcesGivenPerRound (Underlying native function: ClearResourcesGivenPerRound 0x854b4cc)
	void ClearResourcesGivenPerRound(); // (Final | Native | Protected | BlueprintCallable)
};

