// Class /Script/FortniteGame.FortAthenaCreativeSupplyDropOpenedParams
// Size: 0x38
class UFortAthenaCreativeSupplyDropOpenedParams : public UFortMissionEventParams
{
	class AFortPawn* Pawn; // 0x28 (0x8)
	class AFortAthenaCreativeSupplyDrop* AthenaCreativeSupplyDrop; // 0x30 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaCreativeSupplyDropOpenedParams.SetParams (Underlying native function: SetParams 0x88ed760)
	void SetParams(class AFortPawn*& InPawn, class AFortAthenaCreativeSupplyDrop*& InAthenaCreativeSupplyDrop, class UFortAthenaCreativeSupplyDropOpenedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCreativeSupplyDropOpenedParams.BreakParams (Underlying native function: BreakParams 0x88e7c5c)
	void BreakParams(class AFortPawn*& OutPawn, class AFortAthenaCreativeSupplyDrop*& OutAthenaCreativeSupplyDrop); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

