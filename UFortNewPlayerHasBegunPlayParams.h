// Class /Script/FortniteGame.FortNewPlayerHasBegunPlayParams
// Size: 0x30
class UFortNewPlayerHasBegunPlayParams : public UFortMissionEventParams
{
	class AFortPlayerController* NewPlayerPC; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortNewPlayerHasBegunPlayParams.SetParams (Underlying native function: SetParams 0x88edcd8)
	void SetParams(class AFortPlayerController*& NewPlayerPC, class UFortNewPlayerHasBegunPlayParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortNewPlayerHasBegunPlayParams.BreakParams (Underlying native function: BreakParams 0x88e816c)
	void BreakParams(class AFortPlayerController*& NewPlayerPC); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

