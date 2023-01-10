// Class /Script/FortniteGame.FortObjectMoverInputComponent
// Size: 0x428
class UFortObjectMoverInputComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnDuplicateBuildingActorPressed; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnDuplicateBuildingActorReleased; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolLetGo; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolCopyGrabOrDuplicatePressed; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolCopyGrabOrDuplicateReleased; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotateClockwisePressed; // 0xf0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotateClockwiseReleased; // 0x100 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotateCounterclockwisePressed; // 0x110 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotateCounterclockwiseReleased; // 0x120 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotateSingleClockwisePressed; // 0x130 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotateSingleClockwiseReleased; // 0x140 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotateSingleCounterclockwisePressed; // 0x150 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotateSingleCounterclockwiseReleased; // 0x160 (0x10)
	struct FMulticastInlineDelegate OnMoveToolSwitchRotationAxisPressed; // 0x170 (0x10)
	struct FMulticastInlineDelegate OnMoveToolSwitchRotationAxisReleased; // 0x180 (0x10)
	struct FMulticastInlineDelegate OnTouchMoveToolResetRotationPressed; // 0x190 (0x10)
	struct FMulticastInlineDelegate OnMoveToolMirror; // 0x1a0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolPushPressed; // 0x1b0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolPushReleased; // 0x1c0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolPullPressed; // 0x1d0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolPullReleased; // 0x1e0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolDropToFloor; // 0x1f0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolExitPressed; // 0x200 (0x10)
	struct FMulticastInlineDelegate OnMoveToolExitReleased; // 0x210 (0x10)
	struct FMulticastInlineDelegate OnMoveToolDeletePressed; // 0x220 (0x10)
	struct FMulticastInlineDelegate OnMoveToolDeleteReleased; // 0x230 (0x10)
	struct FMulticastInlineDelegate OnMoveToolChangePrecisionLevelPressed; // 0x240 (0x10)
	struct FMulticastInlineDelegate OnMoveToolChangePrecisionLevelReleased; // 0x250 (0x10)
	struct FMulticastInlineDelegate OnPlaysetPreviewPlace; // 0x260 (0x10)
	struct FMulticastInlineDelegate OnPlaysetPreviewPushPressed; // 0x270 (0x10)
	struct FMulticastInlineDelegate OnPlaysetPreviewPushReleased; // 0x280 (0x10)
	struct FMulticastInlineDelegate OnPlaysetPreviewPullPressed; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnPlaysetPreviewPullReleased; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleUpPressed; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleUpReleased; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleDownPressed; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleDownReleased; // 0x2e0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolSwitchScaleAxisPressed; // 0x2f0 (0x10)
	struct FMulticastInlineDelegate OnTouchMoveToolResetScalePressed; // 0x300 (0x10)
	struct FMulticastInlineDelegate OnMoveToolSwitchScaleAxisReleased; // 0x310 (0x10)
	struct FMulticastInlineDelegate OnCycleTransformationModeUpPressed; // 0x320 (0x10)
	struct FMulticastInlineDelegate OnCycleTransformationModeDownPressed; // 0x330 (0x10)
	struct FMulticastInlineDelegate OnSelectTranslationModePressed; // 0x340 (0x10)
	struct FMulticastInlineDelegate OnSelectRotationModePressed; // 0x350 (0x10)
	struct FMulticastInlineDelegate OnSelectScaleModePressed; // 0x360 (0x10)
	struct FMulticastInlineDelegate OnMultiSelectPressed; // 0x370 (0x10)
	struct FMulticastInlineDelegate OnMultiSelectReleased; // 0x380 (0x10)
	struct FMulticastInlineDelegate OnClearMultiSelectPressed; // 0x390 (0x10)
	struct FMulticastInlineDelegate OnMoveToolHitTraceRulePressed; // 0x3a0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolHitTraceRuleReleased; // 0x3b0 (0x10)
	class AFortPlayerController* OwningPC; // 0x3c0 (0x8)
	class UInputComponent* CreativeMoveToolEquippedInputComponent; // 0x3c8 (0x8)
	class UInputComponent* PropPossessorEquippedInputComponent; // 0x3d0 (0x8)
	class UInputComponent* MoveObjectsFreelyModeInputComponent; // 0x3d8 (0x8)
	class UInputComponent* MultiSelectMoveObjectsFreelyModeInputComponent; // 0x3e0 (0x8)
	class UInputComponent* MoveBuildingsOnGridModeInputComponent; // 0x3e8 (0x8)
	class UInputComponent* MultiSelectMoveBuildingsOnGridModeInputComponent; // 0x3f0 (0x8)
	class UInputComponent* TranslationInputComponent; // 0x3f8 (0x8)
	class UInputComponent* RotationInputComponent; // 0x400 (0x8)
	class UInputComponent* ScaleInputComponent; // 0x408 (0x8)
	class UInputComponent* EmptyInputComponent; // 0x410 (0x8)
	class UInputComponent* PlaysetPreviewModeInputComponent; // 0x418 (0x8)
	unsigned char padding_420[0x8]; // 0x420 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushTranslationInputMode (Underlying native function: PushTranslationInputMode 0x86e898c)
	void PushTranslationInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushScaleInputMode (Underlying native function: PushScaleInputMode 0x86e8904)
	void PushScaleInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushRotationInputMode (Underlying native function: PushRotationInputMode 0x86e887c)
	void PushRotationInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushPropPossessorEquippedInputComponent (Underlying native function: PushPropPossessorEquippedInputComponent 0x86e87f4)
	void PushPropPossessorEquippedInputComponent(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushPlaysetPreviewInputMode (Underlying native function: PushPlaysetPreviewInputMode 0x86e876c)
	void PushPlaysetPreviewInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushMultiSelectMoveObjectsFreelyModeInputComponent (Underlying native function: PushMultiSelectMoveObjectsFreelyModeInputComponent 0x86e82f8)
	void PushMultiSelectMoveObjectsFreelyModeInputComponent(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushMultiSelectMoveBuildingsOnGridModeInputComponent (Underlying native function: PushMultiSelectMoveBuildingsOnGridModeInputComponent 0x86e8270)
	void PushMultiSelectMoveBuildingsOnGridModeInputComponent(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushMoveObjectsFreelyInputMode (Underlying native function: PushMoveObjectsFreelyInputMode 0x86e81e8)
	void PushMoveObjectsFreelyInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushMoveBuildingsOnGridInputMode (Underlying native function: PushMoveBuildingsOnGridInputMode 0x86e8160)
	void PushMoveBuildingsOnGridInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushEmptyInputMode (Underlying native function: PushEmptyInputMode 0x86e80e8)
	void PushEmptyInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PushCreativeMoveToolEquippedInputComponent (Underlying native function: PushCreativeMoveToolEquippedInputComponent 0x86e8060)
	void PushCreativeMoveToolEquippedInputComponent(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopTranslationInputMode (Underlying native function: PopTranslationInputMode 0x86e7fd8)
	void PopTranslationInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopScaleInputMode (Underlying native function: PopScaleInputMode 0x86e7f50)
	void PopScaleInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopRotationInputMode (Underlying native function: PopRotationInputMode 0x86e7ec8)
	void PopRotationInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopPropPossessorEquippedInputComponent (Underlying native function: PopPropPossessorEquippedInputComponent 0x86e7e40)
	void PopPropPossessorEquippedInputComponent(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopPlaysetPreviewInputMode (Underlying native function: PopPlaysetPreviewInputMode 0x86e7db8)
	void PopPlaysetPreviewInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopMultiSelectMoveObjectsFreelyModeInputComponent (Underlying native function: PopMultiSelectMoveObjectsFreelyModeInputComponent 0x86e7ca8)
	void PopMultiSelectMoveObjectsFreelyModeInputComponent(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopMultiSelectMoveBuildingsOnGridModeInputComponent (Underlying native function: PopMultiSelectMoveBuildingsOnGridModeInputComponent 0x86e7c20)
	void PopMultiSelectMoveBuildingsOnGridModeInputComponent(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopMoveObjectsFreelyInputMode (Underlying native function: PopMoveObjectsFreelyInputMode 0x86e7b98)
	void PopMoveObjectsFreelyInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopMoveBuildingsOnGridInputMode (Underlying native function: PopMoveBuildingsOnGridInputMode 0x86e7b10)
	void PopMoveBuildingsOnGridInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopEmptyInputMode (Underlying native function: PopEmptyInputMode 0x86e7aa0)
	void PopEmptyInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopCreativeMoveToolEquippedInputComponent (Underlying native function: PopCreativeMoveToolEquippedInputComponent 0x86e7a18)
	void PopCreativeMoveToolEquippedInputComponent(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.PopAllInputModes (Underlying native function: PopAllInputModes 0x86e7998)
	void PopAllInputModes(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectMoverInputComponent.IsEmptyInputComponentActive (Underlying native function: IsEmptyInputComponentActive 0x86e0edc)
	bool IsEmptyInputComponentActive(); // (Final | Native | Public | BlueprintCallable)
};

