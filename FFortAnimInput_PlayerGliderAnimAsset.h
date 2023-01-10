// ScriptStruct /Script/FortniteGame.FortAnimInput_PlayerGliderAnimAsset
// Size: 0x268
struct FFortAnimInput_PlayerGliderAnimAsset
{
	class UBlendSpace* DefaultBaseBS; // 0x0 (0x8)
	class UBlendSpace* DefaultBodyAdditiveMaleMediumBS; // 0x8 (0x8)
	class UBlendSpace* DefaultBodyAdditiveMaleLargeBS; // 0x10 (0x8)
	class UBlendSpace* DefaultBodyAdditiveFemaleSmallBS; // 0x18 (0x8)
	class UBlendSpace* DefaultBodyAdditiveFemaleMediumBS; // 0x20 (0x8)
	class UBlendSpace* DefaultBodyAdditiveFemaleLargeBS; // 0x28 (0x8)
	class UBlendSpace* DefaultTurnAdditiveMaleMediumBS; // 0x30 (0x8)
	class UBlendSpace* DefaultTurnAdditiveMaleLargeBS; // 0x38 (0x8)
	class UBlendSpace* DefaultTurnAdditiveFemaleSmallBS; // 0x40 (0x8)
	class UBlendSpace* DefaultTurnAdditiveFemaleMediumBS; // 0x48 (0x8)
	class UBlendSpace* DefaultTurnAdditiveFemaleLargeBS; // 0x50 (0x8)
	class UBlendSpace* IntoBaseBS; // 0x58 (0x8)
	class UBlendSpace* IntoBaseMaleMediumBS; // 0x60 (0x8)
	class UBlendSpace* IntoBodyAdditiveMaleMediumBS; // 0x68 (0x8)
	class UBlendSpace* IntoBodyAdditiveMaleLargeBS; // 0x70 (0x8)
	class UBlendSpace* IntoBodyAdditiveFemaleSmallBS; // 0x78 (0x8)
	class UBlendSpace* IntoBodyAdditiveFemaleMediumBS; // 0x80 (0x8)
	class UBlendSpace* IntoBodyAdditiveFemaleLargeBS; // 0x88 (0x8)
	class UBlendSpace* IntoTurnAdditiveMaleMediumBS; // 0x90 (0x8)
	class UBlendSpace* IntoTurnAdditiveMaleLargeBS; // 0x98 (0x8)
	class UBlendSpace* IntoTurnAdditiveFemaleSmallBS; // 0xa0 (0x8)
	class UBlendSpace* IntoTurnAdditiveFemaleMediumBS; // 0xa8 (0x8)
	class UBlendSpace* IntoTurnAdditiveFemaleLargeBS; // 0xb0 (0x8)
	class UBlendSpace* LeanMaleMediumBS; // 0xb8 (0x8)
	class UBlendSpace* LeanMaleLargeBS; // 0xc0 (0x8)
	class UBlendSpace* LeanFemaleSmallBS; // 0xc8 (0x8)
	class UBlendSpace* LeanFemaleMediumBS; // 0xd0 (0x8)
	class UBlendSpace* LeanFemaleLargeBS; // 0xd8 (0x8)
	class UAnimSequence* LeanAdditiveCenterMaleMediumPose; // 0xe0 (0x8)
	class UAnimSequence* LeanAdditiveCenterMaleLargePose; // 0xe8 (0x8)
	class UAnimSequence* LeanAdditiveCenterFemaleSmallPose; // 0xf0 (0x8)
	class UAnimSequence* LeanAdditiveCenterFemaleMediumPose; // 0xf8 (0x8)
	class UAnimSequence* LeanAdditiveCenterFemaleLargePose; // 0x100 (0x8)
	class UBlendSpace* LeanAdditiveIntoBS; // 0x108 (0x8)
	class UAnimSequence* LeanAdditiveForwardIntoAnim; // 0x110 (0x8)
	class UAnimSequence* LeanAdditiveForwardIntoFromDeployAnim; // 0x118 (0x8)
	class UAnimSequence* LeanAdditiveBackIntoAnim; // 0x120 (0x8)
	class UAnimSequence* LeanAdditiveLeftIntoAnim; // 0x128 (0x8)
	class UAnimSequence* LeanAdditiveRightIntoAnim; // 0x130 (0x8)
	class UAnimSequence* LeanAdditiveForwardOutAnim; // 0x138 (0x8)
	class UAnimSequence* LeanAdditiveBackOutAnim; // 0x140 (0x8)
	class UAnimSequence* LeanAdditiveLeftOutAnim; // 0x148 (0x8)
	class UAnimSequence* LeanAdditiveRightOutAnim; // 0x150 (0x8)
	class UBlendSpace* ToGlideBS; // 0x158 (0x8)
	class UBlendSpace* ToGlideLeanBS; // 0x160 (0x8)
	class UBlendSpace* ToDiveBS; // 0x168 (0x8)
	class UBlendSpace* ToDiveLeanBS; // 0x170 (0x8)
	class UBlendSpace* DiveWeaponRAdditiveBS; // 0x178 (0x8)
	class UAnimSequence* GlideWeaponRAdditiveAnim; // 0x180 (0x8)
	class UBlendSpace* GenericAdditiveMaleBS; // 0x188 (0x8)
	class UBlendSpace* GenericAdditiveFemaleBS; // 0x190 (0x8)
	float RootModPitchMin; // 0x198 (0x4)
	float RootModPitchMax; // 0x19c (0x4)
	float RootModYOffsetMin; // 0x1a0 (0x4)
	float RootModYOffsetMax; // 0x1a4 (0x4)
	struct FPelvisMod_VerticalInput_Spring PelvisModVertical; // 0x1a8 (0x14)
	struct FPelvisMod_LateralInput_Spring PelvisModLateral; // 0x1bc (0x1c)
	struct FPelvisMod_BankAngleInput_Spring PelvisModBankAngle; // 0x1d8 (0x24)
	struct FThighMod_LegAngleInput ThighModLegAngle; // 0x1fc (0x18)
	struct FThighMod_LegPitchSpring ThighModLegPitch; // 0x214 (0x14)
	struct FThighMod_LegBankSpring ThighModLegBank; // 0x228 (0x14)
	struct FThighMod_LeftLegDrag* ThighModLeftLegDrag; // 0x23c (0x8)
	enum EGliderType PlayerGliderType; // 0x244 (0x1)
	bool bEnableSpringMods; // 0x245 (0x1)
	bool bAllowPlayerDeployRootMod; // 0x246 (0x1)
	bool bUseSurfStyle; // 0x247 (0x1)
	bool bUseLeanPlayRateAdjust; // 0x248 (0x1)
	bool bUseForwardAsYBS; // 0x249 (0x1)
	bool bUseDeployCurveForIntoPlayRateAdjust; // 0x24a (0x1)
	unsigned char unreflected_24b[0x1]; // 0x24b (0x1) 
	float LeanForwardValue; // 0x24c (0x4)
	float IdleValue; // 0x250 (0x4)
	float LeanBackValue; // 0x254 (0x4)
	float IdleInterpToSpeed; // 0x258 (0x4)
	float LeanForwardInterpToSpeed; // 0x25c (0x4)
	float LeanBackInterpToSpeed; // 0x260 (0x4)
	unsigned char padding_264[0x4]; // 0x264 (0x4)
};

