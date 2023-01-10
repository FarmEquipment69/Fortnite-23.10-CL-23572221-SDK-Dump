// Class /Script/AugmentedReality.ARCandidateObject
// Size: 0x88
class UARCandidateObject : public UDataAsset
{
	struct TArray<unsigned char> CandidateObjectData; // 0x30 (0x10)
	struct FString FriendlyName; // 0x40 (0x10)
	struct FBox BoundingBox; // 0x50 (0x38)

	/* Functions */

	// Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName (Underlying native function: SetFriendlyName 0x95e37f8)
	void SetFriendlyName(struct FString& NewName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData (Underlying native function: SetCandidateObjectData 0x95e320c)
	void SetCandidateObjectData(struct TArray<unsigned char>& InCandidateObject); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox (Underlying native function: SetBoundingBox 0x95e3168)
	void SetBoundingBox(struct FBox& InBoundingBox); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName (Underlying native function: GetFriendlyName 0x95df994)
	struct FString GetFriendlyName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData (Underlying native function: GetCandidateObjectData 0x95df650)
	struct TArray<unsigned char> GetCandidateObjectData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox (Underlying native function: GetBoundingBox 0x95df4d4)
	struct FBox GetBoundingBox(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

