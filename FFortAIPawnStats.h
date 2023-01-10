// ScriptStruct /Script/FortniteGame.FortAIPawnStats
// Size: 0x120
struct FFortAIPawnStats : FFortPawnStats
{
	int ScoreValue; // 0xc0 (0x4)
	float DormantSightRadius; // 0xc4 (0x4)
	float DormantHearingThreshold; // 0xc8 (0x4)
	bool bDormantCanHearHostile; // 0xcc (0x1)
	bool bDormantCanHearNeutral; // 0xcd (0x1)
	bool bDormantCanHearFriendly; // 0xce (0x1)
	unsigned char unreflected_cf[0x1]; // 0xcf (0x1) 
	float DormantLOSHearingThreshold; // 0xd0 (0x4)
	float DormantPeripheralVisionAngle; // 0xd4 (0x4)
	float AlertSightRadius; // 0xd8 (0x4)
	float AlertHearingThreshold; // 0xdc (0x4)
	float AlertLOSHearingThreshold; // 0xe0 (0x4)
	bool bAlertCanHearHostile; // 0xe4 (0x1)
	bool bAlertCanHearNeutral; // 0xe5 (0x1)
	bool bAlertCanHearFriendly; // 0xe6 (0x1)
	unsigned char unreflected_e7[0x1]; // 0xe7 (0x1) 
	float AlertPeripheralVisionAngle; // 0xe8 (0x4)
	float AutoSuccessRangeFromLastSeenLocation; // 0xec (0x4)
	class UCurveTable* HealthScalingTable; // 0xf0 (0x8)
	struct FName HealthScalingTableRow; // 0xf8 (0x4)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	class UCurveTable* ControlResistanceScalingTable; // 0x100 (0x8)
	struct FName ControlResistanceScalingTableRow; // 0x108 (0x4)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	class UCurveTable* DifficultyRatingTable; // 0x110 (0x8)
	struct FName DifficultyRatingTableRow; // 0x118 (0x4)
	unsigned char padding_11c[0x4]; // 0x11c (0x4)
};

