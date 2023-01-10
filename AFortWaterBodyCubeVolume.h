// Class /Script/FortniteGame.FortWaterBodyCubeVolume
// Size: 0x3b0
class AFortWaterBodyCubeVolume : public AFortWaterBodyActor
{
	class UFortWaterBodyCubeVolumeComponent* FortWaterBodyCubeVolumeComponent; // 0x3a8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.UpdateParametersOnUnderwaterPostProcess (Underlying native function: UpdateParametersOnUnderwaterPostProcess 0x860cad0)
	void UpdateParametersOnUnderwaterPostProcess(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.SetWaterVisibiltyEnabled (Underlying native function: SetWaterVisibiltyEnabled 0x860c5dc)
	void SetWaterVisibiltyEnabled(bool& bNewIsWaterVisibilityEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.SetWaterRatio (Underlying native function: SetWaterRatio 0x860c4c8)
	void SetWaterRatio(struct FVector& NewWaterRatio); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.SetWaterCollisionEnabled (Underlying native function: SetWaterCollisionEnabled 0x860c3c4)
	void SetWaterCollisionEnabled(bool& bNewIsCollisionEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.SetVolumeSizeByFortCell (Underlying native function: SetVolumeSizeByFortCell 0x860c234)
	void SetVolumeSizeByFortCell(struct FVector& NewFortCellSize); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.SetVolumeSize (Underlying native function: SetVolumeSize 0x860c120)
	void SetVolumeSize(struct FVector& NewSize); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.SetVolumeExtentByFortCell (Underlying native function: SetVolumeExtentByFortCell 0x860c00c)
	void SetVolumeExtentByFortCell(struct FVector& NewFortCellExtent); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.SetVolumeExtent (Underlying native function: SetVolumeExtent 0x860bef8)
	void SetVolumeExtent(struct FVector& NewExtent); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.SetParametersOnUnderwaterPostProcess (Has no native function)
	void SetParametersOnUnderwaterPostProcess(class UMaterialInstanceDynamic*& UnderWaterMID); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.SetParametersOnMID (Has no native function)
	void SetParametersOnMID(class UMaterialInstanceDynamic*& Mid); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.IsWaterVisible (Underlying native function: IsWaterVisible 0x860a614)
	bool IsWaterVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.IsWaterVisibilityEnabled (Underlying native function: IsWaterVisibilityEnabled 0x860a5dc)
	bool IsWaterVisibilityEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.IsWaterCollisionEnabled (Underlying native function: IsWaterCollisionEnabled 0x860a5a4)
	bool IsWaterCollisionEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.IsVolumeFilled (Underlying native function: IsVolumeFilled 0x860a55c)
	bool IsVolumeFilled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.IsVolumeEmptied (Underlying native function: IsVolumeEmptied 0x860a514)
	bool IsVolumeEmptied(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterRatio (Underlying native function: GetWaterRatio 0x8609e00)
	struct FVector GetWaterRatio(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeSizeScaledFortCell (Underlying native function: GetWaterCubeSizeScaledFortCell 0x8609d38)
	struct FVector GetWaterCubeSizeScaledFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeSizeScaled (Underlying native function: GetWaterCubeSizeScaled 0x8609cc0)
	struct FVector GetWaterCubeSizeScaled(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeSizeFortCell (Underlying native function: GetWaterCubeSizeFortCell 0x8609c50)
	struct FVector GetWaterCubeSizeFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeSize (Underlying native function: GetWaterCubeSize 0x8609b90)
	struct FVector GetWaterCubeSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeMin (Underlying native function: GetWaterCubeMin 0x8609b18)
	struct FVector GetWaterCubeMin(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeMesh (Underlying native function: GetWaterCubeMesh 0x8609ae0)
	class UStaticMeshComponent* GetWaterCubeMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeMax (Underlying native function: GetWaterCubeMax 0x8609a68)
	struct FVector GetWaterCubeMax(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeExtentScaledFortCell (Underlying native function: GetWaterCubeExtentScaledFortCell 0x86099f0)
	struct FVector GetWaterCubeExtentScaledFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeExtentScaled (Underlying native function: GetWaterCubeExtentScaled 0x8609980)
	struct FVector GetWaterCubeExtentScaled(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeExtentFortCell (Underlying native function: GetWaterCubeExtentFortCell 0x8609910)
	struct FVector GetWaterCubeExtentFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeExtent (Underlying native function: GetWaterCubeExtent 0x8609868)
	struct FVector GetWaterCubeExtent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeCenter (Underlying native function: GetWaterCubeCenter 0x86097f0)
	struct FVector GetWaterCubeCenter(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetWaterCubeBounds (Underlying native function: GetWaterCubeBounds 0x860962c)
	void GetWaterCubeBounds(struct FVector& min, struct FVector& max); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeSizeScaledFortCell (Underlying native function: GetVolumeSizeScaledFortCell 0x86095b4)
	struct FVector GetVolumeSizeScaledFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeSizeScaled (Underlying native function: GetVolumeSizeScaled 0x8609544)
	struct FVector GetVolumeSizeScaled(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeSizeFortCell (Underlying native function: GetVolumeSizeFortCell 0x8609484)
	struct FVector GetVolumeSizeFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeSize (Underlying native function: GetVolumeSize 0x86093f4)
	struct FVector GetVolumeSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeMin (Underlying native function: GetVolumeMin 0x860932c)
	struct FVector GetVolumeMin(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeMax (Underlying native function: GetVolumeMax 0x8609264)
	struct FVector GetVolumeMax(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeExtentScaledFortCell (Underlying native function: GetVolumeExtentScaledFortCell 0x86091f4)
	struct FVector GetVolumeExtentScaledFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeExtentScaled (Underlying native function: GetVolumeExtentScaled 0x860912c)
	struct FVector GetVolumeExtentScaled(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeExtentFortCell (Underlying native function: GetVolumeExtentFortCell 0x86090bc)
	struct FVector GetVolumeExtentFortCell(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeExtent (Underlying native function: GetVolumeExtent 0x8609064)
	struct FVector GetVolumeExtent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeCenter (Underlying native function: GetVolumeCenter 0x8609034)
	struct FVector GetVolumeCenter(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWaterBodyCubeVolume.GetVolumeBounds (Underlying native function: GetVolumeBounds 0x8608e70)
	void GetVolumeBounds(struct FVector& min, struct FVector& max); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

