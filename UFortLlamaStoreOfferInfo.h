// Class /Script/FortniteUI.FortLlamaStoreOfferInfo
// Size: 0x68
class UFortLlamaStoreOfferInfo : public UFortStoreFrontOfferInfo
{
	class UFortCardPackItemDefinition* LlamaOfferDisplayAsset; // 0x60 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortLlamaStoreOfferInfo.GetLlamaOfferDisplayAsset (Underlying native function: GetLlamaOfferDisplayAsset 0x708332c)
	class UFortCardPackItemDefinition* GetLlamaOfferDisplayAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortLlamaStoreOfferInfo.GetDisplayAssetXrayImage (Underlying native function: GetDisplayAssetXrayImage 0xa7ed360)
	struct TWeakObjectPtr<class UTexture2D> GetDisplayAssetXrayImage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortLlamaStoreOfferInfo.GetDisplayAssetPersonality (Underlying native function: GetDisplayAssetPersonality 0xa7ed320)
	class UFortPackPersonality* GetDisplayAssetPersonality(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortLlamaStoreOfferInfo.GetDisplayAssetImage (Underlying native function: GetDisplayAssetImage 0xa7ed0d8)
	struct TWeakObjectPtr<class UTexture2D> GetDisplayAssetImage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortLlamaStoreOfferInfo.GetDisplayAssetIcon (Underlying native function: GetDisplayAssetIcon 0xa7ed098)
	class UTexture* GetDisplayAssetIcon(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

