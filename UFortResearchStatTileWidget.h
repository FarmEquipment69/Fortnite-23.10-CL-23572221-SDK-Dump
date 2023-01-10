// Class /Script/SaveTheWorldUI.FortResearchStatTileWidget
// Size: 0x2a8
class UFortResearchStatTileWidget : public UUserWidget
{
	class UFortStatItemDefinition* PersonalStatItemDefinition; // 0x268 (0x8)
	class UFortStatItemDefinition* TeamStatItemDefinition; // 0x270 (0x8)
	struct FName StatCostCurveName; // 0x278 (0x4)
	struct FName StatPersonalDeltaCurveName; // 0x27c (0x4)
	struct FName StatPersonalCumulativeCurveName; // 0x280 (0x4)
	struct FName StatTeamDeltaCurveName; // 0x284 (0x4)
	struct FName StatTeamCumulativeCurveName; // 0x288 (0x4)
	unsigned char padding_28c[0x1c]; // 0x28c (0x1c)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.OnStatChanged (Has no native function)
	void OnStatChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.IsAtMaxResearchLevel (Underlying native function: IsAtMaxResearchLevel 0x724551c)
	bool IsAtMaxResearchLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetStatIdName (Underlying native function: GetStatIdName 0x72446a4)
	struct FString GetStatIdName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetPersonalStatType (Underlying native function: GetPersonalStatType 0x72441c8)
	enum EFortStatType GetPersonalStatType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextTeamStatValueDelta (Underlying native function: GetNextTeamStatValueDelta 0x7244108)
	int GetNextTeamStatValueDelta(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextPersonalStatValueDelta (Underlying native function: GetNextPersonalStatValueDelta 0x72440e4)
	int GetNextPersonalStatValueDelta(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextCombinedStatValueDelta (Underlying native function: GetNextCombinedStatValueDelta 0x724409c)
	int GetNextCombinedStatValueDelta(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentTeamStatValue (Underlying native function: GetCurrentTeamStatValue 0x72435c0)
	int GetCurrentTeamStatValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentResearchLevel (Underlying native function: GetCurrentResearchLevel 0x72435a8)
	int GetCurrentResearchLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentPersonalStatValue (Underlying native function: GetCurrentPersonalStatValue 0x7243574)
	int GetCurrentPersonalStatValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentCombinedStatValue (Underlying native function: GetCurrentCombinedStatValue 0x72434b4)
	int GetCurrentCombinedStatValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCostToIncreaseStat (Underlying native function: GetCostToIncreaseStat 0x7243480)
	int GetCostToIncreaseStat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

