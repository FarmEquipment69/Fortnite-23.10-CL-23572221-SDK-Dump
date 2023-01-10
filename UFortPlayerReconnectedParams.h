// Class /Script/FortniteGame.FortPlayerReconnectedParams
// Size: 0x30
class UFortPlayerReconnectedParams : public UFortMissionEventParams
{
	class AFortPlayerController* ReconnectedPlayerPC; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerReconnectedParams.SetParams (Underlying native function: SetParams 0x88edcd8)
	void SetParams(class AFortPlayerController*& ReconnectedPlayerPC, class UFortPlayerReconnectedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerReconnectedParams.BreakParams (Underlying native function: BreakParams 0x88e816c)
	void BreakParams(class AFortPlayerController*& ReconnectedPlayerPC); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

