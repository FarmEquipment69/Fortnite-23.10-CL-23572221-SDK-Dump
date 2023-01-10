// Class /Script/LagerRuntime.FortCheatManager_LivingWorldManager
// Size: 0x70
class UFortCheatManager_LivingWorldManager : public UChildCheatManager
{
	int CheatTeleportToCount; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FString CheatTeleportLastEventDataName; // 0x30 (0x10)
	int CheatSpawnEventCount; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FString CheatSpawnEventName; // 0x48 (0x10)
	int CheatTriggerEventCount; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FString CheatTriggerEventName; // 0x60 (0x10)

	/* Functions */

	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTriggerEvent (Underlying native function: LivingWorldManagerTriggerEvent 0x6e8f5f8)
	void LivingWorldManagerTriggerEvent(struct FString& EventDataName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportToSpawnPosition (Underlying native function: LivingWorldManagerTeleportToSpawnPosition 0x6e8f5f8)
	void LivingWorldManagerTeleportToSpawnPosition(struct FString& EventDataName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo (Underlying native function: LivingWorldManagerTeleportTo 0x66e4ab4)
	void LivingWorldManagerTeleportTo(struct FString& EventDataName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEventAtLocation (Underlying native function: LivingWorldManagerSpawnEventAtLocation 0x6e8f2f0)
	void LivingWorldManagerSpawnEventAtLocation(struct FString& EventDataName, struct FVector& Location, struct FRotator& Rotation, struct FString& SpawnerDataNames); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | HasDefaults)

	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEvent (Underlying native function: LivingWorldManagerSpawnEvent 0x6e8f060)
	void LivingWorldManagerSpawnEvent(struct FString& EventDataName, struct FString& SpawnerDataNames); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnAtLocation (Underlying native function: LivingWorldManagerSpawnAtLocation 0x6e8ee84)
	void LivingWorldManagerSpawnAtLocation(struct FString& EventDataName, struct FVector& Location, struct FRotator& Rotation); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | HasDefaults)

	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn (Underlying native function: LivingWorldManagerSpawn 0x66e4ab4)
	void LivingWorldManagerSpawn(struct FString& EventDataName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)
};

