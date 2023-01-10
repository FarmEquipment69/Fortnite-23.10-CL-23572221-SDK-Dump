// Class /Script/FortniteGame.FortFXStaticMeshComponent
// Size: 0x610
class UFortFXStaticMeshComponent : public UStaticMeshComponent
{
	float AwakenFadeInTime; // 0x5f0 (0x4)
	float AwakenDuration; // 0x5f4 (0x4)
	float AwakenFadeOutTime; // 0x5f8 (0x4)
	float BuildingHitFadeInTime; // 0x5fc (0x4)
	float BuildingHitDuration; // 0x600 (0x4)
	float BuildingHitFadeOutTime; // 0x604 (0x4)
	class UStaticMeshComponent* SourceMeshComponent; // 0x608 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortFXStaticMeshComponent.SetSource (Underlying native function: SetSource 0x85eb47c)
	void SetSource(class UStaticMeshComponent*& InMeshComponent); // (Final | Native | Public | BlueprintCallable)
};

