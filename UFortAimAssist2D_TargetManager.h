// Class /Script/FortniteGame.FortAimAssist2D_TargetManager
// Size: 0x80
class UFortAimAssist2D_TargetManager : public UGameInstanceSubsystem
{
	struct TMap<class AActor*, struct TWeakObjectPtr<class UShapeComponent>> TargetMap; // 0x30 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAimAssist2D_TargetManager.UnregisterAimAssistTarget (Underlying native function: UnregisterAimAssistTarget 0x87dfe44)
	static void UnregisterAimAssistTarget(class AActor*& TargetActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAimAssist2D_TargetManager.RegisterAimAssistTarget (Underlying native function: RegisterAimAssistTarget 0x87dfaa8)
	static void RegisterAimAssistTarget(class AActor*& TargetActor, class UShapeComponent*& TargetShapeComponent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAimAssist2D_TargetManager.OnTargetEndPlay (Underlying native function: OnTargetEndPlay 0x240e09c)
	void OnTargetEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)
};

