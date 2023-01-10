// Class /Script/FortniteGame.FortGameplayCueFunctionLibrary
// Size: 0x28
class UFortGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.RemoveGameplayCueLocal (Underlying native function: RemoveGameplayCueLocal 0x256dd3c)
	static void RemoveGameplayCueLocal(class AActor*& Target, struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& CueParameters, bool& bOnlyNotifies); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.RemoveGameplayCue (Underlying native function: RemoveGameplayCue 0x2a88acc)
	static void RemoveGameplayCue(class AActor*& TargetActor, struct FGameplayTag& GameplayCueTag); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.PlayBurstEffect (Underlying native function: PlayBurstEffect 0x7e71e90)
	static void PlayBurstEffect(struct FFortBurstEffectData& BurstEffect, class AActor*& Target, struct FGameplayCueParameters& CueParameters, struct FFortGameplayCueSpawnResult& OutResult); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.ExecuteGameplayCueLocal (Underlying native function: ExecuteGameplayCueLocal 0x23267f4)
	static void ExecuteGameplayCueLocal(class AActor*& Target, struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& CueParameters, bool& bOnlyNotifies); // (Final | 0x00000002 | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.ExecuteGameplayCue (Underlying native function: ExecuteGameplayCue 0x7e701c4)
	static void ExecuteGameplayCue(class AActor*& TargetActor, struct FGameplayTag& GameplayCueTag, struct FGameplayEffectContextHandle& Context); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.CheckSpawnConditionForSource (Underlying native function: CheckSpawnConditionForSource 0x7e6edc8)
	static bool CheckSpawnConditionForSource(class AActor*& Target, class AActor*& SourceActor, struct FFortGameplayCueSpawnCondition& Condition); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.CheckSpawnConditionForHitResult (Underlying native function: CheckSpawnConditionForHitResult 0x7e6ec00)
	static bool CheckSpawnConditionForHitResult(class AActor*& Target, class AActor*& SourceActor, struct FHitResult& HitResult, struct FFortGameplayCueSpawnCondition& Condition); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.CheckSpawnConditionForCueParameters (Underlying native function: CheckSpawnConditionForCueParameters 0x7e6ea6c)
	static bool CheckSpawnConditionForCueParameters(class AActor*& Target, struct FGameplayCueParameters& CueParameters, struct FFortGameplayCueSpawnCondition& Condition); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.BuildCueParametersFromSource (Underlying native function: BuildCueParametersFromSource 0x7e6e988)
	static void BuildCueParametersFromSource(class AActor*& SourceActor, struct FGameplayCueParameters& OutCueParameters); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.BuildCueParametersFromHitResult (Underlying native function: BuildCueParametersFromHitResult 0x7e6e83c)
	static void BuildCueParametersFromHitResult(class AActor*& SourceActor, struct FHitResult& HitResult, struct FGameplayCueParameters& OutCueParameters); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.AddGameplayCueLocal (Underlying native function: AddGameplayCueLocal 0x26c4b88)
	static void AddGameplayCueLocal(class AActor*& Target, struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& CueParameters, bool& bOnlyNotifies); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayCueFunctionLibrary.AddGameplayCue (Underlying native function: AddGameplayCue 0x7e6de70)
	static void AddGameplayCue(class AActor*& TargetActor, struct FGameplayTag& GameplayCueTag, struct FGameplayEffectContextHandle& Context); // (Final | Native | Static | Public | BlueprintCallable)
};

