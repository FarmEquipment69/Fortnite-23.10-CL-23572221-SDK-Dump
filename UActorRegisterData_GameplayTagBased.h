// Class /Script/FortniteGame.ActorRegisterData_GameplayTagBased
// Size: 0x60
class UActorRegisterData_GameplayTagBased : public UObject
{
	struct FMulticastInlineDelegate OnActorRegistered; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnActorUnregistered; // 0x38 (0x10)
	unsigned char unreflected_48[0x8]; // 0x48 (0x8) 
	struct TArray<class AActor*> RegisteredActors; // 0x50 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.ActorRegisterData_GameplayTagBased.RemoveIfNotUsed (Underlying native function: RemoveIfNotUsed 0x273fd14)
	void RemoveIfNotUsed(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.ActorRegisterData_GameplayTagBased.RegisteredActorDestroyed (Underlying native function: RegisteredActorDestroyed 0x6df70d4)
	void RegisteredActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.ActorRegisterData_GameplayTagBased.HandleListenerRemoved (Underlying native function: HandleListenerRemoved 0x273fd14)
	void HandleListenerRemoved(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.ActorRegisterData_GameplayTagBased.GetRegisteredActors (Underlying native function: GetRegisteredActors 0x82a92cc)
	struct TArray<class AActor*> GetRegisteredActors(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.ActorRegisterData_GameplayTagBased.GetGameplayTag (Underlying native function: GetGameplayTag 0x2d7a950)
	struct FGameplayTag GetGameplayTag(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

