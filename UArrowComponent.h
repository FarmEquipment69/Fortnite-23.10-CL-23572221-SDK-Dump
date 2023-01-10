// Class /Script/Engine.ArrowComponent
// Size: 0x550
class UArrowComponent : public UPrimitiveComponent
{
	struct FColor ArrowColor; // 0x530 (0x4)
	float ArrowSize; // 0x534 (0x4)
	float ArrowLength; // 0x538 (0x4)
	float ScreenSize; // 0x53c (0x4)
	unsigned char bIsScreenSizeScaled; // 0x540 (0x1)
	unsigned char bTreatAsASprite; // 0x540 (0x1)
	unsigned char padding_541[0xf]; // 0x541 (0xf)

	/* Functions */

	// Function /Script/Engine.ArrowComponent.SetArrowColor (Underlying native function: SetArrowColor 0x9b24014)
	void SetArrowColor(struct FLinearColor& NewColor); // (Native | Public | HasDefaults | BlueprintCallable)
};

