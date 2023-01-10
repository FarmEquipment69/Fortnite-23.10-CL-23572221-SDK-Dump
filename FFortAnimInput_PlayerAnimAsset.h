// ScriptStruct /Script/FortniteGame.FortAnimInput_PlayerAnimAsset
// Size: 0x200
struct FFortAnimInput_PlayerAnimAsset : FFortAnimInput_StandingPawnAnimAsset
{
	bool bPlayUpperBodySlotOnFullBodyInAir; // 0x28 (0x1)
	bool bDisableFullBodyAimOffsetDuringMelee; // 0x29 (0x1)
	bool bShouldApplyAimOffsetFullBody; // 0x2a (0x1)
	unsigned char unreflected_2b[0x1]; // 0x2b (0x1) 
	float FullBodyAimOffsetAlpha; // 0x2c (0x4)
	float UpperBodyAimOffsetAlpha; // 0x30 (0x4)
	bool bOverrideDisableArmsHeadAdditive; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	float DisableArmsHeadAdditiveOverride; // 0x38 (0x4)
	struct FFortAnimPlayrateRange* SprintPlayrateClampRange; // 0x3c (0x8)
	struct FFortAnimPlayrateRange* SprintTargetingPlayrateClampRange; // 0x44 (0x8)
	struct FFortAnimPlayrateRange* CrouchSprintPlayrateClampRange; // 0x4c (0x8)
	struct FFortAnimPlayrateRange* CrouchSprintTargetingPlayrateClampRange; // 0x54 (0x8)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	class UAimOffsetBlendSpace* TargetingAimOffset; // 0x60 (0x8)
	class UAimOffsetBlendSpace* NonTargetingAimOffset; // 0x68 (0x8)
	class UAnimSequence* RelaxedPose; // 0x70 (0x8)
	class UAnimSequence* RelaxedPoseLevel2; // 0x78 (0x8)
	class UAimOffsetBlendSpace* RelaxedAimOffset; // 0x80 (0x8)
	class UBlendSpace* JogAdditiveBlendSpace; // 0x88 (0x8)
	class UBlendSpace* JogAdditiveBlendSpaceRelaxed; // 0x90 (0x8)
	class UBlendSpace* JogAdditiveBlendSpaceRelaxedLevel2; // 0x98 (0x8)
	class UBlendSpace* JogAdditiveBlendSpaceMeleeGuarding; // 0xa0 (0x8)
	class UAnimSequence* SprintAnimation; // 0xa8 (0x8)
	class UAnimSequence* SprintTargetingAnimation; // 0xb0 (0x8)
	class UAnimSequence* CrouchTargetingPose; // 0xb8 (0x8)
	class UAnimSequence* CrouchNonTargetingPose; // 0xc0 (0x8)
	class UAnimSequence* CrouchRelaxedPose; // 0xc8 (0x8)
	class UBlendSpace* CrouchCoreTargetingBlendSpace; // 0xd0 (0x8)
	class UBlendSpace* CrouchCoreNonTargetingBlendSpace; // 0xd8 (0x8)
	class UBlendSpace* CrouchWalkAdditiveBlendSpace; // 0xe0 (0x8)
	class UBlendSpace* CrouchJogAdditiveBlendSpace; // 0xe8 (0x8)
	class UBlendSpace* CrouchJogAdditiveBlendSpaceRelaxed; // 0xf0 (0x8)
	class UAnimSequence* CrouchSprintAnimation; // 0xf8 (0x8)
	class UAnimSequence* CrouchSprintTargetingAnimation; // 0x100 (0x8)
	class UAnimSequence* SwimRelaxedPose; // 0x108 (0x8)
	class UAnimSequence* SwimTargetingPose; // 0x110 (0x8)
	class UAnimSequence* SwimNonTargetingPose; // 0x118 (0x8)
	class UBlendSpace* SwimJogAdditiveBlendSpace; // 0x120 (0x8)
	class UAnimSequence* SwimSprintAnimation; // 0x128 (0x8)
	class UAimOffsetBlendSpace* SwimTargetingAimOffset; // 0x130 (0x8)
	class UAnimSequence* SwimIdleNoise; // 0x138 (0x8)
	class UAnimSequence* IdleNoiseARDownSights; // 0x140 (0x8)
	class UAnimSequence* SwimJumpSurfaceEndAdditve; // 0x148 (0x8)
	class UAnimSequence* SwimJumpSurfaceLoopAdditve; // 0x150 (0x8)
	class UAnimSequence* SwimJumpFallLoopAdditve; // 0x158 (0x8)
	class UAnimSequence* SwimJumpStartLoopAdditve; // 0x160 (0x8)
	class UAnimSequence* SwimJumpStartAdditve; // 0x168 (0x8)
	class UAnimSequence* FlyModeLoopAdditive; // 0x170 (0x8)
	class UAnimSequence* FlyModeStartAdditive; // 0x178 (0x8)
	class UAnimSequence* ZipLineStartAdditve; // 0x180 (0x8)
	class UAnimSequence* JetPackJumpAdditve; // 0x188 (0x8)
	class UAnimSequence* JetPackStartAdditve; // 0x190 (0x8)
	class UAnimSequence* FallAdditive; // 0x198 (0x8)
	class UAnimSequence* JumpLoopAdditive; // 0x1a0 (0x8)
	class UAnimSequence* JumpUpAdditive; // 0x1a8 (0x8)
	class UAnimSequence* WeaponChargeLoop; // 0x1b0 (0x8)
	class UAnimSequence* SwimUpperBodyAdditivePoseOffset; // 0x1b8 (0x8)
	class UAnimSequence* WeaponInspectAnimation; // 0x1c0 (0x8)
	bool bOverridePitchAndYawOffsets; // 0x1c8 (0x1)
	unsigned char unreflected_1c9[0x3]; // 0x1c9 (0x3) 
	struct FFortAnimInput_AdjustedAimOffset AnimSetOffsets; // 0x1cc (0x10)
	unsigned char unreflected_1dc[0x4]; // 0x1dc (0x4) 
	struct TArray<struct FName> BonesToHide; // 0x1e0 (0x10)
	bool bOverrideHandIKRetargetingWeight; // 0x1f0 (0x1)
	unsigned char unreflected_1f1[0x3]; // 0x1f1 (0x3) 
	float HandIKRetargetingWeight; // 0x1f4 (0x4)
	bool bForceKneeSliding; // 0x1f8 (0x1)
	unsigned char padding_1f9[0x7]; // 0x1f9 (0x7)
};

