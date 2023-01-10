// Class /Script/FortniteUI.FortHUDTargetUnderReticleWidget
// Size: 0x2d8
class UFortHUDTargetUnderReticleWidget : public UCommonUserWidget
{
	struct TScriptInterface<class IFortHUDTargetUnderReticleInterface> Target; // 0x290 (0x10)
	bool bKeepTargetUntilNewValidTarget; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x7]; // 0x2a1 (0x7) 
	struct FGameplayTagContainer TargetRequiredTags; // 0x2a8 (0x20)
	unsigned char padding_2c8[0x10]; // 0x2c8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortHUDTargetUnderReticleWidget.Setup (Underlying native function: Setup 0xa587d20)
	void Setup(bool& bInKeepTargetUntilNewValidTarget, struct FGameplayTagContainer& InTargetRequiredTags); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDTargetUnderReticleWidget.OnTargetHealthChanged (Underlying native function: OnTargetHealthChanged 0x71e6634)
	void OnTargetHealthChanged(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDTargetUnderReticleWidget.OnTargetDied (Underlying native function: OnTargetDied 0x71e664c)
	void OnTargetDied(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDTargetUnderReticleWidget.OnTargetDestroyed (Underlying native function: OnTargetDestroyed 0x71e81dc)
	void OnTargetDestroyed(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDTargetUnderReticleWidget.OnTargetChanged (Underlying native function: OnTargetChanged 0x854edfc)
	void OnTargetChanged(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDTargetUnderReticleWidget.OnTargetActorDestroyed (Underlying native function: OnTargetActorDestroyed 0xa5865f0)
	void OnTargetActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDTargetUnderReticleWidget.HandleOnHUDTargetUnderReticle (Underlying native function: HandleOnHUDTargetUnderReticle 0xa585870)
	void HandleOnHUDTargetUnderReticle(struct TScriptInterface<class IFortHUDTargetUnderReticleInterface>& NewTarget); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortHUDTargetUnderReticleWidget.ClearTarget (Underlying native function: ClearTarget 0xa5836c4)
	void ClearTarget(); // (Final | Native | Private | BlueprintCallable)
};

