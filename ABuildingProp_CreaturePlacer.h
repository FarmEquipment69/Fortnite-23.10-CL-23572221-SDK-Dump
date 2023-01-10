// Class /Script/FortniteGame.BuildingProp_CreaturePlacer
// Size: 0x1008
class ABuildingProp_CreaturePlacer : public ABuildingProp_AISpawner
{
	enum EFortMinigameState CurrentMinigameState; // 0xf40 (0x1)
	unsigned char unreflected_f41[0x7]; // 0xf41 (0x7) 
	struct TArray<struct FSpawnGroupVisuals> SpawnGroupVisuals; // 0xf48 (0x10)
	struct TWeakObjectPtr<class UClass> SelectedSpawnGroup; // 0xf58 (0x28)
	struct TWeakObjectPtr<class UClass> SelectedSpawnLimit; // 0xf80 (0x28)
	bool bHideVFX; // 0xfa8 (0x1)
	bool bEnabledOnGameState; // 0xfa9 (0x1)
	bool bDestroyPreviousOnSpawn; // 0xfaa (0x1)
	enum EFortMinigameState GameStateEnable; // 0xfab (0x1)
	unsigned char unreflected_fac[0x4]; // 0xfac (0x4) 
	struct FMulticastInlineDelegate OnCreatureVisualsLoadComplete; // 0xfb0 (0x10)
	bool bCreatureVisualsDoneLoading; // 0xfc0 (0x1)
	unsigned char unreflected_fc1[0x7]; // 0xfc1 (0x7) 
	class UFortGameplayReceiverMessageComponent* TurnOnReceiverComponent; // 0xfc8 (0x8)
	class UFortGameplayReceiverMessageComponent* TurnOffReceiverComponent; // 0xfd0 (0x8)
	class UFortGameplayTriggerMessageComponent* CreatureKilledTransmitComponent; // 0xfd8 (0x8)
	bool bEnableCreativeCreatureSpawners; // 0xfe0 (0x1)
	unsigned char unreflected_fe1[0x7]; // 0xfe1 (0x7) 
	class USkeletalMeshComponent* CreatureSkeletalMeshComponent; // 0xfe8 (0x8)
	unsigned char padding_ff0[0x18]; // 0xff0 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_CreaturePlacer.UpdateCreatureVisuals (Underlying native function: UpdateCreatureVisuals 0x8389518)
	void UpdateCreatureVisuals(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CreaturePlacer.OnTurnOnReceived (Underlying native function: OnTurnOnReceived 0x8387d20)
	void OnTurnOnReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CreaturePlacer.OnTurnOffReceived (Underlying native function: OnTurnOffReceived 0x8387c14)
	void OnTurnOffReceived(class AController*& TriggerInstigator); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CreaturePlacer.MinigameStateChanged (Underlying native function: MinigameStateChanged 0x8385dd8)
	void MinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& NewMinigameState); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CreaturePlacer.GetCreatureSkeletalMeshComponent (Underlying native function: GetCreatureSkeletalMeshComponent 0x8383e88)
	class USkeletalMeshComponent* GetCreatureSkeletalMeshComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

