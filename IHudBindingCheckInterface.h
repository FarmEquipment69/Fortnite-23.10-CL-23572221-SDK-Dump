// Class /Script/FortniteUI.HudBindingCheckInterface
// Size: 0x28
class IHudBindingCheckInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteUI.HudBindingCheckInterface.ShowBindWidgets (Underlying native function: ShowBindWidgets 0x26aab60)
	void ShowBindWidgets(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.HudBindingCheckInterface.ShouldShowPromptInHud (Underlying native function: ShouldShowPromptInHud 0x20fb39c)
	bool ShouldShowPromptInHud(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.HudBindingCheckInterface.HideBindWidgets (Underlying native function: HideBindWidgets 0x6e5e0cc)
	void HideBindWidgets(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.HudBindingCheckInterface.GetBindActions (Underlying native function: GetBindActions 0x80cf00c)
	void GetBindActions(struct TArray<struct FName>& OutActions); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

