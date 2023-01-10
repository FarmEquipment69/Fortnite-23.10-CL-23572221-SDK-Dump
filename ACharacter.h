// Class /Script/Engine.Character
// Size: 0x620
class ACharacter : public APawn
{
	class USkeletalMeshComponent* Mesh; // 0x310 (0x8)
	class UCharacterMovementComponent* CharacterMovement; // 0x318 (0x8)
	class UCapsuleComponent* CapsuleComponent; // 0x320 (0x8)
	struct FBasedMovementInfo BasedMovement; // 0x328 (0x50)
	struct FBasedMovementInfo ReplicatedBasedMovement; // 0x378 (0x50)
	float AnimRootMotionTranslationScale; // 0x3c8 (0x4)
	unsigned char unreflected_3cc[0x4]; // 0x3cc (0x4) 
	struct FVector BaseTranslationOffset; // 0x3d0 (0x18)
	unsigned char unreflected_3e8[0x8]; // 0x3e8 (0x8) 
	struct FQuat BaseRotationOffset; // 0x3f0 (0x20)
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x410 (0x4)
	float ReplayLastTransformUpdateTimeStamp; // 0x414 (0x4)
	unsigned char ReplicatedMovementMode; // 0x418 (0x1)
	bool bInBaseReplication; // 0x419 (0x1)
	unsigned char unreflected_41a[0x2]; // 0x41a (0x2) 
	float CrouchedEyeHeight; // 0x41c (0x4)
	unsigned char bIsCrouched; // 0x420 (0x1)
	unsigned char bProxyIsJumpForceApplied; // 0x420 (0x1)
	unsigned char bPressedJump; // 0x420 (0x1)
	unsigned char bClientUpdating; // 0x420 (0x1)
	unsigned char bClientWasFalling; // 0x420 (0x1)
	unsigned char bClientResimulateRootMotion; // 0x420 (0x1)
	unsigned char bClientResimulateRootMotionSources; // 0x420 (0x1)
	unsigned char bSimGravityDisabled; // 0x420 (0x1)
	unsigned char bClientCheckEncroachmentOnNetUpdate; // 0x421 (0x1)
	unsigned char bServerMoveIgnoreRootMotion; // 0x421 (0x1)
	unsigned char bWasJumping; // 0x421 (0x1)
	unsigned char unreflected_422[0x2]; // 0x422 (0x2) 
	float JumpKeyHoldTime; // 0x424 (0x4)
	float JumpForceTimeRemaining; // 0x428 (0x4)
	float ProxyJumpForceStartedTime; // 0x42c (0x4)
	float JumpMaxHoldTime; // 0x430 (0x4)
	int JumpMaxCount; // 0x434 (0x4)
	int JumpCurrentCount; // 0x438 (0x4)
	int JumpCurrentCountPreJump; // 0x43c (0x4)
	unsigned char unreflected_440[0x8]; // 0x440 (0x8) 
	struct FMulticastInlineDelegate OnReachedJumpApex; // 0x448 (0x10)
	struct FMulticastInlineDelegate LandedDelegate; // 0x458 (0x10)
	struct FMulticastInlineDelegate MovementModeChangedDelegate; // 0x468 (0x10)
	struct FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x478 (0x10)
	struct FRootMotionSourceGroup SavedRootMotion; // 0x488 (0x48)
	struct FRootMotionMovementParams ClientRootMotionParams; // 0x4d0 (0x70)
	struct TArray<struct FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x540 (0x10)
	struct FRepRootMotionMontage RepRootMotion; // 0x550 (0xd0)

	/* Functions */

