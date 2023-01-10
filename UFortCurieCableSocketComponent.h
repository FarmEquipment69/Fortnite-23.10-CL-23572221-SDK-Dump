// Class /Script/FortniteGame.FortCurieCableSocketComponent
// Size: 0x580
class UFortCurieCableSocketComponent : public UShapeComponent
{
	struct FMulticastInlineDelegate OnCurieCableSignalReceived; // 0x550 (0x10)
	struct TArray<struct FFortCurieCableSocket> CableSockets; // 0x560 (0x10)
	float CableSocketRadius; // 0x570 (0x4)
	unsigned char padding_574[0xc]; // 0x574 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.SendSignal (Underlying native function: SendSignal 0x85759bc)
	void SendSignal(struct FFortCurieCableSocketIdentifier*& SourceSocketIdentifier, struct FGameplayTag& ElementTag, float& Magnitude); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortCurieCableSocketComponent.OnCurieCableSignalReceived__DelegateSignature (Has no native function)
	void OnCurieCableSignalReceivedDelegateSignature(struct FFortCurieCableSocketIdentifier*& SocketIdentifier, struct FGameplayTag& ElementTag, float& Magnitude); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.IsReceivedElementSignalActive (Underlying native function: IsReceivedElementSignalActive 0x857465c)
	bool IsReceivedElementSignalActive(struct FFortCurieCableSocketIdentifier*& SocketIdentifier, struct FGameplayTag& ElementTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.IsCableSocketConnected (Underlying native function: IsCableSocketConnected 0x85743f4)
	bool IsCableSocketConnected(struct FFortCurieCableSocketIdentifier*& SocketIdentifier); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.GetReceivedElementSignals (Underlying native function: GetReceivedElementSignals 0x8573588)
	struct FGameplayTagContainer GetReceivedElementSignals(struct FFortCurieCableSocketIdentifier*& SourceSocketIdentifier); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.GetReceivedElementSignalMagnitude (Underlying native function: GetReceivedElementSignalMagnitude 0x85734bc)
	float GetReceivedElementSignalMagnitude(struct FFortCurieCableSocketIdentifier*& SocketIdentifier, struct FGameplayTag& ElementTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.GetOngoingReceivedElementSignals (Underlying native function: GetOngoingReceivedElementSignals 0x85733d8)
	struct FGameplayTagContainer GetOngoingReceivedElementSignals(struct FFortCurieCableSocketIdentifier*& SourceSocketIdentifier); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.GetCableSocketWorldLocation (Underlying native function: GetCableSocketWorldLocation 0x8572914)
	struct FVector GetCableSocketWorldLocation(struct FFortCurieCableSocketIdentifier*& SocketIdentifier); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.GetCableSocketIdentifiers (Underlying native function: GetCableSocketIdentifiers 0x8572764)
	void GetCableSocketIdentifiers(struct TArray<struct FFortCurieCableSocketIdentifier*>& SocketIdentifiers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.GetCableSocketConnection (Underlying native function: GetCableSocketConnection 0x857260c)
	bool GetCableSocketConnection(struct FFortCurieCableSocketIdentifier*& SourceSocketIdentifier, class AActor*& ConnectedActor, struct FFortCurieCableSocketIdentifier*& ConnectedSocketIdentifier); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.Disconnect (Underlying native function: Disconnect 0x8570e8c)
	bool Disconnect(struct FFortCurieCableSocketIdentifier*& SourceSocketIdentifier); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieCableSocketComponent.Connect (Underlying native function: Connect 0x85706b4)
	bool Connect(struct FFortCurieCableSocketIdentifier*& SourceSocketIdentifier, class AActor*& DestinationActor, struct FFortCurieCableSocketIdentifier*& DestinationSocketIdentifier); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

