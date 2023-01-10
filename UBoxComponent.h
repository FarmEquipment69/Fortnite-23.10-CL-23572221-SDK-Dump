// Class /Script/Engine.BoxComponent
// Size: 0x570
class UBoxComponent : public UShapeComponent
{
	struct FVector BoxExtent; // 0x550 (0x18)
	float LineThickness; // 0x568 (0x4)
	unsigned char padding_56c[0x4]; // 0x56c (0x4)

	/* Functions */

	// Function /Script/Engine.BoxComponent.SetLineThickness (Underlying native function: SetLineThickness 0x9a5e244)
	void SetLineThickness(float& Thickness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.BoxComponent.SetBoxExtent (Underlying native function: SetBoxExtent 0x2e04cd4)
	void SetBoxExtent(struct FVector& InBoxExtent, bool& bUpdateOverlaps); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.BoxComponent.GetUnscaledBoxExtent (Underlying native function: GetUnscaledBoxExtent 0x9b23564)
	struct FVector GetUnscaledBoxExtent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.BoxComponent.GetScaledBoxExtent (Underlying native function: GetScaledBoxExtent 0x9b23150)
	struct FVector GetScaledBoxExtent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

