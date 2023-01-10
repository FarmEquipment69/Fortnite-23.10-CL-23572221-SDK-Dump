// Class /Script/FortniteGame.FortAnimationBlueprintLibrary
// Size: 0x28
class UFortAnimationBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.UpdateAnimSpinner (Underlying native function: UpdateAnimSpinner 0x7f41f88)
	static void UpdateAnimSpinner(struct FAnimSpinner& SpinInformation, float& DeltaSeconds, float& NewRotationRate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.SyncMontages (Underlying native function: SyncMontages 0x7f41e30)
	static void SyncMontages(class USkeletalMeshComponent*& Leader, class USkeletalMeshComponent*& Follower); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.StopMontageIfCurrent (Underlying native function: StopMontageIfCurrent 0x7f41c1c)
	static void StopMontageIfCurrent(class AActor*& Actor, class UAnimMontage*& Montage, float& OverrideBlendOutTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.SelectSimSpaceRotation (Underlying native function: SelectSimSpaceRotation 0x7f41644)
	static void SelectSimSpaceRotation(struct FRotator& SimSpaceRotation, bool& bUsingComponentSpace, bool& bInterpolating, float& InterpSpeed, float& InterpTolerance, float& DeltaTime, float& PawnSpeedMax, class UCustomCharacterPartAnimInstance*& PartAnimInstance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.QueryPoseDeformation_Arms (Underlying native function: QueryPoseDeformation_Arms 0x7f4156c)
	static void QueryPoseDeformationArms(class USkeletalMeshComponent*& MeshComponent, struct FPoseDeformationQuery_Arms& ArmsDeformationQuery); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.QueryPoseDeformation (Underlying native function: QueryPoseDeformation 0x7f411fc)
	static void QueryPoseDeformation(class USkeletalMeshComponent*& MeshComponent, struct FPoseDeformationQuery& PoseDeformationQuery); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.PoseReader (Underlying native function: PoseReader 0x7f40db4)
	static float PoseReader(class USkeletalMeshComponent*& MeshComponent, struct FName& StartJoint, struct FName& EndJoint, struct FName& PoseJoint, float& Angle, bool& bDrawDebug); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.PlaySyncedMontage (Underlying native function: PlaySyncedMontage 0x7f40ab8)
	static void PlaySyncedMontage(class UAnimInstance*& LeaderAnimInstance, class UAnimMontage*& LeaderMontage, class UAnimInstance*& FollowerAnimInstance, class UAnimMontage*& FollowerMontage); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.PlayerMovement (Underlying native function: PlayerMovement 0x27171ac)
	static void PlayerMovement(class UFortAnimInstance*& AnimInstance, float& XDotProductCoefficient, float& YDotProductCoefficient, float& ZDotProductCoefficient, bool& bDrawDebug, float& DebugScalar, float& XMovement, float& YMovement, float& ZMovement); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.PlayAnimMontage (Underlying native function: PlayAnimMontage 0x7f408d4)
	static float PlayAnimMontage(class AActor*& Actor, class UAnimMontage*& NewAnimMontage, float& InPlayRate, struct FName& StartSectionName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.GetRelevantAnimTimeRemainingFromCachedData (Underlying native function: GetRelevantAnimTimeRemainingFromCachedData 0x7f407d4)
	static float GetRelevantAnimTimeRemainingFromCachedData(struct FCachedAnimRelevancyData& InCachedAnimRelevancyData, class UAnimInstance*& InAnimInstance); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.GetRelevantAnimTimeRemainingFractionFromCachedData (Underlying native function: GetRelevantAnimTimeRemainingFractionFromCachedData 0x7f406dc)
	static float GetRelevantAnimTimeRemainingFractionFromCachedData(struct FCachedAnimRelevancyData& InCachedAnimRelevancyData, class UAnimInstance*& InAnimInstance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.GetRelevantAnimTimeFromCachedData (Underlying native function: GetRelevantAnimTimeFromCachedData 0x7f405e4)
	static float GetRelevantAnimTimeFromCachedData(struct FCachedAnimRelevancyData& InCachedAnimRelevancyData, class UAnimInstance*& InAnimInstance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.GetRandomWindVector (Underlying native function: GetRandomWindVector 0x21e8514)
	static struct FVector GetRandomWindVector(float& GameTime, float& TimeOffset, float& PerlinScale, struct FVector& Frequency, struct FVector& Amplitude, struct FVector& Offset); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.GetRandomWindRotator (Underlying native function: GetRandomWindRotator 0x7f403c8)
	static struct FRotator GetRandomWindRotator(float& GameTime, float& TimeOffset, float& PerlinScale, struct FRotator& Frequency, struct FRotator& Amplitude, struct FRotator& Offset); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.GetPerlinRandomVector (Underlying native function: GetPerlinRandomVector 0x7f400d4)
	static struct FVector GetPerlinRandomVector(float& GameTime, float& TimeOffset, float& PerlinScale, struct FVector& Frequency, struct FVector& Amplitude, struct FVector& Offset); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.GetPerlinRandomRotator (Underlying native function: GetPerlinRandomRotator 0x7f3feb8)
	static struct FRotator GetPerlinRandomRotator(float& GameTime, float& TimeOffset, float& PerlinScale, struct FRotator& Frequency, struct FRotator& Amplitude, struct FRotator& Offset); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.GetLoopedEmoteDuration (Underlying native function: GetLoopedEmoteDuration 0x7f3fdb4)
	static float GetLoopedEmoteDuration(struct FPrimaryAssetId*& EmotePrimaryAssetId, int& NumberOfLoops, class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.GetAlphaFromReferenceTransformDelta (Underlying native function: GetAlphaFromReferenceTransformDelta 0x7f3fa20)
	static void GetAlphaFromReferenceTransformDelta(float& AlphaOutput, float& RawOutput, class USkinnedMeshComponent*& SkeletalMeshComponent, struct FName& BoneName, struct FName& BaseName, struct TEnumAsByte<EAlphaFromDeltaTypes>& DeltaComponentType, struct FVector2D& InputRange, struct FVector2D& OutputRange, struct FVector& TwistAxis); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.ForceTickAnimation (Underlying native function: ForceTickAnimation 0x7f3f99c)
	static void ForceTickAnimation(class USkeletalMeshComponent*& MeshComponent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAnimationBlueprintLibrary.AlignVectorWithJoint (Underlying native function: AlignVectorWithJoint 0x13ebc5c)
	static struct FVector AlignVectorWithJoint(struct FVector& Vector, class UMeshComponent*& MeshComp, class UCustomCharacterPartAnimInstance*& PartAnimInstance, struct FName& JointName); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

