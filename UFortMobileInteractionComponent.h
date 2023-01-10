// Class /Script/FortniteGame.FortMobileInteractionComponent
// Size: 0x610
class UFortMobileInteractionComponent : public UStaticMeshComponent
{
	class UMaterialInstanceDynamic* IconMID; // 0x5f0 (0x8)
	unsigned char padding_5f8[0x18]; // 0x5f8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortMobileInteractionComponent.TickLocation (Underlying native function: TickLocation 0x874536c)
	void TickLocation(float& DeltaTime); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.StopRadialTimer (Underlying native function: StopRadialTimer 0x8745354)
	void StopRadialTimer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.StartRadialTimer (Underlying native function: StartRadialTimer 0x87452d0)
	void StartRadialTimer(float& Duration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetVisibleStartTime (Underlying native function: SetVisibleStartTime 0x87452bc)
	void SetVisibleStartTime(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetUpdateLocationOnTick (Underlying native function: SetUpdateLocationOnTick 0x8745230)
	void SetUpdateLocationOnTick(bool& bShouldUpdate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetRarityColor (Underlying native function: SetRarityColor 0x87451a8)
	void SetRarityColor(struct FLinearColor& InColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetRadialStartTime (Underlying native function: SetRadialStartTime 0x8745124)
	void SetRadialStartTime(float& StartTime); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetRadialOpacity (Underlying native function: SetRadialOpacity 0x87450a0)
	void SetRadialOpacity(float& Opacity); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetRadialDuration (Underlying native function: SetRadialDuration 0x874501c)
	void SetRadialDuration(float& Duration); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetIcon (Underlying native function: SetIcon 0x8744f9c)
	void SetIcon(enum EMobileInteractionIconTypes& IconType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetExtents (Underlying native function: SetExtents 0x8744f0c)
	void SetExtents(struct FVector& Extents); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetCameraPush (Underlying native function: SetCameraPush 0x8744e88)
	void SetCameraPush(float& Offset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.IsAvailable (Underlying native function: IsAvailable 0x8744634)
	bool IsAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

