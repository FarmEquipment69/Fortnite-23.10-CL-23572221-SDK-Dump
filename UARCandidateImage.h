// Class /Script/AugmentedReality.ARCandidateImage
// Size: 0x58
class UARCandidateImage : public UDataAsset
{
	class UTexture2D* CandidateTexture; // 0x30 (0x8)
	struct FString FriendlyName; // 0x38 (0x10)
	float Width; // 0x48 (0x4)
	float Height; // 0x4c (0x4)
	enum EARCandidateImageOrientation Orientation; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)

	/* Functions */

	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth (Underlying native function: GetPhysicalWidth 0x2d7a950)
	float GetPhysicalWidth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight (Underlying native function: GetPhysicalHeight 0x2d7a93c)
	float GetPhysicalHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARCandidateImage.GetOrientation (Underlying native function: GetOrientation 0x7ce7bbc)
	enum EARCandidateImageOrientation GetOrientation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName (Underlying native function: GetFriendlyName 0x95df924)
	struct FString GetFriendlyName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture (Underlying native function: GetCandidateTexture 0x7aaa7ec)
	class UTexture2D* GetCandidateTexture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

