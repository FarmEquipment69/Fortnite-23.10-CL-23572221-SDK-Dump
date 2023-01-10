// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
// Size: 0x108
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync
{
	unsigned char unreflected_38[0xc0]; // 0x38 (0xc0) 
	struct FMulticastInlineDelegate Triggered; // 0xf8 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor (Underlying native function: WaitGameplayTagQueryOnActor 0x66ba184)
	static class UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(class AActor*& TargetActor, struct FGameplayTagQuery& TagQuery, enum EWaitGameplayTagQueryTriggerCondition& TriggerCondition, bool& bOnlyTriggerOnce); // (Final | Native | Static | Protected | BlueprintCallable)
};

