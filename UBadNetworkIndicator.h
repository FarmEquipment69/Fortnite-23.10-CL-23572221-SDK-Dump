// Class /Script/NetUI.BadNetworkIndicator
// Size: 0x300
class UBadNetworkIndicator : public UFortHUDElementWidget
{
	bool bEnabled; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x3]; // 0x2d1 (0x3) 
	float MinimumDisplayTime; // 0x2d4 (0x4)
	float UpdateTime; // 0x2d8 (0x4)
	float InitialDelay; // 0x2dc (0x4)
	unsigned char padding_2e0[0x20]; // 0x2e0 (0x20)

	/* Functions */

	// Function /Script/NetUI.BadNetworkIndicator.UpdateDisplay (Has no native function)
	void UpdateDisplay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/NetUI.BadNetworkIndicator.ShouldDisplay (Underlying native function: ShouldDisplay 0x7aacf4c)
	bool ShouldDisplay(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NetUI.BadNetworkIndicator.HasSeverePing (Underlying native function: HasSeverePing 0x7aacf28)
	bool HasSeverePing(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NetUI.BadNetworkIndicator.HasSeverePacketLoss (Underlying native function: HasSeverePacketLoss 0x7aacf04)
	bool HasSeverePacketLoss(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NetUI.BadNetworkIndicator.HasBadPing (Underlying native function: HasBadPing 0x7aacee0)
	bool HasBadPing(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NetUI.BadNetworkIndicator.HasBadPacketLoss (Underlying native function: HasBadPacketLoss 0x7aacebc)
	bool HasBadPacketLoss(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NetUI.BadNetworkIndicator.GetPing (Underlying native function: GetPing 0x7aace94)
	float GetPing(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NetUI.BadNetworkIndicator.GetPacketLoss (Underlying native function: GetPacketLoss 0x7aace6c)
	float GetPacketLoss(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

