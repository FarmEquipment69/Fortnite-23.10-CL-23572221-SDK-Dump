// Class /Script/FortniteGame.FortAthenaDoghouseVehicle
// Size: 0x2110
class AFortAthenaDoghouseVehicle : public AFortAthenaSKVehicle
{
	float AntiGravityScalerWhenEmpty; // 0x19c0 (0x4)
	float CameraPitchInterpSpeed; // 0x19c4 (0x4)
	float CameraYawInterpSpeed; // 0x19c8 (0x4)
	float PropSpeed; // 0x19cc (0x4)
	float PropRotation; // 0x19d0 (0x4)
	float AirbrakeDragCoefficient; // 0x19d4 (0x4)
	struct FFortRechargingActionTimer BoostAction; // 0x19d8 (0xd8)
	struct FAileronRoll AileronRoll; // 0x1ab0 (0xe0)
	float AileronRollDoubleClickSpeed; // 0x1b90 (0x4)
	bool bFreelookAutoRecenter; // 0x1b94 (0x1)
	unsigned char unreflected_1b95[0x3]; // 0x1b95 (0x3) 
	float FreelookPitchConstraintDegrees; // 0x1b98 (0x4)
	float FreelookYawConstraintDegrees; // 0x1b9c (0x4)
	float FreelookSensitivity; // 0x1ba0 (0x4)
	float MouseSteerSensitivity; // 0x1ba4 (0x4)
	float FreelookInterpolation; // 0x1ba8 (0x4)
	float FreelookReturnAcceleration; // 0x1bac (0x4)
	float FreelookReturnDecelleration; // 0x1bb0 (0x4)
	struct FName ShootCenterPointSocket; // 0x1bb4 (0x4)
	float ShootAimAheadDistance; // 0x1bb8 (0x4)
	unsigned char unreflected_1bbc[0x14]; // 0x1bbc (0x14) 
	class UFortDoghouseVehicleConfigs* FortAirVehicleConfigs; // 0x1bd0 (0x8)
	unsigned char unreflected_1bd8[0x2]; // 0x1bd8 (0x2) 
	bool bIsFlying; // 0x1bda (0x1)
	unsigned char unreflected_1bdb[0x2]; // 0x1bdb (0x2) 
	bool bIsEngineOn; // 0x1bdd (0x1)
	unsigned char unreflected_1bde[0x3]; // 0x1bde (0x3) 
	bool bAutoStartEngineInAir; // 0x1be1 (0x1)
	bool bEngineStartIsBeingHeld; // 0x1be2 (0x1)
	unsigned char unreflected_1be3[0x49d]; // 0x1be3 (0x49d) 
	struct FReplicatedControlState ControlState; // 0x2080 (0x38)
	unsigned char padding_20b8[0x58]; // 0x20b8 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.ServerUpdateControlState (Underlying native function: ServerUpdateControlState 0x7fed5f8)
	void ServerUpdateControlState(struct FReplicatedControlState& InControlState); // (Final | Net | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.ServerBeginAileronRoll (Underlying native function: ServerBeginAileronRoll 0x7fed55c)
	void ServerBeginAileronRoll(enum EAileronRollDirection& Direction); // (Net | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.OnTakeoff (Has no native function)
	void OnTakeoff(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.OnRep_ControlState (Underlying native function: OnRep_ControlState 0x7fecca0)
	void OnRepControlState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.OnLanding (Has no native function)
	void OnLanding(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.OnEngineStop (Has no native function)
	void OnEngineStop(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.OnEngineStart (Has no native function)
	void OnEngineStart(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.MultiBeginAileronRoll (Underlying native function: MultiBeginAileronRoll 0x7fec618)
	void MultiBeginAileronRoll(enum EAileronRollDirection& Direction); // (Net | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsStandingInPlace (Underlying native function: IsStandingInPlace 0x7fec524)
	bool IsStandingInPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsStallingFromAltitude (Underlying native function: IsStallingFromAltitude 0x7fec504)
	bool IsStallingFromAltitude(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsRollingRight (Underlying native function: IsRollingRight 0x7fec3b0)
	bool IsRollingRight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsRollingLeft (Underlying native function: IsRollingLeft 0x7fec38c)
	bool IsRollingLeft(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsRollingInverted (Underlying native function: IsRollingInverted 0x7fec368)
	bool IsRollingInverted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsFreelooking (Underlying native function: IsFreelooking 0x7fec180)
	bool IsFreelooking(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsFlying (Underlying native function: IsFlying 0x7fec164)
	bool IsFlying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsEngineOn (Underlying native function: IsEngineOn 0x7fec14c)
	bool IsEngineOn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsEngineAutoStartingInAir (Underlying native function: IsEngineAutoStartingInAir 0x7fec134)
	bool IsEngineAutoStartingInAir(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.IsAileronRolling (Underlying native function: IsAileronRolling 0x7fec11c)
	bool IsAileronRolling(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetStandingInPlaceSteeringAngle (Underlying native function: GetStandingInPlaceSteeringAngle 0x7febc28)
	float GetStandingInPlaceSteeringAngle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetShootCenterPointLocal (Underlying native function: GetShootCenterPointLocal 0x7febbf0)
	struct FVector GetShootCenterPointLocal(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetShootCenterPoint (Underlying native function: GetShootCenterPoint 0x7febbb8)
	struct FVector GetShootCenterPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetFlightControlTorque (Underlying native function: GetFlightControlTorque 0x7feb844)
	struct FVector GetFlightControlTorque(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetFlightControlSurfaceTargets (Underlying native function: GetFlightControlSurfaceTargets 0x7feb828)
	struct FFlightControlSurfaces GetFlightControlSurfaceTargets(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetFlightControlSurfaces (Underlying native function: GetFlightControlSurfaces 0x7feb828)
	struct FFlightControlSurfaces GetFlightControlSurfaces(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetFlightControlForce (Underlying native function: GetFlightControlForce 0x7feb800)
	struct FVector GetFlightControlForce(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetAltitudeZ (Underlying native function: GetAltitudeZ 0x7feb6c0)
	float GetAltitudeZ(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetAimPointLocal (Underlying native function: GetAimPointLocal 0x7feb688)
	struct FVector GetAimPointLocal(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetAimPoint (Underlying native function: GetAimPoint 0x7feb650)
	struct FVector GetAimPoint(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GetAileronRollDirection (Underlying native function: GetAileronRollDirection 0x7feb638)
	enum EAileronRollDirection GetAileronRollDirection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaDoghouseVehicle.GasPedalIsDown (Underlying native function: GasPedalIsDown 0x7feb608)
	bool GasPedalIsDown(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

