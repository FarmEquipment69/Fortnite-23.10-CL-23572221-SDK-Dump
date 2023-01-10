// BlueprintGeneratedClass /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C
// Size: 0xde8
class ABP_Athena_Environmental_ZipLine_C : public AFortAthenaZipline
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xc68 (0x8)
	class UCapsuleComponent* InteractCapsule; // 0xc70 (0x8)
	class UStaticMeshComponent* SMLine; // 0xc78 (0x8)
	class UCapsuleComponent* OverlapCapsule; // 0xc80 (0x8)
	class USceneComponent* Zipline; // 0xc88 (0x8)
	class USceneComponent* Scene; // 0xc90 (0x8)
	struct FVector StartLocation; // 0xc98 (0x18)
	struct FVector TargetLocation; // 0xcb0 (0x18)
	struct FVector MotorOffset; // 0xcc8 (0x18)
	double LineThickness; // 0xce0 (0x8)
	double LineCollisionThickness; // 0xce8 (0x8)
	class ABuildingActor* PoleA; // 0xcf0 (0x8)
	class ABuildingActor* PoleB; // 0xcf8 (0x8)
	struct FCurveTableRowHandle SpeedCTHandle; // 0xd00 (0x10)
	struct FCurveTableRowHandle ZipLineEnabledCTHandle; // 0xd10 (0x10)
	struct FCurveTableRowHandle LineCollisionRadiusCTHandle; // 0xd20 (0x10)
	struct FCurveTableRowHandle BuildingCheckBoxExtentsCTHandle; // 0xd30 (0x10)
	struct FName BackendName; // 0xd40 (0x4)
	unsigned char unreflected_d44[0x4]; // 0xd44 (0x4) 
	class UFortQuestItemDefinition* QuestItem; // 0xd48 (0x8)
	double LineExtendBeyondPoleLength; // 0xd50 (0x8)
	struct FVector PoleASocketLocation; // 0xd58 (0x18)
	struct FVector PoleBSocketLocation; // 0xd70 (0x18)
	class AFortPlayerPawn* PlayerPawn; // 0xd88 (0x8)
	struct TArray<class AFortPlayerPawn*> PlayersPendingMovementModeChange; // 0xd90 (0x10)
	double CollisionHeightAboveLine; // 0xda0 (0x8)
	struct FVector PlayerOffsetToLineHoverboard; // 0xda8 (0x18)
	struct FTimerHandle* EndOverlapReleaseTimer; // 0xdc0 (0x8)
	struct FGameplayTagContainer BlockInteractTags; // 0xdc8 (0x20)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted, struct TEnumAsByte<TInteractionType>& InteractionType); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CalculatePositionsOfPoles (Has no native function)
	void CalculatePositionsOfPoles(class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue1, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.Setup Overlap Bindings (Has no native function)
	void SetupOverlapBindings(struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsDedicatedServerReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleEnterZipline (Has no native function)
	void HandleEnterZipline(class AFortPlayerPawn*& InPlayerPawn, struct FGameplayEventData& K2NodeMakeStructGameplayEventData); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CheckForBuildings (Has no native function)
	void CheckForBuildings(class AFortPlayerPawn*& Player, bool& BuildingNearby, bool& BuildingsNearby, bool& TempboolTrueifbreakwashitVariable, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncNotPreBoolReturnValue, struct TArray<class AActor*>& K2NodeMakeArrayArray, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, float& CallFuncEvaluateCurveTableRowOutXY, bool& CallFuncEvaluateCurveTableRowReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncFindClosestPointOnSegmentReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncAddDoubleDoubleReturnValue, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray1, struct FVector& CallFuncMakeVectorReturnValue1, struct TArray<class AActor*>& CallFuncBoxOverlapActorsOutActors, bool& CallFuncBoxOverlapActorsReturnValue, int& CallFuncArrayLengthReturnValue, class AActor*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess, bool& CallFuncBooleanANDReturnValue, class ABuildingProp*& K2NodeDynamicCastAsBuildingProp, bool& K2NodeDynamicCastbSuccess1, double& CallFuncMakeVectorXImplicitCast, double& CallFuncMakeVectorYImplicitCast, double& CallFuncMakeVectorZImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.QuestCheckForUse (Has no native function)
	void QuestCheckForUse(class AFortPlayerController*& FortPlayerController, class AGameStateBase*& CallFuncGetGameStateReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, bool& CallFuncAthenaCheckCreativeModeCanCompleteQuest, struct TArray<class AFortPlayerController*>& K2NodeMakeArrayArray, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncAthenaCheckQuestAndObjectiveCompletionQuestIsValid, bool& CallFuncAthenaCheckQuestAndObjectiveCompletionQuestCompleted, bool& CallFuncAthenaCheckQuestAndObjectiveCompletionObjectiveCompleted, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.GetCharacterCustomMovementMode (Has no native function)
	void GetCharacterCustomMovementMode(class APawn*& Character, struct TEnumAsByte<EFortCustomMovement>& CustomMovementMode, struct TEnumAsByte<EMovementMode>& MovementMode, class UPawnMovementComponent*& CallFuncGetMovementComponentReturnValue, class UCharacterMovementComponent*& K2NodeDynamicCastAsCharacterMovementComponent, bool& K2NodeDynamicCastbSuccess, unsigned char& CallFuncGetValidValueReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.StartZipLining (Has no native function)
	void StartZipLining(class AFortPlayerPawn*& FortPlayerPawn, class UPrimitiveComponent*& InteractComponent); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(struct FVector& CallFuncMakeVectorReturnValue, bool& CallFuncIsMobilePlatformReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, struct FHitResult& CallFuncK2AddWorldOffsetSweepHitResult, float& CallFuncEvaluateCurveTableRowOutXY, bool& CallFuncEvaluateCurveTableRowReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyIntFloatReturnValue, double& CallFuncAddDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue1, struct FHitResult& CallFuncK2AddWorldOffsetSweepHitResult1, struct FVector& CallFuncGetDirectionUnitVectorReturnValue, struct FVector& CallFuncGetDirectionUnitVectorReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue1, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue1, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncBooleanANDReturnValue, bool& CallFuncIsValidReturnValue3, struct FRotator& CallFuncFindLookAtRotationReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, double& CallFuncAddDoubleDoubleReturnValue1, double& CallFuncAddDoubleDoubleReturnValue2, struct FRotator& CallFuncMakeRotatorReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult, double& CallFuncDistanceBetweenTwoVectorsDistance, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncDivideDoubleDoubleReturnValue1, struct FVector& CallFuncMakeVectorReturnValue2, double& CallFuncDivideDoubleDoubleReturnValue2, struct FVector& CallFuncAddVectorVectorReturnValue2, struct FVector& CallFuncDivideVectorIntReturnValue, struct FHitResult& CallFuncK2SetActorLocationSweepHitResult, bool& CallFuncK2SetActorLocationReturnValue, double& CallFuncMultiplyIntFloatBImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, float& CallFuncSetCapsuleRadiusRadiusImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast1, float& CallFuncMakeRotatorYawImplicitCast, float& CallFuncMakeRotatorRollImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetCapsuleHalfHeightHalfHeightImplicitCast, float& CallFuncSetCapsuleHalfHeightHalfHeightImplicitCast1); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMapInfoInitialized (Has no native function)
	void HandleOnMapInfoInitialized(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMovementModeChanged (Has no native function)
	void HandleOnMovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnBeginOverlap (Has no native function)
	void HandleOnBeginOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnEndOverlap (Has no native function)
	void HandleOnEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReleaseZipline (Has no native function)
	void ReleaseZipline(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandlePoleDied (Has no native function)
	void HandlePoleDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine (Has no native function)
	void ExecuteUbergraphBPAthenaEnvironmentalZipLine(int& EntryPoint, float& CallFuncEvaluateCurveTableRowOutXY, bool& CallFuncEvaluateCurveTableRowReturnValue, bool& CallFuncIsWalkingReturnValue, int& CallFuncFTruncReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, struct FVector& CallFuncGetDirectionUnitVectorReturnValue, struct FVector& CallFuncGetDirectionUnitVectorReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue1, class AGameModeBase*& CallFuncGetGameModeReturnValue, class AFortGameModeAthena*& K2NodeDynamicCastAsFortGameModeAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsMapInfoInitializedReturnValue, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, struct FDelegate& K2NodeCreateDelegateOutputDelegate, int& CallFuncArrayAddUniqueReturnValue, class ACharacter*& K2NodeCustomEventCharacter, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventPrevMovementMode, unsigned char& K2NodeCustomEventPreviousCustomMode, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess1, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsWalkingReturnValue1, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncArrayRemoveItemReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& CallFuncArrayRemoveItemReturnValue1, bool& CallFuncIsDBNOReturnValue, bool& CallFuncHasRecentlyExitedZiplineFromJumpingReturnValue, bool& CallFuncNotPreBoolReturnValue1, class UPrimitiveComponent*& K2NodeCustomEventOverlappedComponent1, class AActor*& K2NodeCustomEventOtherActor1, class UPrimitiveComponent*& K2NodeCustomEventOtherComp1, int& K2NodeCustomEventOtherBodyIndex1, bool& K2NodeCustomEventbFromSweep, struct FHitResult& K2NodeCustomEventSweepResult, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess2, class UPrimitiveComponent*& K2NodeCustomEventOverlappedComponent, class AActor*& K2NodeCustomEventOtherActor, class UPrimitiveComponent*& K2NodeCustomEventOtherComp, int& K2NodeCustomEventOtherBodyIndex, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn2, bool& K2NodeDynamicCastbSuccess3, struct TEnumAsByte<EFortCustomMovement>& CallFuncGetCharacterCustomMovementModeCustomMovementMode, struct TEnumAsByte<EMovementMode>& CallFuncGetCharacterCustomMovementModeMovementMode, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, bool& CallFuncEqualEqualByteByteReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& CallFuncNotPreBoolReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, bool& CallFuncK2IsTimerActiveHandleReturnValue, bool& CallFuncUseInteractToEnterZiplineReturnValue, bool& CallFuncNotPreBoolReturnValue3, bool& CallFuncK2IsTimerActiveHandleReturnValue1, bool& CallFuncIsDedicatedServerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, bool& CallFuncIsDedicatedServerReturnValue1, bool& CallFuncGetValueAsBoolReturnValue, double& CallFuncFTruncAImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

