// Class /Script/FortniteGame.FortGameSessionDedicatedAthena
// Size: 0xb08
class AFortGameSessionDedicatedAthena : public AFortGameSessionDedicated
{
	unsigned char unreflected_608[0x210]; // 0x608 (0x210) 
	bool bDownloadEventsAfterHotfixCheck; // 0x818 (0x1)
	unsigned char unreflected_819[0x3]; // 0x819 (0x3) 
	float ReconnectToMMSDelay; // 0x81c (0x4)
	float MaxReconnectToMMSDelay; // 0x820 (0x4)
	unsigned char unreflected_824[0xc]; // 0x824 (0xc) 
	struct FString MMSVersionCompatability; // 0x830 (0x10)
	struct FString MMSTicketURLServer; // 0x840 (0x10)
	float MMSPingInterval; // 0x850 (0x4)
	int QueryUserMode; // 0x854 (0x4)
	bool bAutoConnectToMMS; // 0x858 (0x1)
	unsigned char unreflected_859[0x37]; // 0x859 (0x37) 
	bool bEnableMMSBackfill; // 0x890 (0x1)
	bool bDisableBackfillDuringGracefulShutdown; // 0x891 (0x1)
	unsigned char unreflected_892[0x6]; // 0x892 (0x6) 
	struct TArray<struct FName> DisabledPlaylistsDuringGracefulShutdown; // 0x898 (0x10)
	unsigned char unreflected_8a8[0x4]; // 0x8a8 (0x4) 
	float PostBackfillAssignmentUpdateDelay; // 0x8ac (0x4)
	unsigned char unreflected_8b0[0x168]; // 0x8b0 (0x168) 
	bool bEnableWaitingForMatchAssignmentTimeout; // 0xa18 (0x1)
	unsigned char unreflected_a19[0x3]; // 0xa19 (0x3) 
	float WaitingForMatchAssignmentRestartDelay; // 0xa1c (0x4)
	unsigned char unreflected_a20[0x20]; // 0xa20 (0x20) 
	float FullMeshRetryDelay; // 0xa40 (0x4)
	float MeshNetworkGCTimerRate; // 0xa44 (0x4)
	float MeshNetworkServerPerfTimerRate; // 0xa48 (0x4)
	unsigned char padding_a4c[0xbc]; // 0xa4c (0xbc)

	/* Functions */

	// Function /Script/FortniteGame.FortGameSessionDedicatedAthena.HandlePlaylistLoaded (Underlying native function: HandlePlaylistLoaded 0x8986f1c)
	void HandlePlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | 0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortGameSessionDedicatedAthena.HandlePlaylistInitialized (Underlying native function: HandlePlaylistInitialized 0x8986e9c)
	void HandlePlaylistInitialized(class AFortGameModeAthena*& GMA); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortGameSessionDedicatedAthena.HandleExitingSpawningStartup (Underlying native function: HandleExitingSpawningStartup 0x8986e88)
	void HandleExitingSpawningStartup(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameSessionDedicatedAthena.HandleAllPlaylistLevelsVisible (Underlying native function: HandleAllPlaylistLevelsVisible 0x8986e74)
	void HandleAllPlaylistLevelsVisible(); // (Final | Native | Protected)
};

