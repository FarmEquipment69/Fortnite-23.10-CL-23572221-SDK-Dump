// Class /Script/FortniteAI.FortAthenaAIBotPerceptionSkillSet
// Size: 0xcb8
class UFortAthenaAIBotPerceptionSkillSet : public UFortAthenaAIBotSkillSet
{
	struct FScalableFloat SightReactionTime; // 0x30 (0x28)
	struct FScalableFloat SightRandomDeviation; // 0x58 (0x28)
	struct FScalableFloat SightRandomAddition; // 0x80 (0x28)
	struct TArray<struct FSightReactionSpecialization> SightReactionSpecializations; // 0xa8 (0x10)
	struct FScalableFloat LoseSightTime; // 0xb8 (0x28)
	struct FScalableFloat LoseSightRandomDeviation; // 0xe0 (0x28)
	struct FScalableFloat SightSuspicionTime; // 0x108 (0x28)
	struct FScalableFloat SightSuspicionRandomDeviation; // 0x130 (0x28)
	struct FScalableFloat EnemyMarkedReactionTime; // 0x158 (0x28)
	struct FScalableFloat EnemyMarkedReactionRandomDeviation; // 0x180 (0x28)
	struct FScalableFloat ChancesToHelpOnMarkedEnemy; // 0x1a8 (0x28)
	struct FScalableFloat DamageReactionTime; // 0x1d0 (0x28)
	struct FScalableFloat DamageRandomDeviation; // 0x1f8 (0x28)
	struct FScalableFloat HearingReactionTime; // 0x220 (0x28)
	struct FScalableFloat HearingRandomDeviation; // 0x248 (0x28)
	struct FScalableFloat MaxHearingLocationError; // 0x270 (0x28)
	struct FFortAthenaAIBotTargetHeuristicSettings DefaultTargetHeuristicSettings; // 0x298 (0x320)
	struct TArray<struct FFortAthenaAIBotTargetHeuristicSettingsSpecialization> TargetHeuristicSettingsSpecializations; // 0x5b8 (0x10)
	struct FScalableFloat ObstacleDistanceOverrideTargeting; // 0x5c8 (0x28)
	struct FScalableFloat ObstacleForgetDistance; // 0x5f0 (0x28)
	struct FScalableFloat ObstacleMinimumBlockingTime; // 0x618 (0x28)
	struct FSoundPerceptionSetting SoundSettings[0x7]; // 0x640 (0x78) (ARRAY) 
	struct FScalableFloat AlertedAccumulatedLoudnessLimit; // 0x988 (0x28)
	struct FScalableFloat AlertedAccumulatedDamageLimit; // 0x9b0 (0x28)
	struct FScalableFloat LKPAccumulatedLoudnessLimit; // 0x9d8 (0x28)
	struct FScalableFloat EnemyMarkingDelay; // 0xa00 (0x28)
	struct FScalableFloat EnemyMarkingDelayRandomDeviation; // 0xa28 (0x28)
	struct FScalableFloat AdditionalMarkedEnemyLKPForgetTime; // 0xa50 (0x28)
	struct FScalableFloat AdditionalMarkedEnemyLKPForgetDistance; // 0xa78 (0x28)
	struct TArray<class UFortAthenaAIBotAlertLevelConfig*> AlertLevelConfigs; // 0xaa0 (0x10)
	struct FScalableFloat ProjectileThreatForgetTime; // 0xab0 (0x28)
	struct FScalableFloat TrapDetectionDistanceMax; // 0xad8 (0x28)
	struct FScalableFloat TrapDetectionDistanceMaxDeviation; // 0xb00 (0x28)
	struct FScalableFloat TrapDetectionChanceWhenPerpendicular; // 0xb28 (0x28)
	struct FScalableFloat TrapDetectionChanceWhenParallel; // 0xb50 (0x28)
	struct FScalableFloat TrapDetectionEvaluationAngleThreshold; // 0xb78 (0x28)
	struct FScalableFloat TrapDetectionAutomaticIfWithinCreationTime; // 0xba0 (0x28)
	struct FScalableFloat StealthMeterEnable; // 0xbc8 (0x28)
	struct FScalableFloat StealthMeterThreshold; // 0xbf0 (0x28)
	struct FScalableFloat StealthMeterIncreaseSpeed; // 0xc18 (0x28)
	struct FScalableFloat StealthMeterDecreaseSpeed; // 0xc40 (0x28)
	struct FScalableFloat StealthMeterAllowSharedTarget; // 0xc68 (0x28)
	struct FScalableFloat bStealthMeterForceLKPWhenDamagedAndThreatened; // 0xc90 (0x28)
};

