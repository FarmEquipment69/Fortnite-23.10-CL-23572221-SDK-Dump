// Class /Script/FortniteGame.FortPickupEventHandler
// Size: 0x28
class IFortPickupEventHandler : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupSpawned (Underlying native function: HandlePickupSpawned 0x7dc91c0)
	void HandlePickupSpawned(class AFortPickup*& PickUp); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupDropped (Underlying native function: HandlePickupDropped 0x7dc9140)
	void HandlePickupDropped(class AFortPickup*& PickUp); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupDestroyed (Underlying native function: HandlePickupDestroyed 0x7dc90c0)
	void HandlePickupDestroyed(class AFortPickup*& PickUp); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupDespawned (Underlying native function: HandlePickupDespawned 0x7dc9040)
	void HandlePickupDespawned(class AFortPickup*& PickUp); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupClaimed (Underlying native function: HandlePickupClaimed 0x7dc8ef0)
	void HandlePickupClaimed(class AFortPickup*& PickUp, class AFortPawn*& InteractingPawn, class UFortWorldItemDefinition*& ItemDefinition, struct FVector& PickupLocation); // (Native | Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupCaptured (Underlying native function: HandlePickupCaptured 0x7dc8e70)
	void HandlePickupCaptured(class AFortPickup*& PickUp); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandleItemRemoved (Underlying native function: HandleItemRemoved 0x7dc8d64)
	void HandleItemRemoved(class APlayerController*& PlayerController, struct FFortItemEntry& ItemEntry); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandleItemCaptured (Underlying native function: HandleItemCaptured 0x7dc8c5c)
	void HandleItemCaptured(class APlayerController*& PlayerController, struct FFortItemEntry& ItemEntry); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandleItemAdded (Underlying native function: HandleItemAdded 0x7dc8b50)
	void HandleItemAdded(class APlayerController*& PlayerController, struct FFortItemEntry& ItemEntry); // (Native | Event | Public | HasOutParms | BlueprintEvent)
};

