// Class /Script/FortniteAI.FortAthenaAIBotAimingSkillSet
// Size: 0x1250
class UFortAthenaAIBotAimingSkillSet : public UFortAthenaAIBotSkillSet
{
	struct FFocusSetting DefaultFocusSetting; // 0x30 (0x140)
	struct TArray<struct FFocusSetting> FocusSettings; // 0x170 (0x10)
	struct FLookAtSetting LookAtSettings[0x4]; // 0x180 (0xa0) (ARRAY) 
	struct FScalableFloat AllowScanAroundWhileSwimming; // 0x400 (0x28)
	struct FScalableFloat TrackingReactionTime; // 0x428 (0x28)
	struct FScalableFloat TrackingInterpTime; // 0x450 (0x28)
	struct FScalableFloat TrackingInterpTimeMultForGroundVehicles; // 0x478 (0x28)
	struct FScalableFloat TrackingInterpTimeMultForFlyingVehicles; // 0x4a0 (0x28)
	struct FScalableFloat MaxTrackingPredictionError; // 0x4c8 (0x28)
	struct FScalableFloat MaxTrackingOffsetErrorMultiplier; // 0x4f0 (0x28)
	struct FScalableFloat AdjustedTrackingOffsetErrorMultiplierAgainstAIs; // 0x518 (0x28)
	struct FScalableFloat TrackingErrorUpdateInterval; // 0x540 (0x28)
	struct FScalableFloat TrackingInAirVelocityThreshold; // 0x568 (0x28)
	struct FScalableFloat TrackingInAirHeightDeltaThreshold; // 0x590 (0x28)
	struct FScalableFloat TargetAcquisitionRate; // 0x5b8 (0x28)
	struct FScalableFloat MaxDistanceEvaluationErrorRatio; // 0x5e0 (0x28)
	struct FScalableFloat TargetingUpdateInterval; // 0x608 (0x28)
	struct FScalableFloat TargetingUpdateIntervalMaxDeviation; // 0x630 (0x28)
	struct FScalableFloat ReachLeashLimitToleranceDistance; // 0x658 (0x28)
	struct FScalableFloat ShootFloorTrapOnlyWhenHigherThanTrap; // 0x680 (0x28)
	struct FScalableFloat TargetingRotationSpeedLimit; // 0x6a8 (0x28)
	struct FScalableFloat TargetingRotationSnapThreshold; // 0x6d0 (0x28)
	struct FWeaponAccuracy NoWeaponAccuracy; // 0x6f8 (0x738)
	struct TArray<struct FWeaponAccuracyCategory> WeaponAccuracies; // 0xe30 (0x10)
	struct TArray<struct FTargetBasedAccuracyCategory> TargetBasedAccuracies; // 0xe40 (0x10)
	unsigned char bDigestTrackingOffsetModifiersWithAvgMatchMMR; // 0xe50 (0x1)
	unsigned char unreflected_e51[0x7]; // 0xe51 (0x7) 
	struct TArray<struct FTrackingOffsetModifierInfo> TrackingOffsetModifiers; // 0xe58 (0x10)
	struct FAimingCircleSettings DefaultAimingCircleSettings; // 0xe68 (0x3e8)
};

