// Class /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode
// Size: 0x220
class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent
{
	unsigned char unreflected_a0[0x60]; // 0xa0 (0x60) 
	struct TWeakObjectPtr<class UFortWeaponItemDefinition> ActivatorAsset; // 0x100 (0x28)
	struct TArray<struct FUIExtension> UIExtensions; // 0x128 (0x10)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UClass>> TaggedUIExtensions; // 0x138 (0x50)
	struct TArray<struct FEventModeFocusActor> FocusActors; // 0x188 (0x10)
	unsigned char unreflected_198[0x8]; // 0x198 (0x8) 
	class UInputComponent* InputComponent; // 0x1a0 (0x8)
	struct TArray<struct FEventModeWidgetCachedData> CachedWidgetData; // 0x1a8 (0x10)
	struct TWeakObjectPtr<class AActor> CurrentlyFocusedActor; // 0x1b8 (0x28)
	unsigned char padding_1e0[0x40]; // 0x1e0 (0x40)

	/* Functions */

	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed (Underlying native function: OnPlayerPawnPossessed 0x6df70d4)
	void OnPlayerPawnPossessed(class APawn*& PossessedPawn); // (Final | Native | Private)

	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle (Underlying native function: OnExitVehicle 0x706c9c8)
	void OnExitVehicle(); // (Final | Native | Private)

	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle (Underlying native function: OnEnterVehicle 0x706c9ac)
	void OnEnterVehicle(); // (Final | Native | Private)

	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing (Underlying native function: GetIsFocusing 0x706c994)
	bool GetIsFocusing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable (Underlying native function: GetIsFocusAvailable 0x706c97c)
	bool GetIsFocusAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive (Underlying native function: GetIsEventModeActive 0x706c964)
	bool GetIsEventModeActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

