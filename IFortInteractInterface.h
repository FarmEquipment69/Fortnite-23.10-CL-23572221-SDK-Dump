// Class /Script/FortniteGame.FortInteractInterface
// Size: 0x28
class IFortInteractInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortInteractInterface.SetActorForInteraction (Underlying native function: SetActorForInteraction 0x86eb058)
	void SetActorForInteraction(class AActor*& ForwardInteractionActor); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortInteractInterface.ServerOnAttemptInteract (Underlying native function: ServerOnAttemptInteract 0x86eada0)
	bool ServerOnAttemptInteract(struct FInteractionType& InteractType); // (Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortInteractInterface.OnFortInteractAnimNotifyEnd (Underlying native function: OnFortInteractAnimNotifyEnd 0x86e6f50)
	void OnFortInteractAnimNotifyEnd(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FName& NotifyStateName, struct FAnimNotifyEventReference& EventReference); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortInteractInterface.OnFortInteractAnimNotifyBegin (Underlying native function: OnFortInteractAnimNotifyBegin 0x86e6d74)
	void OnFortInteractAnimNotifyBegin(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FName& NotifyStateName, float& TotalDuration, struct FAnimNotifyEventReference& EventReference); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortInteractInterface.LocalOnFailedInteract (Underlying native function: LocalOnFailedInteract 0x86e4940)
	void LocalOnFailedInteract(class AFortPlayerPawn*& InteractingPawn); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortInteractInterface.IconPlacementNeedsUpdate (Underlying native function: IconPlacementNeedsUpdate 0x86e06dc)
	bool IconPlacementNeedsUpdate(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetMinDistanceFromInteraction (Underlying native function: GetMinDistanceFromInteraction 0x2711d68)
	float GetMinDistanceFromInteraction(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetIconPlacement (Underlying native function: GetIconPlacement 0x86db700)
	void GetIconPlacement(class AActor*& SelfActor, class AActor*& ViewingActor, struct FVector& OutLocation, struct FVector& OutExtents); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetFocusedSocketLocation (Underlying native function: GetFocusedSocketLocation 0x86dadb8)
	struct FVector GetFocusedSocketLocation(); // (0x00000002 | Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetCustomTint (Underlying native function: GetCustomTint 0x86da6c4)
	struct FLinearColor GetCustomTint(); // (Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetCustomIcon (Underlying native function: GetCustomIcon 0x86da620)
	struct TWeakObjectPtr<class UTexture2D> GetCustomIcon(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetBoundsComponents (Underlying native function: GetBoundsComponents 0x86d9468)
	void GetBoundsComponents(class AActor*& SelfActor, struct TArray<class USceneComponent*>& OutComponents); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetActorForInteraction (Underlying native function: GetActorForInteraction 0x86d742c)
	class AActor* GetActorForInteraction(); // (Native | Event | Public | BlueprintEvent | Const)
};

