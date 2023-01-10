// Class /Script/FortniteGame.FortMtxWallets
// Size: 0x78
class UFortMtxWallets : public UObject
{
	struct TMap<enum EFortMtxPlatform, struct FFortMtxPlatformList> SharedWallets; // 0x28 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortMtxWallets.SetSelectedAppStore (Underlying native function: SetSelectedAppStore 0x8a35e90)
	static void SetSelectedAppStore(enum EAppStore& InAppStore); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMtxWallets.GetSelectedAppStore (Underlying native function: GetSelectedAppStore 0x8a350e4)
	static bool GetSelectedAppStore(enum EAppStore& OutAppStore); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMtxWallets.GetAvailableAppStores (Underlying native function: GetAvailableAppStores 0x8a34580)
	static struct TArray<enum EAppStore> GetAvailableAppStores(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

