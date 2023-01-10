// Class /Script/FortniteGame.FortLevelInstanceDeviceBase
// Size: 0xf98
class AFortLevelInstanceDeviceBase : public AFortCreativeDeviceProp
{
	unsigned char unreflected_f08[0x8]; // 0xf08 (0x8) 
	struct TWeakObjectPtr<class UWorld> WorldAsset; // 0xf10 (0x28)
	class AGameplayVolume* GameplayVolume; // 0xf38 (0x8)
	struct FGuid LevelInstanceSpawnGuid; // 0xf40 (0x10)
	unsigned char padding_f50[0x48]; // 0xf50 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.FortLevelInstanceDeviceBase.SetLastUsedLevelName (Underlying native function: SetLastUsedLevelName 0x8575b40)
	void SetLastUsedLevelName(struct FString& InLevelName); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLevelInstanceDeviceBase.OnRep_LevelInstanceSpawnGuid (Underlying native function: OnRep_LevelInstanceSpawnGuid 0x8574a88)
	void OnRepLevelInstanceSpawnGuid(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortLevelInstanceDeviceBase.GetGameplayVolume (Underlying native function: GetGameplayVolume 0x8572df8)
	class AGameplayVolume* GetGameplayVolume(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLevelInstanceDeviceBase.AttemptToLoadLastUsedSettings (Underlying native function: AttemptToLoadLastUsedSettings 0x85702fc)
	void AttemptToLoadLastUsedSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortLevelInstanceDeviceBase.ApplyLastUsedSettings (Has no native function)
	void ApplyLastUsedSettings(struct FGuid& LevelGuid, struct FString& LevelName, int& SizeX, int& SizeY, int& Height); // (Event | Protected | HasDefaults | BlueprintEvent)
};

