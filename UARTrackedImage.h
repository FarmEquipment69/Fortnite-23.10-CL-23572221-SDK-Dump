// Class /Script/AugmentedReality.ARTrackedImage
// Size: 0x170
class UARTrackedImage : public UARTrackedGeometry
{
	class UARCandidateImage* DetectedImage; // 0x158 (0x8)
	struct FVector2D EstimatedSize; // 0x160 (0x10)

	/* Functions */

	// Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize (Underlying native function: GetEstimateSize 0x95df874)
	struct FVector2D GetEstimateSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage (Underlying native function: GetDetectedImage 0x2dfcd64)
	class UARCandidateImage* GetDetectedImage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

