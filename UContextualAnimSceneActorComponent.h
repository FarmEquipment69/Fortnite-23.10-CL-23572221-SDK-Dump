// Class /Script/ContextualAnimation.ContextualAnimSceneActorComponent
// Size: 0x5b0
class UContextualAnimSceneActorComponent : public UPrimitiveComponent
{
	unsigned char unreflected_530[0x8]; // 0x530 (0x8) 
	struct FMulticastInlineDelegate OnJoinedSceneDelegate; // 0x538 (0x10)
	struct FMulticastInlineDelegate OnLeftSceneDelegate; // 0x548 (0x10)
	class UContextualAnimSceneAsset* SceneAsset; // 0x558 (0x8)
	bool bEnableDebug; // 0x560 (0x1)
	unsigned char unreflected_561[0x7]; // 0x561 (0x7) 
	struct FContextualAnimSceneBindings Bindings; // 0x568 (0x28)
	struct TArray<struct FContextualAnimIKTarget> IKTargets; // 0x590 (0x10)
	unsigned char padding_5a0[0x10]; // 0x5a0 (0x10)

	/* Functions */

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnTickPose (Underlying native function: OnTickPose 0x7c690f8)
	void OnTickPose(class USkinnedMeshComponent*& SkinnedMeshComponent, float& DeltaTime, bool& bNeedsValidRootMotion); // (Final | Native | Protected)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_Bindings (Underlying native function: OnRep_Bindings 0x7c69050)
	void OnRepBindings(); // (Final | Native | Protected)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnLeftScene (Underlying native function: OnLeftScene 0x7c68db4)
	void OnLeftScene(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnJoinedScene (Underlying native function: OnJoinedScene 0x7c68d08)
	void OnJoinedScene(struct FContextualAnimSceneBindings& InBindings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargets (Underlying native function: GetIKTargets 0x7c689b8)
	struct TArray<struct FContextualAnimIKTarget> GetIKTargets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargetByGoalName (Underlying native function: GetIKTargetByGoalName 0x7c688d4)
	struct FContextualAnimIKTarget GetIKTargetByGoalName(struct FName& GoalName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

