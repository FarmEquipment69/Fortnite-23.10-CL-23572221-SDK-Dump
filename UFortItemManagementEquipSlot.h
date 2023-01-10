// Class /Script/FortniteUI.FortItemManagementEquipSlot
// Size: 0x288
class UFortItemManagementEquipSlot : public UFortUserWidget
{
	int SlotIndex; // 0x278 (0x4)
	unsigned char padding_27c[0xc]; // 0x27c (0xc)

	/* Functions */

	// Function /Script/FortniteUI.FortItemManagementEquipSlot.WillAcceptItem (Underlying native function: WillAcceptItem 0xa69a3f4)
	bool WillAcceptItem(class UFortItem*& InItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementEquipSlot.UpdateInventoryChangedDelegate (Underlying native function: UpdateInventoryChangedDelegate 0xa69a3cc)
	void UpdateInventoryChangedDelegate(); // (Final | Native | Protected | BlueprintCallable)
};

