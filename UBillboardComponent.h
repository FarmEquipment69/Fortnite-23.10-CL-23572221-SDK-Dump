// Class /Script/Engine.BillboardComponent
// Size: 0x560
class UBillboardComponent : public UPrimitiveComponent
{
	class UTexture2D* Sprite; // 0x530 (0x8)
	unsigned char bIsScreenSizeScaled; // 0x538 (0x1)
	unsigned char unreflected_539[0x3]; // 0x539 (0x3) 
	float ScreenSize; // 0x53c (0x4)
	float U; // 0x540 (0x4)
	float UL; // 0x544 (0x4)
	float V; // 0x548 (0x4)
	float vL; // 0x54c (0x4)
	float OpacityMaskRefVal; // 0x550 (0x4)
	unsigned char padding_554[0xc]; // 0x554 (0xc)

	/* Functions */

	// Function /Script/Engine.BillboardComponent.SetUV (Underlying native function: SetUV 0x9b25280)
	void SetUV(int& NewU, int& NewUL, int& NewV, int& NewVL); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.BillboardComponent.SetSpriteAndUV (Underlying native function: SetSpriteAndUV 0x9b24ed0)
	void SetSpriteAndUV(class UTexture2D*& NewSprite, int& NewU, int& NewUL, int& NewV, int& NewVL); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.BillboardComponent.SetSprite (Underlying native function: SetSprite 0x77ad548)
	void SetSprite(class UTexture2D*& NewSprite); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.BillboardComponent.SetOpacityMaskRefVal (Underlying native function: SetOpacityMaskRefVal 0x9b24b28)
	void SetOpacityMaskRefVal(float& RefVal); // (Final | Native | Public | BlueprintCallable)
};

