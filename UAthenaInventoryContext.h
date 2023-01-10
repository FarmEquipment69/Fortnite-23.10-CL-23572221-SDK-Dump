// Class /Script/FortniteUI.AthenaInventoryContext
// Size: 0x90
class UAthenaInventoryContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnInventoryItemSelected; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnInventorySwapStarted; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnInventorySwapComplete; // 0x50 (0x10)
	unsigned char padding_60[0x30]; // 0x60 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.AthenaInventoryContext.StartOrFinishSwap (Underlying native function: StartOrFinishSwap 0xa4b51e4)
	void StartOrFinishSwap(int& SlotIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaInventoryContext.SetSelectedInventoryItem (Underlying native function: SetSelectedInventoryItem 0xa4b40d8)
	void SetSelectedInventoryItem(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.AthenaInventoryContext.OnAthenaInventorySwapStarted__DelegateSignature (Has no native function)
	void OnAthenaInventorySwapStartedDelegateSignature(int& SlotIndex); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaInventoryContext.OnAthenaInventorySwapComplete__DelegateSignature (Has no native function)
	void OnAthenaInventorySwapCompleteDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaInventoryContext.OnAthenaInventoryItemSelected__DelegateSignature (Has no native function)
	void OnAthenaInventoryItemSelectedDelegateSignature(class UFortItem*& Item); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaInventoryContext.IsSwapping (Underlying native function: IsSwapping 0xa4b21b4)
	bool IsSwapping(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaInventoryContext.GetSelectedInventoryItem (Underlying native function: GetSelectedInventoryItem 0xa4b0434)
	class UFortItem* GetSelectedInventoryItem(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaInventoryContext.CancelSwap (Underlying native function: CancelSwap 0xa4ad524)
	void CancelSwap(); // (Final | Native | Public | BlueprintCallable)
};

