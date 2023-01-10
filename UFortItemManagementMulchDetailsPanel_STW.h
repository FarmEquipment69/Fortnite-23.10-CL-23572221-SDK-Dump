// Class /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW
// Size: 0x2b8
class UFortItemManagementMulchDetailsPanel_STW : public UCommonUserWidget
{
	class UFortItemQuantityListBase* ResourceList; // 0x290 (0x8)
	struct TScriptInterface<class IFortItemManagementMulchPanel> HostItemManagementMulchPanel; // 0x298 (0x10)
	unsigned char unreflected_2a8[0x8]; // 0x2a8 (0x8) 
	class UFortInventoryContext* InventoryContext; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.IsSpaceAvailableForMulch (Underlying native function: IsSpaceAvailableForMulch 0x71cff18)
	bool IsSpaceAvailableForMulch(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleSetOfItemsToMulchChangedBP (Has no native function)
	void HandleSetOfItemsToMulchChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleHostSet (Has no native function)
	void HandleHostSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemsToMulch (Underlying native function: GetItemsToMulch 0x71cf220)
	struct TArray<class UFortItem*> GetItemsToMulch(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemCountsToMulch (Underlying native function: GetItemCountsToMulch 0x71cf010)
	struct TArray<int> GetItemCountsToMulch(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.CommitMulch (Underlying native function: CommitMulch 0x71ce364)
	void CommitMulch(); // (Final | Native | Protected | BlueprintCallable)
};

