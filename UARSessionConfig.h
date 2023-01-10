// Class /Script/AugmentedReality.ARSessionConfig
// Size: 0x110
class UARSessionConfig : public UDataAsset
{
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30 (0x1)
	bool bGenerateCollisionForMeshData; // 0x31 (0x1)
	bool bGenerateNavMeshForMeshData; // 0x32 (0x1)
	bool bUseMeshDataForOcclusion; // 0x33 (0x1)
	bool bRenderMeshDataInWireframe; // 0x34 (0x1)
	bool bTrackSceneObjects; // 0x35 (0x1)
	bool bUsePersonSegmentationForOcclusion; // 0x36 (0x1)
	bool bUseSceneDepthForOcclusion; // 0x37 (0x1)
	bool bUseAutomaticImageScaleEstimation; // 0x38 (0x1)
	bool bUseStandardOnboardingUX; // 0x39 (0x1)
	enum EARWorldAlignment WorldAlignment; // 0x3a (0x1)
	enum EARSessionType SessionType; // 0x3b (0x1)
	enum EARPlaneDetectionMode PlaneDetectionMode; // 0x3c (0x1)
	bool bHorizontalPlaneDetection; // 0x3d (0x1)
	bool bVerticalPlaneDetection; // 0x3e (0x1)
	bool bEnableAutoFocus; // 0x3f (0x1)
	enum EARLightEstimationMode LightEstimationMode; // 0x40 (0x1)
	enum EARFrameSyncMode FrameSyncMode; // 0x41 (0x1)
	bool bEnableAutomaticCameraOverlay; // 0x42 (0x1)
	bool bEnableAutomaticCameraTracking; // 0x43 (0x1)
	bool bResetCameraTracking; // 0x44 (0x1)
	bool bResetTrackedObjects; // 0x45 (0x1)
	unsigned char unreflected_46[0x2]; // 0x46 (0x2) 
	struct TArray<class UARCandidateImage*> CandidateImages; // 0x48 (0x10)
	int MaxNumSimultaneousImagesTracked; // 0x58 (0x4)
	enum EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c (0x1)
	unsigned char unreflected_5d[0x3]; // 0x5d (0x3) 
	struct TArray<unsigned char> WorldMapData; // 0x60 (0x10)
	struct TArray<class UARCandidateObject*> CandidateObjects; // 0x70 (0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x80 (0xc)
	bool bUseOptimalVideoFormat; // 0x8c (0x1)
	enum EARFaceTrackingDirection FaceTrackingDirection; // 0x8d (0x1)
	enum EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8e (0x1)
	unsigned char unreflected_8f[0x1]; // 0x8f (0x1) 
	int MaxNumberOfTrackedFaces; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct TArray<unsigned char> SerializedARCandidateImageDatabase; // 0x98 (0x10)
	enum EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8 (0x1)
	enum EARSceneReconstruction SceneReconstructionMethod; // 0xa9 (0x1)
	unsigned char unreflected_aa[0x6]; // 0xaa (0x6) 
	class UClass* PlaneComponentClass; // 0xb0 (0x8)
	class UClass* PointComponentClass; // 0xb8 (0x8)
	class UClass* FaceComponentClass; // 0xc0 (0x8)
	class UClass* ImageComponentClass; // 0xc8 (0x8)
	class UClass* QRCodeComponentClass; // 0xd0 (0x8)
	class UClass* PoseComponentClass; // 0xd8 (0x8)
	class UClass* EnvironmentProbeComponentClass; // 0xe0 (0x8)
	class UClass* ObjectComponentClass; // 0xe8 (0x8)
	class UClass* MeshComponentClass; // 0xf0 (0x8)
	class UClass* GeoAnchorComponentClass; // 0xf8 (0x8)
	class UMaterialInterface* DefaultMeshMaterial; // 0x100 (0x8)
	class UMaterialInterface* DefaultWireframeMeshMaterial; // 0x108 (0x8)

