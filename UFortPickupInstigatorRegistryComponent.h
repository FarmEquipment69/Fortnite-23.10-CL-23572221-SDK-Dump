// Class /Script/FortniteGame.FortPickupInstigatorRegistryComponent
// Size: 0x470
class UFortPickupInstigatorRegistryComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FMulticastInlineDelegate OnPickupInstigatorDataChanged; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnPickupInstigatorDataRemoved; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnItemTemplateDataChanged; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnItemTemplateDataRemoved; // 0xd8 (0x10)
	struct FPickupInstigatorArray InstigatorRegistry; // 0xe8 (0x128)
	struct FCreativeItemTemplateDataArray ItemTemplateRegistry; // 0x210 (0x260)

	/* Functions */

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.ResolvePendingRepOverrides (Underlying native function: ResolvePendingRepOverrides 0x8744e74)
	void ResolvePendingRepOverrides(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.RemovePickupInstigator (Underlying native function: RemovePickupInstigator 0x7e484e4)
	void RemovePickupInstigator(class UObject*& PickupInstigator, int& ItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.RemoveAllItemsForPickupInstigator (Underlying native function: RemoveAllItemsForPickupInstigator 0x6df70d4)
	void RemoveAllItemsForPickupInstigator(class UObject*& PickupInstigator); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.PostReplicateRepOverrides (Underlying native function: PostReplicateRepOverrides 0x8744e60)
	void PostReplicateRepOverrides(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.OnRep_ItemTemplateRegistry (Underlying native function: OnRep_ItemTemplateRegistry 0x8744e38)
	void OnRepItemTemplateRegistry(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.NotifyPickupSpawned (Underlying native function: NotifyPickupSpawned 0x8744d60)
	void NotifyPickupSpawned(int& TrackedIndex, class AFortPickup*& PickUp); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.NotifyPickupDropped (Underlying native function: NotifyPickupDropped 0x8744c9c)
	void NotifyPickupDropped(int& TrackedIndex, class AFortPickup*& PickUp); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.NotifyPickupCaptured (Underlying native function: NotifyPickupCaptured 0x8744bac)
	void NotifyPickupCaptured(int& TrackedIndex, class AFortPickup*& PickUp); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.NotifyItemRemoved (Underlying native function: NotifyItemRemoved 0x8744a20)
	void NotifyItemRemoved(int& TrackedIndex, class APlayerController*& PlayerController, struct FFortItemEntry& ItemEntry); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.NotifyItemCaptured (Underlying native function: NotifyItemCaptured 0x87448a0)
	void NotifyItemCaptured(int& TrackedIndex, class APlayerController*& PlayerController, struct FFortItemEntry& ItemEntry); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.HandlePickupDestroyed (Underlying native function: HandlePickupDestroyed 0x87445b4)
	void HandlePickupDestroyed(class AFortPickup*& PickUp); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.HandlePickupClaimed (Underlying native function: HandlePickupClaimed 0x8744464)
	void HandlePickupClaimed(class AFortPickup*& PickUp, class AFortPawn*& InteractingPawn, class UFortWorldItemDefinition*& ItemDefinition, struct FVector& PickupLocation); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.GetTemplateObjects (Underlying native function: GetTemplateObjects 0x874424c)
	bool GetTemplateObjects(struct TArray<class UFortCreativeItemTemplate*>& TemplateObjs, struct FItemVariantHandle& VariantHandle, bool& bOnlyEnabled); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.GetTemplateData (Underlying native function: GetTemplateData 0x8744134)
	bool GetTemplateData(int& TrackedIndex, struct FCreativeItemTemplateData& TemplateData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.GetSpawnedPickups (Underlying native function: GetSpawnedPickups 0x8743f40)
	static void GetSpawnedPickups(class AActor*& ActorContext, int& TrackedIndex, struct TArray<class AFortPickup*>& SpawnedPickups); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.GetPickupEventHandler (Underlying native function: GetPickupEventHandler 0x8743ca0)
	bool GetPickupEventHandler(int& TrackedIndex, struct TScriptInterface<class IFortPickupEventHandler>& EventHandler); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.GetInstigatorData (Underlying native function: GetInstigatorData 0x8743878)
	bool GetInstigatorData(int& TrackedIndex, struct FPickupInstigatorData& InstigatorData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.GetInstigator (Underlying native function: GetInstigator 0x8743754)
	bool GetInstigator(int& TrackedIndex, struct FPickupInstigator& PickupInstigator); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.GetDroppedPickups (Underlying native function: GetDroppedPickups 0x8743584)
	static void GetDroppedPickups(class AActor*& ActorContext, int& TrackedIndex, struct TArray<class AFortPickup*>& DroppedPickups); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.DestroySpawnedPickups (Underlying native function: DestroySpawnedPickups 0x8743418)
	static void DestroySpawnedPickups(class AActor*& ActorContext, int& TrackedIndex); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.DestroyDroppedPickups (Underlying native function: DestroyDroppedPickups 0x8743330)
	static void DestroyDroppedPickups(class AActor*& ActorContext, int& TrackedIndex); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.ClearPickupInstigators (Underlying native function: ClearPickupInstigators 0x273fd14)
	void ClearPickupInstigators(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupInstigatorRegistryComponent.AddPickupInstigator (Underlying native function: AddPickupInstigator 0x874304c)
	int AddPickupInstigator(class UObject*& PickupInstigator, int& ItemIndex, bool& bItemTemplate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

