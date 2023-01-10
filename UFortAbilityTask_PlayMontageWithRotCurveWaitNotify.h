// Class /Script/FortniteGame.FortAbilityTask_PlayMontageWithRotCurveWaitNotify
// Size: 0x1a8
class UFortAbilityTask_PlayMontageWithRotCurveWaitNotify : public UFortAbilityTask_PlayMontageWaitNotify
{
	unsigned char unreflected_1a8[0x1a8]; 

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWithRotCurveWaitNotify.PlayMontageWithRotCurveAndWaitNotify (Underlying native function: PlayMontageWithRotCurveAndWaitNotify 0x7e7298c)
	static class UFortAbilityTask_PlayMontageWithRotCurveWaitNotify* PlayMontageWithRotCurveAndWaitNotify(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FPickedTurnTransitionData& InData, bool& bCanUseDesiredRotationAsFallback); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWithRotCurveWaitNotify.OnNotifyBegin (Underlying native function: OnNotifyBegin 0x7e716a0)
	void OnNotifyBegin(class UAnimSequenceBase*& Animation, struct FGameplayTag& NotifyTag); // (Final | Native | Protected)
};

