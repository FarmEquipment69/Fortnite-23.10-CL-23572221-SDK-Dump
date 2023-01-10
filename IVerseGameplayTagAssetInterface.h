// Class /Script/VerseGameplayTags.VerseGameplayTagAssetInterface
// Size: 0x28
class IVerseGameplayTagAssetInterface : public IInterface
{

	/* Functions */

	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasMatchingGameplayTag (Underlying native function: HasMatchingGameplayTag 0x6caea18)
	bool HasMatchingGameplayTag(struct FVerseGameplayTag*& TagToCheck); // (Native | Public | Const)

	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasAnyMatchingGameplayTags (Underlying native function: HasAnyMatchingGameplayTags 0x6cae96c)
	bool HasAnyMatchingGameplayTags(struct FVerseGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | Const)

	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasAllMatchingGameplayTags (Underlying native function: HasAllMatchingGameplayTags 0x6cae8c0)
	bool HasAllMatchingGameplayTags(struct FVerseGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | Const)

	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.GetOwnedGameplayTags (Underlying native function: GetOwnedGameplayTags 0x6cae820)
	void GetOwnedGameplayTags(struct FVerseGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | Const)
};

