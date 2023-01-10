// Class /Script/Engine.AnimSingleNodeInstance
// Size: 0x360
class UAnimSingleNodeInstance : public UAnimInstance
{
	class UAnimationAsset* CurrentAsset; // 0x348 (0x8)
	struct FDelegate PostEvaluateAnimEvent; // 0x350 (0xc)
	unsigned char padding_35c[0x4]; // 0x35c (0x4)

	/* Functions */

	// Function /Script/Engine.AnimSingleNodeInstance.StopAnim (Underlying native function: StopAnim 0x9aaf78c)
	void StopAnim(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetReverse (Underlying native function: SetReverse 0x9aaf70c)
	void SetReverse(bool& bInReverse); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetPreviewCurveOverride (Underlying native function: SetPreviewCurveOverride 0x9aaf5f0)
	void SetPreviewCurveOverride(struct FName& PoseName, float& Value, bool& bRemoveIfZero); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetPositionWithPreviousTime (Underlying native function: SetPositionWithPreviousTime 0x9aaf4f4)
	void SetPositionWithPreviousTime(float& InPosition, float& InPreviousTime, bool& bFireNotifies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetPosition (Underlying native function: SetPosition 0x9aaf428)
	void SetPosition(float& InPosition, bool& bFireNotifies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetPlayRate (Underlying native function: SetPlayRate 0x9aaf324)
	void SetPlayRate(float& InPlayRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetPlaying (Underlying native function: SetPlaying 0x9aaf3a8)
	void SetPlaying(bool& bIsPlaying); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetMirrorDataTable (Underlying native function: SetMirrorDataTable 0x9aaf270)
	void SetMirrorDataTable(class UMirrorDataTable*& MirrorDataTable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetLooping (Underlying native function: SetLooping 0x9aaf1f0)
	void SetLooping(bool& bIsLooping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetBlendSpacePosition (Underlying native function: SetBlendSpacePosition 0x9aaf118)
	void SetBlendSpacePosition(struct FVector& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.SetAnimationAsset (Underlying native function: SetAnimationAsset 0x9aaf014)
	void SetAnimationAsset(class UAnimationAsset*& NewAsset, bool& bIsLooping, float& InPlayRate); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.PlayAnim (Underlying native function: PlayAnim 0x9aaef08)
	void PlayAnim(bool& bIsLooping, float& InPlayRate, float& InStartPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.GetMirrorDataTable (Underlying native function: GetMirrorDataTable 0x9aaee98)
	class UMirrorDataTable* GetMirrorDataTable(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.GetLength (Underlying native function: GetLength 0x9aaee70)
	float GetLength(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimSingleNodeInstance.GetAnimationAsset (Underlying native function: GetAnimationAsset 0x9aaee48)
	class UAnimationAsset* GetAnimationAsset(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

