// Class /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider
// Size: 0x328
class AFortAthenaLivingWorldStaticPointProvider : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x290 (0x38)
	struct FGameplayTagContainer FiltersTags; // 0x2c8 (0x20)
	struct TArray<struct FTransform> SpawnPoints; // 0x2e8 (0x10)
	bool bStartEnabled; // 0x2f8 (0x1)
	bool bRandomizeStartPoint; // 0x2f9 (0x1)
	unsigned char unreflected_2fa[0x6]; // 0x2fa (0x6) 
	struct FMulticastInlineDelegate OnActorSpawned; // 0x300 (0x10)
	class AFortGameStateAthena* CachedGameState; // 0x310 (0x8)
	class UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x318 (0x8)
	unsigned char padding_320[0x8]; // 0x320 (0x8)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0x6e8f8d0)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Protected | HasOutParms)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnActorSpawned__DelegateSignature (Has no native function)
	void OnActorSpawnedDelegateSignature(class AActor*& SpawnedActor); // (MulticastDelegate | Public | Delegate)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.EnablePointProvider (Underlying native function: EnablePointProvider 0x6e8e070)
	void EnablePointProvider(); // (Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.DisablePointProvider (Underlying native function: DisablePointProvider 0x6e8dfd0)
	void DisablePointProvider(); // (Native | Public | BlueprintCallable)
};

