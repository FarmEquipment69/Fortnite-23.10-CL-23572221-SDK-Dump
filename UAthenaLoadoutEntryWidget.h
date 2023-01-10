// Class /Script/FortniteUI.AthenaLoadoutEntryWidget
// Size: 0x2a0
class UAthenaLoadoutEntryWidget : public UCommonUserWidget
{
	class UFortAthenaInventoryLoadout* SelectedLoadout; // 0x290 (0x8)
	unsigned char padding_298[0x8]; // 0x298 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaLoadoutEntryWidget.SetLoadout (Underlying native function: SetLoadout 0x6ffb0fc)
	void SetLoadout(class UFortAthenaInventoryLoadout*& NewLoadout); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLoadoutEntryWidget.OnLoadoutPicked (Underlying native function: OnLoadoutPicked 0xa310bb0)
	void OnLoadoutPicked(); // (Final | Native | Public | BlueprintCallable)
};

