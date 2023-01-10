// Class /Script/FortniteGame.CreativeQuickbarComponent
// Size: 0x178
class UCreativeQuickbarComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnCreativeQuickbarActiveChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickbarEquippedChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickbarClutchReleasedNoAction; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnItemAddedToMoveTool; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnItemAddedToCreativeQuickbar; // 0xe0 (0x10)
	bool bIsCreativeQuickbarActive; // 0xf0 (0x1)
	bool bIsCreativeQuickbarEquipped; // 0xf1 (0x1)
	unsigned char unreflected_f2[0x6]; // 0xf2 (0x6) 
	struct TArray<class UFortCreativeUserPrefabItemDefinition*> QuickbarSlotItemDefinitions; // 0xf8 (0x10)
	unsigned char unreflected_108[0x28]; // 0x108 (0x28) 
	class UFortPlaysetWorldItemDefinition* QuickbarSlotPlaysetItemDefinition; // 0x130 (0x8)
	class ULevelSaveRecord* CurrentQuickbarRequestSaveRecord; // 0x138 (0x8)
	class UInputComponent* CreativeQuickbarInputComponent; // 0x140 (0x8)
	class UInputComponent* CreativeQuickbarActiveInputComponent; // 0x148 (0x8)
	unsigned char padding_150[0x28]; // 0x150 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.CreativeQuickbarComponent.SetIsQuickbarEquipped (Underlying native function: SetIsQuickbarEquipped 0x8551f74)
	void SetIsQuickbarEquipped(bool& bIsEquipped); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ServerAddToQuickBar (Underlying native function: ServerAddToQuickBar 0x8551874)
	void ServerAddToQuickBar(struct TArray<class AActor*>& Actors, int& DesiredSlotIndex); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ServerAddItemToQuickBar (Underlying native function: ServerAddItemToQuickBar 0x85516e8)
	void ServerAddItemToQuickBar(class UFortItemDefinition*& ItemDefinition, int& DesiredSlotIndexconst, struct FGuid& PreviousItemGuid, bool& bUseVolumeToSpawn); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.PopulateQuickbarSlotFromSelection (Underlying native function: PopulateQuickbarSlotFromSelection 0x84aa8c8)
	void PopulateQuickbarSlotFromSelection(int& SlotIndex); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.IsQuickbarActive (Underlying native function: IsQuickbarActive 0x854f81c)
	bool IsQuickbarActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0x854ee14)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleQuickbarClutchReleased (Underlying native function: HandleQuickbarClutchReleased 0x71e6634)
	void HandleQuickbarClutchReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleQuickbarClutchPressed (Underlying native function: HandleQuickbarClutchPressed 0x854edfc)
	void HandleQuickbarClutchPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleMoveToolInteractionStarted (Underlying native function: HandleMoveToolInteractionStarted 0x854ed7c)
	void HandleMoveToolInteractionStarted(class UObjectInteractionBehavior*& InteractionMode); // (Final | Native | Protected)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleMoveToolInteractionEnded (Underlying native function: HandleMoveToolInteractionEnded 0x854ed68)
	void HandleMoveToolInteractionEnded(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleInputMethodChanged (Underlying native function: HandleInputMethodChanged 0x854eb80)
	void HandleInputMethodChanged(enum ECommonInputType& CurrentInputType); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleCreativeQuickbarReleased (Underlying native function: HandleCreativeQuickbarReleased 0x854eafc)
	void HandleCreativeQuickbarReleased(int& SlotIndex); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.HandleCreativeQuickbarPressed (Underlying native function: HandleCreativeQuickbarPressed 0x854ea78)
	void HandleCreativeQuickbarPressed(int& SlotIndex); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ExecuteDelayedAddItemToQuickbar (Underlying native function: ExecuteDelayedAddItemToQuickbar 0x854cb24)
	void ExecuteDelayedAddItemToQuickbar(class UFortItemDefinition*& ItemDefinition, int& DesiredSlotIndex, bool& bUseVolumeToSpawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ExecuteDelayedAddItemToMoveTool (Underlying native function: ExecuteDelayedAddItemToMoveTool 0x854ca5c)
	void ExecuteDelayedAddItemToMoveTool(class UFortItemDefinition*& ItemDefinition, bool& bUseVolume); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ClientAddToQuickBarComplete (Underlying native function: ClientAddToQuickBarComplete 0x854b550)
	void ClientAddToQuickBarComplete(int& SlotPutIn, struct FGuid& ItemGuid, class UFortItemDefinition*& Playset, bool& UseDelayedAddToQuickbar, bool& bUseVolumeToSpawn); // (Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)

	// Function /Script/FortniteGame.CreativeQuickbarComponent.ActivateQuickbarSlot (Underlying native function: ActivateQuickbarSlot 0x854b230)
	void ActivateQuickbarSlot(int& SlotIndex); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)
};

