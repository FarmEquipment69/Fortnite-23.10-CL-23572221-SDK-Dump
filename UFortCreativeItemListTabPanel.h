// Class /Script/FortniteUI.FortCreativeItemListTabPanel
// Size: 0x7b8
class UFortCreativeItemListTabPanel : public UFortCreativeContentBrowserTabPanelBase
{
	unsigned char unreflected_3f0[0x8]; // 0x3f0 (0x8) 
	struct FMulticastInlineDelegate OnSourceItemCountChanged; // 0x3f8 (0x10)
	struct FDataTableRowHandle ItemDetailsInputRowHandle; // 0x408 (0x10)
	unsigned char unreflected_418[0x8]; // 0x418 (0x8) 
	struct FMulticastInlineDelegate OnItemDetailsInputAction; // 0x420 (0x10)
	class UAthenaCreativeItemTileView* CreativeTileViewItemOptions; // 0x430 (0x8)
	struct FFortItemEntry CurrentItemEntry; // 0x438 (0x1a0)
	struct FMulticastInlineDelegate OnItemCountChanged; // 0x5d8 (0x10)
	struct TArray<struct FFortItemEntry> Items; // 0x5e8 (0x10)
	struct TArray<struct FFortItemEntry> SourceItems; // 0x5f8 (0x10)
	unsigned char unreflected_608[0x1a8]; // 0x608 (0x1a8) 
	class UFortCreativeItemListMenu* CreativeItemListMenuParent; // 0x7b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.RestoreLastSelection (Underlying native function: RestoreLastSelection 0xa5872e8)
	void RestoreLastSelection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.RemoveSelectedItem (Underlying native function: RemoveSelectedItem 0xa586dfc)
	void RemoveSelectedItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.ItemEquipped (Has no native function)
	void ItemEquipped(struct FFortItemEntry& Item); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.IsEmpty (Underlying native function: IsEmpty 0xa585f6c)
	bool IsEmpty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.GetCollapseBorderPadFlagForCategory (Underlying native function: GetCollapseBorderPadFlagForCategory 0x2d7acdc)
	bool GetCollapseBorderPadFlagForCategory(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.GetCardSizeForCategory (Underlying native function: GetCardSizeForCategory 0x2d7acc4)
	enum EFortItemCardSize GetCardSizeForCategory(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.FocusCurrentSelection (Has no native function)
	void FocusCurrentSelection(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.ClearFilteredItems (Underlying native function: ClearFilteredItems 0xa5836b0)
	void ClearFilteredItems(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.ClearAllItems (Underlying native function: ClearAllItems 0xa583688)
	void ClearAllItems(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.CanPlayerCreateInVolume (Underlying native function: CanPlayerCreateInVolume 0xa583518)
	bool CanPlayerCreateInVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.AddItemToSource (Underlying native function: AddItemToSource 0xa582fac)
	void AddItemToSource(struct FFortItemEntry& ItemToAdd); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeItemListTabPanel.AddItem (Underlying native function: AddItem 0xa582ee8)
	void AddItem(struct FFortItemEntry& ItemToAdd); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

