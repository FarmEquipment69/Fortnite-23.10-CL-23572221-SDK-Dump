// Class /Script/FortniteGame.FortGameSessionDedicated
// Size: 0x608
class AFortGameSessionDedicated : public AFortGameSession
{
	unsigned char unreflected_410[0x30]; // 0x410 (0x30) 
	bool bEnforceCrossplayRestrictions; // 0x440 (0x1)
	unsigned char unreflected_441[0x7]; // 0x441 (0x7) 
	float HotfixCheckTimer; // 0x448 (0x4)
	float HotfixCheckVariance; // 0x44c (0x4)
	unsigned char unreflected_450[0x8]; // 0x450 (0x8) 
	float DataAssetDirectoryUpdateCheckTimer; // 0x458 (0x4)
	float DataAssetDirectoryUpdateCheckVariance; // 0x45c (0x4)
	unsigned char unreflected_460[0x18]; // 0x460 (0x18) 
	float ReservationAbandonmentTime; // 0x478 (0x4)
	unsigned char unreflected_47c[0x3c]; // 0x47c (0x3c) 
	float ConsoleSessionRetryWaitSeconds; // 0x4b8 (0x4)
	unsigned char unreflected_4bc[0x15]; // 0x4bc (0x15) 
	enum EServerManifestOutputFormat ServerManifestOutputFormat; // 0x4d1 (0x1)
	unsigned char unreflected_4d2[0x6]; // 0x4d2 (0x6) 
	struct FString ServerManifestDestination; // 0x4d8 (0x10)
	struct FString HostAPIBaseUrl; // 0x4e8 (0x10)
	unsigned char unreflected_4f8[0x68]; // 0x4f8 (0x68) 
	float IdleResetShortTimer; // 0x560 (0x4)
	unsigned char unreflected_564[0x14]; // 0x564 (0x14) 
	struct TArray<struct FClientIdRestrictions> ClientIdRestrictions; // 0x578 (0x10)
	unsigned char unreflected_588[0x68]; // 0x588 (0x68) 
	struct TArray<struct FString> CalendarEventsRequiringNewForkedMasterProcess; // 0x5f0 (0x10)
	unsigned char padding_600[0x8]; // 0x600 (0x8)
};

