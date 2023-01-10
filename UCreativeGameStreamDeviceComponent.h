// Class /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
// Size: 0xb0
class UCreativeGameStreamDeviceComponent : public UActorComponent
{
	struct FMulticastSparseDelegate OnTriggered; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	struct TWeakObjectPtr<class UFortMinigameLogicComponent> MinigameLogicComponent; // 0xa4 (0x8)
	unsigned char padding_ac[0x4]; // 0xac (0x4)

	/* Functions */

	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.RemoveFromEndGameQueue (Underlying native function: RemoveFromEndGameQueue 0x273fd14)
	void RemoveFromEndGameQueue(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.OnMinigameStateChanged (Underlying native function: OnMinigameStateChanged 0x6fbd4fc)
	void OnMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& NewMinigameState); // (Final | Native | Private)

	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.IsWithinPublishedPlayspace (Underlying native function: IsWithinPublishedPlayspace 0x24f75e4)
	bool IsWithinPublishedPlayspace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.Init (Underlying native function: Init 0x6df70d4)
	void Init(class UFortMinigameLogicComponent*& InMinigameLogicComponent); // (Final | Native | Public | BlueprintCallable)

	// SparseDelegateFunction /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.CreativeGameStreamDeviceComponentSignature__DelegateSignature (Has no native function)
	void CreativeGameStreamDeviceComponentSignatureDelegateSignature(class UCreativeGameStreamDeviceComponent*& CreativeGameStreamDeviceComponent); // (MulticastDelegate | Public | Delegate)

	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.AddToEndGameQueue (Underlying native function: AddToEndGameQueue 0x273fd14)
	void AddToEndGameQueue(); // (Final | Native | Public | BlueprintCallable)
};

