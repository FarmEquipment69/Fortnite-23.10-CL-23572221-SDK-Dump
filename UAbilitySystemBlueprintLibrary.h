// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin (Underlying native function: TargetDataHasOrigin 0x66e6acc)
	static bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult (Underlying native function: TargetDataHasHitResult 0x66e69c8)
	static bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint (Underlying native function: TargetDataHasEndPoint 0x66e6884)
	static bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor (Underlying native function: TargetDataHasActor 0x66e6740)
	static bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax (Underlying native function: SetStackCountToMax 0x66e6560)
	static struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle& SpecHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount (Underlying native function: SetStackCount 0x66e63fc)
	static struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle& SpecHandle, int& StackCount); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration (Underlying native function: SetDuration 0x66e62d0)
	static struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle& SpecHandle, float& Duration); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor (Underlying native function: SendGameplayEventToActor 0x20f47d4)
	static void SendGameplayEventToActor(class AActor*& Actor, struct FGameplayTag& EventTag, struct FGameplayEventData& Payload); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags (Underlying native function: RemoveLooseGameplayTags 0x20f4670)
	static bool RemoveLooseGameplayTags(class AActor*& Actor, struct FGameplayTagContainer& GameplayTags, bool& bShouldReplicate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute (Underlying native function: NotEqual_GameplayAttributeGameplayAttribute 0x66e38d0)
	static bool NotEqualGameplayAttributeGameplayAttribute(struct FGameplayAttribute& AttributeA, struct FGameplayAttribute& AttributeB); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle (Underlying native function: NotEqual_GameplayAbilitySpecHandle 0x66e37f4)
	static bool NotEqualGameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle (Underlying native function: NotEqual_ActiveGameplayEffectHandle 0x66e3710)
	static bool NotEqualActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle*& A, struct FActiveGameplayEffectHandle*& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle (Underlying native function: MakeSpecHandle 0x66e2a90)
	static struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect*& InGameplayEffect, class AActor*& InInstigator, class AActor*& InEffectCauser, float& InLevel); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters (Underlying native function: MakeGameplayCueParameters 0x1851704)
	static struct FGameplayCueParameters MakeGameplayCueParameters(float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int& GameplayEffectLevel, int& AbilityLevel, class USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle (Underlying native function: MakeFilterHandle 0x66e27d0)
	static struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter& Filter, class AActor*& FilterActor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid (Underlying native function: IsValid 0x66e2328)
	static bool IsValid(struct FGameplayAttribute& Attribute); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer (Underlying native function: IsInstigatorLocallyControlledPlayer 0x66e2274)
	static bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled (Underlying native function: IsInstigatorLocallyControlled 0x66e21c0)
	static bool IsInstigatorLocallyControlled(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult (Underlying native function: HasHitResult 0x66e206c)
	static bool HasHitResult(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin (Underlying native function: GetTargetDataOrigin 0x66e1f10)
	static struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform (Underlying native function: GetTargetDataEndPointTransform 0x66e1d84)
	static struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint (Underlying native function: GetTargetDataEndPoint 0x66e1c6c)
	static struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin (Underlying native function: GetOrigin 0x66e1b74)
	static struct FVector GetOrigin(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude (Underlying native function: GetModifiedAttributeMagnitude 0x66e1a00)
	static float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayAttribute& Attribute); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform (Underlying native function: GetInstigatorTransform 0x66e1924)
	static struct FTransform GetInstigatorTransform(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor (Underlying native function: GetInstigatorActor 0x66e187c)
	static class AActor* GetInstigatorActor(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData (Underlying native function: GetHitResultFromTargetData 0x66e16b0)
	static struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult (Underlying native function: GetHitResult 0x66e1544)
	static struct FHitResult GetHitResult(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData (Underlying native function: GetGameplayEffectUIData 0x66e13c4)
	static class UGameplayEffectUIData* GetGameplayEffectUIData(class UClass*& EffectClass, class UClass*& DataType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle (Underlying native function: GetGameplayEffectFromActiveEffectHandle 0x66e11d4)
	static class UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal (Underlying native function: GetGameplayCueEndLocationAndNormal 0x66e0d84)
	static bool GetGameplayCueEndLocationAndNormal(class AActor*& TargetActor, struct FGameplayCueParameters& Parameters, struct FVector& Location, struct FVector& Normal); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection (Underlying native function: GetGameplayCueDirection 0x66e0c38)
	static bool GetGameplayCueDirection(class AActor*& TargetActor, struct FGameplayCueParameters& Parameters, struct FVector& Direction); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle (Underlying native function: GetGameplayAbilityFromSpecHandle 0x66e0990)
	static class UGameplayAbility* GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent*& AbilitySystem, struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent (Underlying native function: GetFloatAttributeFromAbilitySystemComponent 0x66e081c)
	static float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent*& AbilitySystem, struct FGameplayAttribute& Attribute, bool& bSuccessfullyFoundAttribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent (Underlying native function: GetFloatAttributeBaseFromAbilitySystemComponent 0x66e06a8)
	static float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent*& AbilitySystemComponent, struct FGameplayAttribute& Attribute, bool& bSuccessfullyFoundAttribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase (Underlying native function: GetFloatAttributeBase 0x66e0534)
	static float GetFloatAttributeBase(class AActor*& Actor, struct FGameplayAttribute& Attribute, bool& bSuccessfullyFoundAttribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute (Underlying native function: GetFloatAttribute 0x66e03c0)
	static float GetFloatAttribute(class AActor*& Actor, struct FGameplayAttribute& Attribute, bool& bSuccessfullyFoundAttribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext (Underlying native function: GetEffectContext 0x66e0260)
	static struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle& SpecHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute (Underlying native function: GetDebugStringFromGameplayAttribute 0x66dffcc)
	static struct FString GetDebugStringFromGameplayAttribute(struct FGameplayAttribute& Attribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData (Underlying native function: GetDataCountFromTargetData 0x66dff0c)
	static int GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles (Underlying native function: GetAllLinkedGameplayEffectSpecHandles 0x66dfcf8)
	static struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle& SpecHandle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData (Underlying native function: GetAllActorsFromTargetData 0x66dfb5c)
	static struct TArray<class AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData (Underlying native function: GetActorsFromTargetData 0x66df978)
	static struct TArray<class AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount (Underlying native function: GetActorCount 0x66df8b0)
	static int GetActorCount(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex (Underlying native function: GetActorByIndex 0x66df7b8)
	static class AActor* GetActorByIndex(struct FGameplayCueParameters& Parameters, int& Index); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration (Underlying native function: GetActiveGameplayEffectTotalDuration 0x66df734)
	static float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime (Underlying native function: GetActiveGameplayEffectStartTime 0x66df6b0)
	static float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount (Underlying native function: GetActiveGameplayEffectStackLimitCount 0x66df5f8)
	static int GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount (Underlying native function: GetActiveGameplayEffectStackCount 0x66df54c)
	static int GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration (Underlying native function: GetActiveGameplayEffectRemainingDuration 0x66df480)
	static float GetActiveGameplayEffectRemainingDuration(class UObject*& WorldContextObject, struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime (Underlying native function: GetActiveGameplayEffectExpectedEndTime 0x66df3fc)
	static float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString (Underlying native function: GetActiveGameplayEffectDebugString 0x66df364)
	static struct FString GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent (Underlying native function: GetAbilitySystemComponent 0x2707660)
	static class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget (Underlying native function: ForwardGameplayCueToTarget 0x66df068)
	static void ForwardGameplayCueToTarget(struct TScriptInterface<class IGameplayCueInterface>& TargetCueInterface, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData (Underlying native function: FilterTargetData 0x66dea78)
	static struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle& ActorFilterClass); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase (Underlying native function: EvaluateAttributeValueWithTagsAndBase 0x66de620)
	static float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent*& AbilitySystem, struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float& BaseValue, bool& bSuccess); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags (Underlying native function: EvaluateAttributeValueWithTags 0x66de21c)
	static float EvaluateAttributeValueWithTags(class UAbilitySystemComponent*& AbilitySystem, struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool& bSuccess); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute (Underlying native function: EqualEqual_GameplayAttributeGameplayAttribute 0x66de0a4)
	static bool EqualEqualGameplayAttributeGameplayAttribute(struct FGameplayAttribute& AttributeA, struct FGameplayAttribute& AttributeB); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle (Underlying native function: EqualEqual_GameplayAbilitySpecHandle 0x66ddfc8)
	static bool EqualEqualGameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle (Underlying native function: EqualEqual_ActiveGameplayEffectHandle 0x66ddee4)
	static bool EqualEqualActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle*& A, struct FActiveGameplayEffectHandle*& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin (Underlying native function: EffectContextSetOrigin 0x66ddd94)
	static void EffectContextSetOrigin(struct FGameplayEffectContextHandle& EffectContext, struct FVector& Origin); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid (Underlying native function: EffectContextIsValid 0x66ddc88)
	static bool EffectContextIsValid(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled (Underlying native function: EffectContextIsInstigatorLocallyControlled 0x66ddb6c)
	static bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult (Underlying native function: EffectContextHasHitResult 0x66dda50)
	static bool EffectContextHasHitResult(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject (Underlying native function: EffectContextGetSourceObject 0x66dd938)
	static class UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor (Underlying native function: EffectContextGetOriginalInstigatorActor 0x66dd820)
	static class AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin (Underlying native function: EffectContextGetOrigin 0x66dd724)
	static struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor (Underlying native function: EffectContextGetInstigatorActor 0x66dd60c)
	static class AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult (Underlying native function: EffectContextGetHitResult 0x66dd450)
	static struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser (Underlying native function: EffectContextGetEffectCauser 0x66dd338)
	static class AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult (Underlying native function: EffectContextAddHitResult 0x66dd17c)
	static void EffectContextAddHitResult(struct FGameplayEffectContextHandle& EffectContext, struct FHitResult& HitResult, bool& bReset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor (Underlying native function: DoesTargetDataContainActor 0x66dd038)
	static bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index, class AActor*& Actor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements (Underlying native function: DoesGameplayCueMeetTagRequirements 0x66dce5c)
	static bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle (Underlying native function: CloneSpecHandle 0x66dcae0)
	static struct FGameplayEffectSpecHandle CloneSpecHandle(class AActor*& InNewInstigator, class AActor*& InEffectCauser, struct FGameplayEffectSpecHandle& GameplayEffectSpecHandleClone); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters (Underlying native function: BreakGameplayCueParameters 0x1f72af0)
	static void BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int& GameplayEffectLevel, int& AbilityLevel, class USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude (Underlying native function: AssignTagSetByCallerMagnitude 0x66dbd54)
	static struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayTag& DataTag, float& Magnitude); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude (Underlying native function: AssignSetByCallerMagnitude 0x66dbbb8)
	static struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle& SpecHandle, struct FName& DataName, float& Magnitude); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle (Underlying native function: AppendTargetDataHandle 0x66dba60)
	static struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle& TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags (Underlying native function: AddLooseGameplayTags 0x154d870)
	static bool AddLooseGameplayTags(class AActor*& Actor, struct FGameplayTagContainer& GameplayTags, bool& bShouldReplicate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec (Underlying native function: AddLinkedGameplayEffectSpec 0x66db838)
	static struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect (Underlying native function: AddLinkedGameplayEffect 0x66db57c)
	static struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle& SpecHandle, class UClass*& LinkedGameplayEffect); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags (Underlying native function: AddGrantedTags 0x66db3a8)
	static struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayTagContainer& NewGameplayTags); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag (Underlying native function: AddGrantedTag 0x66db248)
	static struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayTag& NewGameplayTag); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags (Underlying native function: AddAssetTags 0x66db078)
	static struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayTagContainer& NewGameplayTags); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag (Underlying native function: AddAssetTag 0x66daf1c)
	static struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayTag& NewGameplayTag); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations (Underlying native function: AbilityTargetDataFromLocations 0x66dadec)
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult (Underlying native function: AbilityTargetDataFromHitResult 0x66dad14)
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray (Underlying native function: AbilityTargetDataFromActorArray 0x2160270)
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<class AActor*>& ActorArray, bool& OneTargetPerHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor (Underlying native function: AbilityTargetDataFromActor 0x66dac60)
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

