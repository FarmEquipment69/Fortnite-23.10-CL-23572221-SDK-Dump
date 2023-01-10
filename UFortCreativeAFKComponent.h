// Class /Script/FortniteGame.FortCreativeAFKComponent
// Size: 0x190
class UFortCreativeAFKComponent : public UFortAFKComponent
{
	unsigned char unreflected_f0[0x98]; // 0xf0 (0x98) 
	float LastInputChangeTimestamp; // 0x188 (0x4)
	unsigned char padding_18c[0x4]; // 0x18c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeAFKComponent.ServerRecordInputChange (Underlying native function: ServerRecordInputChange 0x84781d0)
	void ServerRecordInputChange(float& ClientLastInputChangeTime); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeAFKComponent.OnRep_LastInputChangeTimestamp (Underlying native function: OnRep_LastInputChangeTimestamp 0x8477b44)
	void OnRepLastInputChangeTimestamp(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeAFKComponent.OnPlayerSpawnedBuildingActor (Underlying native function: OnPlayerSpawnedBuildingActor 0x6d23ca0)
	void OnPlayerSpawnedBuildingActor(class AFortPlayerController*& Spawner, class ABuildingActor*& SpawnedBuilding); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeAFKComponent.OnPlayerInteracted (Underlying native function: OnPlayerInteracted 0x273fd14)
	void OnPlayerInteracted(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeAFKComponent.EnableAFKTracking (Underlying native function: EnableAFKTracking 0x8476290)
	void EnableAFKTracking(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortCreativeAFKComponent.DisableAFKTracking (Underlying native function: DisableAFKTracking 0x847623c)
	void DisableAFKTracking(); // (Final | Native | Public)
};

