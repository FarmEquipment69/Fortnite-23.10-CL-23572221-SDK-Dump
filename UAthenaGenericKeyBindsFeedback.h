// Class /Script/FortniteUI.AthenaGenericKeyBindsFeedback
// Size: 0x308
class UAthenaGenericKeyBindsFeedback : public UAthenaHUDSituationalFeedback
{
	struct TArray<struct FGenericAction> GenericActions; // 0x2e0 (0x10)
	unsigned char padding_2f0[0x18]; // 0x2f0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleWeaponHUDKeyActionUpdated (Underlying native function: HandleWeaponHUDKeyActionUpdated 0xa3a1aa8)
	void HandleWeaponHUDKeyActionUpdated(class AFortWeapon*& Weapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0xa3a19ec)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PreviousWeapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleTetherChanged (Underlying native function: HandleTetherChanged 0xa3a158c)
	void HandleTetherChanged(bool& bIsTethered); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleSavedTabChanged (Underlying native function: HandleSavedTabChanged 0xa3a1374)
	void HandleSavedTabChanged(bool& IsTabSaved); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleKeybindsChanged (Underlying native function: HandleKeybindsChanged 0xa3a09f8)
	void HandleKeybindsChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleInputStackChanged (Underlying native function: HandleInputStackChanged 0xa3a09f8)
	void HandleInputStackChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleInputComponentDisplayTextChanged (Underlying native function: HandleInputComponentDisplayTextChanged 0xa3a097c)
	void HandleInputComponentDisplayTextChanged(class UFortInputComponent*& UpdatedInputComponent); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleGenericActionRemoved (Underlying native function: HandleGenericActionRemoved 0xa3a07d4)
	void HandleGenericActionRemoved(struct FName& ActionName); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleGenericActionAdded (Underlying native function: HandleGenericActionAdded 0xa3a06f4)
	void HandleGenericActionAdded(struct FName& ActionName, struct FText& DescriptionText); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleEnterExitVehicle (Underlying native function: HandleEnterExitVehicle 0xa3a06e0)
	void HandleEnterExitVehicle(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleDBNOCarryPlayerChanged (Underlying native function: HandleDBNOCarryPlayerChanged 0xa3a054c)
	void HandleDBNOCarryPlayerChanged(bool& bIsCarrying); // (Final | Native | Private)
};

