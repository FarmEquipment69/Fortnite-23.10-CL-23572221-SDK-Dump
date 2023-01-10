// Class /Script/FortniteGame.FortItemEntryComponent
// Size: 0x240
class UFortItemEntryComponent : public UActorComponent
{
	struct FFortItemEntry OwnedItemEntry; // 0xa0 (0x1a0)

	/* Functions */

	// Function /Script/FortniteGame.FortItemEntryComponent.TrySetLoadedAmmo (Underlying native function: TrySetLoadedAmmo 0x8479188)
	int TrySetLoadedAmmo(int& NewAmmoAmount); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemEntryComponent.TakeItemFromInventoryOwner (Underlying native function: TakeItemFromInventoryOwner 0x8478b38)
	bool TakeItemFromInventoryOwner(struct FGuid& ItemGuid, int& Count, struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, bool& bTreatAsPickup); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemEntryComponent.SetOwnedItem (Underlying native function: SetOwnedItem 0x847871c)
	void SetOwnedItem(struct FFortItemEntry& Item); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemEntryComponent.HasItem (Underlying native function: HasItem 0x845d290)
	bool HasItem(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemEntryComponent.GetOwnedItem (Underlying native function: GetOwnedItem 0x8476878)
	struct FFortItemEntry GetOwnedItem(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemEntryComponent.GetLoadedAmmo (Underlying native function: GetLoadedAmmo 0x8476624)
	int GetLoadedAmmo(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemEntryComponent.GetClipSize (Underlying native function: GetClipSize 0x847639c)
	int GetClipSize(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemEntryComponent.Empty (Underlying native function: Empty 0x847627c)
	void Empty(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemEntryComponent.AddItemToInventoryOwner (Underlying native function: AddItemToInventoryOwner 0x8475030)
	bool AddItemToInventoryOwner(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, bool& bUseItemPickupAnalyticEvent); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

