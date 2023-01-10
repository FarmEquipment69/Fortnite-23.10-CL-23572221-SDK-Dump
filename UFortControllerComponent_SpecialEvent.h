// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
// Size: 0xa8
class UFortControllerComponent_SpecialEvent : public UFortControllerComponent
{
	struct TWeakObjectPtr<class AFortAthenaMutator_SpecialEvent> SpecialEventMutator; // 0xa0 (0x8)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.ServerHandleSpecialClientEvent (Underlying native function: ServerHandleSpecialClientEvent 0x73601fc)
	void ServerHandleSpecialClientEvent(struct FGameplayTag& EventTag, int& Count); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.SendSpecialClientEvent (Underlying native function: SendSpecialClientEvent 0x7360104)
	void SendSpecialClientEvent(struct FGameplayTag& EventTag, int& Count); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

