// Class /Script/VariantManagerContent.SwitchActor
// Size: 0x2b0
class ASwitchActor : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	class USceneComponent* SceneComponent; // 0x2a0 (0x8)
	int LastSelectedOption; // 0x2a8 (0x4)
	unsigned char padding_2ac[0x4]; // 0x2ac (0x4)

	/* Functions */

	// Function /Script/VariantManagerContent.SwitchActor.SelectOption (Underlying native function: SelectOption 0x7d318cc)
	void SelectOption(int& OptionIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption (Underlying native function: GetSelectedOption 0x2d7adec)
	int GetSelectedOption(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VariantManagerContent.SwitchActor.GetOptions (Underlying native function: GetOptions 0x7d312cc)
	struct TArray<class AActor*> GetOptions(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

