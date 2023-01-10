// Class /Script/Engine.AnimationDataController
// Size: 0x28
class IAnimationDataController : public IInterface
{

	/* Functions */

	// Function /Script/Engine.AnimationDataController.UpdateCurveNamesFromSkeleton (Underlying native function: UpdateCurveNamesFromSkeleton 0x9a44954)
	void UpdateCurveNamesFromSkeleton(class USkeleton*& Skeleton, enum ERawCurveTrackTypes& SupportedCurveType, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetTransformCurveKeys (Underlying native function: SetTransformCurveKeys 0x9a44780)
	bool SetTransformCurveKeys(struct FAnimationCurveIdentifier& CurveId, struct TArray<struct FTransform>& TransformValues, struct TArray<float>& TimeKeys, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetTransformCurveKey (Underlying native function: SetTransformCurveKey 0x9a44594)
	bool SetTransformCurveKey(struct FAnimationCurveIdentifier& CurveId, float& Time, struct FTransform& Value, bool& bShouldTransact); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetPlayLength (Underlying native function: SetPlayLength 0x9a444c8)
	void SetPlayLength(float& Length, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetModel (Underlying native function: SetModel 0x80ceb9c)
	void SetModel(class UAnimDataModel*& InModel); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetFrameRate (Underlying native function: SetFrameRate 0x9a443f8)
	void SetFrameRate(struct FFrameRate*& FrameRate, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetCurveKeys (Underlying native function: SetCurveKeys 0x9a44294)
	bool SetCurveKeys(struct FAnimationCurveIdentifier& CurveId, struct TArray<struct FRichCurveKey>& CurveKeys, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetCurveKey (Underlying native function: SetCurveKey 0x9a44138)
	bool SetCurveKey(struct FAnimationCurveIdentifier& CurveId, struct FRichCurveKey& Key, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetCurveFlags (Underlying native function: SetCurveFlags 0x9a4400c)
	bool SetCurveFlags(struct FAnimationCurveIdentifier& CurveId, int& Flags, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetCurveFlag (Underlying native function: SetCurveFlag 0x9a43e98)
	bool SetCurveFlag(struct FAnimationCurveIdentifier& CurveId, struct TEnumAsByte<EAnimAssetCurveFlags>& Flag, bool& bState, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetCurveColor (Underlying native function: SetCurveColor 0x9a43d54)
	bool SetCurveColor(struct FAnimationCurveIdentifier& CurveId, struct FLinearColor& Color, bool& bShouldTransact); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.SetBoneTrackKeys (Underlying native function: SetBoneTrackKeys 0x9a43b50)
	bool SetBoneTrackKeys(struct FName& BoneName, struct TArray<struct FVector>& PositionalKeys, struct TArray<struct FQuat>& RotationalKeys, struct TArray<struct FVector>& ScalingKeys, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.ScaleCurve (Underlying native function: ScaleCurve 0x9a439dc)
	bool ScaleCurve(struct FAnimationCurveIdentifier& CurveId, float& Origin, float& Factor, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.ResizePlayLength (Underlying native function: ResizePlayLength 0x9a4389c)
	void ResizePlayLength(float& NewLength, float& T0, float& T1, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.Resize (Underlying native function: Resize 0x9a4375c)
	void Resize(float& Length, float& T0, float& T1, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RenameCurve (Underlying native function: RenameCurve 0x9a43604)
	bool RenameCurve(struct FAnimationCurveIdentifier& CurveToRenameId, struct FAnimationCurveIdentifier& NewCurveId, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveTransformCurveKey (Underlying native function: RemoveTransformCurveKey 0x9a434d0)
	bool RemoveTransformCurveKey(struct FAnimationCurveIdentifier& CurveId, float& Time, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveCurveKey (Underlying native function: RemoveCurveKey 0x9a4339c)
	bool RemoveCurveKey(struct FAnimationCurveIdentifier& CurveId, float& Time, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveCurve (Underlying native function: RemoveCurve 0x9a4329c)
	bool RemoveCurve(struct FAnimationCurveIdentifier& CurveId, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveBoneTrack (Underlying native function: RemoveBoneTrack 0x9a431d4)
	bool RemoveBoneTrack(struct FName& BoneName, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAttributeKey (Underlying native function: RemoveAttributeKey 0x9a43088)
	bool RemoveAttributeKey(struct FAnimationAttributeIdentifier& AttributeIdentifier, float& Time, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAttribute (Underlying native function: RemoveAttribute 0x9a42f74)
	bool RemoveAttribute(struct FAnimationAttributeIdentifier& AttributeIdentifier, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAllCurvesOfType (Underlying native function: RemoveAllCurvesOfType 0x9a42eac)
	void RemoveAllCurvesOfType(enum ERawCurveTrackTypes& SupportedCurveType, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAllBoneTracks (Underlying native function: RemoveAllBoneTracks 0x8795668)
	void RemoveAllBoneTracks(bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAllAttributesForBone (Underlying native function: RemoveAllAttributesForBone 0x9a42dc8)
	int RemoveAllAttributesForBone(struct FName& BoneName, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.RemoveAllAttributes (Underlying native function: RemoveAllAttributes 0x9a42d30)
	int RemoveAllAttributes(bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.OpenBracket (Underlying native function: OpenBracket 0x9a42c1c)
	void OpenBracket(struct FText& InTitle, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.InsertBoneTrack (Underlying native function: InsertBoneTrack 0x9a42b20)
	int InsertBoneTrack(struct FName& BoneName, int& DesiredIndex, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.GetModel (Underlying native function: GetModel 0x7db67f4)
	class UAnimDataModel* GetModel(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.FindOrAddCurveNamesOnSkeleton (Underlying native function: FindOrAddCurveNamesOnSkeleton 0x9a42a20)
	void FindOrAddCurveNamesOnSkeleton(class USkeleton*& Skeleton, enum ERawCurveTrackTypes& SupportedCurveType, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.DuplicateCurve (Underlying native function: DuplicateCurve 0x9a428c8)
	bool DuplicateCurve(struct FAnimationCurveIdentifier& CopyCurveId, struct FAnimationCurveIdentifier& NewCurveId, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.DuplicateAttribute (Underlying native function: DuplicateAttribute 0x9a42740)
	bool DuplicateAttribute(struct FAnimationAttributeIdentifier& AttributeIdentifier, struct FAnimationAttributeIdentifier& NewAttributeIdentifier, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.CloseBracket (Underlying native function: CloseBracket 0x9a42568)
	void CloseBracket(bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.AddCurve (Underlying native function: AddCurve 0x9a4243c)
	bool AddCurve(struct FAnimationCurveIdentifier& CurveId, int& CurveFlags, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.AddBoneTrack (Underlying native function: AddBoneTrack 0x9a42374)
	int AddBoneTrack(struct FName& BoneName, bool& bShouldTransact); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimationDataController.AddAttribute (Underlying native function: AddAttribute 0x9a42260)
	bool AddAttribute(struct FAnimationAttributeIdentifier& AttributeIdentifier, bool& bShouldTransact); // (Native | Public | HasOutParms | BlueprintCallable)
};

