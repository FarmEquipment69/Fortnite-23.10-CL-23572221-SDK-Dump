// Class /Script/FortniteGame.BuildingProp_CaptureArea
// Size: 0xf60
class ABuildingProp_CaptureArea : public ABuildingProp
{
	struct TArray<struct FCaptureAreaTeamInfo> CaptureAreaTeamsInfo; // 0xef8 (0x10)
	class UCaptureComponent* CaptureComponent; // 0xf08 (0x8)
	struct TMap<class AFortPlayerController*, struct FCaptureHandle*> InventoryChangedHandlesMap; // 0xf10 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.UnregisterPlayerInsideArea (Underlying native function: UnregisterPlayerInsideArea 0x6df70d4)
	void UnregisterPlayerInsideArea(class AFortPlayerController*& OldPlayerInside); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.UnregisterAllRegisteredPlayerInsideArea (Underlying native function: UnregisterAllRegisteredPlayerInsideArea 0x273fd14)
	void UnregisterAllRegisteredPlayerInsideArea(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.UnbindToControllerInventoryChangedEvent (Underlying native function: UnbindToControllerInventoryChangedEvent 0x6df70d4)
	void UnbindToControllerInventoryChangedEvent(class AFortPlayerController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.UnbindAllControllersToInventoryChangedEvent (Underlying native function: UnbindAllControllersToInventoryChangedEvent 0x273fd14)
	void UnbindAllControllersToInventoryChangedEvent(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.RemoveItemsFromPlayer (Underlying native function: RemoveItemsFromPlayer 0x8388054)
	void RemoveItemsFromPlayer(struct TArray<struct FItemVariantHandle>& ItemsToCapture, class AFortPlayerController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.RegisterPlayerInsideArea (Underlying native function: RegisterPlayerInsideArea 0x6df70d4)
	void RegisterPlayerInsideArea(class AFortPlayerController*& PlayerInside); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnTeamsInfoChanged (Has no native function)
	void OnTeamsInfoChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnPlayerLeavesZone (Has no native function)
	void OnPlayerLeavesZone(class AFortPlayerController*& PlayerController, bool& bIsLast); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnPlayerEnterZone (Has no native function)
	void OnPlayerEnterZone(class AFortPlayerController*& PlayerController, bool& bIsFirst); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnPlayerChangedTeam (Underlying native function: OnPlayerChangedTeam 0x83875ec)
	void OnPlayerChangedTeam(class AFortPlayerState*& PlayerState, unsigned char& NewTeam, unsigned char& OldTeam, bool& bTeamChangedWithoutRespawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnOverlappedPlayerInventoryValidated (Has no native function)
	void OnOverlappedPlayerInventoryValidated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnOverlappedPlayerInventoryChanged (Has no native function)
	void OnOverlappedPlayerInventoryChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnFortPawnRegisteredInsideAreaDied (Underlying native function: OnFortPawnRegisteredInsideAreaDied 0x8387008)
	void OnFortPawnRegisteredInsideAreaDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.OnCaptureAreaOwnerChanged (Has no native function)
	void OnCaptureAreaOwnerChanged(class AFortPlayerController*& NewOwner); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.CaptureItemsFromPlayer (Underlying native function: CaptureItemsFromPlayer 0x8382e08)
	int CaptureItemsFromPlayer(bool& bRemoveOnFound, struct TArray<struct FItemVariantHandle>& ItemsToCapture, class AFortPlayerController*& PlayerController, int& AmountToRemove, int& AddedScore); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.CaptureItemsFromPickup (Underlying native function: CaptureItemsFromPickup 0x8382cf8)
	int CaptureItemsFromPickup(struct TArray<struct FItemVariantHandle>& ItemsToCapture, class AFortPickup*& PickUp, int& AddedScore); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.BP_OnPlayerTeamReplicated (Has no native function)
	void BPOnPlayerTeamReplicated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.BindToControllerInventoryChangedEvent (Underlying native function: BindToControllerInventoryChangedEvent 0x6df70d4)
	void BindToControllerInventoryChangedEvent(class AFortPlayerController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureArea.BindOrUnbindOnPlayerTeamReplicated (Underlying native function: BindOrUnbindOnPlayerTeamReplicated 0x8382590)
	void BindOrUnbindOnPlayerTeamReplicated(class AFortPlayerState*& PlayerState, bool& bBind); // (Final | Native | Protected | BlueprintCallable)
};

