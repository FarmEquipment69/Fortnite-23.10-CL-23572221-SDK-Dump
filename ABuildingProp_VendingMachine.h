// Class /Script/FortniteGame.BuildingProp_VendingMachine
// Size: 0xf28
class ABuildingProp_VendingMachine : public ABuildingProp
{
	struct FGameplayTagContainer AllowedItemRotationDamageTags; // 0xef8 (0x20)
	unsigned char unreflected_f18[0x8]; // 0xf18 (0x8) 
	bool bOnlyListenForResourceChangesInPlayerInventory; // 0xf20 (0x1)
	unsigned char padding_f21[0x7]; // 0xf21 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_VendingMachine.OnPlayerInventoryChange (Has no native function)
	void OnPlayerInventoryChange(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_VendingMachine.OnCycleToNextItem (Has no native function)
	void OnCycleToNextItem(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_VendingMachine.BlueprintServerNotifyStartLongUse (Has no native function)
	void BlueprintServerNotifyStartLongUse(class AFortPlayerPawn*& InteractingPawn); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_VendingMachine.BlueprintServerNotifyEndLongUse (Has no native function)
	void BlueprintServerNotifyEndLongUse(class AFortPlayerPawn*& InteractingPawn); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)
};

