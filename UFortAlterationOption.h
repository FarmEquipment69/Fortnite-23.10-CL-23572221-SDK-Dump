// Class /Script/SaveTheWorldUI.FortAlterationOption
// Size: 0x1480
class UFortAlterationOption : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	struct FAlterationOption AlterationOption; // 0x1438 (0x38)
	unsigned char padding_1470[0x10]; // 0x1470 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortAlterationOption.Setup (Underlying native function: Setup 0x721d100)
	void Setup(struct FAlterationOption& InAlterationOption, enum EFortAlterationOptionType& InAlterationOptionType); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.OnSetup (Has no native function)
	void OnSetup(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetRequiredIngredients (Underlying native function: GetRequiredIngredients 0x721ab04)
	struct TArray<struct FFortItemQuantityPair> GetRequiredIngredients(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetNextPipCount (Underlying native function: GetNextPipCount 0x721a9d4)
	float GetNextPipCount(float& MaxPipCount); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetCurrentPipCount (Underlying native function: GetCurrentPipCount 0x721a0dc)
	float GetCurrentPipCount(float& MaxPipCount); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetAlterationOptionType (Underlying native function: GetAlterationOptionType 0x721a0c4)
	enum EFortAlterationOptionType GetAlterationOptionType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetAlterationDefinition (Underlying native function: GetAlterationDefinition 0x7219f5c)
	class UFortAlterationItemDefinition* GetAlterationDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

