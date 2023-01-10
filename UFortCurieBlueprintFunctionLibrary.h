// Class /Script/FortniteGame.FortCurieBlueprintFunctionLibrary
// Size: 0x28
class UFortCurieBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.RemoveActorFromCurieIgnoreTransformChanges (Underlying native function: RemoveActorFromCurieIgnoreTransformChanges 0x6df70d4)
	static void RemoveActorFromCurieIgnoreTransformChanges(class AActor*& Actor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.IsCurieEnabled (Underlying native function: IsCurieEnabled 0x8574614)
	static bool IsCurieEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.IsCurieActiveForActor (Underlying native function: IsCurieActiveForActor 0x8574554)
	static bool IsCurieActiveForActor(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.IsCurieActive (Underlying native function: IsCurieActive 0x85744d0)
	static bool IsCurieActive(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.IgniteGrassInBounds (Underlying native function: IgniteGrassInBounds 0x8574178)
	static void IgniteGrassInBounds(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, struct FBox& IgnitionBounds, int& PropagationFuel); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.HasCurieStateAttached (Underlying native function: HasCurieStateAttached 0x8574028)
	static bool HasCurieStateAttached(class AActor*& Actor, struct FGameplayTag& StateIdentifier); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.HasCurieElementAttached (Underlying native function: HasCurieElementAttached 0x8573f2c)
	static bool HasCurieElementAttached(class AActor*& Actor, struct FGameplayTag& ElementIdentifier); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetLastElectricityPropagationParent (Underlying native function: GetLastElectricityPropagationParent 0x857314c)
	static class AActor* GetLastElectricityPropagationParent(class AActor*& TargetActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetInstigatorInfoFromInteractParams (Underlying native function: GetInstigatorInfoFromInteractParams 0x8572ff8)
	static void GetInstigatorInfoFromInteractParams(struct FCurieInteractParamsHandle& InteractParamsHandle, class AActor*& Instigator, class AActor*& EffectCauser); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetInstigatorInfoForAttachedElement (Underlying native function: GetInstigatorInfoForAttachedElement 0x8572e10)
	static void GetInstigatorInfoForAttachedElement(class UObject*& WorldContextObject, struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag, class AActor*& Instigator, class AActor*& EffectCauser); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetCurieManager (Underlying native function: GetCurieManager 0x8572cc0)
	static class UFortCurieManager* GetCurieManager(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetAttachedCurieStates (Underlying native function: GetAttachedCurieStates 0x8572468)
	static struct FGameplayTagContainer GetAttachedCurieStates(class AActor*& Actor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.GetAttachedCurieElements (Underlying native function: GetAttachedCurieElements 0x857236c)
	static struct FGameplayTagContainer GetAttachedCurieElements(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExtinguishGrassInBounds (Underlying native function: ExtinguishGrassInBounds 0x85721c8)
	static void ExtinguishGrassInBounds(class UObject*& WorldContextObject, struct FBox& IgnitionBounds); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteWaterApplication (Underlying native function: ExecuteWaterApplication 0x8571f98)
	static void ExecuteWaterApplication(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, class AActor*& Target, float& Magnitude, struct FHitResult& HitResult, float& LandscapeExtinguishRadius); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteIceApplication (Underlying native function: ExecuteIceApplication 0x8571d70)
	static void ExecuteIceApplication(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, class AActor*& Target, float& Magnitude, struct FHitResult& HitResult, int& PropagationDepthLimit); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteFireApplication (Underlying native function: ExecuteFireApplication 0x8571af0)
	static void ExecuteFireApplication(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, class AActor*& Target, float& Magnitude, struct FHitResult& HitResult, int& PropagationFuel, float& LandscapeIgnitionRadius); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteEndWaterInteract (Underlying native function: ExecuteEndWaterInteract 0x85719d0)
	static bool ExecuteEndWaterInteract(class UObject*& WorldContextObject, class AActor*& Target, struct FCurieInteractHandle& InteractHandle); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteEndFireInteract (Underlying native function: ExecuteEndFireInteract 0x85719d0)
	static bool ExecuteEndFireInteract(class UObject*& WorldContextObject, class AActor*& Target, struct FCurieInteractHandle& InteractHandle); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteBeginWaterInteract (Underlying native function: ExecuteBeginWaterInteract 0x8571788)
	static struct FCurieInteractHandle ExecuteBeginWaterInteract(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, class AActor*& Target, float& Magnitude, struct FHitResult& HitResult, float& LandscapeExtinguishRadius); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ExecuteBeginFireInteract (Underlying native function: ExecuteBeginFireInteract 0x85714ec)
	static struct FCurieInteractHandle ExecuteBeginFireInteract(class UObject*& WorldContextObject, class AActor*& Instigator, class AActor*& EffectCauser, class AActor*& Target, float& Magnitude, struct FHitResult& HitResult, int& PropagationFuel, float& LandscapeIgnitionRadius); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.EnableStateAttachmentOnActor (Underlying native function: EnableStateAttachmentOnActor 0x8571304)
	static void EnableStateAttachmentOnActor(class AActor*& TargetActor, struct FGameplayTag& StateTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.EnableElementInteractionOnActor (Underlying native function: EnableElementInteractionOnActor 0x857120c)
	static void EnableElementInteractionOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.EnableElementDecayOnActor (Underlying native function: EnableElementDecayOnActor 0x8571100)
	static void EnableElementDecayOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.EnableElementAttachmentOnActor (Underlying native function: EnableElementAttachmentOnActor 0x8570ff4)
	static void EnableElementAttachmentOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.DisableStateAttachmentOnActor (Underlying native function: DisableStateAttachmentOnActor 0x8570d94)
	static void DisableStateAttachmentOnActor(class AActor*& TargetActor, struct FGameplayTag& StateTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.DisableElementInteractionOnActor (Underlying native function: DisableElementInteractionOnActor 0x8570c9c)
	static void DisableElementInteractionOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.DisableElementDecayOnActor (Underlying native function: DisableElementDecayOnActor 0x8570ba4)
	static void DisableElementDecayOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.DisableElementAttachmentOnActor (Underlying native function: DisableElementAttachmentOnActor 0x8570aac)
	static void DisableElementAttachmentOnActor(class AActor*& TargetActor, struct FGameplayTag& ElementTag); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.CurieProtoMeshExtraction (Underlying native function: CurieProtoMeshExtraction 0x85707c0)
	static void CurieProtoMeshExtraction(struct TArray<struct FVector>& LocalVertLocs, class UStaticMeshComponent*& MeshComponent, int& LOD, int& VertDivisor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.ChangeCurieContainerOwnership (Underlying native function: ChangeCurieContainerOwnership 0x85705a4)
	static void ChangeCurieContainerOwnership(class AActor*& SourceActor, class AActor*& TargetActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieBlueprintFunctionLibrary.AddActorToCurieIgnoreTransformChanges (Underlying native function: AddActorToCurieIgnoreTransformChanges 0x6df70d4)
	static void AddActorToCurieIgnoreTransformChanges(class AActor*& Actor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)
};

