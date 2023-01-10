// Class /Script/FortniteGame.FortControllerComponent_SpawnedVehicle
// Size: 0xe8
class UFortControllerComponent_SpawnedVehicle : public UFortControllerComponent
{
	class AFortAthenaVehicle* SpawnedVehicle; // 0xa0 (0x8)
	unsigned char padding_a8[0x40]; // 0xa8 (0x40)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_SpawnedVehicle.OnRep_SpawnedVehicle (Underlying native function: OnRep_SpawnedVehicle 0x7fbde8c)
	void OnRepSpawnedVehicle(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_SpawnedVehicle.HandleVehicleStateChanged (Underlying native function: HandleVehicleStateChanged 0x7fbd08c)
	void HandleVehicleStateChanged(class AFortPlayerPawn*& PlayerPawn, class AActor*& NewVehicle, class AActor*& OldVehicle); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_SpawnedVehicle.HandleTestStillAttached (Underlying native function: HandleTestStillAttached 0x7fbd078)
	void HandleTestStillAttached(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_SpawnedVehicle.HandlePlayerDisconnectedChanged (Underlying native function: HandlePlayerDisconnectedChanged 0x7fbced0)
	void HandlePlayerDisconnectedChanged(class AFortPlayerStateAthena*& DisconnectingPlayerState, bool& bIsDisconnected); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_SpawnedVehicle.HandleDeferredExitSpawnVehicle (Underlying native function: HandleDeferredExitSpawnVehicle 0x7fbcb00)
	void HandleDeferredExitSpawnVehicle(); // (Final | Native | Private)
};

