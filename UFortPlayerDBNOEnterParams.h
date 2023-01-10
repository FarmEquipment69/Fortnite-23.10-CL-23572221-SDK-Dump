// Class /Script/FortniteGame.FortPlayerDBNOEnterParams
// Size: 0x38
class UFortPlayerDBNOEnterParams : public UFortMissionEventParams
{
	class AFortPlayerPawn* KilledPlayer; // 0x28 (0x8)
	class AController* KilledBy; // 0x30 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerDBNOEnterParams.SetParams (Underlying native function: SetParams 0x88ed760)
	void SetParams(class AFortPlayerPawn*& KilledPlayer, class AController*& KilledBy, class UFortPlayerDBNOEnterParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerDBNOEnterParams.BreakParams (Underlying native function: BreakParams 0x88e7c5c)
	void BreakParams(class AFortPlayerPawn*& KilledPlayer, class AController*& KilledBy); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

