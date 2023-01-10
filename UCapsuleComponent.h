// Class /Script/Engine.CapsuleComponent
// Size: 0x560
class UCapsuleComponent : public UShapeComponent
{
	float CapsuleHalfHeight; // 0x550 (0x4)
	float CapsuleRadius; // 0x554 (0x4)
	unsigned char padding_558[0x8]; // 0x558 (0x8)

	/* Functions */

	// Function /Script/Engine.CapsuleComponent.SetCapsuleSize (Underlying native function: SetCapsuleSize 0x9b24574)
	void SetCapsuleSize(float& InRadius, float& InHalfHeight, bool& bUpdateOverlaps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CapsuleComponent.SetCapsuleRadius (Underlying native function: SetCapsuleRadius 0x9b244a0)
	void SetCapsuleRadius(float& Radius, bool& bUpdateOverlaps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CapsuleComponent.SetCapsuleHalfHeight (Underlying native function: SetCapsuleHalfHeight 0x9b243cc)
	void SetCapsuleHalfHeight(float& HalfHeight, bool& bUpdateOverlaps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleSize_WithoutHemisphere (Underlying native function: GetUnscaledCapsuleSize_WithoutHemisphere 0x9b236bc)
	void GetUnscaledCapsuleSizeWithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleSize (Underlying native function: GetUnscaledCapsuleSize 0x9b235e0)
	void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleRadius (Underlying native function: GetUnscaledCapsuleRadius 0x9b235c8)
	float GetUnscaledCapsuleRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight_WithoutHemisphere (Underlying native function: GetUnscaledCapsuleHalfHeight_WithoutHemisphere 0x9b235a4)
	float GetUnscaledCapsuleHalfHeightWithoutHemisphere(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight (Underlying native function: GetUnscaledCapsuleHalfHeight 0x9b2358c)
	float GetUnscaledCapsuleHalfHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetShapeScale (Underlying native function: GetShapeScale 0x9b234f8)
	float GetShapeScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetScaledCapsuleSize_WithoutHemisphere (Underlying native function: GetScaledCapsuleSize_WithoutHemisphere 0x9b233a8)
	void GetScaledCapsuleSizeWithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetScaledCapsuleSize (Underlying native function: GetScaledCapsuleSize 0x9b23284)
	void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetScaledCapsuleRadius (Underlying native function: GetScaledCapsuleRadius 0x9b23248)
	float GetScaledCapsuleRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetScaledCapsuleHalfHeight_WithoutHemisphere (Underlying native function: GetScaledCapsuleHalfHeight_WithoutHemisphere 0x9b231ec)
	float GetScaledCapsuleHalfHeightWithoutHemisphere(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetScaledCapsuleHalfHeight (Underlying native function: GetScaledCapsuleHalfHeight 0x9b231b0)
	float GetScaledCapsuleHalfHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

