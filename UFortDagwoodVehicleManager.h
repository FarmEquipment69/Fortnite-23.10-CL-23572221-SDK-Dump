// Class /Script/ValetRuntime.FortDagwoodVehicleManager
// Size: 0xb0
class UFortDagwoodVehicleManager : public UGameStateComponent
{
	bool bHasUpdatedPropReplacement; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	int NumVehiclesSpawnedWithTireMod; // 0xa4 (0x4)
	unsigned char padding_a8[0x8]; // 0xa8 (0x8)

	/* Functions */

	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement (Underlying native function: UpdatePropReplacement 0x273fd14)
	void UpdatePropReplacement(); // (Final | Native | Public)

	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated (Underlying native function: OnVehicleSpawnsUpdated 0x6df79d8)
	void OnVehicleSpawnsUpdated(class UFortVehicleItemDefinition*& VehicleItemDef, struct TArray<class AActor*>& SpawnedVehicles, int& NewVehicleCount); // (Final | Native | Public | HasOutParms)

	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned (Underlying native function: OnVehicleSpawned 0x6df795c)
	void OnVehicleSpawned(class AFortAthenaVehicle*& Vehicle); // (Final | Native | Public)

	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor (Underlying native function: CustomHandleActorStreamedInEditor 0x6df70d4)
	void CustomHandleActorStreamedInEditor(class AActor*& SourceActor); // (Final | Native | Public)
};

