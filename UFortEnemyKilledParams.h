// Class /Script/FortniteGame.FortEnemyKilledParams
// Size: 0x38
class UFortEnemyKilledParams : public UFortMissionEventParams
{
	class AFortPawn* KilledPawn; // 0x28 (0x8)
	class AFortPlayerController* KilledBy; // 0x30 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortEnemyKilledParams.SetParams (Underlying native function: SetParams 0x88ee004)
	void SetParams(class AFortPawn*& KilledPawn, class AFortPlayerController*& KilledBy, class UFortEnemyKilledParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortEnemyKilledParams.BreakParams (Underlying native function: BreakParams 0x88e8408)
	void BreakParams(class AFortPawn*& KilledPawn, class AFortPlayerController*& KilledBy); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

