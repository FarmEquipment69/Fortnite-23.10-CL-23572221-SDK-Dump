// Class /Script/AugmentedReality.ARBlueprintLibrary
// Size: 0x28
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AugmentedReality.ARBlueprintLibrary.UnpinComponent (Underlying native function: UnpinComponent 0x95e4514)
	static void UnpinComponent(class USceneComponent*& ComponentToUnpin); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.ToggleARCapture (Underlying native function: ToggleARCapture 0x95e4450)
	static bool ToggleARCapture(bool& bOnOff, enum EARCaptureType& CaptureType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.StopARSession (Underlying native function: StopARSession 0x95e443c)
	static void StopARSession(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.StartARSession (Underlying native function: StartARSession 0x95e4200)
	static void StartARSession(class UARSessionConfig*& SessionConfig); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera (Underlying native function: SetEnabledXRCamera 0x95e3550)
	static void SetEnabledXRCamera(bool& bOnOff); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldScale (Underlying native function: SetARWorldScale 0x95e2fa4)
	static void SetARWorldScale(float& InWorldScale); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation (Underlying native function: SetARWorldOriginLocationAndRotation 0x95e2e44)
	static void SetARWorldOriginLocationAndRotation(struct FVector& OriginLocation, struct FRotator& OriginRotation, bool& bIsTransformInWorldSpace, bool& bMaintainUpDirection); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform (Underlying native function: SetAlignmentTransform 0x95e3078)
	static void SetAlignmentTransform(struct FTransform& InAlignmentTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore (Underlying native function: SaveARPinToLocalStore 0x95e2288)
	static bool SaveARPinToLocalStore(struct FName& InSaveName, class UARPin*& InPin); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.ResizeXRCamera (Underlying native function: ResizeXRCamera 0x95e21f4)
	static struct FIntPoint* ResizeXRCamera(struct FIntPoint*& InSize); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemovePin (Underlying native function: RemovePin 0x95e2014)
	static void RemovePin(class UARPin*& PinToRemove); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore (Underlying native function: RemoveARPinFromLocalStore 0x95e1f94)
	static void RemoveARPinFromLocalStore(struct FName& InSaveName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore (Underlying native function: RemoveAllARPinsFromLocalStore 0x95e2000)
	static void RemoveAllARPinsFromLocalStore(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult (Underlying native function: PinComponentToTraceResult 0x95e1e34)
	static class UARPin* PinComponentToTraceResult(class USceneComponent*& ComponentToPin, struct FARTraceResult& TraceResult, struct FName& DebugName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToARPin (Underlying native function: PinComponentToARPin 0x95e1d70)
	static bool PinComponentToARPin(class USceneComponent*& ComponentToPin, class UARPin*& Pin); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponent (Underlying native function: PinComponent 0x95e1bb4)
	static class UARPin* PinComponent(class USceneComponent*& ComponentToPin, struct FTransform& PinToWorldTransform, class UARTrackedGeometry*& TrackedGeometry, struct FName& DebugName); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.PauseARSession (Underlying native function: PauseARSession 0x95e1ba0)
	static void PauseARSession(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore (Underlying native function: LoadARPinsFromLocalStore 0x95e1ae8)
	static struct TMap<struct FName, class UARPin*> LoadARPinsFromLocalStore(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D (Underlying native function: LineTraceTrackedObjects3D 0x95e1708)
	static struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector& Start, struct FVector& End, bool& bTestFeaturePoints, bool& bTestGroundPlane, bool& bTestPlaneExtents, bool& bTestPlaneBoundaryPolygon); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects (Underlying native function: LineTraceTrackedObjects 0x95e1928)
	static struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D& ScreenCoord, bool& bTestFeaturePoints, bool& bTestGroundPlane, bool& bTestPlaneExtents, bool& bTestPlaneBoundaryPolygon); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported (Underlying native function: IsSessionTypeSupported 0x95e166c)
	static bool IsSessionTypeSupported(enum EARSessionType& SessionType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported (Underlying native function: IsSessionTrackingFeatureSupported 0x95e15ac)
	static bool IsSessionTrackingFeatureSupported(enum EARSessionType& SessionType, enum EARSessionTrackingFeature& SessionTrackingFeature); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported (Underlying native function: IsSceneReconstructionSupported 0x95e14ec)
	static bool IsSceneReconstructionSupported(enum EARSessionType& SessionType, enum EARSceneReconstruction& SceneReconstructionMethod); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARSupported (Underlying native function: IsARSupported 0x95e14c8)
	static bool IsARSupported(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported (Underlying native function: IsARPinLocalStoreSupported 0x95e14a4)
	static bool IsARPinLocalStoreSupported(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady (Underlying native function: IsARPinLocalStoreReady 0x95e1480)
	static bool IsARPinLocalStoreReady(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus (Underlying native function: GetWorldMappingStatus 0x95e11c4)
	static enum EARWorldMappingState GetWorldMappingStatus(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason (Underlying native function: GetTrackingQualityReason 0x95e1170)
	static enum EARTrackingQualityReason GetTrackingQualityReason(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQuality (Underlying native function: GetTrackingQuality 0x95e114c)
	static enum EARTrackingQuality GetTrackingQuality(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats (Underlying native function: GetSupportedVideoFormats 0x95e0ea8)
	static struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum EARSessionType& SessionType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSessionConfig (Underlying native function: GetSessionConfig 0x95e0e58)
	static class UARSessionConfig* GetSessionConfig(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPointCloud (Underlying native function: GetPointCloud 0x95e0dcc)
	static struct TArray<struct FVector> GetPointCloud(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage (Underlying native function: GetPersonSegmentationImage 0x95e0d80)
	static class UARTexture* GetPersonSegmentationImage(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage (Underlying native function: GetPersonSegmentationDepthImage 0x95e0d58)
	static class UARTexture* GetPersonSegmentationDepthImage(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation (Underlying native function: GetObjectClassificationAtLocation 0x95e09a4)
	static bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float& MaxLocationDiff); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported (Underlying native function: GetNumberOfTrackedFacesSupported 0x95e0968)
	static int GetNumberOfTrackedFacesSupported(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate (Underlying native function: GetCurrentLightEstimate 0x95df708)
	static class UARLightEstimate* GetCurrentLightEstimate(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics (Underlying native function: GetCameraIntrinsics 0x95df5ac)
	static bool GetCameraIntrinsics(struct FARCameraIntrinsics& OutCameraIntrinsics); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraImage (Underlying native function: GetCameraImage 0x95df55c)
	static class UARTextureCameraImage* GetCameraImage(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraDepth (Underlying native function: GetCameraDepth 0x95df50c)
	static class UARTextureCameraDepth* GetCameraDepth(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARWorldScale (Underlying native function: GetARWorldScale 0x95dec34)
	static float GetARWorldScale(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARTexture (Underlying native function: GetARTexture 0x95debb4)
	static class UARTexture* GetARTexture(enum EARTextureType& TextureType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARSessionStatus (Underlying native function: GetARSessionStatus 0x95deb3c)
	static struct FARSessionStatus GetARSessionStatus(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses (Underlying native function: GetAllTrackedPoses 0x95df260)
	static struct TArray<class UARTrackedPose*> GetAllTrackedPoses(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints (Underlying native function: GetAllTrackedPoints 0x95df1ec)
	static struct TArray<class UARTrackedPoint*> GetAllTrackedPoints(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes (Underlying native function: GetAllTrackedPlanes 0x95df178)
	static struct TArray<class UARPlaneGeometry*> GetAllTrackedPlanes(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages (Underlying native function: GetAllTrackedImages 0x95df104)
	static struct TArray<class UARTrackedImage*> GetAllTrackedImages(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes (Underlying native function: GetAllTrackedEnvironmentCaptureProbes 0x95df090)
	static struct TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses (Underlying native function: GetAllTracked2DPoses 0x95deff0)
	static struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllPins (Underlying native function: GetAllPins 0x95def7c)
	static struct TArray<class UARPin*> GetAllPins(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass (Underlying native function: GetAllGeometriesByClass 0x95ded2c)
	static struct TArray<class UARTrackedGeometry*> GetAllGeometriesByClass(class UClass*& GeometryClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometries (Underlying native function: GetAllGeometries 0x95decb8)
	static struct TArray<class UARTrackedGeometry*> GetAllGeometries(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform (Underlying native function: GetAlignmentTransform 0x95dec5c)
	static struct FTransform GetAlignmentTransform(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName (Underlying native function: FindTrackedPointsByName 0x95de958)
	static struct TArray<class UARTrackedPoint*> FindTrackedPointsByName(struct FString& PointName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry (Underlying native function: DebugDrawTrackedGeometry 0x95de798)
	static void DebugDrawTrackedGeometry(class UARTrackedGeometry*& TrackedGeometry, class UObject*& WorldContextObject, struct FLinearColor& Color, float& OutlineThickness, float& PersistForSeconds); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawPin (Underlying native function: DebugDrawPin 0x95de5d8)
	static void DebugDrawPin(class UARPin*& ARPin, class UObject*& WorldContextObject, struct FLinearColor& Color, float& Scale, float& PersistForSeconds); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection (Underlying native function: CalculateClosestIntersection 0x95ddd88)
	static void CalculateClosestIntersection(struct TArray<struct FVector>& StartPoints, struct TArray<struct FVector>& EndPoints, struct FVector& ClosestIntersection); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform (Underlying native function: CalculateAlignmentTransform 0x95ddb64)
	static void CalculateAlignmentTransform(struct FTransform& TransformInFirstCoordinateSystem, struct FTransform& TransformInSecondCoordinateSystem, struct FTransform& AlignmentTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName (Underlying native function: AddTrackedPointWithName 0x95dd910)
	static bool AddTrackedPointWithName(struct FTransform& WorldTransform, struct FString& PointName, bool& bDeletePointsWithSameName); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage (Underlying native function: AddRuntimeCandidateImage 0x95dd6dc)
	static class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig*& SessionConfig, class UTexture2D*& CandidateTexture, struct FString& FriendlyName, float& PhysicalWidth); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe (Underlying native function: AddManualEnvironmentCaptureProbe 0x95dd5f0)
	static bool AddManualEnvironmentCaptureProbe(struct FVector& Location, struct FVector& Extent); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

