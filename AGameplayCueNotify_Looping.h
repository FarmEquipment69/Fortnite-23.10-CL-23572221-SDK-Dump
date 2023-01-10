// Class /Script/GameplayAbilities.GameplayCueNotify_Looping
// Size: 0xe38
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x2e0 (0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x318 (0x40)
	struct FGameplayCueNotify_BurstEffects ApplicationEffects; // 0x358 (0x288)
	struct FGameplayCueNotify_SpawnResult ApplicationSpawnResults; // 0x5e0 (0x58)
	struct FGameplayCueNotify_LoopingEffects LoopingEffects; // 0x638 (0x1e0)
	struct FGameplayCueNotify_SpawnResult LoopingSpawnResults; // 0x818 (0x58)
	struct FGameplayCueNotify_BurstEffects RecurringEffects; // 0x870 (0x288)
	struct FGameplayCueNotify_SpawnResult RecurringSpawnResults; // 0xaf8 (0x58)
	struct FGameplayCueNotify_BurstEffects RemovalEffects; // 0xb50 (0x288)
	struct FGameplayCueNotify_SpawnResult RemovalSpawnResults; // 0xdd8 (0x58)
	unsigned char padding_e30[0x8]; // 0xe30 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRecurring (Has no native function)
	void OnRecurring(class AActor*& Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnApplication (Has no native function)
	void OnApplication(class AActor*& Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // (Event | Protected | HasOutParms | BlueprintEvent)
};

