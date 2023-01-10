// Class /Script/FortniteGame.FortControllerComponent_HeldDeviceUsage
// Size: 0xb0
class UFortControllerComponent_HeldDeviceUsage : public UFortControllerComponent
{
	class UFortBattleLabDeviceItemDefinition* LastBattleLabDeviceItemDefinition; // 0xa0 (0x8)
	class UFortHeldObjectComponent* LastHeldObjectComponent; // 0xa8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_HeldDeviceUsage.ServerUseBattleLabDevice (Underlying native function: ServerUseBattleLabDevice 0x845e790)
	void ServerUseBattleLabDevice(class UFortBattleLabDeviceItemDefinition*& DeviceItemDef); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortControllerComponent_HeldDeviceUsage.QuestUpdate (Underlying native function: QuestUpdate 0x845dc88)
	void QuestUpdate(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_HeldDeviceUsage.OnWeaponEquipped (Underlying native function: OnWeaponEquipped 0x845da84)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PreviousWeapon); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_HeldDeviceUsage.OnHeldObjectThrown (Underlying native function: OnHeldObjectThrown 0x845d744)
	void OnHeldObjectThrown(); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_HeldDeviceUsage.OnHeldObjectPlaced (Underlying native function: OnHeldObjectPlaced 0x845d730)
	void OnHeldObjectPlaced(); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_HeldDeviceUsage.OnHeldObjectDropped (Underlying native function: OnHeldObjectDropped 0x845d71c)
	void OnHeldObjectDropped(); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_HeldDeviceUsage.OnHeldObjectDestroy (Underlying native function: OnHeldObjectDestroy 0x845d6f0)
	void OnHeldObjectDestroy(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_HeldDeviceUsage.DestroyDroppedDevice (Underlying native function: DestroyDroppedDevice 0x845c878)
	void DestroyDroppedDevice(class AActor*& DroppedDevice); // (Final | Native | Protected)
};

