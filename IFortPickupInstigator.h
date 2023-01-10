// Class /Script/FortniteGame.FortPickupInstigator
// Size: 0x28
class IFortPickupInstigator : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortPickupInstigator.SetTrackedIndex (Underlying native function: SetTrackedIndex 0x7dc9240)
	void SetTrackedIndex(int& TrackedIndex, int& ItemIndex); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupInstigator.GetTrackedItemCount (Underlying native function: GetTrackedItemCount 0x7dc8b2c)
	int GetTrackedItemCount(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigator.GetTrackedIndices (Underlying native function: GetTrackedIndices 0x7dc8ab8)
	struct TArray<int> GetTrackedIndices(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigator.GetTrackedIndex (Underlying native function: GetTrackedIndex 0x7dc8a28)
	int GetTrackedIndex(int& ItemIndex); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigator.GetPickupEventHandler (Underlying native function: GetPickupEventHandler 0x7dc89f8)
	struct TScriptInterface<class IFortPickupEventHandler> GetPickupEventHandler(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortPickupInstigator.GetItemTemplateData (Underlying native function: GetItemTemplateData 0x7dc88d0)
	bool GetItemTemplateData(struct FCreativeItemTemplateData& TemplateData, int& ItemIndex); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupInstigator.GetInstigatorData (Underlying native function: GetInstigatorData 0x7dc87dc)
	bool GetInstigatorData(struct FPickupInstigatorData& InstigatorData, int& ItemIndex); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

