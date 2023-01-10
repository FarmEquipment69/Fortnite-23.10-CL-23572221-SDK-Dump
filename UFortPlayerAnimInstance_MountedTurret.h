// Class /Script/FortniteGame.FortPlayerAnimInstance_MountedTurret
// Size: 0x1bc0
class UFortPlayerAnimInstance_MountedTurret : public UFortPlayerAnimInstance
{
	struct FFortAnimInput_VelocityImpact VelocityImpact; // 0x1a98 (0xf0)
	struct FVector ImpactDisplacement; // 0x1b88 (0x18)
	class AFortMountedTurret* MountedTurret; // 0x1ba0 (0x8)
	float PedalScaler; // 0x1ba8 (0x4)
	float TurnRate; // 0x1bac (0x4)
	float PitchRate; // 0x1bb0 (0x4)
	float AimingPitchLastTick; // 0x1bb4 (0x4)
	unsigned char padding_1bb8[0x8]; // 0x1bb8 (0x8)
};

