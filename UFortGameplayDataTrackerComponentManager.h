// Class /Script/FortniteGame.FortGameplayDataTrackerComponentManager
// Size: 0x128
class UFortGameplayDataTrackerComponentManager : public UGameStateComponent
{
	struct FMulticastInlineDelegate OnDataTrackerComponentRegistered; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnDataTrackerComponentUnRegistered; // 0xb0 (0x10)
	unsigned char padding_c0[0x68]; // 0xc0 (0x68)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.UnRegisterTrackedStateActor (Underlying native function: UnRegisterTrackedStateActor 0x21dee5c)
	void UnRegisterTrackedStateActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.SetTrackedActorState (Underlying native function: SetTrackedActorState 0x21de7e8)
	void SetTrackedActorState(class AActor*& Actor, struct FGameplayTag& CurrentState); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.RegisterTrackedStateActor (Underlying native function: RegisterTrackedStateActor 0x21de9a8)
	void RegisterTrackedStateActor(class AActor*& Actor, struct FGameplayTag& InitialState); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.OnTrackedActorDestroyed (Underlying native function: OnTrackedActorDestroyed 0x87c9ca0)
	void OnTrackedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.GetRegisteredDataTrackerComponents (Underlying native function: GetRegisteredDataTrackerComponents 0x87c941c)
	void GetRegisteredDataTrackerComponents(struct TArray<class UFortGameplayDataTrackerComponent*>& OutDataTrackerComponents); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.GetCurrent (Underlying native function: GetCurrent 0x21de654)
	static class UFortGameplayDataTrackerComponentManager* GetCurrent(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)
};

