// Class /Script/ValetRuntime.FortCameraMode_Dagwood
// Size: 0x1b60
class UFortCameraMode_Dagwood : public UFortCameraMode_AthenaVehicle
{
	float HorizontalCameraSpaceOffsetWhileTurning; // 0x1b20 (0x4)
	float SteeringAngleForMaxHorizontalOffset; // 0x1b24 (0x4)
	float InAirVerticalOffset; // 0x1b28 (0x4)
	float AirOffsetDampFactor; // 0x1b2c (0x4)
	float SpeedAlphaDampFactor; // 0x1b30 (0x4)
	float TimeInAirRequiredForVertOffset; // 0x1b34 (0x4)
	float VehicleBasePitch; // 0x1b38 (0x4)
	float HorizOffsetInterpSpeed; // 0x1b3c (0x4)
	float HorizOffsetInterpSpeedRecovery; // 0x1b40 (0x4)
	float CurrentSpeedAlpha; // 0x1b44 (0x4)
	float CurrentVerticalOffset; // 0x1b48 (0x4)
	float CurrentHorizontalOffset; // 0x1b4c (0x4)
	float TimeInAir; // 0x1b50 (0x4)
	float PreviousSpeed; // 0x1b54 (0x4)
	float AppliedPitch; // 0x1b58 (0x4)
	unsigned char padding_1b5c[0x4]; // 0x1b5c (0x4)
};

