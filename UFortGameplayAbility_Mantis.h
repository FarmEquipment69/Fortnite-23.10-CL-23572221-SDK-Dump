// Class /Script/MantisRuntime.FortGameplayAbility_Mantis
// Size: 0xb48
class UFortGameplayAbility_Mantis : public UFortGameplayAbility
{
	bool bAllowRootMotionWarping; // 0xb20 (0x1)
	unsigned char unreflected_b21[0x7]; // 0xb21 (0x7) 
	class UFortMantisPawnComponent* MantisPawnComponent; // 0xb28 (0x8)
	class UAbilityTask_PlayMontageAndWait* MontageTask; // 0xb30 (0x8)
	class UFortAbilityTask_ApplyRootMotionMantisForce* RootMotionTask; // 0xb38 (0x8)
	unsigned char padding_b40[0x8]; // 0xb40 (0x8)

	/* Functions */

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished (Underlying native function: OnMontageFinished 0x6de41ec)
	void OnMontageFinished(); // (Final | Native | Protected)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled (Underlying native function: OnMontageCancelled 0x6de4198)
	void OnMontageCancelled(); // (Final | Native | Protected)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarping (Underlying native function: ConfigureRootMotionWarping 0x6de3de0)
	void ConfigureRootMotionWarping(struct FName& TechniqueName, class AActor*& OutTargetActor, bool& bOutAllowTranslationWarp, bool& bOutAllowRotationWarp, bool& bOutSnapshotTargetLocation); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit (Has no native function)
	void BPOnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTag& ApplicationTag); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisInputEvent (Has no native function)
	void BPOnMantisInputEvent(enum EFortMantisTechniqueActivationInputType& InputType, enum EFortMantisTechniqueActivationTimingType& InputTiming, bool& bDidInputStartTechnique, bool& bDidInputQueueTechnique); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_MantisAbilityTechniqueStarted (Has no native function)
	void BPMantisAbilityTechniqueStarted(struct FGameplayTagContainer& OwningTags, struct FName& SequenceName, bool& StartsSequence, bool& EndsSequence); // (Event | Protected | BlueprintEvent)
};

