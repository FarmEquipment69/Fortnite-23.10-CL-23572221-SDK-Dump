// Class /Script/GameplayTags.GameplayTagAssetInterface
// Size: 0x28
class IGameplayTagAssetInterface : public IInterface
{

	/* Functions */

	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag (Underlying native function: HasMatchingGameplayTag 0x2861500)
	bool HasMatchingGameplayTag(struct FGameplayTag& TagToCheck); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags (Underlying native function: HasAnyMatchingGameplayTags 0x24dae94)
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags (Underlying native function: HasAllMatchingGameplayTags 0x99cfd78)
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags (Underlying native function: GetOwnedGameplayTags 0x25d9e7c)
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

