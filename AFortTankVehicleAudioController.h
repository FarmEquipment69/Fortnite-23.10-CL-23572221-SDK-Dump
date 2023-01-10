// Class /Script/TankRuntime.FortTankVehicleAudioController
// Size: 0x600
class AFortTankVehicleAudioController : public AFortVehicleAudioController
{
	class AFortTankVehicle* TankVehicle; // 0x2e8 (0x8)
	struct FFortAudioFloatParameterMapping SpeedParam; // 0x2f0 (0x28)
	struct FFortAudioFloatParameterMapping TurnPowerParam; // 0x318 (0x28)
	struct FFortAudioFloatParameterMapping OutOfFuelParam; // 0x340 (0x28)
	struct FFortAudioFloatParameterMapping IdleParam; // 0x368 (0x28)
	struct FFortAudioFloatParameterMapping TurningParam; // 0x390 (0x28)
	struct FFortAudioFloatParameterMapping ForwardParam; // 0x3b8 (0x28)
	struct FFortAudioFloatParameterMapping ReverseParam; // 0x3e0 (0x28)
	struct FFortAudioFloatParameterMapping SurfaceParam; // 0x408 (0x28)
	struct FFortAudioFloatParameterMapping IsInWaterParam; // 0x430 (0x28)
	struct FFortAudioFloatParameterMapping IsInAirParam; // 0x458 (0x28)
	struct FFortAudioFloatParameterMapping BoostParam; // 0x480 (0x28)
	struct FFortAudioFloatParameterMapping CannonHorizontalMovementParam; // 0x4a8 (0x28)
	struct FFortAudioFloatParameterMapping CannonVerticalMovementParam; // 0x4d0 (0x28)
	struct FFortAudioFloatParameterMapping TurretHorizontalMovementParam; // 0x4f8 (0x28)
	struct FFortAudioFloatParameterMapping TurretVerticalMovementParam; // 0x520 (0x28)
	struct FTankAudioUpdateContext Context; // 0x548 (0xb8)

	/* Functions */

	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayTurningOneShot (Has no native function)
	void PlayTurningOneShot(); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayDecelOneShot (Has no native function)
	void PlayDecelOneShot(); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayAccelOneShot (Has no native function)
	void PlayAccelOneShot(); // (Event | Protected | BlueprintEvent)

	// Function /Script/TankRuntime.FortTankVehicleAudioController.GetTankVehicleActor (Underlying native function: GetTankVehicleActor 0x6fdb2fc)
	class AFortTankVehicle* GetTankVehicleActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

