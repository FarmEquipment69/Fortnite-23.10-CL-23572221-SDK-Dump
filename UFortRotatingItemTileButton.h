// Class /Script/FortniteUI.FortRotatingItemTileButton
// Size: 0x1490
class UFortRotatingItemTileButton : public UFortItemTileButton
{
	float TimeBetweenRotations; // 0x1468 (0x4)
	bool bNeedsItemRotateAnimation; // 0x146c (0x1)
	unsigned char unreflected_146d[0xb]; // 0x146d (0xb) 
	struct TArray<class UFortItem*> ItemsToRotate; // 0x1478 (0x10)
	unsigned char padding_1488[0x8]; // 0x1488 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortRotatingItemTileButton.StopRotating (Underlying native function: StopRotating 0xa6c8a0c)
	void StopRotating(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortRotatingItemTileButton.StopPlayingRotateItemAnimation (Has no native function)
	void StopPlayingRotateItemAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortRotatingItemTileButton.StartRotating (Underlying native function: StartRotating 0xa6c89f8)
	void StartRotating(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortRotatingItemTileButton.StartPlayingRotateItemAnimation (Has no native function)
	void StartPlayingRotateItemAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortRotatingItemTileButton.SetTimeBeweenRotations (Underlying native function: SetTimeBeweenRotations 0xa6c8930)
	void SetTimeBeweenRotations(float& InTimeBetweenRotations); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortRotatingItemTileButton.SetNeedsItemRotateAnimation (Underlying native function: SetNeedsItemRotateAnimation 0xa6c86d0)
	void SetNeedsItemRotateAnimation(bool& InNeedsItemRotationAnimation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortRotatingItemTileButton.RotateToNextItem (Underlying native function: RotateToNextItem 0xa6c766c)
	void RotateToNextItem(); // (Final | Native | Public | BlueprintCallable)
};

