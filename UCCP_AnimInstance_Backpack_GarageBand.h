// Class /Script/FortniteGame.CCP_AnimInstance_Backpack_GarageBand
// Size: 0x820
class UCCP_AnimInstance_Backpack_GarageBand : public UCustomCharacterPartAnimInstance
{
	class USkeletalMeshComponent* SkelMesh; // 0x6e8 (0x8)
	struct FRotator BackpackRotator; // 0x6f0 (0x18)
	float SwingRotationAlpha; // 0x708 (0x4)
	float BackpackRotationAlpha; // 0x70c (0x4)
	struct FName BackpackRotationAlphaDeltaFromRefPoseBoneName; // 0x710 (0x4)
	struct FName BackpackRotationAlphaDeltaFromRefPoseBaseName; // 0x714 (0x4)
	float BackpackRotationAlphaClampMin; // 0x718 (0x4)
	float BackpackRotationAlphaClampMax; // 0x71c (0x4)
	float BackpackRotationAlphaInRangeA; // 0x720 (0x4)
	float BackpackRotationAlphaInRangeB; // 0x724 (0x4)
	float BackpackRotationAlphaOutRangeA; // 0x728 (0x4)
	float BackpackRotationAlphaOutRangeB; // 0x72c (0x4)
	struct FName PositiveAlphaFromTransformDeltaBoneName; // 0x730 (0x4)
	struct FName PositiveAlphaFromTransformDeltaBaseName; // 0x734 (0x4)
	struct TEnumAsByte<EAlphaFromDeltaTypes> PositiveDeltaComponentType; // 0x738 (0x1)
	unsigned char unreflected_739[0x7]; // 0x739 (0x7) 
	struct FVector2D PositiveInputRange; // 0x740 (0x10)
	struct FVector2D PositiveOutputRange; // 0x750 (0x10)
	struct FVector PositiveTwistAxis; // 0x760 (0x18)
	struct FName NegativeAlphaFromTransformDeltaBoneName; // 0x778 (0x4)
	struct FName NegativeAlphaFromTransformDeltaBaseName; // 0x77c (0x4)
	struct TEnumAsByte<EAlphaFromDeltaTypes> NegativeDeltaComponentType; // 0x780 (0x1)
	unsigned char unreflected_781[0x7]; // 0x781 (0x7) 
	struct FVector2D NegativeInputRange; // 0x788 (0x10)
	struct FVector2D NegativeOutputRange; // 0x798 (0x10)
	struct FVector NegativeTwistAxis; // 0x7a8 (0x18)
	struct FName BackpackRotatorDeltaFromRefPoseBoneName; // 0x7c0 (0x4)
	struct FName BackpackRotatorDeltaFromRefPoseBaseName; // 0x7c4 (0x4)
	float BackpackRotatorInRangeA; // 0x7c8 (0x4)
	float BackpackRotatorInRangeB; // 0x7cc (0x4)
	float BackpackRotatorOutRangeA; // 0x7d0 (0x4)
	float BackpackRotatorOutRangeB; // 0x7d4 (0x4)
	struct FName SwingRotationAlphaDeltaFromRefPoseBoneName; // 0x7d8 (0x4)
	struct FName SwingRotationAlphaDeltaFromRefPoseBaseName; // 0x7dc (0x4)
	float SwingRotationAlphaInRangeA; // 0x7e0 (0x4)
	float SwingRotationAlphaInRangeB; // 0x7e4 (0x4)
	float SwingRotationAlphaOutRangeA; // 0x7e8 (0x4)
	float SwingRotationAlphaOutRangeB; // 0x7ec (0x4)
	struct FVector BackpackTranslation; // 0x7f0 (0x18)
	float PawnSpeedMultiplier; // 0x808 (0x4)
	float PawnSpeedAdditive; // 0x80c (0x4)
	float AimPitchMultiplier; // 0x810 (0x4)
	float TranslationAxisXModifier; // 0x814 (0x4)
	float TranslationAxisZModifier; // 0x818 (0x4)
	unsigned char padding_81c[0x4]; // 0x81c (0x4)
};

