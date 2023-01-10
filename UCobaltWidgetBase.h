// Class /Script/FortniteUI.CobaltWidgetBase
// Size: 0x360
class UCobaltWidgetBase : public ULTMWidgetBase
{
	unsigned char unreflected_328[0x8]; // 0x328 (0x8) 
	class AFortAthenaMutator_Cobalt* CobaltMutator; // 0x330 (0x8)
	struct TArray<struct FText> RoundNames; // 0x338 (0x10)
	struct FText InvalidRoundText; // 0x348 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.CobaltWidgetBase.GetCurrentRoundNameIndex (Underlying native function: GetCurrentRoundNameIndex 0xa3f90e0)
	int GetCurrentRoundNameIndex(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

