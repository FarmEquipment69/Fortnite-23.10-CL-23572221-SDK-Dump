// ScriptStruct /Script/Engine.SkeletalMeshLODInfo
// Size: 0xd0
struct FSkeletalMeshLODInfo
{
	struct FPerPlatformFloat ScreenSize; // 0x0 (0x4)
	float LODHysteresis; // 0x4 (0x4)
	struct TArray<int> LODMaterialMap; // 0x8 (0x10)
	struct FSkeletalMeshBuildSettings BuildSettings; // 0x18 (0x14)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x2c (0x3c)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x68 (0x10)
	struct TArray<struct FBoneReference> BonesToPrioritize; // 0x78 (0x10)
	struct TArray<struct FSectionReference> SectionsToPrioritize; // 0x88 (0x10)
	float WeightOfPrioritization; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	class UAnimSequence* BakePose; // 0xa0 (0x8)
	class UAnimSequence* BakePoseOverride; // 0xa8 (0x8)
	struct FString SourceImportFilename; // 0xb0 (0x10)
	enum ESkinCacheUsage SkinCacheUsage; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x3]; // 0xc1 (0x3) 
	float MorphTargetPositionErrorTolerance; // 0xc4 (0x4)
	unsigned char bHasBeenSimplified; // 0xc8 (0x1)
	unsigned char bHasPerLODVertexColors; // 0xc8 (0x1)
	unsigned char bAllowCPUAccess; // 0xc8 (0x1)
	unsigned char bSupportUniformlyDistributedSampling; // 0xc8 (0x1)
	unsigned char padding_c9[0x7]; // 0xc9 (0x7)
};

