// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x180
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
	struct FVector Extent; // 0x158 (0x18)
	class UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x170 (0x8)
	unsigned char padding_178[0x8]; // 0x178 (0x8)

	/* Functions */

	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent (Underlying native function: GetExtent 0x95df890)
	struct FVector GetExtent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture (Underlying native function: GetEnvironmentCaptureTexture 0x89274e0)
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

