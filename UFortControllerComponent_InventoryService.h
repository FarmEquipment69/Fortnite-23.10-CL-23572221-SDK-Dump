// Class /Script/FortniteGame.FortControllerComponent_InventoryService
// Size: 0x170
class UFortControllerComponent_InventoryService : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	bool bBoundToRegisteredPlayerInfo; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	struct FRepGlobalCurrencyStash* GlobalCurrencyData; // 0xac (0x8)
	unsigned char unreflected_b4[0x14]; // 0xb4 (0x14) 
	struct FScalableFloat ShouldDropCurrencyOnDeath; // 0xc8 (0x28)
	struct FScalableFloat NumDeathsThatDropCurrency; // 0xf0 (0x28)
	struct FScalableFloat InventoryServiceEnabled; // 0x118 (0x28)
	unsigned char unreflected_140[0x8]; // 0x140 (0x8) 
	struct FGlobalCurrencyTrackedData GlobalCurrencyTrackedData; // 0x148 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_InventoryService.OnPlaylistDataReady (Underlying native function: OnPlaylistDataReady 0x7fbdb58)
	void OnPlaylistDataReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_InventoryService.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x6f05250)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_InventoryService.IsGlobalCurrencyWidgetEnabled (Underlying native function: IsGlobalCurrencyWidgetEnabled 0x7fbd184)
	static bool IsGlobalCurrencyWidgetEnabled(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_InventoryService.HandlePlacementChanged (Underlying native function: HandlePlacementChanged 0x7e484e4)
	void HandlePlacementChanged(class AFortPlayerStateAthena*& FortPlayerState, int& NewPlacement); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_InventoryService.HandleOnItemCountChanged (Underlying native function: HandleOnItemCountChanged 0x7fbcb94)
	void HandleOnItemCountChanged(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, class UFortItemDefinition*& Definition, int& Delta); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_InventoryService.GetInventoryServiceComponent (Underlying native function: GetInventoryServiceComponent 0x7fbc8f4)
	static class UFortControllerComponent_InventoryService* GetInventoryServiceComponent(class AFortPlayerControllerGameplay*& FortPC); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_InventoryService.GetDefaultGlobalCurrencyItemDefinition (Underlying native function: GetDefaultGlobalCurrencyItemDefinition 0x7fbc7d8)
	static class UFortResourceItemDefinition* GetDefaultGlobalCurrencyItemDefinition(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_InventoryService.GetDefaultCurrencyPayoutTable (Underlying native function: GetDefaultCurrencyPayoutTable 0x7fbc79c)
	static class UCurveTable* GetDefaultCurrencyPayoutTable(); // (Final | Native | Static | Public | BlueprintCallable)
};

