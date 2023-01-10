// Class /Script/Engine.Pawn
// Size: 0x310
class APawn : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	unsigned char bUseControllerRotationPitch; // 0x290 (0x1)
	unsigned char bUseControllerRotationYaw; // 0x290 (0x1)
	unsigned char bUseControllerRotationRoll; // 0x290 (0x1)
	unsigned char bCanAffectNavigationGeneration; // 0x290 (0x1)
	unsigned char bIsLocalViewTarget; // 0x290 (0x1)
	unsigned char unreflected_291[0x3]; // 0x291 (0x3) 
	float BaseEyeHeight; // 0x294 (0x4)
	struct TEnumAsByte<EAutoReceiveInput> AutoPossessPlayer; // 0x298 (0x1)
	enum EAutoPossessAI AutoPossessAI; // 0x299 (0x1)
	unsigned char RemoteViewPitch; // 0x29a (0x1)
	unsigned char unreflected_29b[0x5]; // 0x29b (0x5) 
	class UClass* AIControllerClass; // 0x2a0 (0x8)
	class APlayerState* PlayerState; // 0x2a8 (0x8)
	unsigned char unreflected_2b0[0x8]; // 0x2b0 (0x8) 
	class AController* LastHitBy; // 0x2b8 (0x8)
	class AController* Controller; // 0x2c0 (0x8)
	class AController* PreviousController; // 0x2c8 (0x8)
	unsigned char unreflected_2d0[0x4]; // 0x2d0 (0x4) 
	struct FMulticastSparseDelegate ReceiveControllerChangedDelegate; // 0x2d4 (0x1)
	struct FMulticastSparseDelegate ReceiveRestartedDelegate; // 0x2d5 (0x1)
	unsigned char unreflected_2d6[0x2]; // 0x2d6 (0x2) 
	struct FVector ControlInputVector; // 0x2d8 (0x18)
	struct FVector LastControlInputVector; // 0x2f0 (0x18)
	class UClass* OverrideInputComponentClass; // 0x308 (0x8)

	/* Functions */

	// Function /Script/Engine.Pawn.SpawnDefaultController (Underlying native function: SpawnDefaultController 0x237fc80)
	void SpawnDefaultController(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Pawn.SetCanAffectNavigationGeneration (Underlying native function: SetCanAffectNavigationGeneration 0x9d0a3a8)
	void SetCanAffectNavigationGeneration(bool& bNewValue, bool& bForceUpdate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Pawn.ReceiveUnpossessed (Has no native function)
	void ReceiveUnpossessed(class AController*& OldController); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/Engine.Pawn.ReceiveRestarted (Has no native function)
	void ReceiveRestarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Pawn.ReceivePossessed (Has no native function)
	void ReceivePossessed(class AController*& NewController); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/Engine.Pawn.ReceiveControllerChanged (Has no native function)
	void ReceiveControllerChanged(class AController*& OldController, class AController*& NewController); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Pawn.PawnMakeNoise (Underlying native function: PawnMakeNoise 0x9d0a244)
	void PawnMakeNoise(float& Loudness, struct FVector& NoiseLocation, bool& bUseNoiseMakerLocation, class AActor*& NoiseMaker); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Pawn.OnRep_PlayerState (Underlying native function: OnRep_PlayerState 0x16162d8)
	void OnRepPlayerState(); // (Native | Public)

	// Function /Script/Engine.Pawn.OnRep_Controller (Underlying native function: OnRep_Controller 0x6aa4a70)
	void OnRepController(); // (Native | Public)

	// Function /Script/Engine.Pawn.IsPlayerControlled (Underlying native function: IsPlayerControlled 0x2491634)
	bool IsPlayerControlled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.IsPawnControlled (Underlying native function: IsPawnControlled 0x9d0a21c)
	bool IsPawnControlled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.IsMoveInputIgnored (Underlying native function: IsMoveInputIgnored 0x9d0a1f4)
	bool IsMoveInputIgnored(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.IsLocallyViewed (Underlying native function: IsLocallyViewed 0x2466458)
	bool IsLocallyViewed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.IsLocallyControlled (Underlying native function: IsLocallyControlled 0x237db90)
	bool IsLocallyControlled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.IsControlled (Underlying native function: IsControlled 0x9d0a17c)
	bool IsControlled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.IsBotControlled (Underlying native function: IsBotControlled 0x9d0a154)
	bool IsBotControlled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.GetPendingMovementInputVector (Underlying native function: GetPendingMovementInputVector 0x9d0a12c)
	struct FVector GetPendingMovementInputVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.GetOverrideInputComponentClass (Underlying native function: GetOverrideInputComponentClass 0x9d0a114)
	class UClass* GetOverrideInputComponentClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.GetNavAgentLocation (Underlying native function: GetNavAgentLocation 0x9d0a0d4)
	struct FVector GetNavAgentLocation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.GetMovementComponent (Underlying native function: GetMovementComponent 0x1ecff68)
	class UPawnMovementComponent* GetMovementComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.GetMovementBaseActor (Underlying native function: GetMovementBaseActor 0x9d0a054)
	static class AActor* GetMovementBaseActor(class APawn*& Pawn); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.Pawn.GetLocalViewingPlayerController (Underlying native function: GetLocalViewingPlayerController 0x23d506c)
	class APlayerController* GetLocalViewingPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.GetLastMovementInputVector (Underlying native function: GetLastMovementInputVector 0x27314bc)
	struct FVector GetLastMovementInputVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.GetControlRotation (Underlying native function: GetControlRotation 0x9d09fe0)
	struct FRotator GetControlRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.GetController (Underlying native function: GetController 0x259f780)
	class AController* GetController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.GetBaseAimRotation (Underlying native function: GetBaseAimRotation 0x9d09fa4)
	struct FRotator GetBaseAimRotation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Pawn.DetachFromControllerPendingDestroy (Underlying native function: DetachFromControllerPendingDestroy 0x2480778)
	void DetachFromControllerPendingDestroy(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Pawn.ConsumeMovementInputVector (Underlying native function: ConsumeMovementInputVector 0x8793fc4)
	struct FVector ConsumeMovementInputVector(); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Pawn.AddMovementInput (Underlying native function: AddMovementInput 0x9d09e90)
	void AddMovementInput(struct FVector& WorldDirection, float& ScaleValue, bool& bForce); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Pawn.AddControllerYawInput (Underlying native function: AddControllerYawInput 0x9d09e08)
	void AddControllerYawInput(float& Val); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Pawn.AddControllerRollInput (Underlying native function: AddControllerRollInput 0x9d09d80)
	void AddControllerRollInput(float& Val); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Pawn.AddControllerPitchInput (Underlying native function: AddControllerPitchInput 0x9d09cf8)
	void AddControllerPitchInput(float& Val); // (Native | Public | BlueprintCallable)
};

