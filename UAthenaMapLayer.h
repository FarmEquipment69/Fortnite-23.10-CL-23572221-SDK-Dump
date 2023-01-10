// Class /Script/FortniteUI.AthenaMapLayer
// Size: 0x170
class UAthenaMapLayer : public UWidget
{
	unsigned char unreflected_148[0x18]; // 0x148 (0x18) 
	class ULocalPlayer* LocalPlayer; // 0x160 (0x8)
	class UWidget* QuestContent; // 0x168 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMapLayer.SetLocalPlayer (Underlying native function: SetLocalPlayer 0xa31154c)
	void SetLocalPlayer(class ULocalPlayer*& LocalPlayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaMapLayer.FlashPlayerIcon (Underlying native function: FlashPlayerIcon 0xa30fd78)
	void FlashPlayerIcon(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaMapLayer.ClearTouches (Underlying native function: ClearTouches 0xa30fb28)
	void ClearTouches(); // (Final | Native | Public | BlueprintCallable)
};

