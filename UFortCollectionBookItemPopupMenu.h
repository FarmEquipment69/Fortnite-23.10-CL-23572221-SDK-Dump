// Class /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu
// Size: 0x508
class UFortCollectionBookItemPopupMenu : public UFortPopupMenu_Legacy
{
	unsigned char unreflected_508[0x508]; 

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemUpdated (Has no native function)
	void HandleItemUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemChanged (Has no native function)
	void HandleItemChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.GetHostButton (Underlying native function: GetHostButton 0x71e6738)
	class UFortCollectionBookSlotButton* GetHostButton(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBeUnslotted (Underlying native function: CanItemBeUnslotted 0x71e65e0)
	bool CanItemBeUnslotted(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBePurchased (Underlying native function: CanItemBePurchased 0x71e65bc)
	bool CanItemBePurchased(); // (Final | Native | Protected | BlueprintCallable)
};

