// Class /Script/FortniteUI.FortCreativeIslandPanel
// Size: 0x2e8
class UFortCreativeIslandPanel : public UFortHUDElementWidget
{
	struct FMulticastInlineDelegate OnSupportCreator; // 0x2d0 (0x10)
	class UInputComponent* PanelInputComponent; // 0x2e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeIslandPanel.PushPanelInputComponent (Underlying native function: PushPanelInputComponent 0xa586b5c)
	void PushPanelInputComponent(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandPanel.PopPanelInputComponent (Underlying native function: PopPanelInputComponent 0xa586ac0)
	void PopPanelInputComponent(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandPanel.GetSupportCode (Underlying native function: GetSupportCode 0xa584e84)
	struct FString GetSupportCode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

