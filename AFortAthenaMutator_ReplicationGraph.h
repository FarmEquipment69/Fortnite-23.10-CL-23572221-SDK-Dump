// Class /Script/FortniteGame.FortAthenaMutator_ReplicationGraph
// Size: 0x3d8
class AFortAthenaMutator_ReplicationGraph : public AFortAthenaMutator
{
	struct TMap<enum ERepGraphMutatorSpatializationZoneType, struct FRepGraphMutatorSpatializationZoneArray> MutatorZonesMap; // 0x330 (0x50)
	unsigned char padding_380[0x58]; // 0x380 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_ReplicationGraph.RestoreZones (Underlying native function: RestoreZones 0x6f05250)
	void RestoreZones(enum ERepGraphMutatorSpatializationZoneType& ZoneType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_ReplicationGraph.RestoreAllZones (Underlying native function: RestoreAllZones 0x273fd14)
	void RestoreAllZones(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_ReplicationGraph.OverrideZones (Underlying native function: OverrideZones 0x824a810)
	void OverrideZones(enum ERepGraphMutatorSpatializationZoneType& ZoneType, struct TArray<struct FRepGraphMutatorSpatializationZone>& MutatorZones); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

