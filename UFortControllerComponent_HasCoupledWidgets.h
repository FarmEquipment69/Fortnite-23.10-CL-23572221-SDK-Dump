// Class /Script/FortniteGame.FortControllerComponent_HasCoupledWidgets
// Size: 0xb0
class UFortControllerComponent_HasCoupledWidgets : public UFortControllerComponent
{
	struct TArray<struct FComponentWidgetPairings> SpawnableWidgets; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_HasCoupledWidgets.MakeComponentWidgetsOnAutonomous (Underlying native function: MakeComponentWidgetsOnAutonomous 0x662da48)
	void MakeComponentWidgetsOnAutonomous(); // (Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_HasCoupledWidgets.HandleExitAircraft (Underlying native function: HandleExitAircraft 0x7fbcb14)
	void HandleExitAircraft(class AController*& ExitingController); // (Final | Native | Protected)
};

