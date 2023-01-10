// ScriptStruct /Script/MantisRuntime.FortMantisTargetData
// Size: 0x38
struct FFortMantisTargetData : FGameplayAbilityTargetData
{
	struct FFortMantisRootMotionWarpInfo TechniqueWarpInfo; // 0x8 (0x28)
	int TechniqueDataIndex; // 0x30 (0x4)
	bool bIsLockedOn; // 0x34 (0x1)
	unsigned char padding_35[0x3]; // 0x35 (0x3)
};

