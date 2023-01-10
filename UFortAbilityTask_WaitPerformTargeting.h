// Class /Script/FortniteGame.FortAbilityTask_WaitPerformTargeting
// Size: 0xc8
class UFortAbilityTask_WaitPerformTargeting : public UAbilityTask
{
	struct FMulticastInlineDelegate Targeted; // 0x78 (0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x88 (0x10)
	class UTargetingPreset* TargetingPreset; // 0x98 (0x8)
	struct TArray<class AActor*> InitialTargets; // 0xa0 (0x10)
	unsigned char bForceTargetingOnServer; // 0xb0 (0x1)
	unsigned char bUseAsyncTargeting; // 0xb0 (0x1)
	unsigned char padding_b1[0x17]; // 0xb1 (0x17)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_WaitPerformTargeting.WaitPerformTargetingWithTargets (Underlying native function: WaitPerformTargetingWithTargets 0x7e73a84)
	static class UFortAbilityTask_WaitPerformTargeting* WaitPerformTargetingWithTargets(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, class UTargetingPreset*& TargetingPreset, bool& bForceTargetingOnServer, bool& bUseAsyncTargeting, struct TArray<class AActor*>& InTargets); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_WaitPerformTargeting.WaitPerformTargeting (Underlying native function: WaitPerformTargeting 0x7e738d8)
	static class UFortAbilityTask_WaitPerformTargeting* WaitPerformTargeting(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, class UTargetingPreset*& TargetingPreset, bool& bForceTargetingOnServer, bool& bUseAsyncTargeting); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_WaitPerformTargeting.OnTargetDataReadyCallback (Underlying native function: OnTargetDataReadyCallback 0x7e71a44)
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAbilityTask_WaitPerformTargeting.OnTargetDataCancelledCallback (Underlying native function: OnTargetDataCancelledCallback 0x7e71820)
	void OnTargetDataCancelledCallback(); // (Final | Native | Public)
};

