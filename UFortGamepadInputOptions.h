// Class /Script/FortniteUI.FortGamepadInputOptions
// Size: 0x428
class UFortGamepadInputOptions : public UFortInputOptions
{
	unsigned char unreflected_428[0x428]; 

	/* Functions */

	// Function /Script/FortniteUI.FortGamepadInputOptions.SetControllerPlatformEnum (Underlying native function: SetControllerPlatformEnum 0xa66486c)
	void SetControllerPlatformEnum(enum ECommonGamepadType& InControllerPlatform); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGamepadInputOptions.SetControllerPlatform (Underlying native function: SetControllerPlatform 0xa6646c8)
	void SetControllerPlatform(struct FString& InControllerPlatform); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGamepadInputOptions.ResetCustomGamepadToDefault (Underlying native function: ResetCustomGamepadToDefault 0xa664524)
	void ResetCustomGamepadToDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGamepadInputOptions.IsCustomGamepadConfig (Underlying native function: IsCustomGamepadConfig 0xa663bd4)
	bool IsCustomGamepadConfig(struct FString& ConfigName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGamepadInputOptions.HasCustomGamepadBindingChanges (Underlying native function: HasCustomGamepadBindingChanges 0xa663a74)
	bool HasCustomGamepadBindingChanges(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGamepadInputOptions.HandleGamePadToggleMode (Has no native function)
	void HandleGamePadToggleMode(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortGamepadInputOptions.GetControllerPlatform (Underlying native function: GetControllerPlatform 0xa66296c)
	struct FString GetControllerPlatform(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGamepadInputOptions.BroadcastModalClosed (Underlying native function: BroadcastModalClosed 0xa662378)
	void BroadcastModalClosed(); // (Final | Native | Private | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortGamepadInputOptions.AreAllImportantActionsBound (Underlying native function: AreAllImportantActionsBound 0xa6621f0)
	bool AreAllImportantActionsBound(struct TArray<struct FText>& OutUnboundScreenLabels, bool& bRichText); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

