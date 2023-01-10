// Class /Script/FortniteGame.FortAbilityDecoTool
// Size: 0x10c0
class AFortAbilityDecoTool : public AFortDecoTool
{
	struct FAbilityToolSpawnParameters CachedSpawnParameters; // 0x1080 (0x40)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityDecoTool.GetSpawnParameters (Underlying native function: GetSpawnParameters 0x8e0d118)
	void GetSpawnParameters(struct FAbilityToolSpawnParameters& OutSpawnParamters); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilityDecoTool.GetPlacementAbilityInstance (Underlying native function: GetPlacementAbilityInstance 0x8e0ce24)
	class UFortGameplayAbility* GetPlacementAbilityInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityDecoTool.GetPlacementAbilityHandle (Underlying native function: GetPlacementAbilityHandle 0x8e0cdf8)
	struct FGameplayAbilitySpecHandle GetPlacementAbilityHandle(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityDecoTool.AbilitySpawnDeco (Underlying native function: AbilitySpawnDeco 0x8e0b96c)
	class ABuildingActor* AbilitySpawnDeco(struct FAbilityToolSpawnParameters& SpawnParameters); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

