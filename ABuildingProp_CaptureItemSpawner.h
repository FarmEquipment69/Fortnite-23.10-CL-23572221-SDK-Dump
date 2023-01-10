// Class /Script/FortniteGame.BuildingProp_CaptureItemSpawner
// Size: 0xf10
class ABuildingProp_CaptureItemSpawner : public ABuildingProp
{
	unsigned char unreflected_ef8[0x8]; // 0xef8 (0x8) 
	int ItemRefCount; // 0xf00 (0x4)
	bool bPickupWasClaimed; // 0xf04 (0x1)
	unsigned char unreflected_f05[0x3]; // 0xf05 (0x3) 
	struct FName SpecialActorID; // 0xf08 (0x4)
	bool bShowCaptureMessages; // 0xf0c (0x1)
	unsigned char padding_f0d[0x3]; // 0xf0d (0x3)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.UnregisterSpecialActor (Underlying native function: UnregisterSpecialActor 0x8389504)
	void UnregisterSpecialActor(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.SendCaptureItemFeedbackEvent (Underlying native function: SendCaptureItemFeedbackEvent 0x8388224)
	void SendCaptureItemFeedbackEvent(struct FGameplayFeedbackEventParams& EventParams, struct FItemAndCount& ItemEntry); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.ResetItemRefCount (Underlying native function: ResetItemRefCount 0x273fd14)
	void ResetItemRefCount(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.RemoveItemRef (Underlying native function: RemoveItemRef 0x8382140)
	int RemoveItemRef(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.RegisterSpecialActor (Underlying native function: RegisterSpecialActor 0x8387fd4)
	void RegisterSpecialActor(class UFortWorldItemDefinition*& ItemDefinition); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.NetMulticast_NotifyFeedbackEvent (Underlying native function: NetMulticast_NotifyFeedbackEvent 0x8386c30)
	void NetMulticastNotifyFeedbackEvent(struct FGameplayFeedbackEventParams& EventParams, struct FFortItemQuantityPair& ItemEntry, struct FGuid& ItemVariantGuid); // (Net | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.K2_NotifyFeedbackEvent (Has no native function)
	void K2NotifyFeedbackEvent(struct FGameplayFeedbackEventParams& EventParams, bool& bFriendlyEvent); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.CanTakeFlag (Underlying native function: CanTakeFlag 0x8382af8)
	bool CanTakeFlag(class AFortPawn*& InteractingPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingProp_CaptureItemSpawner.AddItemRef (Underlying native function: AddItemRef 0x8382140)
	int AddItemRef(); // (Final | Native | Protected | BlueprintCallable)
};

