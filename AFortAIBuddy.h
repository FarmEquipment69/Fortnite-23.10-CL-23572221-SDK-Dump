// Class /Script/FortniteGame.FortAIBuddy
// Size: 0x3380
class AFortAIBuddy : public AFortAIPawn
{
	class UFortWorldItemDefinition* ConsumableItem; // 0x32d8 (0x8)
	struct FScalableFloat ConsumableItemCount; // 0x32e0 (0x28)
	class AFortPlayerPawn* DrainPawn; // 0x3308 (0x8)
	class UFortWorldItemDefinition* DrainItem; // 0x3310 (0x8)
	struct FScalableFloat DrainItemCount; // 0x3318 (0x28)
	struct FScalableFloat DrainItemTick; // 0x3340 (0x28)
	unsigned char unreflected_3368[0x8]; // 0x3368 (0x8) 
	struct TArray<struct FFortBuddyTagListener> TagListeners; // 0x3370 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAIBuddy.StopItemDrain (Underlying native function: StopItemDrain 0x8ac69f8)
	void StopItemDrain(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIBuddy.StartItemDrain (Underlying native function: StartItemDrain 0x8ac6768)
	bool StartItemDrain(class AFortPlayerPawn*& PlayerPawn); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIBuddy.RemoveTagListener (Underlying native function: RemoveTagListener 0x8ac27b0)
	void RemoveTagListener(class AActor*& TargetActor, struct FGameplayTag& tag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIBuddy.OnListenTagRemoved (Has no native function)
	void OnListenTagRemoved(class AActor*& TargetActor, struct FGameplayTag& tag); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIBuddy.OnListenTagAdded (Has no native function)
	void OnListenTagAdded(class AActor*& TargetActor, struct FGameplayTag& tag); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIBuddy.OnItemsDrained (Has no native function)
	void OnItemsDrained(class AFortPlayerPawn*& PlayerPawn, int& ItemsDrained); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIBuddy.OnItemsConsumed (Has no native function)
	void OnItemsConsumed(class AFortPlayerPawn*& PlayerPawn, int& ItemsConsumed); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIBuddy.GetInteractionString (Has no native function)
	struct FText GetInteractionString(class AFortPlayerPawn*& PlayerPawn); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAIBuddy.AddTagListener (Underlying native function: AddTagListener 0x8abd22c)
	void AddTagListener(class AActor*& TargetActor, struct FGameplayTag& tag); // (Final | Native | Public | BlueprintCallable)
};

