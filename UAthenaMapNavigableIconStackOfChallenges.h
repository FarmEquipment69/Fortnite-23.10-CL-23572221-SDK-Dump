// Class /Script/FortniteUI.AthenaMapNavigableIconStackOfChallenges
// Size: 0x358
class UAthenaMapNavigableIconStackOfChallenges : public UAthenaMapNavigableIcon
{
	unsigned char unreflected_320[0x18]; // 0x320 (0x18) 
	class UCommonActionWidget* CommonActionWidgetCycle; // 0x338 (0x8)
	struct FDataTableRowHandle CycleStackInputAction; // 0x340 (0x10)
	unsigned char padding_350[0x8]; // 0x350 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMapNavigableIconStackOfChallenges.ShouldCycleAutomatically (Underlying native function: ShouldCycleAutomatically 0xa424294)
	bool ShouldCycleAutomatically(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaMapNavigableIconStackOfChallenges.SelectStackedDataAt (Underlying native function: SelectStackedDataAt 0xa423e20)
	void SelectStackedDataAt(int& InSelectedStackedDataIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaMapNavigableIconStackOfChallenges.OnChangedStackData (Has no native function)
	void OnChangedStackData(int& NewStackCount, int& NonCompletedCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapNavigableIconStackOfChallenges.GetStackedDataCount (Underlying native function: GetStackedDataCount 0x2d7b044)
	int GetStackedDataCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaMapNavigableIconStackOfChallenges.GetSelectStackedDataIndex (Underlying native function: GetSelectStackedDataIndex 0xa422a30)
	int GetSelectStackedDataIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaMapNavigableIconStackOfChallenges.CycleStackedData (Underlying native function: CycleStackedData 0xa4229d0)
	void CycleStackedData(); // (Final | Native | Public | BlueprintCallable)
};

