// Class /Script/Curie.CurieManager
// Size: 0x630
class UCurieManager : public UGameStateComponent
{
	class UClass* CurieComponentClass; // 0xa0 (0x8)
	struct FName CurieManagerRegistryName; // 0xa8 (0x4)
	struct FName MaterialDataRegistryName; // 0xac (0x4)
	struct FName ElementDataRegistryName; // 0xb0 (0x4)
	struct FName EntityStateDataRegistryName; // 0xb4 (0x4)
	unsigned char unreflected_b8[0x298]; // 0xb8 (0x298) 
	struct TMap<struct FGameplayTag, class UCurieElementAllocationHandler*> ElementAllocationHandlers; // 0x350 (0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementAttachHandlersContainer> ElementAttachmentHandlers; // 0x3a0 (0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementAttachConditionHandlersContainer> ElementAttachmentConditionHandlers; // 0x3f0 (0x50)
	struct TMap<struct FCurieElementPairKey*, struct FCurieElementInteractWithElementHandlersContainer> ElementInteractWithElementHandlers; // 0x440 (0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementInteractWithMaterialHandlersContainer> ElementInteractWithMaterialHandlers; // 0x490 (0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementInteractWithContainerHandlersContainer> ElementInteractWithContainerHandlers; // 0x4e0 (0x50)
	struct TArray<class UCurieManagerComponent*> CurieManagerComponents; // 0x530 (0x10)
	unsigned char padding_540[0xf0]; // 0x540 (0xf0)

	/* Functions */

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieStateDetached (Underlying native function: UnbindDelegateForCurieStateDetached 0x6999114)
	void UnbindDelegateForCurieStateDetached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieStateAttached (Underlying native function: UnbindDelegateForCurieStateAttached 0x6998e2c)
	void UnbindDelegateForCurieStateAttached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieElementInteract (Underlying native function: UnbindDelegateForCurieElementInteract 0x6998b38)
	void UnbindDelegateForCurieElementInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieElementEndInteract (Underlying native function: UnbindDelegateForCurieElementEndInteract 0x6998844)
	void UnbindDelegateForCurieElementEndInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieElementDetached (Underlying native function: UnbindDelegateForCurieElementDetached 0x6998550)
	void UnbindDelegateForCurieElementDetached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract (Underlying native function: UnbindDelegateForCurieElementBeginInteract 0x699825c)
	void UnbindDelegateForCurieElementBeginInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieElementAttached (Underlying native function: UnbindDelegateForCurieElementAttached 0x6997f68)
	void UnbindDelegateForCurieElementAttached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.HandleContainerOwnerDestroyed (Underlying native function: HandleContainerOwnerDestroyed 0x6997ee4)
	void HandleContainerOwnerDestroyed(class AActor*& OwnerActor); // (Final | Native | Private)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieStateDetached (Underlying native function: BindDelegateForCurieStateDetached 0x6997c94)
	void BindDelegateForCurieStateDetached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieStateAttached (Underlying native function: BindDelegateForCurieStateAttached 0x6997a44)
	void BindDelegateForCurieStateAttached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieElementInteract (Underlying native function: BindDelegateForCurieElementInteract 0x69977f4)
	void BindDelegateForCurieElementInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieElementEndInteract (Underlying native function: BindDelegateForCurieElementEndInteract 0x69975a4)
	void BindDelegateForCurieElementEndInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieElementDetached (Underlying native function: BindDelegateForCurieElementDetached 0x6997354)
	void BindDelegateForCurieElementDetached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieElementBeginInteract (Underlying native function: BindDelegateForCurieElementBeginInteract 0x6997104)
	void BindDelegateForCurieElementBeginInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieElementAttached (Underlying native function: BindDelegateForCurieElementAttached 0x6996eb4)
	void BindDelegateForCurieElementAttached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

