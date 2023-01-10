// Class /Script/FortniteUI.FortOptionsMenuInputData
// Size: 0x100
class UFortOptionsMenuInputData : public UDataAsset
{
	struct FName ActionName; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FText DisplayText; // 0x38 (0x18)
	struct FText PrimaryText; // 0x50 (0x18)
	struct FText SecondaryText; // 0x68 (0x18)
	int ElementNumber; // 0x80 (0x4)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	class UCommonTextBlock* TabText; // 0x88 (0x8)
	struct FFortActionKeyMapping ActionKeyMapping; // 0x90 (0x70)

	/* Functions */

	// Function /Script/FortniteUI.FortOptionsMenuInputData.GetInputScale (Underlying native function: GetInputScale 0x98b2150)
	float GetInputScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortOptionsMenuInputData.GetInputActionGroup (Underlying native function: GetInputActionGroup 0xa2a5a40)
	enum EFortInputActionGroup GetInputActionGroup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

