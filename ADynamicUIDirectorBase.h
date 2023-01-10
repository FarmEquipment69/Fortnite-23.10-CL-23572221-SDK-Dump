// Class /Script/DynamicUI.DynamicUIDirectorBase
// Size: 0x2a8
class ADynamicUIDirectorBase : public AActor
{
	struct TArray<class UDynamicUIScene*> DefaultScenes; // 0x288 (0x10)
	struct TWeakObjectPtr<class ULocalPlayer> OwningLocalPlayer; // 0x298 (0x8)
	bool bEnabledDuringReplay; // 0x2a0 (0x1)
	unsigned char padding_2a1[0x7]; // 0x2a1 (0x7)

	/* Functions */

	// Function /Script/DynamicUI.DynamicUIDirectorBase.RemoveScene (Underlying native function: RemoveScene 0x6cf5b9c)
	void RemoveScene(class UDynamicUIScene*& Scene); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayerController (Underlying native function: GetOwningLocalPlayerController 0x159f18c)
	class APlayerController* GetOwningLocalPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayer (Underlying native function: GetOwningLocalPlayer 0x6cf5b30)
	class ULocalPlayer* GetOwningLocalPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DynamicUI.DynamicUIDirectorBase.AddScene (Underlying native function: AddScene 0x26725d4)
	void AddScene(class UDynamicUIScene*& Scene); // (Final | Native | Public | BlueprintCallable)
};