	// Function /Script/Engine.Character.UnCrouch (Underlying native function: UnCrouch 0x8334858)
	void UnCrouch(bool& bClientSimulation); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Character.StopJumping (Underlying native function: StopJumping 0x9af2b44)
	void StopJumping(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Character.StopAnimMontage (Underlying native function: StopAnimMontage 0x25e7fc4)
	void StopAnimMontage(class UAnimMontage*& AnimMontage); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Character.ServerMovePacked (Underlying native function: ServerMovePacked 0x9af1020)
	void ServerMovePacked(struct FCharacterServerMovePackedBits& PackedBits); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.Character.ServerMoveOld (Underlying native function: ServerMoveOld 0x9af0ec0)
	void ServerMoveOld(float& OldTimeStamp, struct FVector_NetQuantize10& OldAccel, unsigned char& OldMoveFlags); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.Character.ServerMoveNoBase (Underlying native function: ServerMoveNoBase 0x9af0c24)
	void ServerMoveNoBase(float& Timestamp, struct FVector_NetQuantize10& InAccel, struct FVector_NetQuantize100& ClientLoc, unsigned char& CompressedMoveFlags, unsigned char& ClientRoll, uint32_t& View, unsigned char& ClientMovementMode); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.Character.ServerMoveDualNoBase (Underlying native function: ServerMoveDualNoBase 0x9af0810)
	void ServerMoveDualNoBase(float& TimeStamp0, struct FVector_NetQuantize10& InAccel0, unsigned char& PendingFlags, uint32_t& View0, float& Timestamp, struct FVector_NetQuantize10& InAccel, struct FVector_NetQuantize100& ClientLoc, unsigned char& NewFlags, unsigned char& ClientRoll, uint32_t& View, unsigned char& ClientMovementMode); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.Character.ServerMoveDualHybridRootMotion (Underlying native function: ServerMoveDualHybridRootMotion 0x9af0370)
	void ServerMoveDualHybridRootMotion(float& TimeStamp0, struct FVector_NetQuantize10& InAccel0, unsigned char& PendingFlags, uint32_t& View0, float& Timestamp, struct FVector_NetQuantize10& InAccel, struct FVector_NetQuantize100& ClientLoc, unsigned char& NewFlags, unsigned char& ClientRoll, uint32_t& View, class UPrimitiveComponent*& ClientMovementBase, struct FName& ClientBaseBoneName, unsigned char& ClientMovementMode); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.Character.ServerMoveDual (Underlying native function: ServerMoveDual 0x9aefed0)
	void ServerMoveDual(float& TimeStamp0, struct FVector_NetQuantize10& InAccel0, unsigned char& PendingFlags, uint32_t& View0, float& Timestamp, struct FVector_NetQuantize10& InAccel, struct FVector_NetQuantize100& ClientLoc, unsigned char& NewFlags, unsigned char& ClientRoll, uint32_t& View, class UPrimitiveComponent*& ClientMovementBase, struct FName& ClientBaseBoneName, unsigned char& ClientMovementMode); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.Character.ServerMove (Underlying native function: ServerMove 0x9aefb9c)
	void ServerMove(float& Timestamp, struct FVector_NetQuantize10& InAccel, struct FVector_NetQuantize100& ClientLoc, unsigned char& CompressedMoveFlags, unsigned char& ClientRoll, uint32_t& View, class UPrimitiveComponent*& ClientMovementBase, struct FName& ClientBaseBoneName, unsigned char& ClientMovementMode); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.Character.RootMotionDebugClientPrintOnScreen (Underlying native function: RootMotionDebugClientPrintOnScreen 0x9aefa44)
	void RootMotionDebugClientPrintOnScreen(struct FString& InString); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.Character.PlayAnimMontage (Underlying native function: PlayAnimMontage 0x9aef8a8)
	float PlayAnimMontage(class UAnimMontage*& AnimMontage, float& InPlayRate, struct FName& StartSectionName); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Character.OnWalkingOffLedge (Underlying native function: OnWalkingOffLedge 0x2c67984)
	void OnWalkingOffLedge(struct FVector& PreviousFloorImpactNormal, struct FVector& PreviousFloorContactNormal, struct FVector& PreviousLocation, float& TimeDelta); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.Character.OnRep_RootMotion (Underlying native function: OnRep_RootMotion 0x18d183c)
	void OnRepRootMotion(); // (Final | Native | Public)

	// Function /Script/Engine.Character.OnRep_ReplicatedBasedMovement (Underlying native function: OnRep_ReplicatedBasedMovement 0x12ab518)
	void OnRepReplicatedBasedMovement(); // (Native | Public)

	// Function /Script/Engine.Character.OnRep_ReplayLastTransformUpdateTimeStamp (Underlying native function: OnRep_ReplayLastTransformUpdateTimeStamp 0x1e83b6c)
	void OnRepReplayLastTransformUpdateTimeStamp(); // (Final | Native | Public)

	// Function /Script/Engine.Character.OnRep_IsCrouched (Underlying native function: OnRep_IsCrouched 0x1854b58)
	void OnRepIsCrouched(); // (Native | Public)

	// Function /Script/Engine.Character.OnLaunched (Has no native function)
	void OnLaunched(struct FVector& LaunchVelocity, bool& bXYOverride, bool& bZOverride); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.Character.OnLanded (Has no native function)
	void OnLanded(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/Engine.Character.OnJumped (Underlying native function: OnJumped 0x9aef890)
	void OnJumped(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.Character.LaunchCharacter (Underlying native function: LaunchCharacter 0x9aef384)
	void LaunchCharacter(struct FVector& LaunchVelocity, bool& bXYOverride, bool& bZOverride); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Character.K2_UpdateCustomMovement (Has no native function)
	void K2UpdateCustomMovement(float& DeltaTime); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Character.K2_OnStartCrouch (Has no native function)
	void K2OnStartCrouch(float& HalfHeightAdjust, float& ScaledHalfHeightAdjust); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Character.K2_OnMovementModeChanged (Has no native function)
	void K2OnMovementModeChanged(struct TEnumAsByte<EMovementMode>& PrevMovementMode, struct TEnumAsByte<EMovementMode>& NewMovementMode, unsigned char& PrevCustomMode, unsigned char& NewCustomMode); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Character.K2_OnEndCrouch (Has no native function)
	void K2OnEndCrouch(float& HalfHeightAdjust, float& ScaledHalfHeightAdjust); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Character.Jump (Underlying native function: Jump 0x8a3424c)
	void Jump(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Character.IsPlayingRootMotion (Underlying native function: IsPlayingRootMotion 0x9aef360)
	bool IsPlayingRootMotion(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Character.IsPlayingNetworkedRootMotionMontage (Underlying native function: IsPlayingNetworkedRootMotionMontage 0x9aef33c)
	bool IsPlayingNetworkedRootMotionMontage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Character.IsJumpProvidingForce (Underlying native function: IsJumpProvidingForce 0x9aef314)
	bool IsJumpProvidingForce(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Character.HasAnyRootMotion (Underlying native function: HasAnyRootMotion 0x9aef134)
	bool HasAnyRootMotion(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Character.GetCurrentMontage (Underlying native function: GetCurrentMontage 0x9aeef08)
	class UAnimMontage* GetCurrentMontage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Character.GetBaseTranslationOffset (Underlying native function: GetBaseTranslationOffset 0x9aeedc4)
	struct FVector GetBaseTranslationOffset(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Character.GetBaseRotationOffsetRotator (Underlying native function: GetBaseRotationOffsetRotator 0x9aeed8c)
	struct FRotator GetBaseRotationOffsetRotator(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Character.GetAnimRootMotionTranslationScale (Underlying native function: GetAnimRootMotionTranslationScale 0x2d7b11c)
	float GetAnimRootMotionTranslationScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Character.Crouch (Underlying native function: Crouch 0x9aeebcc)
	void Crouch(bool& bClientSimulation); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Character.ClientVeryShortAdjustPosition (Underlying native function: ClientVeryShortAdjustPosition 0x9aee7d8)
	void ClientVeryShortAdjustPosition(float& Timestamp, struct FVector& NewLoc, class UPrimitiveComponent*& NewBase, struct FName& NewBaseBoneName, bool& bHasBase, bool& bBaseRelativePosition, unsigned char& ServerMovementMode); // (Net | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/Engine.Character.ClientMoveResponsePacked (Underlying native function: ClientMoveResponsePacked 0x9aee70c)
	void ClientMoveResponsePacked(struct FCharacterMoveResponsePackedBits& PackedBits); // (Net | Native | Event | Public | NetClient | 0x80000000)

	// Function /Script/Engine.Character.ClientCheatWalk (Underlying native function: ClientCheatWalk 0x8e434a0)
	void ClientCheatWalk(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.Character.ClientCheatGhost (Underlying native function: ClientCheatGhost 0x803fd64)
	void ClientCheatGhost(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.Character.ClientCheatFly (Underlying native function: ClientCheatFly 0x8e5b5f4)
	void ClientCheatFly(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.Character.ClientAdjustRootMotionSourcePosition (Underlying native function: ClientAdjustRootMotionSourcePosition 0x9aee2b0)
	void ClientAdjustRootMotionSourcePosition(float& Timestamp, struct FRootMotionSourceGroup& ServerRootMotion, bool& bHasAnimRootMotion, float& ServerMontageTrackPosition, struct FVector& ServerLoc, struct FVector_NetQuantizeNormal& ServerRotation, float& ServerVelZ, class UPrimitiveComponent*& ServerBase, struct FName& ServerBoneName, bool& bHasBase, bool& bBaseRelativePosition, unsigned char& ServerMovementMode); // (Net | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/Engine.Character.ClientAdjustRootMotionPosition (Underlying native function: ClientAdjustRootMotionPosition 0x9aedfa4)
	void ClientAdjustRootMotionPosition(float& Timestamp, float& ServerMontageTrackPosition, struct FVector& ServerLoc, struct FVector_NetQuantizeNormal& ServerRotation, float& ServerVelZ, class UPrimitiveComponent*& ServerBase, struct FName& ServerBoneName, bool& bHasBase, bool& bBaseRelativePosition, unsigned char& ServerMovementMode); // (Net | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/Engine.Character.ClientAdjustPosition (Underlying native function: ClientAdjustPosition 0x9aedd20)
	void ClientAdjustPosition(float& Timestamp, struct FVector& NewLoc, struct FVector& NewVel, class UPrimitiveComponent*& NewBase, struct FName& NewBaseBoneName, bool& bHasBase, bool& bBaseRelativePosition, unsigned char& ServerMovementMode); // (Net | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/Engine.Character.ClientAckGoodMove (Underlying native function: ClientAckGoodMove 0x9aedc94)
	void ClientAckGoodMove(float& Timestamp); // (Net | Native | Event | Public | NetClient)

	// Function /Script/Engine.Character.CanJumpInternal (Underlying native function: CanJumpInternal 0x2e084f0)
	bool CanJumpInternal(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/Engine.Character.CanJump (Underlying native function: CanJump 0x9aedc30)
	bool CanJump(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Character.CanCrouch (Underlying native function: CanCrouch 0x23afa94)
	bool CanCrouch(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Character.CacheInitialMeshOffset (Underlying native function: CacheInitialMeshOffset 0x9aedb40)
	void CacheInitialMeshOffset(struct FVector& MeshRelativeLocation, struct FRotator& MeshRelativeRotation); // (Native | Public | HasDefaults | BlueprintCallable)
};

