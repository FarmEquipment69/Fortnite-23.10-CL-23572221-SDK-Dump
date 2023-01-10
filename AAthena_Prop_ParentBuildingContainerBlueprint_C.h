// BlueprintGeneratedClass /Game/Athena/BuildingActors/Props/Building/ActorBlueprints/Containers/Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C
// Size: 0x1008
class AAthena_Prop_ParentBuildingContainerBlueprint_C : public ABuildingProp
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xef8 (0x8)
	bool DebugWind; // 0xf00 (0x1)
	unsigned char unreflected_f01[0x7]; // 0xf01 (0x7) 
	struct TArray<class UMaterialInterface*> IntenseWindMaterialsForPreview; // 0xf08 (0x10)
	class UStaticMeshComponent* WindIntensityDebugMesh; // 0xf18 (0x8)
	struct TArray<class UMaterialInterface*> OriginalMaterials; // 0xf20 (0x10)
	class UMaterialInstanceDynamic* DebugTempMaterial; // 0xf30 (0x8)
	double DebugWindYaw; // 0xf38 (0x8)
	double DebugWindIntensity; // 0xf40 (0x8)
	bool SetMaxActorScale; // 0xf48 (0x1)
	unsigned char unreflected_f49[0x7]; // 0xf49 (0x7) 
	double MaxScale; // 0xf50 (0x8)
	bool DisableTODLightsandMaterialEmissiveValues; // 0xf58 (0x1)
	bool DisableStaticMeshShadowCastingWhenLightsAreActive; // 0xf59 (0x1)
	bool UseAnAlternateShadowMeshWhenTheLightisOn; // 0xf5a (0x1)
	unsigned char unreflected_f5b[0x5]; // 0xf5b (0x5) 
	class UStaticMesh* AlternateShadowStaticMesh; // 0xf60 (0x8)
	bool AnimateEmissiveandLightsOverTime; // 0xf68 (0x1)
	unsigned char unreflected_f69[0x7]; // 0xf69 (0x7) 
	struct TArray<struct FLinearColor> CodeControlledEmissiveColor; // 0xf70 (0x10)
	struct TArray<double> CodeControlledLightConeOpacity; // 0xf80 (0x10)
	struct FDayPhaseFloats LightIntensityOverTimeofDay; // 0xf90 (0x10)
	double DayPhaseTransitionLength; // 0xfa0 (0x8)
	struct FDayPhaseFloats EmissiveIntensityOverTimeofDay; // 0xfa8 (0x10)
	double VolumetricLightScatteringIntensity; // 0xfb8 (0x8)
	bool CastVolumetricShadows; // 0xfc0 (0x1)
	bool AnimateLightsWithACurveDisablestimeofdaylightcontrols; // 0xfc1 (0x1)
	bool AnimateMeshMIDEmissiveValuewithaCurveDisablestimeofdaylightcontrols; // 0xfc2 (0x1)
	unsigned char unreflected_fc3[0x5]; // 0xfc3 (0x5) 
	class UCurveFloat* LightAnimationCurve; // 0xfc8 (0x8)
	double CodeControlledAnimationCurveAnimationLength; // 0xfd0 (0x8)
	int CodeControlledNumberOfMaterials; // 0xfd8 (0x4)
	unsigned char unreflected_fdc[0x4]; // 0xfdc (0x4) 
	struct TArray<double> NewVar0; // 0xfe0 (0x10)
	double RandomTimeScalePercent; // 0xff0 (0x8)
	double CodeControlledCurrentPlayLength; // 0xff8 (0x8)
	double SnowCoverageAmount; // 0x1000 (0x8)

	/* Functions */

	// Function /Game/Athena/BuildingActors/Props/Building/ActorBlueprints/Containers/Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables (Has no native function)
	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables& OutVariables, struct FTimeOfDayBlueprintDefaultVariables& K2NodeMakeStructTimeOfDayBlueprintDefaultVariables, float& K2NodeMakeStructVolumetricLightScatteringIntensityImplicitCast); // (Event | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/BuildingActors/Props/Building/ActorBlueprints/Containers/Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(class UStaticMeshComponent*& CallFuncGetBuildingMeshComponentReturnValue, class UCurveLinearColor*& CallFuncGetWindSpeedCurveForPreviewReturnValue, class UCurveLinearColor*& CallFuncGetWindPannerSpeedCurveForPreviewReturnValue, bool& CallFuncIsValidReturnValue, struct FLinearColor& CallFuncGetLinearColorValueReturnValue, float& CallFuncBreakColorR, float& CallFuncBreakColorG, float& CallFuncBreakColorB, float& CallFuncBreakColorA, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncRotateAngleAxisReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FLinearColor& CallFuncGetLinearColorValueReturnValue1, struct FLinearColor& CallFuncMakeColorReturnValue, float& CallFuncBreakColorR1, float& CallFuncBreakColorG1, float& CallFuncBreakColorB1, float& CallFuncBreakColorA1, struct TArray<class UMaterialInterface*>& CallFuncGetIntenseWindMaterialsForPreviewMaterials, bool& CallFuncGetIntenseWindMaterialsForPreviewReturnValue, bool& CallFuncIsDedicatedServerReturnValue, class UStaticMeshComponent*& CallFuncGetBuildingMeshComponentReturnValue1, class UCurveLinearColor*& CallFuncGetWindSpeedCurveForPreviewReturnValue1, bool& CallFuncIsValidReturnValue1, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class UCurveLinearColor*& CallFuncGetWindPannerSpeedCurveForPreviewReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, int& CallFuncArrayLengthReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncEqualEqualIntIntReturnValue, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, bool& CallFuncSetStaticMeshReturnValue, struct FTransform& TempstructVariable, int& TempintArrayIndexVariable, class UMaterialInterface*& CallFuncArrayGetItem, class UStaticMeshComponent*& CallFuncAddComponentReturnValue, class UMaterialInstance*& K2NodeDynamicCastAsMaterialInstance, bool& K2NodeDynamicCastbSuccess, struct FVector& CallFuncGetActorScale3DReturnValue, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, double& CallFuncFMaxReturnValue, double& CallFuncFMaxReturnValue1, struct FVector& CallFuncDivideVectorFloatReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncIsValidReturnValue4, bool& CallFuncBooleanORReturnValue, float& CallFuncGetTimeRangeMinTime, float& CallFuncGetTimeRangeMaxTime, double& K2NodeVariableGetCodeControlledAnimationCurveAnimationLengthImplicitCast, class UMaterialInterface*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue2, class UMaterialInstance*& K2NodeDynamicCastAsMaterialInstance1, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncLessIntIntReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, float& CallFuncGetLinearColorValueInTimeImplicitCast, float& CallFuncRotateAngleAxisAngleDegImplicitCast, float& CallFuncK2InterpolateMaterialInstanceParamsAlphaImplicitCast, float& CallFuncGetLinearColorValueInTimeImplicitCast1, float& CallFuncMakeColorRImplicitCast, float& CallFuncMakeColorGImplicitCast, float& CallFuncMakeColorBImplicitCast, float& CallFuncSetCustomPrimitiveDataFloatValueImplicitCast, float& K2NodeVariableSetRefTargetImplicitCast); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/BuildingActors/Props/Building/ActorBlueprints/Containers/Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/BuildingActors/Props/Building/ActorBlueprints/Containers/Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnDayPhaseChanged (Has no native function)
	void OnDayPhaseChanged(enum EFortDayPhase& CurrentDayPhase, enum EFortDayPhase& PreviousDayPhase, bool& bAtCreation); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/BuildingActors/Props/Building/ActorBlueprints/Containers/Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.Loop Animation Curve (Has no native function)
	void LoopAnimationCurve(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/BuildingActors/Props/Building/ActorBlueprints/Containers/Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate (Has no native function)
	void OnBounceAnimationUpdate(struct FFortBounceData& Data); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/BuildingActors/Props/Building/ActorBlueprints/Containers/Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnSetSearched (Has no native function)
	void OnSetSearched(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/BuildingActors/Props/Building/ActorBlueprints/Containers/Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint (Has no native function)
	void ExecuteUbergraphAthenaPropParentBuildingContainerBlueprint(int& EntryPoint, enum EFortDayPhase& TempbyteVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, class UObject*& CallFuncConvInterfaceToObjectReturnValue, bool& CallFuncIsValidReturnValue, int& TempintVariable, class UMaterialInstanceDynamic*& CallFuncGetOrCreateMIDOnDefaultMeshReturnValue, int& CallFuncAddIntIntReturnValue1, int& TempintVariable1, class UMaterialInstanceDynamic*& CallFuncGetOrCreateMIDOnDefaultMeshReturnValue1, int& CallFuncAddIntIntReturnValue2, enum EFortDayPhase& TempbyteVariable1, double& TemprealVariable, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue3, int& TempintArrayIndexVariable1, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue1, class UObject*& CallFuncConvInterfaceToObjectReturnValue1, bool& CallFuncIsValidReturnValue1, class UStaticMeshComponent*& CallFuncGetBuildingMeshComponentReturnValue, enum EFortDayPhase& CallFuncGetPreviousDayPhaseReturnValue, int& CallFuncGetNumMaterialsReturnValue, int& CallFuncSubtractIntIntReturnValue, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue, int& TempintVariable2, class UMaterialInstanceDynamic*& CallFuncGetOrCreateMIDOnDefaultMeshReturnValue2, int& CallFuncAddIntIntReturnValue4, int& TempintArrayIndexVariable2, class UStaticMeshComponent*& CallFuncGetBuildingMeshComponentReturnValue1, int& TempintLoopCounterVariable2, class UStaticMeshComponent*& CallFuncGetBuildingMeshComponentReturnValue2, int& CallFuncGetNumMaterialsReturnValue1, int& CallFuncAddIntIntReturnValue5, int& CallFuncSubtractIntIntReturnValue1, bool& CallFuncLessEqualIntIntReturnValue, int& TempintVariable3, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue1, class UMaterialInstanceDynamic*& CallFuncGetOrCreateMIDOnDefaultMeshReturnValue3, class UMaterial*& CallFuncGetBaseMaterialReturnValue, int& CallFuncAddIntIntReturnValue6, bool& CallFuncEqualEqualObjectObjectReturnValue, enum EFortDayPhase& TempbyteVariable2, enum EFortDayPhase& CallFuncGetPreviousDayPhaseReturnValue1, enum EFortDayPhase& TempbyteVariable3, class UStaticMeshComponent*& CallFuncGetBuildingMeshComponentReturnValue3, int& CallFuncGetNumMaterialsReturnValue2, enum EFortDayPhase& TempbyteVariable4, int& CallFuncSubtractIntIntReturnValue2, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue2, double& TemprealVariable1, class UObject*& CallFuncConvInterfaceToObjectReturnValue2, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue2, bool& CallFuncIsValidReturnValue2, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue3, class UObject*& CallFuncConvInterfaceToObjectReturnValue3, enum EFortDayPhase& CallFuncGetPreviousDayPhaseReturnValue2, bool& CallFuncIsValidReturnValue3, double& TemprealVariable2, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue4, int& TempintArrayIndexVariable3, class UObject*& CallFuncConvInterfaceToObjectReturnValue4, bool& CallFuncIsValidReturnValue4, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue3, enum EFortDayPhase& CallFuncGetPreviousDayPhaseReturnValue3, double& TemprealVariable3, double& TemprealVariable4, double& TemprealVariable5, int& TempintLoopCounterVariable3, enum EFortDayPhase& CallFuncGetPreviousDayPhaseReturnValue4, int& CallFuncAddIntIntReturnValue7, double& TemprealVariable6, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue5, enum EFortDayPhase& TempbyteVariable5, class UObject*& CallFuncConvInterfaceToObjectReturnValue5, bool& CallFuncIsValidReturnValue5, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue4, class UStaticMeshComponent*& CallFuncGetBuildingMeshComponentReturnValue4, int& TempintVariable4, class UMaterialInterface*& CallFuncGetMaterialReturnValue, class UMaterialInstanceDynamic*& CallFuncGetOrCreateMIDOnDefaultMeshReturnValue4, class UMaterialInstanceConstant*& K2NodeDynamicCastAsMaterialInstanceConstant, bool& K2NodeDynamicCastbSuccess, float& CallFuncK2GetScalarParameterValueReturnValue, struct FLinearColor& CallFuncK2GetVectorParameterValueReturnValue, struct FLinearColor& CallFuncK2GetVectorParameterValueReturnValue1, bool& CallFuncNotEqualDoubleDoubleReturnValue, bool& CallFuncNotEqualDoubleDoubleReturnValue1, bool& CallFuncNotEqualDoubleDoubleReturnValue2, bool& CallFuncLessEqualIntIntReturnValue1, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, int& CallFuncAddIntIntReturnValue8, int& CallFuncGetNumMaterialsReturnValue3, int& CallFuncSubtractIntIntReturnValue3, enum EFortDayPhase& TempbyteVariable6, bool& CallFuncLessEqualIntIntReturnValue2, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsDedicatedServerReturnValue1, enum EFortDayPhase& TempbyteVariable7, bool& CallFuncIsDedicatedServerReturnValue2, enum EFortDayPhase& TempbyteVariable8, double& CallFuncRandomFloatInRangeReturnValue, class UStaticMeshComponent*& CallFuncGetBuildingMeshComponentReturnValue5, double& CallFuncRandomFloatInRangeReturnValue1, class UStaticMeshComponent*& CallFuncGetBuildingMeshComponentReturnValue6, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue5, int& CallFuncGetNumMaterialsReturnValue4, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue6, int& CallFuncSubtractIntIntReturnValue4, class UObject*& CallFuncConvInterfaceToObjectReturnValue6, bool& CallFuncLessEqualIntIntReturnValue3, bool& CallFuncIsValidReturnValue6, enum EFortDayPhase& CallFuncGetPreviousDayPhaseReturnValue5, float& CallFuncGetScalarParameterValueReturnValue, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue6, enum EFortDayPhase& TempbyteVariable9, enum EFortDayPhase& TempbyteVariable10, struct FDelegate& K2NodeCreateDelegateOutputDelegate, int& TempintLoopCounterVariable4, int& CallFuncAddIntIntReturnValue9, int& TempintArrayIndexVariable4, int& TempintVariable5, class UMaterialInstanceDynamic*& CallFuncGetOrCreateMIDOnDefaultMeshReturnValue5, class UMaterial*& CallFuncGetBaseMaterialReturnValue1, bool& CallFuncLessEqualIntIntReturnValue4, bool& CallFuncEqualEqualObjectObjectReturnValue1, int& CallFuncAddIntIntReturnValue10, enum EFortDayPhase& K2NodeEventCurrentDayPhase, enum EFortDayPhase& K2NodeEventPreviousDayPhase, bool& K2NodeEventbAtCreation, double& K2NodeSelectDefault, double& CallFuncArrayGetItem, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& K2NodeSelectDefault1, double& K2NodeSelectDefault2, double& K2NodeSelectDefault3, double& K2NodeSelectDefault4, double& CallFuncLerpReturnValue, struct FLinearColor& CallFuncArrayGetItem1, double& CallFuncArrayGetItem2, struct FLinearColor& CallFuncMultiplyLinearColorFloatReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue3, struct FLinearColor& CallFuncMultiplyLinearColorFloatReturnValue1, double& CallFuncArrayGetItem3, int& CallFuncArrayAddReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue4, struct FLinearColor& CallFuncArrayGetItem4, struct FLinearColor& CallFuncMultiplyLinearColorFloatReturnValue2, int& CallFuncArrayAddReturnValue1, int& CallFuncArrayLengthReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, double& K2NodeSelectDefault5, double& K2NodeSelectDefault6, double& CallFuncLerpReturnValue1, double& K2NodeSelectDefault7, double& K2NodeSelectDefault8, double& CallFuncLerpReturnValue2, double& K2NodeSelectDefault9, double& K2NodeSelectDefault10, double& CallFuncLerpReturnValue3, struct FLinearColor& CallFuncArrayGetItem5, struct FLinearColor& CallFuncMultiplyLinearColorFloatReturnValue3, struct FLinearColor& CallFuncMultiplyLinearColorFloatReturnValue4, enum EFortDayPhase& TempbyteVariable11, double& K2NodeSelectDefault11, double& CallFuncLerpReturnValue4, bool& CallFuncBooleanORReturnValue2, bool& CallFuncIsValidReturnValue7, int& CallFuncSubtractIntIntReturnValue5, bool& CallFuncLessEqualIntIntReturnValue5, bool& CallFuncBooleanORReturnValue3, bool& CallFuncBooleanANDReturnValue, enum EFortDayPhase& TempbyteVariable12, double& K2NodeSelectDefault12, struct FFortBounceData& K2NodeEventData, double& CallFuncMultiplyDoubleDoubleReturnValue5, bool& CallFuncEqualEqualByteByteReturnValue, double& CallFuncAddDoubleDoubleReturnValue, float& CallFuncBreakColorR, float& CallFuncBreakColorG, float& CallFuncBreakColorB, float& CallFuncBreakColorA, double& CallFuncMultiplyDoubleDoubleReturnValue6, struct FVector& CallFuncMakeVectorReturnValue, float& CallFuncBreakColorR1, float& CallFuncBreakColorG1, float& CallFuncBreakColorB1, float& CallFuncBreakColorA1, struct FVector& CallFuncMakeVectorReturnValue1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FTimeOfDayControlledLightData& CallFuncArrayGetItem6, struct FTimeOfDayControlledLightData& CallFuncArrayGetItem7, bool& CallFuncIsValidReturnValue8, bool& CallFuncIsValidReturnValue9, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue, int& CallFuncArrayLengthReturnValue2, bool& CallFuncLessIntIntReturnValue1, struct FTimeOfDayControlledLightData& CallFuncArrayGetItem8, int& CallFuncArrayLengthReturnValue3, bool& CallFuncLessIntIntReturnValue2, struct FTimeOfDayControlledLightData& CallFuncArrayGetItem9, struct FTimeOfDayControlledLightData& CallFuncArrayGetItem10, struct FVector& CallFuncSubtractVectorVectorReturnValue, bool& CallFuncIsValidReturnValue10, double& CallFuncVSizeReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, int& CallFuncArrayLengthReturnValue4, double& CallFuncFClampReturnValue, bool& CallFuncLessIntIntReturnValue3, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncSelectFloatReturnValue, int& CallFuncArrayLengthReturnValue5, struct FVector& CallFuncMultiplyVectorFloatReturnValue, bool& CallFuncLessIntIntReturnValue4, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, struct FVector& CallFuncAddVectorVectorReturnValue, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, float& CallFuncSetCustomPrimitiveDataFloatValueImplicitCast, float& CallFuncMultiplyLinearColorFloatBImplicitCast, float& CallFuncMultiplyLinearColorFloatBImplicitCast1, float& CallFuncMultiplyLinearColorFloatBImplicitCast2, float& CallFuncMultiplyLinearColorFloatBImplicitCast3, float& CallFuncAddLightAnimationIntensityStartValueImplicitCast, float& CallFuncAddLightAnimationIntensityEndValueImplicitCast, float& CallFuncMultiplyLinearColorFloatBImplicitCast4, double& CallFuncArrayAddNewItemImplicitCast, double& CallFuncNotEqualDoubleDoubleAImplicitCast, double& CallFuncNotEqualDoubleDoubleAImplicitCast1, double& CallFuncNotEqualDoubleDoubleAImplicitCast2, float& CallFuncDelayDurationImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast, float& CallFuncAddLightAnimationIntensityDurationImplicitCast, double& K2NodeSelectMorningImplicitCast, double& K2NodeSelectMorningImplicitCast1, double& K2NodeSelectDayImplicitCast, double& K2NodeSelectDayImplicitCast1, double& K2NodeSelectEveningImplicitCast, double& K2NodeSelectEveningImplicitCast1, double& K2NodeSelectNightImplicitCast, double& K2NodeSelectNightImplicitCast1, float& CallFuncAddMIDAnimationFloatEndValueImplicitCast, float& CallFuncAddMIDAnimationFloatStartValueImplicitCast, double& K2NodeSelectMorningImplicitCast2, double& K2NodeSelectMorningImplicitCast3, double& K2NodeSelectDayImplicitCast2, double& K2NodeSelectDayImplicitCast3, double& K2NodeSelectEveningImplicitCast2, double& K2NodeSelectEveningImplicitCast3, double& K2NodeSelectNightImplicitCast2, double& K2NodeSelectNightImplicitCast3, double& K2NodeSelectMorningImplicitCast4, double& K2NodeSelectMorningImplicitCast5, double& K2NodeSelectDayImplicitCast4, double& K2NodeSelectDayImplicitCast5, double& K2NodeSelectEveningImplicitCast4, double& K2NodeSelectEveningImplicitCast5, double& K2NodeSelectNightImplicitCast4, double& K2NodeSelectNightImplicitCast5, float& CallFuncAddMIDAnimationFloatDurationImplicitCast, float& CallFuncAddMIDAnimationColorDurationImplicitCast, float& CallFuncAddMIDAnimationFloatEndValueImplicitCast1, float& CallFuncAddMIDAnimationFloatStartValueImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast, double& K2NodeSelectMorningImplicitCast6, double& K2NodeSelectDayImplicitCast6, double& K2NodeSelectEveningImplicitCast6, double& K2NodeSelectNightImplicitCast6, float& CallFuncAddMIDAnimationFloatDurationImplicitCast1, float& CallFuncAddMIDAnimationColorDurationImplicitCast1, double& K2NodeSelectMorningImplicitCast7, double& K2NodeSelectMorningImplicitCast8, double& K2NodeSelectDayImplicitCast7, double& K2NodeSelectDayImplicitCast8, double& K2NodeSelectEveningImplicitCast7, double& K2NodeSelectEveningImplicitCast8, double& K2NodeSelectNightImplicitCast7, double& K2NodeSelectNightImplicitCast8, double& K2NodeSelectMorningImplicitCast9, double& K2NodeSelectMorningImplicitCast10, double& K2NodeSelectDayImplicitCast9, double& K2NodeSelectDayImplicitCast10, double& K2NodeSelectEveningImplicitCast9, double& K2NodeSelectEveningImplicitCast10, double& K2NodeSelectNightImplicitCast9, double& K2NodeSelectNightImplicitCast10, double& K2NodeSelectMorningImplicitCast11, double& K2NodeSelectMorningImplicitCast12, double& K2NodeSelectDayImplicitCast11, double& K2NodeSelectDayImplicitCast12, double& K2NodeSelectEveningImplicitCast11, double& K2NodeSelectEveningImplicitCast12, double& K2NodeSelectNightImplicitCast11, double& K2NodeSelectNightImplicitCast12, float& CallFuncSetIntensityNewIntensityImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast1, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncMakeVectorXImplicitCast, double& CallFuncMakeVectorYImplicitCast, double& CallFuncMakeVectorZImplicitCast, double& CallFuncMakeVectorXImplicitCast1, double& CallFuncMakeVectorYImplicitCast1, double& CallFuncMakeVectorZImplicitCast1, float& CallFuncAddMIDAnimationFloatDurationImplicitCast2, float& CallFuncAddLightAnimationIntensityDurationImplicitCast1, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

