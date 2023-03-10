// Class /Script/FortniteGame.FortItemThumbnailRenderer
// Size: 0xb0
class UFortItemThumbnailRenderer : public UFortThumbnailRenderer
{
	class UMaterialInterface* PreviewMaterial; // 0x88 (0x8)
	class UClass* CaptureEnvironmentActorClass; // 0x90 (0x8)
	class UFortItemDefinition* ItemDefinition; // 0x98 (0x8)
	class UMaterialInstanceDynamic* PreviewMaterialInstance; // 0xa0 (0x8)
	unsigned char padding_a8[0x8]; // 0xa8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortItemThumbnailRenderer.UpdateItemCapture (Underlying native function: UpdateItemCapture 0x8dbb4e4)
	void UpdateItemCapture(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemThumbnailRenderer.SetItemDefinition (Underlying native function: SetItemDefinition 0x8dba4d0)
	void SetItemDefinition(class UFortItemDefinition*& InItemDefinition); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemThumbnailRenderer.InvalidateCapture (Underlying native function: InvalidateCapture 0x8dba164)
	void InvalidateCapture(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemThumbnailRenderer.GetOrCreateCaptureActor (Underlying native function: GetOrCreateCaptureActor 0x8db9d64)
	class AFortItemCaptureActor* GetOrCreateCaptureActor(class UClass*& ThumbnailCaptureTarget); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemThumbnailRenderer.GetItemPreviewMaterial (Underlying native function: GetItemPreviewMaterial 0x8db9d1c)
	class UMaterialInstanceDynamic* GetItemPreviewMaterial(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

