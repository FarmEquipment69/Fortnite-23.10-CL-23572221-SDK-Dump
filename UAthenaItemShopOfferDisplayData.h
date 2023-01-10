// Class /Script/FortniteGame.AthenaItemShopOfferDisplayData
// Size: 0x40
class UAthenaItemShopOfferDisplayData : public UPrimaryDataAsset
{
	struct TArray<class UMaterialInterface*> Presentations; // 0x30 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.AthenaItemShopOfferDisplayData.HasNoPresentations (Underlying native function: HasNoPresentations 0x691a1e8)
	bool HasNoPresentations(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaItemShopOfferDisplayData.AddPresentation (Underlying native function: AddPresentation 0x7db48ac)
	void AddPresentation(class UMaterialInterface*& PresentationToAdd); // (Final | Native | Public | BlueprintCallable)
};

