// ScriptStruct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x510
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{
	float LinearDampingOverride; // 0xc8 (0x4)
	float AngularDampingOverride; // 0xcc (0x4)
	unsigned char unreflected_d0[0xc0]; // 0xd0 (0xc0) 
	struct FBoneReference RelativeSpaceBone; // 0x190 (0xc)
	struct FBoneReference BoundBone; // 0x19c (0xc)
	struct FBoneReference ChainEnd; // 0x1a8 (0xc)
	unsigned char unreflected_1b4[0x4]; // 0x1b4 (0x4) 
	struct TArray<struct FAnimPhysBodyDefinition> PhysicsBodyDefinitions; // 0x1b8 (0x10)
	float GravityScale; // 0x1c8 (0x4)
	unsigned char unreflected_1cc[0x4]; // 0x1cc (0x4) 
	struct FVector GravityOverride; // 0x1d0 (0x18)
	float LinearSpringConstant; // 0x1e8 (0x4)
	float AngularSpringConstant; // 0x1ec (0x4)
	float WindScale; // 0x1f0 (0x4)
	unsigned char unreflected_1f4[0x4]; // 0x1f4 (0x4) 
	struct FVector ComponentLinearAccScale; // 0x1f8 (0x18)
	struct FVector ComponentLinearVelScale; // 0x210 (0x18)
	struct FVector ComponentAppliedLinearAccClamp; // 0x228 (0x18)
	float AngularBiasOverride; // 0x240 (0x4)
	int NumSolverIterationsPreUpdate; // 0x244 (0x4)
	int NumSolverIterationsPostUpdate; // 0x248 (0x4)
	unsigned char unreflected_24c[0x4]; // 0x24c (0x4) 
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x250 (0x10)
	struct FVector ExternalForce; // 0x260 (0x18)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x278 (0x10)
	enum AnimPhysSimSpaceType SimulationSpace; // 0x288 (0x1)
	unsigned char unreflected_289[0x2]; // 0x289 (0x2) 
	unsigned char bUseSphericalLimits; // 0x28b (0x1)
	unsigned char bUsePlanarLimit; // 0x28b (0x1)
	unsigned char bDoUpdate; // 0x28b (0x1)
	unsigned char bDoEval; // 0x28b (0x1)
	unsigned char bOverrideLinearDamping; // 0x28b (0x1)
	unsigned char bOverrideAngularBias; // 0x28b (0x1)
	unsigned char bOverrideAngularDamping; // 0x28b (0x1)
	unsigned char bEnableWind; // 0x28b (0x1)
	unsigned char bUseGravityOverride; // 0x28c (0x1)
	unsigned char bGravityOverrideInSimSpace; // 0x28c (0x1)
	unsigned char bLinearSpring; // 0x28c (0x1)
	unsigned char bAngularSpring; // 0x28c (0x1)
	unsigned char bChain; // 0x28c (0x1)
	unsigned char unreflected_28d[0x3]; // 0x28d (0x3) 
	struct FRotationRetargetingInfo RetargetingSettings; // 0x290 (0x1a0)
	unsigned char padding_430[0xe0]; // 0x430 (0xe0)
};

