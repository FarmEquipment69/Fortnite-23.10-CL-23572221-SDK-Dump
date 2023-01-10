// Class /Script/HoagieRuntime.FortCameraMode_Hoagie
// Size: 0x1b90
class UFortCameraMode_Hoagie : public UFortCameraMode_AthenaVehicle
{
	float CurrentRollMultiplier; // 0x1b20 (0x4)
	float CurrentPitchMultiplier; // 0x1b24 (0x4)
	struct FVector LastOrigin; // 0x1b28 (0x18)
	struct FVector CurrentInterpSpeed; // 0x1b40 (0x18)
	struct FVector BoostInterpSpeed; // 0x1b58 (0x18)
	float BaseRollMultiplier; // 0x1b70 (0x4)
	float BasePitchMultiplier; // 0x1b74 (0x4)
	float BoostRollMultiplier; // 0x1b78 (0x4)
	float BoostPitchMultiplier; // 0x1b7c (0x4)
	float BoostRollDampFactor; // 0x1b80 (0x4)
	float BoostRollRecoveryDampFactor; // 0x1b84 (0x4)
	float BoostRecoveryInterpSpeed; // 0x1b88 (0x4)
	unsigned char padding_1b8c[0x4]; // 0x1b8c (0x4)
};

