// Class /Script/FortniteGame.SingleIndexSelectionModel
// Size: 0x28
class ISingleIndexSelectionModel : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.SingleIndexSelectionModel.TryMoveDelta (Underlying native function: TryMoveDelta 0x7dd0e88)
	enum EIndexNavigationResult TryMoveDelta(int& InDelta); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.SetSelectedIndex (Underlying native function: SetSelectedIndex 0x7dd0e08)
	void SetSelectedIndex(int& Value); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.RemoveOnSelectedIndexChangedDelegate (Underlying native function: RemoveOnSelectedIndexChangedDelegate 0x7dd08cc)
	void RemoveOnSelectedIndexChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.RemoveOnNumItemsChangedDelegate (Underlying native function: RemoveOnNumItemsChangedDelegate 0x7dd0828)
	void RemoveOnNumItemsChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.RemoveOnNavigationChangedDelegate (Underlying native function: RemoveOnNavigationChangedDelegate 0x7dd0784)
	void RemoveOnNavigationChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.GetSelectedIndex (Underlying native function: GetSelectedIndex 0x7dd0438)
	int GetSelectedIndex(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.GetNumItems (Underlying native function: GetNumItems 0x7db6844)
	int GetNumItems(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.CanMoveDelta (Underlying native function: CanMoveDelta 0x7dd0334)
	enum EIndexNavigationResult CanMoveDelta(int& InDelta); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.AddOnSelectedIndexChangedDelegate (Underlying native function: AddOnSelectedIndexChangedDelegate 0x7dd0058)
	void AddOnSelectedIndexChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.AddOnNumItemsChangedDelegate (Underlying native function: AddOnNumItemsChangedDelegate 0x7dcffb4)
	void AddOnNumItemsChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.SingleIndexSelectionModel.AddOnNavigationChangedDelegate (Underlying native function: AddOnNavigationChangedDelegate 0x7dcff10)
	void AddOnNavigationChangedDelegate(struct FDelegate& InDelegate); // (Native | Public | HasOutParms | BlueprintCallable | Const)
};

