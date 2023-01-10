// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotConvert
// Size: 0x178
class UFortAthenaAIRuntimeParameters_AIBotConvert : public UFortAthenaAIRuntimeParameters_AIConvert
{
	unsigned char bShouldLeashFollowConverter; // 0xf8 (0x1)
	unsigned char bShouldScanAroundWhenWaiting; // 0xf8 (0x1)
	unsigned char bFollowingBehaviorEnabled; // 0xf8 (0x1)
	unsigned char bMimicBehaviorEnabled; // 0xf8 (0x1)
	unsigned char bShouldTeleportTowardsConverter; // 0xf8 (0x1)
	unsigned char bCanDanceWithConverter; // 0xf8 (0x1)
	unsigned char unreflected_f9[0x3]; // 0xf9 (0x3) 
	float SkillLevelOverride; // 0xfc (0x4)
	float PreConversionSkillLevel; // 0x100 (0x4)
	float InnerLeashRadius; // 0x104 (0x4)
	float OuterLeashRadius; // 0x108 (0x4)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	class UFortAthenaAIRuntimeParameters_Leash* PreConversionLeashParams; // 0x110 (0x8)
	float LeashFollowActorUpdateRate; // 0x118 (0x4)
	unsigned char unreflected_11c[0x4]; // 0x11c (0x4) 
	struct FVector LeashFollowActorLocalOffset; // 0x120 (0x18)
	float FollowingBehaviorRadiusSqr; // 0x138 (0x4)
	float FollowingBehaviorRadius; // 0x13c (0x4)
	float FollowingBehaviorUrgenceRadiusSqr; // 0x140 (0x4)
	float FollowingBehaviorBlockedSightAngleRad; // 0x144 (0x4)
	float MimicBehaviorRadiusSqr; // 0x148 (0x4)
	float TeleportTowardsConverterDistanceSq; // 0x14c (0x4)
	float MinDistanceFromConverterWhenTeleported; // 0x150 (0x4)
	unsigned char unreflected_154[0x4]; // 0x154 (0x4) 
	struct TArray<class UClass*> ConvertedSkillSetClasses; // 0x158 (0x10)
	struct TArray<class UClass*> PreConversionSkillSetClasses; // 0x168 (0x10)
};

