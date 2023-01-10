// Class /Script/FortniteGame.FortControllerComponent_ItemAttachedActor
// Size: 0x140
class UFortControllerComponent_ItemAttachedActor : public UFortControllerComponent
{
	unsigned char unreflected_140[0x140]; 

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_ItemAttachedActor.RemoveItemFromPickupSpawnsQueuedMap (Underlying native function: RemoveItemFromPickupSpawnsQueuedMap 0x6df70d4)
	void RemoveItemFromPickupSpawnsQueuedMap(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_ItemAttachedActor.OnPlayerPossessedPawn (Underlying native function: OnPlayerPossessedPawn 0x6df70d4)
	void OnPlayerPossessedPawn(class APawn*& PossessedPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_ItemAttachedActor.OnPlayerCreatedPickupProjectile (Underlying native function: OnPlayerCreatedPickupProjectile 0x6d23ca0)
	void OnPlayerCreatedPickupProjectile(class AFortPlayerControllerAthena*& PlayerController, class UFortItemDefinition*& ItemDefinition); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_ItemAttachedActor.OnPlayerCreatedPickup (Underlying native function: OnPlayerCreatedPickup 0x6d23ca0)
	void OnPlayerCreatedPickup(class AFortPlayerController*& PlayerController, class AFortPickup*& PickUp); // (Final | Native | Private)
};

