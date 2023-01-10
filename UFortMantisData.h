// Class /Script/MantisRuntime.FortMantisData
// Size: 0x88
class UFortMantisData : public UDataAsset
{
	bool bDetachCharacterRotationFromCamera; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float ReattachCharacterRotationBlendTime; // 0x34 (0x4)
	float ReattachCharacterRotationBlendExponent; // 0x38 (0x4)
	float WindupCharacterRotationRate; // 0x3c (0x4)
	float ExecutionCharacterRotationRate; // 0x40 (0x4)
	float RecoveryCharacterRotationRate; // 0x44 (0x4)
	bool bShowTargetHealthBar; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	class UClass* TechniqueAbility; // 0x50 (0x8)
	struct TArray<struct FFortGameplayEffectContainer> TechniqueAdditionEffectContainers; // 0x58 (0x10)
	struct TArray<struct FFortMantisTechniqueData> Techniques; // 0x68 (0x10)
	struct TArray<struct FFortMantisTechniqueBranch> Branches; // 0x78 (0x10)
};

