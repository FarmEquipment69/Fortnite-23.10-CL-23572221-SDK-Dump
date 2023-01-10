// Class /Script/FortniteGame.CreativeBlueprintLibrary
// Size: 0x28
class UCreativeBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.UpdateInGameMapHeatmapTexture (Underlying native function: UpdateInGameMapHeatmapTexture 0x8522ef0)
	static void UpdateInGameMapHeatmapTexture(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.ShouldUseCabinModeLabel (Underlying native function: ShouldUseCabinModeLabel 0x85227f4)
	static bool ShouldUseCabinModeLabel(struct FText& BaseLabel, struct FString& Label); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.SetUserOptionOverrideValue (Underlying native function: SetUserOptionOverrideValue 0x8522008)
	static void SetUserOptionOverrideValue(struct TArray<struct FString>& MapPaths, struct FString& OptionKey, struct FString& NewValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.SegmentSphereIntersection (Underlying native function: SegmentSphereIntersection 0x8520d20)
	static struct TArray<struct FVector> SegmentSphereIntersection(struct FVector& SegmentStart, struct FVector& SegmentEnd, struct FVector& SphereOrigin, float& SphereRadius); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.SegmentCylinderIntersection (Underlying native function: SegmentCylinderIntersection 0x8520b5c)
	static struct TArray<struct FVector> SegmentCylinderIntersection(struct FVector& SegmentStart, struct FVector& SegmentEnd, struct FVector& CylinderOrigin, float& CylinderRadius); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.ResavePIDs (Underlying native function: ResavePIDs 0x7fececc)
	static void ResavePIDs(struct TArray<struct FString>& PIDPaths); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.LogHUDMessageWarning (Underlying native function: LogHUDMessageWarning 0x851f590)
	static void LogHUDMessageWarning(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.LogCreativeStreamingMessage (Underlying native function: LogCreativeStreamingMessage 0x851f420)
	static void LogCreativeStreamingMessage(struct FString& message); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsWhiteListedItemDefinition (Underlying native function: IsWhiteListedItemDefinition 0x851edbc)
	static bool IsWhiteListedItemDefinition(class UFortItemDefinition*& ItemDefinition, class AActor*& ActorContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsValkyrieLink (Underlying native function: IsValkyrieLink 0x851ecf8)
	static bool IsValkyrieLink(struct FCreativeLoadedLinkData& InLinkData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsUseRestrictionComponentDebuggingEnabled (Underlying native function: IsUseRestrictionComponentDebuggingEnabled 0x851ecdc)
	static bool IsUseRestrictionComponentDebuggingEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsObjectInModeratedIsland (Underlying native function: IsObjectInModeratedIsland 0x59574e0)
	static bool IsObjectInModeratedIsland(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsLocationRelevantToActor (Underlying native function: IsLocationRelevantToActor 0x851e96c)
	static bool IsLocationRelevantToActor(class AActor*& PrimaryActor, struct FVector& Location); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsIslandCurated (Underlying native function: IsIslandCurated 0x851e4d8)
	static bool IsIslandCurated(class UWorld*& World, struct FString& IslandMnemonic); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsInCabinMode (Underlying native function: IsInCabinMode 0x851e44c)
	static bool IsInCabinMode(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsCreativeDevice (Underlying native function: IsCreativeDevice 0x5957440)
	static bool IsCreativeDevice(class ABuildingActor*& BuildingActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsBlockListedItemDefinition (Underlying native function: IsBlockListedItemDefinition 0x851e2d4)
	static bool IsBlockListedItemDefinition(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsAPreviewActor (Underlying native function: IsAPreviewActor 0x851df80)
	static bool IsAPreviewActor(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsActorRelevantToActor (Underlying native function: IsActorRelevantToActor 0x851e0f4)
	static bool IsActorRelevantToActor(class AActor*& PrimaryActor, class AActor*& ActorToCheckIfRelevant); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsActorInSavableSpace (Underlying native function: IsActorInSavableSpace 0x851e000)
	static bool IsActorInSavableSpace(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsActorInModeratedIsland (Underlying native function: IsActorInModeratedIsland 0x59573a0)
	static bool IsActorInModeratedIsland(class AActor*& RelevantActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.HasClassesVisibleToUI (Underlying native function: HasClassesVisibleToUI 0x851ddf0)
	static bool HasClassesVisibleToUI(class AFortMinigame*& Minigame); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.HandleActorExitedContainer (Underlying native function: HandleActorExitedContainer 0x851dcbc)
	static void HandleActorExitedContainer(class AActor*& Actor, class UActorComponent*& ActorComponent, class APawn*& InstigatorPawn, class AActor*& Container); // (Final | Native | Static | Public)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.HandleActorEnteredContainer (Underlying native function: HandleActorEnteredContainer 0x851db88)
	static void HandleActorEnteredContainer(class AActor*& Actor, class UActorComponent*& ActorComponent, class APawn*& InstigatorPawn, class AActor*& Container); // (Final | Native | Static | Public)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetXpCalibrationPhase (Underlying native function: GetXpCalibrationPhase 0x851dac4)
	static enum EDynamicXpCalibrationPhase GetXpCalibrationPhase(struct FCreativeLoadedLinkData& LinkData); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetPlayerStateFromUniqueNetID (Underlying native function: GetPlayerStateFromUniqueNetID 0x851d864)
	static class AFortPlayerState* GetPlayerStateFromUniqueNetID(class UObject*& WorldContextObject, struct FUniqueNetIdRepl& NetIDToGet); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetNumCuratedIslandCodes (Underlying native function: GetNumCuratedIslandCodes 0x851d574)
	static int GetNumCuratedIslandCodes(class UWorld*& World); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetNameFromCollisionProfile (Underlying native function: GetNameFromCollisionProfile 0x851d4d8)
	static struct FName GetNameFromCollisionProfile(struct FCollisionProfileName& InCollisionProfile); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetMinigameManager (Underlying native function: GetMinigameManager 0x851d3f0)
	static class UFortMinigameManager* GetMinigameManager(class AController*& Controller, enum ESubGame& SubGame); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetFortLevelSaveComponentForActor (Underlying native function: GetFortLevelSaveComponentForActor 0x851d284)
	static class UFortLevelSaveComponent* GetFortLevelSaveComponentForActor(class AActor*& ContextActor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetExperienceType (Underlying native function: GetExperienceType 0x851d204)
	static enum EFortVolumeType GetExperienceType(class AActor*& ExperienceContextActor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCuratedIslandMnemonicFromMatchAssignment (Underlying native function: GetCuratedIslandMnemonicFromMatchAssignment 0x851d118)
	static bool GetCuratedIslandMnemonicFromMatchAssignment(class UObject*& WorldContextObject, struct FOnlineLinkId& OutLinkId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCuratedIslandMnemonicForLinkCode (Underlying native function: GetCuratedIslandMnemonicForLinkCode 0x851cefc)
	static bool GetCuratedIslandMnemonicForLinkCode(class UWorld*& World, int& LinkCodeNumber, bool& bLoadRandomLinkCode, struct FString& OutMnemonic); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCuratedHubMnemonic (Underlying native function: GetCuratedHubMnemonic 0x851cd58)
	static bool GetCuratedHubMnemonic(class UWorld*& World, struct FString& OutMnemonic); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCreativeIslandCode (Underlying native function: GetCreativeIslandCode 0x851cb6c)
	static struct FString GetCreativeIslandCode(class AFortPlayerControllerAthena*& PlayerControllerAthena); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCreativeGeneralThrottleManager (Underlying native function: GetCreativeGeneralThrottleManager 0x851cab0)
	static class UFortCreativeGeneralThrottleManager* GetCreativeGeneralThrottleManager(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCreativeBetaPermissionTags (Underlying native function: GetCreativeBetaPermissionTags 0x851c988)
	static struct TArray<struct FString> GetCreativeBetaPermissionTags(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCabinModeLabelOverride (Underlying native function: GetCabinModeLabelOverride 0x851c828)
	static struct FText GetCabinModeLabelOverride(struct FText& BaseLabel, int& Number); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetActorsRelevantToActorOfType (Underlying native function: GetActorsRelevantToActorOfType 0x851c698)
	static struct TArray<class AActor*> GetActorsRelevantToActorOfType(class AActor*& PrimaryActor, class UClass*& ActorClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.DestroyActorByType (Underlying native function: DestroyActorByType 0x851c1fc)
	static void DestroyActorByType(class AActor*& InActor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.BroadcastMissionEvent (Underlying native function: BroadcastMissionEvent 0x851b9d0)
	static void BroadcastMissionEvent(class UObject*& WorldContextObject, enum ECreativeQuestStat& Stat, class UFortMissionEventParams*& Params); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.AnimateFloatCurve (Underlying native function: AnimateFloatCurve 0x851b838)
	static struct FFortCreativeAnimateFloatCurveResult* AnimateFloatCurve(float& DeltaTime, float& CurrentTime, class UCurveFloat*& FCurve, float& TotalAnimationTime, bool& bInvertTime); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.ActorVolumeHasBetaKnobPermission (Underlying native function: ActorVolumeHasBetaKnobPermission 0x851b574)
	static bool ActorVolumeHasBetaKnobPermission(class AActor*& ActorToCheck, struct FString& OptionKey); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

