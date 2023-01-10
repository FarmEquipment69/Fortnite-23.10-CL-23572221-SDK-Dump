// Class /Script/LagerRuntime.FortAthenaLivingWorldWardComponent
// Size: 0xb0
class UFortAthenaLivingWorldWardComponent : public UActorComponent
{
	float DefaultRadius; // 0xa0 (0x4)
	unsigned char padding_a4[0xc]; // 0xa4 (0xc)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.SetWardRadius (Underlying native function: SetWardRadius 0x6e91b88)
	void SetWardRadius(float& Radius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.OnWorldFinishedInitialization (Underlying native function: OnWorldFinishedInitialization 0x6e91088)
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0x6e8fdcc)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)
};

