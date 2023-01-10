// Class /Script/FortniteUI.FortItemPlacementActor
// Size: 0x478
class AFortItemPlacementActor : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class UWidgetComponent* WidgetComponentLoadingIndicator; // 0x290 (0x8)
	bool bIsActorHovered; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	class AFortPlayerPawn* CurrentPawn; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x1d0]; // 0x2a8 (0x1d0)

	/* Functions */

	// Function /Script/FortniteUI.FortItemPlacementActor.OnUnhovered (Has no native function)
	void OnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPlacementActor.OnRemovePreviewActor (Has no native function)
	void OnRemovePreviewActor(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPlacementActor.OnPreviewActorSpawned (Has no native function)
	void OnPreviewActorSpawned(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPlacementActor.OnItemClicked (Has no native function)
	void OnItemClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPlacementActor.OnHovered (Has no native function)
	void OnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPlacementActor.OnHeroPawnSetupCompleted (Has no native function)
	void OnHeroPawnSetupCompleted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPlacementActor.HandlePawnTouchBegin (Underlying native function: HandlePawnTouchBegin 0xa5f57b8)
	void HandlePawnTouchBegin(struct TEnumAsByte<ETouchIndex>& FingerIndex, class AActor*& TouchedActor); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemPlacementActor.HandlePawnFinishedApplyingCharacterParts (Underlying native function: HandlePawnFinishedApplyingCharacterParts 0x1542fb8)
	void HandlePawnFinishedApplyingCharacterParts(class AFortPlayerPawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemPlacementActor.HandlePawnEndCursorOver (Underlying native function: HandlePawnEndCursorOver 0xa5f5738)
	void HandlePawnEndCursorOver(class AActor*& TouchedActor); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemPlacementActor.HandlePawnClicked (Underlying native function: HandlePawnClicked 0xa5f5620)
	void HandlePawnClicked(class AActor*& TouchedActor, struct FKey& ButtonPressed); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemPlacementActor.HandlePawnBeginCursorOver (Underlying native function: HandlePawnBeginCursorOver 0xa5f55a0)
	void HandlePawnBeginCursorOver(class AActor*& TouchedActor); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemPlacementActor.HandleFinishedCharacterCustomization (Underlying native function: HandleFinishedCharacterCustomization 0x2732744)
	void HandleFinishedCharacterCustomization(class AFortPlayerPawn*& InPawn); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemPlacementActor.HandleBoneTransformsFinalized (Underlying native function: HandleBoneTransformsFinalized 0xa5f520c)
	void HandleBoneTransformsFinalized(); // (Final | Native | Private)
};

