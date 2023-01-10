// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
// Size: 0xf8
class UFortControllerComponent_GameplayCinematic : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x30]; // 0xa0 (0x30) 
	struct FMulticastInlineDelegate BPOnStartGameplayOutro; // 0xd0 (0x10)
	struct FMulticastInlineDelegate BPOnGameplayIntroFinished; // 0xe0 (0x10)
	bool bIsReadyForGameplay; // 0xf0 (0x1)
	unsigned char padding_f1[0x7]; // 0xf1 (0x7)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ShowCinematicWidget (Underlying native function: ShowCinematicWidget 0x73615fc)
	void ShowCinematicWidget(struct FName& WidgetName); // (Final | BlueprintCosmetic | Exec | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.SetReadyForGameplay (Underlying native function: SetReadyForGameplay 0x6df775c)
	void SetReadyForGameplay(bool& bIsReady); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ServerOnGameplayIntroFinished (Underlying native function: ServerOnGameplayIntroFinished 0x662da48)
	void ServerOnGameplayIntroFinished(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.OnRep_bIsReadyForGameplay (Underlying native function: OnRep_bIsReadyForGameplay 0x735f3e0)
	void OnRepbIsReadyForGameplay(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.HideHUDElementsForLoadingScreen (Underlying native function: HideHUDElementsForLoadingScreen 0x735d2d8)
	void HideHUDElementsForLoadingScreen(bool& bHideElements); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

