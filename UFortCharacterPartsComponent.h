// Class /Script/FortniteGame.FortCharacterPartsComponent
// Size: 0xe8
class UFortCharacterPartsComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x10]; // 0xa0 (0x10) 
	class UFortCustomizationAssetLoader* CustomizationAssetLoader; // 0xb0 (0x8)
	struct TArray<class UCustomCharacterPart*> CharacterPartList; // 0xb8 (0x10)
	struct TArray<class USkeletalMeshComponentBudgeted*> SkeletalMeshComponents; // 0xc8 (0x10)
	struct TArray<struct FPartStackEntry> CharacterPartStack; // 0xd8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortCharacterPartsComponent.RestoreParts (Underlying native function: RestoreParts 0x843ddf8)
	bool RestoreParts(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterPartsComponent.RemovePartByGameplayTag (Underlying native function: RemovePartByGameplayTag 0x843dd58)
	bool RemovePartByGameplayTag(struct FGameplayTag& PartTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterPartsComponent.RemovePart (Underlying native function: RemovePart 0x843dc88)
	bool RemovePart(struct TEnumAsByte<EFortCustomPartType>& PartType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterPartsComponent.RemoveAllParts (Underlying native function: RemoveAllParts 0x843dc74)
	void RemoveAllParts(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterPartsComponent.OnRep_CharacterParts (Underlying native function: OnRep_CharacterParts 0x14274ec)
	void OnRepCharacterParts(struct TArray<class UCustomCharacterPart*>& PreviousParts); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCharacterPartsComponent.GetSkeletalMeshForPartType (Underlying native function: GetSkeletalMeshForPartType 0x1425838)
	class USkeletalMeshComponent* GetSkeletalMeshForPartType(struct TEnumAsByte<EFortCustomPartType>& PartType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterPartsComponent.GetSkeletalMeshForPartTag (Underlying native function: GetSkeletalMeshForPartTag 0x843d6f8)
	class USkeletalMeshComponent* GetSkeletalMeshForPartTag(struct FGameplayTag& PartTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterPartsComponent.GetSkeletalMeshesForAllParts (Underlying native function: GetSkeletalMeshesForAllParts 0x843d784)
	struct TArray<class USkeletalMeshComponent*> GetSkeletalMeshesForAllParts(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterPartsComponent.ApplyParts (Underlying native function: ApplyParts 0x843d2cc)
	bool ApplyParts(struct TArray<class UCustomCharacterPart*>& Parts); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

