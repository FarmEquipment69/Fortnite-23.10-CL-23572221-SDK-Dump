// Class /Script/FortniteGame.FortAbilitySystemComponent
// Size: 0x1768
class UFortAbilitySystemComponent : public UAbilitySystemComponent
{
	struct FMulticastInlineDelegate OnClientVehicleBlockingChanged; // 0x1398 (0x10)
	unsigned char unreflected_13a8[0x210]; // 0x13a8 (0x210) 
	struct FReplicatedMontagePair LandingMontagePair; // 0x15b8 (0x20)
	unsigned char unreflected_15d8[0x8]; // 0x15d8 (0x8) 
	struct FGameplayAbilityRepSharedAnim RepSharedAnimInfo; // 0x15e0 (0x10)
	unsigned char padding_15f0[0x178]; // 0x15f0 (0x178)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilitySystemComponent.StopOverrideReplicateMontageAnimPosition (Underlying native function: StopOverrideReplicateMontageAnimPosition 0x7e24eec)
	void StopOverrideReplicateMontageAnimPosition(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.StartOverrideReplicateMontageAnimPosition (Underlying native function: StartOverrideReplicateMontageAnimPosition 0x7e24eb0)
	void StartOverrideReplicateMontageAnimPosition(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.SetSharedAnimStateWithMontage (Underlying native function: SetSharedAnimStateWithMontage 0x7e24d38)
	void SetSharedAnimStateWithMontage(enum EFortSharedAnimationState& State, class UAnimMontage*& Montage); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.SetSharedAnimState (Underlying native function: SetSharedAnimState 0x7e24cac)
	void SetSharedAnimState(enum EFortSharedAnimationState& State); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.SetLandingMontageReplication (Underlying native function: SetLandingMontageReplication 0x7e24b60)
	void SetLandingMontageReplication(class UAnimMontage*& Montage1, struct FName& Section1, class UAnimMontage*& Montage2, struct FName& Section2); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.RemoveActiveEffectsWithTagsAndSource (Underlying native function: RemoveActiveEffectsWithTagsAndSource 0x7e2499c)
	int RemoveActiveEffectsWithTagsAndSource(struct FGameplayTagContainer& Tags, class UObject*& Source); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.OverrideAbilityBehaviorDistanceValueByTag (Underlying native function: OverrideAbilityBehaviorDistanceValueByTag 0x7e2480c)
	void OverrideAbilityBehaviorDistanceValueByTag(struct FGameplayTagContainer& Tags, struct FGameplayTagContainer& GameplayAbilityDistanceTagContainer, float& DistanceValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.OnRep_SharedAnim (Underlying native function: OnRep_SharedAnim 0x7e247f8)
	void OnRepSharedAnim(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.NetMulticast_RefreshActiveGameplayEffectCueEvents (Underlying native function: NetMulticast_RefreshActiveGameplayEffectCueEvents 0x167f950)
	void NetMulticastRefreshActiveGameplayEffectCueEvents(); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.MakeFortEffectContext (Underlying native function: MakeFortEffectContext 0x266a0b8)
	struct FGameplayEffectContextHandle MakeFortEffectContext(class UObject*& SourceObject, class AActor*& EffectCauser, class AActor*& DamageSource, int& GameplayEffectLevel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.HasActiveAbilityWithAnyMatchingTag (Underlying native function: HasActiveAbilityWithAnyMatchingTag 0x7e2472c)
	bool HasActiveAbilityWithAnyMatchingTag(struct FGameplayTagContainer& Tags); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.HasAbilityWithAnyMatchingTag (Underlying native function: HasAbilityWithAnyMatchingTag 0x7e24618)
	bool HasAbilityWithAnyMatchingTag(struct FGameplayTagContainer& Tags, bool& bActiveAbilitiesOnly); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.GetAttributeMagnitude (Underlying native function: GetAttributeMagnitude 0x7e24588)
	float GetAttributeMagnitude(struct FAttributeInfo& Info); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.GetActiveEffectsWithAllTagsAndSource (Underlying native function: GetActiveEffectsWithAllTagsAndSource 0x7e2445c)
	struct TArray<struct FActiveGameplayEffectHandle*> GetActiveEffectsWithAllTagsAndSource(struct FGameplayTagContainer& Tags, class UObject*& Source); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.FindAttributeInformation (Underlying native function: FindAttributeInformation 0x7e242e4)
	struct FAttributeInfo FindAttributeInformation(struct FString& AttributeName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.CanActivateAbilityWithMatchingTag (Underlying native function: CanActivateAbilityWithMatchingTag 0x7e24218)
	bool CanActivateAbilityWithMatchingTag(struct FGameplayTagContainer& GameplayAbilityTags); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.BP_UnBlockAbilitiesWithTags (Underlying native function: BP_UnBlockAbilitiesWithTags 0x7e240d4)
	void BPUnBlockAbilitiesWithTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.BP_FortApplyGameplayEffectToTarget (Underlying native function: BP_FortApplyGameplayEffectToTarget 0x7e23e38)
	struct FActiveGameplayEffectHandle* BPFortApplyGameplayEffectToTarget(class UClass*& GameplayEffectClass, class UAbilitySystemComponent*& TargetOfEffect, class UObject*& OptionalSourceObject, class AActor*& OptionalEffectCauser, class AActor*& OptionalDamageSource, float& Level, struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.BP_FortApplyGameplayEffectToSelf (Underlying native function: BP_FortApplyGameplayEffectToSelf 0x7e23be8)
	struct FActiveGameplayEffectHandle* BPFortApplyGameplayEffectToSelf(class UClass*& GameplayEffectClass, class UObject*& OptionalSourceObject, class AActor*& OptionalEffectCauser, class AActor*& OptionalDamageSource, float& Level, struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.BP_FortApplyGameplayEffectSpecToTarget (Underlying native function: BP_FortApplyGameplayEffectSpecToTarget 0x7e23958)
	struct FActiveGameplayEffectHandle* BPFortApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle, class UAbilitySystemComponent*& TargetOfEffect, class UObject*& OptionalSourceObject, class AActor*& OptionalEffectCauser, class AActor*& OptionalDamageSource, struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.BP_CancelAbilitiesWithTags (Underlying native function: BP_CancelAbilitiesWithTags 0x7e2389c)
	void BPCancelAbilitiesWithTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponent.BP_BlockAbilitiesWithTags (Underlying native function: BP_BlockAbilitiesWithTags 0x7e2376c)
	void BPBlockAbilitiesWithTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

