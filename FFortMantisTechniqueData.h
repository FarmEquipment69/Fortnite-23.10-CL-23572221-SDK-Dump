// ScriptStruct /Script/MantisRuntime.FortMantisTechniqueData
// Size: 0xe0
struct FFortMantisTechniqueData
{
	struct FName Name; // 0x0 (0x4)
	bool bStartsSequence; // 0x4 (0x1)
	bool bEndsSequence; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	float InputWindowDelay; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UAnimMontage* Montage; // 0x10 (0x8)
	struct FGameplayTagContainer ActivationGameplayCues; // 0x18 (0x20)
	bool bUseRootMotion; // 0x38 (0x1)
	enum EFortMantisTechniqueActivationInputType ActivationInputType; // 0x39 (0x1)
	enum EFortMantisTechniqueActivationTimingType ActivationTimingType; // 0x3a (0x1)
	unsigned char unreflected_3b[0x1]; // 0x3b (0x1) 
	float MinInputHoldDuration; // 0x3c (0x4)
	float MaxInputHoldDuration; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FGameplayTagQuery ActivationTagQuery; // 0x48 (0x48)
	struct FGameplayTagQuery OngoingTagQuery; // 0x90 (0x48)
	struct FGameplayTag ApplicationTag; // 0xd8 (0x4)
	struct FGameplayTag ActivationApplicationTag; // 0xdc (0x4)
};

