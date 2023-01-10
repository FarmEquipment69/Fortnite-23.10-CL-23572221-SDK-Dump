// Class /Script/FortniteGame.FortFXSkeletonMeshComponent
// Size: 0xfa0
class UFortFXSkeletonMeshComponent : public USkeletalMeshComponent
{
	float AwakenFadeInTime; // 0xf80 (0x4)
	float AwakenDuration; // 0xf84 (0x4)
	float AwakenFadeOutTime; // 0xf88 (0x4)
	float BuildingHitFadeInTime; // 0xf8c (0x4)
	float BuildingHitDuration; // 0xf90 (0x4)
	float BuildingHitFadeOutTime; // 0xf94 (0x4)
	class USkeletalMeshComponent* SourceMeshComponent; // 0xf98 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortFXSkeletonMeshComponent.SetSource (Underlying native function: SetSource 0x85eb388)
	void SetSource(class USkeletalMeshComponent*& InMeshComponent); // (Final | Native | Public | BlueprintCallable)
};

