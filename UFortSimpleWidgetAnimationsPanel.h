// Class /Script/FortniteUI.FortSimpleWidgetAnimationsPanel
// Size: 0x190
class UFortSimpleWidgetAnimationsPanel : public UContentWidget
{
	struct FMulticastInlineDelegate OnAnimationsFinished; // 0x160 (0x10)
	struct TArray<struct FFortSimpleWidgetAnimations> Animations; // 0x170 (0x10)
	unsigned char padding_180[0x10]; // 0x180 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.StopAnimationByName (Underlying native function: StopAnimationByName 0xa7f6e70)
	bool StopAnimationByName(struct FName& Name); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.StopAllAnimations (Underlying native function: StopAllAnimations 0xa7f6e5c)
	void StopAllAnimations(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.ResetAnimationByName (Underlying native function: ResetAnimationByName 0xa7f3a1c)
	bool ResetAnimationByName(struct FName& Name); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.ResetAllAnimations (Underlying native function: ResetAllAnimations 0xa7f3a08)
	void ResetAllAnimations(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.PlayAnimationByName (Underlying native function: PlayAnimationByName 0x1b75f7c)
	bool PlayAnimationByName(struct FName& Name, float& Speed); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.OnAnimationsFinished__DelegateSignature (Has no native function)
	void OnAnimationsFinishedDelegateSignature(struct FName& Name); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortSimpleWidgetAnimationsPanel.ForwardOnAnimationsFinished (Underlying native function: ForwardOnAnimationsFinished 0xa7ec578)
	void ForwardOnAnimationsFinished(struct FName& Name); // (Final | Native | Private)
};

