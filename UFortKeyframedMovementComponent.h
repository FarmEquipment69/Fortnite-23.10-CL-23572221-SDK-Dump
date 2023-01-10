// Class /Script/FortniteGame.FortKeyframedMovementComponent
// Size: 0x190
class UFortKeyframedMovementComponent : public UActorComponent
{
	struct FMulticastSparseDelegate OnKeyframedMovementKeyframeReachedBlueprintDelegate; // 0xa0 (0x1)
	struct FMulticastSparseDelegate OnKeyframedMovementCompleteBlueprintDelegate; // 0xa1 (0x1)
	unsigned char unreflected_a2[0x4e]; // 0xa2 (0x4e) 
	class UFortNavModifierComponent* CachedNavModifierComponent; // 0xf0 (0x8)
	unsigned char unreflected_f8[0x8]; // 0xf8 (0x8) 
	struct FFortKeyframedMovementCommandData PendingCommand; // 0x100 (0x50)
	class ABuildingActor* Target; // 0x150 (0x8)
	struct TArray<struct FFortKeyframedMovementKeyframeData> Keyframes; // 0x158 (0x10)
	enum EFortKeyframedMovementMovementMode MovementMode; // 0x168 (0x1)
	unsigned char unreflected_169[0x17]; // 0x169 (0x17) 
	class UFortKeyframedMovementClientData* ClientData; // 0x180 (0x8)
	unsigned char padding_188[0x8]; // 0x188 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.TeleportTo (Underlying native function: TeleportTo 0x8522cf0)
	void TeleportTo(struct FVector& Position, struct FQuat& Rotation); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.Stop (Underlying native function: Stop 0x273fd14)
	void Stop(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.SetKeyframes (Underlying native function: SetKeyframes 0x8521814)
	bool SetKeyframes(struct TArray<struct FFortKeyframedMovementKeyframeData>& RelativeKeyframes, enum EFortKeyframedMovementMovementMode& MovementModeIn, bool& NotifyStateChangeListeners); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.Play (Underlying native function: Play 0x8520084)
	void Play(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.Pause (Underlying native function: Pause 0x273fd14)
	void Pause(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.OnRep_MovementMode (Underlying native function: OnRep_MovementMode 0x5957640)
	void OnRepMovementMode(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.OnRep_Keyframes (Underlying native function: OnRep_Keyframes 0x5957610)
	void OnRepKeyframes(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.OnRep_CommandState (Underlying native function: OnRep_CommandState 0x59575e0)
	void OnRepCommandState(); // (Final | Native | Private)

	// SparseDelegateFunction /Script/FortniteGame.FortKeyframedMovementComponent.OnKeyframedMovementKeyframeReachedSignatureBlueprint__DelegateSignature (Has no native function)
	void OnKeyframedMovementKeyframeReachedSignatureBlueprintDelegateSignature(int64_t& KeyframeNumber, bool& InReverse); // (MulticastDelegate | Public | Delegate)

	// SparseDelegateFunction /Script/FortniteGame.FortKeyframedMovementComponent.OnKeyframedMovementCompleteSignatureBlueprint__DelegateSignature (Has no native function)
	void OnKeyframedMovementCompleteSignatureBlueprintDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.MoveTo (Underlying native function: MoveTo 0x851f910)
	void MoveTo(struct FVector& TargetLocation, struct FQuat& TargetRotation, float& OverTime); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.IsPlaying (Underlying native function: IsPlaying 0x851eca0)
	bool IsPlaying(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.IsPaused (Underlying native function: IsPaused 0x851eb1c)
	bool IsPaused(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortKeyframedMovementComponent.HasValidAnimation (Underlying native function: HasValidAnimation 0x851de9c)
	bool HasValidAnimation(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

