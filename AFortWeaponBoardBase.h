// Class /Script/FortniteUI.FortWeaponBoardBase
// Size: 0x2c8
class AFortWeaponBoardBase : public AActor
{
	struct TArray<struct FFortWeaponBoardDisplaySlot> RangedWeaponDisplaySlots; // 0x288 (0x10)
	struct TArray<struct FFortWeaponBoardDisplaySlot> MeleeWeaponDisplaySlots; // 0x298 (0x10)
	struct TArray<struct FFortWeaponBoardDisplaySlotItem> DisplaySlotItemList; // 0x2a8 (0x10)
	unsigned char padding_2b8[0x10]; // 0x2b8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortWeaponBoardBase.PopulateDisplaySlotsWithRandomWeapons (Underlying native function: PopulateDisplaySlotsWithRandomWeapons 0xa822570)
	void PopulateDisplaySlotsWithRandomWeapons(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortWeaponBoardBase.PopulateDisplaySlotsWithBestWeapons (Underlying native function: PopulateDisplaySlotsWithBestWeapons 0xa82255c)
	void PopulateDisplaySlotsWithBestWeapons(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortWeaponBoardBase.OnDisplaySlotItemChanged (Has no native function)
	void OnDisplaySlotItemChanged(struct FFortWeaponBoardDisplaySlot& DisplaySlot, class UFortAccountItem*& Item); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortWeaponBoardBase.HandleAsyncLoadComplete (Underlying native function: HandleAsyncLoadComplete 0xa821590)
	void HandleAsyncLoadComplete(); // (Final | Native | Private)
};

