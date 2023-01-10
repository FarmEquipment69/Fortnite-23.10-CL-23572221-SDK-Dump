// Class /Script/FortniteAI.FortEnvQueryManager
// Size: 0x198
class UFortEnvQueryManager : public UEnvQueryManager
{
	struct TArray<struct FEnvQueryManagerConfig> EnvManagerConfigPerGamePhase; // 0x158 (0x10)
	struct FEnvQueryManagerConfig EnvManagerConfigSTW; // 0x168 (0x30)

	/* Functions */

	// Function /Script/FortniteAI.FortEnvQueryManager.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0xa0fddb4)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)
};

