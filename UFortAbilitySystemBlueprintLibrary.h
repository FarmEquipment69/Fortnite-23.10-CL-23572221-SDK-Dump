// Class /Script/FortniteGame.FortAbilitySystemBlueprintLibrary
// Size: 0x28
class UFortAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.IsGameplayEffectContextAbilityInstance (Underlying native function: IsGameplayEffectContextAbilityInstance 0x86212b0)
	static bool IsGameplayEffectContextAbilityInstance(struct FGameplayEffectContextHandle& GameplayEffectContextHandle, class UGameplayAbility*& AbilityInstance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.IsGameplayEffectContextAbilityChildOf (Underlying native function: IsGameplayEffectContextAbilityChildOf 0x862113c)
	static bool IsGameplayEffectContextAbilityChildOf(struct FGameplayEffectContextHandle& GameplayEffectContextHandle, class UClass*& AbilityClass); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.IsGameplayCueActive (Underlying native function: IsGameplayCueActive 0x8621038)
	static bool IsGameplayCueActive(class AActor*& Actor, struct FGameplayTag& GameplayCueTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.IsCooldownTagsActive (Underlying native function: IsCooldownTagsActive 0x8620ebc)
	static bool IsCooldownTagsActive(class AActor*& Actor, struct FGameplayTagContainer& CooldownTags); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GrantAndActivateAbilityOnSelfWithParams (Underlying native function: GrantAndActivateAbilityOnSelfWithParams 0x8620bc4)
	static struct FGameplayAbilitySpecHandle GrantAndActivateAbilityOnSelfWithParams(class UAbilitySystemComponent*& AbilitySystem, class UClass*& AbilityToGrant, class UObject*& ContextObject, struct FGameplayEventData& GameplayEventData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GrantAndActivateAbilityOnSelf (Underlying native function: GrantAndActivateAbilityOnSelf 0x8620a28)
	static struct FGameplayAbilitySpecHandle GrantAndActivateAbilityOnSelf(class UAbilitySystemComponent*& AbilitySystem, class UClass*& AbilityToGrant, class UObject*& ContextObject); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GetFortAbilitySystemComponent (Underlying native function: GetFortAbilitySystemComponent 0x2416544)
	static class UFortAbilitySystemComponent* GetFortAbilitySystemComponent(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GetCooldownTimeRemainingAndDuration (Underlying native function: GetCooldownTimeRemainingAndDuration 0x86207a8)
	static void GetCooldownTimeRemainingAndDuration(class AActor*& Actor, struct FGameplayTagContainer& CooldownTags, float& TimeRemaining, float& CooldownDuration); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GetCooldownTimeRemaining (Underlying native function: GetCooldownTimeRemaining 0x86206a4)
	static float GetCooldownTimeRemaining(class AActor*& Actor, struct FGameplayTagContainer& CooldownTags); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.GetAbilitySystemDebugInfo (Underlying native function: GetAbilitySystemDebugInfo 0x86205e8)
	static struct FString GetAbilitySystemDebugInfo(class AActor*& DebugActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.FilterTargetsInCone (Underlying native function: FilterTargetsInCone 0x8620334)
	static struct TArray<class AActor*> FilterTargetsInCone(class AActor*& SourceActor, struct TArray<class AActor*>& ActorsToCheck, struct FVector& ConeStart, struct FVector& ConeEnd, float& ConeRadius, struct FGameplayTagContainer& ExcludeFromObstructionTags, bool& bShouldCheckLos); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.EffectContextSetCritical (Underlying native function: EffectContextSetCritical 0x86201bc)
	static void EffectContextSetCritical(struct FGameplayEffectContextHandle& EffectContext, bool& bInCritical); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemBlueprintLibrary.AssignActiveGameplayEffectTagSetByCallerMagnitude (Underlying native function: AssignActiveGameplayEffectTagSetByCallerMagnitude 0x861ff50)
	static void AssignActiveGameplayEffectTagSetByCallerMagnitude(struct FActiveGameplayEffectHandle*& ActiveHandle, struct FGameplayTag& DataTag, float& Magnitude); // (Final | Native | Static | Public | BlueprintCallable)
};

