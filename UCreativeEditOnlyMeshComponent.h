// Class /Script/FortniteGame.CreativeEditOnlyMeshComponent
// Size: 0x6c0
class UCreativeEditOnlyMeshComponent : public UStaticMeshComponent
{
	unsigned char unreflected_5f0[0x8]; // 0x5f0 (0x8) 
	bool bLoadOnServer; // 0x5f8 (0x1)
	bool bUseStaticRotation; // 0x5f9 (0x1)
	bool bEditMeshCanBeNull; // 0x5fa (0x1)
	unsigned char unreflected_5fb[0x5]; // 0x5fb (0x5) 
	struct TWeakObjectPtr<class UStaticMesh> EditMesh; // 0x600 (0x28)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> EditOverrideMaterials; // 0x628 (0x10)
	bool bShowInPreview; // 0x638 (0x1)
	unsigned char unreflected_639[0x7]; // 0x639 (0x7) 
	struct TWeakObjectPtr<class UStaticMesh> PreviewOverrideMesh; // 0x640 (0x28)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> PreviewOverrideMaterials; // 0x668 (0x10)
	struct FMulticastInlineDelegate OnMeshAndMaterialsLoaded; // 0x678 (0x10)
	unsigned char unreflected_688[0x10]; // 0x688 (0x10) 
	class UStaticMesh* CachedMesh; // 0x698 (0x8)
	struct TArray<class UMaterialInterface*> CachedOverrideMaterials; // 0x6a0 (0x10)
	unsigned char padding_6b0[0x10]; // 0x6b0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.SetPreviewMeshAndMaterials (Underlying native function: SetPreviewMeshAndMaterials 0x84fbdf4)
	void SetPreviewMeshAndMaterials(struct TWeakObjectPtr<class UStaticMesh>& InPreviewMesh, struct TArray<struct TWeakObjectPtr<class UMaterialInterface>>& InPreviewMaterials); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.SetEditMeshAndMaterials (Underlying native function: SetEditMeshAndMaterials 0x84fb9ec)
	void SetEditMeshAndMaterials(struct TWeakObjectPtr<class UStaticMesh>& InEditMesh, struct TArray<struct TWeakObjectPtr<class UMaterialInterface>>& InEditMaterials); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.ReloadMeshAndMaterials (Underlying native function: ReloadMeshAndMaterials 0x84faf60)
	void ReloadMeshAndMaterials(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.OnMinigamePlayModeChanged (Underlying native function: OnMinigamePlayModeChanged 0x84fa028)
	void OnMinigamePlayModeChanged(class AFortMinigame*& Minigame, bool& bIsInPlayMode); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.K2_UpdateEditorPreview (Has no native function)
	void K2UpdateEditorPreview(bool& bHasMoved); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.K2_SetupForEditorPreview (Has no native function)
	void K2SetupForEditorPreview(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.IsEditorPreview (Underlying native function: IsEditorPreview 0x24f75e4)
	bool IsEditorPreview(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.GetPreviewOverrideMesh (Underlying native function: GetPreviewOverrideMesh 0x84f9548)
	struct TWeakObjectPtr<class UStaticMesh> GetPreviewOverrideMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.GetPreviewOverrideMaterials (Underlying native function: GetPreviewOverrideMaterials 0x84f952c)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> GetPreviewOverrideMaterials(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.GetEditOverrideMaterials (Underlying native function: GetEditOverrideMaterials 0x84f916c)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> GetEditOverrideMaterials(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.GetEditMesh (Underlying native function: GetEditMesh 0x84f90d8)
	struct TWeakObjectPtr<class UStaticMesh> GetEditMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

