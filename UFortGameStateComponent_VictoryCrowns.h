// Class /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
// Size: 0xf8
class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent
{
	struct TArray<class AFortPlayerStateAthena*> CrownBearerPlayerStates; // 0xa0 (0x10)
	struct FText KillFeedFormatDropped; // 0xb0 (0x18)
	struct FText KillFeedFormatPickedUp; // 0xc8 (0x18)
	unsigned char padding_e0[0x18]; // 0xe0 (0x18)

	/* Functions */

	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.OnRep_CrownBearerPlayerStates (Underlying native function: OnRep_CrownBearerPlayerStates 0x2b8a44c)
	void OnRepCrownBearerPlayerStates(); // (Final | Native | Protected)

	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.IsCrownBearer (Underlying native function: IsCrownBearer 0x7461b6c)
	bool IsCrownBearer(class AFortPlayerStateAthena*& FortPSA); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.HandleCrownStatusChanged (Underlying native function: HandleCrownStatusChanged 0x7461720)
	void HandleCrownStatusChanged(class AFortPlayerControllerAthena*& FortPlayerControllerAthena, class UFortItem*& CrownItem); // (Final | Native | Protected)

	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.ClientKillFeedMessage (Underlying native function: ClientKillFeedMessage 0x148e240)
	void ClientKillFeedMessage(class AFortPlayerStateAthena*& FortPSA, bool& bAdded); // (Net | NetReliable | Native | Event | NetMulticast | Public)
};

