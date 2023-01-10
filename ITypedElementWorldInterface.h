// Class /Script/Engine.TypedElementWorldInterface
// Size: 0x28
class ITypedElementWorldInterface : public IInterface
{

	/* Functions */

	// Function /Script/Engine.TypedElementWorldInterface.SetWorldTransform (Underlying native function: SetWorldTransform 0x9bb85d4)
	bool SetWorldTransform(struct FScriptTypedElementHandle*& InElementHandle, struct FTransform& InTransform); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.SetRelativeTransform (Underlying native function: SetRelativeTransform 0x9bb8470)
	bool SetRelativeTransform(struct FScriptTypedElementHandle*& InElementHandle, struct FTransform& InTransform); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.SetPivotOffset (Underlying native function: SetPivotOffset 0x9bb835c)
	bool SetPivotOffset(struct FScriptTypedElementHandle*& InElementHandle, struct FVector& InPivotOffset); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.PromoteElement (Underlying native function: PromoteElement 0x9bb81bc)
	struct FScriptTypedElementHandle* PromoteElement(struct FScriptTypedElementHandle*& InElementHandle, class UWorld*& OverrideWorld); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.NotifyMovementStarted (Underlying native function: NotifyMovementStarted 0x9bb8030)
	void NotifyMovementStarted(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.NotifyMovementOngoing (Underlying native function: NotifyMovementOngoing 0x9bb7f88)
	void NotifyMovementOngoing(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.NotifyMovementEnded (Underlying native function: NotifyMovementEnded 0x9bb7ee0)
	void NotifyMovementEnded(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.IsTemplateElement (Underlying native function: IsTemplateElement 0x9749ab4)
	bool IsTemplateElement(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetWorldTransform (Underlying native function: GetWorldTransform 0x9bb7b6c)
	bool GetWorldTransform(struct FScriptTypedElementHandle*& InElementHandle, struct FTransform& OutTransform); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetRelativeTransform (Underlying native function: GetRelativeTransform 0x9bb79b0)
	bool GetRelativeTransform(struct FScriptTypedElementHandle*& InElementHandle, struct FTransform& OutTransform); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetPivotOffset (Underlying native function: GetPivotOffset 0x9bb7868)
	bool GetPivotOffset(struct FScriptTypedElementHandle*& InElementHandle, struct FVector& OutPivotOffset); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetOwnerWorld (Underlying native function: GetOwnerWorld 0x9bb77b4)
	class UWorld* GetOwnerWorld(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetOwnerLevel (Underlying native function: GetOwnerLevel 0x9bb7700)
	class ULevel* GetOwnerLevel(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetBounds (Underlying native function: GetBounds 0x9bb7538)
	bool GetBounds(struct FScriptTypedElementHandle*& InElementHandle, struct FBoxSphereBounds& OutBounds); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.DuplicateElement (Underlying native function: DuplicateElement 0x9bb7194)
	struct FScriptTypedElementHandle* DuplicateElement(struct FScriptTypedElementHandle*& InElementHandle, class UWorld*& InWorld, struct FVector& InLocationOffset); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.DeleteElement (Underlying native function: DeleteElement 0x9bb6c7c)
	bool DeleteElement(struct FScriptTypedElementHandle*& InElementHandle, class UWorld*& InWorld, class UTypedElementSelectionSet*& InSelectionSet, struct FTypedElementDeletionOptions& InDeletionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.CanPromoteElement (Underlying native function: CanPromoteElement 0x9bb6bc8)
	bool CanPromoteElement(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.CanMoveElement (Underlying native function: CanMoveElement 0x9bb6ad0)
	bool CanMoveElement(struct FScriptTypedElementHandle*& InElementHandle, enum ETypedElementWorldType& InWorldType); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.CanEditElement (Underlying native function: CanEditElement 0x9bb6a1c)
	bool CanEditElement(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.CanDuplicateElement (Underlying native function: CanDuplicateElement 0x9bb6968)
	bool CanDuplicateElement(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.CanDeleteElement (Underlying native function: CanDeleteElement 0x9bb68b4)
	bool CanDeleteElement(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)
};