	/* Functions */

	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects (Underlying native function: ShouldResetTrackedObjects 0x95e41ec)
	bool ShouldResetTrackedObjects(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking (Underlying native function: ShouldResetCameraTracking 0x95e41d8)
	bool ShouldResetCameraTracking(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay (Underlying native function: ShouldRenderCameraOverlay 0x85b4214)
	bool ShouldRenderCameraOverlay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking (Underlying native function: ShouldEnableCameraTracking 0x95e41c4)
	bool ShouldEnableCameraTracking(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus (Underlying native function: ShouldEnableAutoFocus 0x95e41b0)
	bool ShouldEnableAutoFocus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData (Underlying native function: SetWorldMapData 0x95e40cc)
	void SetWorldMapData(struct TArray<unsigned char>& WorldMapData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable (Underlying native function: SetSessionTrackingFeatureToEnable 0x95e4050)
	void SetSessionTrackingFeatureToEnable(enum EARSessionTrackingFeature& InSessionTrackingFeature); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod (Underlying native function: SetSceneReconstructionMethod 0x95e3fd4)
	void SetSceneReconstructionMethod(enum EARSceneReconstruction& InSceneReconstructionMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects (Underlying native function: SetResetTrackedObjects 0x95e3f58)
	void SetResetTrackedObjects(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking (Underlying native function: SetResetCameraTracking 0x95e3edc)
	void SetResetCameraTracking(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate (Underlying native function: SetFaceTrackingUpdate 0x95e377c)
	void SetFaceTrackingUpdate(enum EARFaceTrackingUpdate& InUpdate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection (Underlying native function: SetFaceTrackingDirection 0x95e3700)
	void SetFaceTrackingDirection(enum EARFaceTrackingDirection& InDirection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus (Underlying native function: SetEnableAutoFocus 0x95e34d4)
	void SetEnableAutoFocus(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat (Underlying native function: SetDesiredVideoFormat 0x95e3448)
	void SetDesiredVideoFormat(struct FARVideoFormat& NewFormat); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList (Underlying native function: SetCandidateObjectList 0x95e32ac)
	void SetCandidateObjectList(struct TArray<class UARCandidateObject*>& InCandidateObjects); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData (Underlying native function: GetWorldMapData 0x95e11a8)
	struct TArray<unsigned char> GetWorldMapData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment (Underlying native function: GetWorldAlignment 0x95e1194)
	enum EARWorldAlignment GetWorldAlignment(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType (Underlying native function: GetSessionType 0x95e0e7c)
	enum EARSessionType GetSessionType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod (Underlying native function: GetSceneReconstructionMethod 0x95e0e40)
	enum EARSceneReconstruction GetSceneReconstructionMethod(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode (Underlying native function: GetPlaneDetectionMode 0x95e0da8)
	enum EARPlaneDetectionMode GetPlaneDetectionMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked (Underlying native function: GetMaxNumSimultaneousImagesTracked 0x7ca3970)
	int GetMaxNumSimultaneousImagesTracked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode (Underlying native function: GetLightEstimationMode 0x876110c)
	enum EARLightEstimationMode GetLightEstimationMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode (Underlying native function: GetFrameSyncMode 0x95df910)
	enum EARFrameSyncMode GetFrameSyncMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate (Underlying native function: GetFaceTrackingUpdate 0x95df8f8)
	enum EARFaceTrackingUpdate GetFaceTrackingUpdate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection (Underlying native function: GetFaceTrackingDirection 0x95df8e0)
	enum EARFaceTrackingDirection GetFaceTrackingDirection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType (Underlying native function: GetEnvironmentCaptureProbeType 0x95df860)
	enum EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature (Underlying native function: GetEnabledSessionTrackingFeature 0x95df848)
	enum EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat (Underlying native function: GetDesiredVideoFormat 0x95df744)
	struct FARVideoFormat GetDesiredVideoFormat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList (Underlying native function: GetCandidateObjectList 0x95df66c)
	struct TArray<class UARCandidateObject*> GetCandidateObjectList(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList (Underlying native function: GetCandidateImageList 0x719b118)
	struct TArray<class UARCandidateImage*> GetCandidateImageList(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject (Underlying native function: AddCandidateObject 0x95dd138)
	void AddCandidateObject(class UARCandidateObject*& CandidateObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage (Underlying native function: AddCandidateImage 0x95dd09c)
	void AddCandidateImage(class UARCandidateImage*& NewCandidateImage); // (Final | Native | Public | BlueprintCallable)
};

