// Class /Script/FortniteUI.FortGlobalActionDetailsDataSource
// Size: 0x28
class IFortGlobalActionDetailsDataSource : public IInterface
{

	/* Functions */

	// Function /Script/FortniteUI.FortGlobalActionDetailsDataSource.RemoveOnChangeDelegate (Underlying native function: RemoveOnChangeDelegate 0xa2a5238)
	void RemoveOnChangeDelegate(struct FDelegate& InDelegate); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortGlobalActionDetailsDataSource.GetValue (Underlying native function: GetValue 0xa2a520c)
	struct FFortGlobalActionDetails* GetValue(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalActionDetailsDataSource.AddOnChangeDelegate (Underlying native function: AddOnChangeDelegate 0xa2a5168)
	void AddOnChangeDelegate(struct FDelegate& InDelegate); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};

