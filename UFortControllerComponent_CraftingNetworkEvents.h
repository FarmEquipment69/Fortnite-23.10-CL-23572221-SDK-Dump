// Class /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
// Size: 0xb0
class UFortControllerComponent_CraftingNetworkEvents : public UFortControllerComponent
{
	struct FMulticastInlineDelegate OnCraftingSuccess; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerStartCrafting (Underlying native function: ServerStartCrafting 0x6f579e8)
	void ServerStartCrafting(class AActor*& CraftingObject, struct FName& CraftingFormulaName, int& NumberToCraft); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerReportCraftingSuccess (Underlying native function: ServerReportCraftingSuccess 0x6f57948)
	void ServerReportCraftingSuccess(class AActor*& CraftingObject); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPickupItemAndStartCrafting (Underlying native function: ServerPickupItemAndStartCrafting 0x6f57824)
	void ServerPickupItemAndStartCrafting(class AActor*& CraftingObject, class AFortPickup*& PickUp, struct FName& CraftingFormulaName); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerEjectItems (Underlying native function: ServerEjectItems 0x6f57784)
	void ServerEjectItems(class AActor*& CraftingObject); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerClaimCraftingResults (Underlying native function: ServerClaimCraftingResults 0x6f576e4)
	void ServerClaimCraftingResults(class AActor*& CraftingObject); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerCancelCrafting (Underlying native function: ServerCancelCrafting 0x6f57644)
	void ServerCancelCrafting(class AActor*& CraftingObject); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.NotifyCraftingSuccess (Underlying native function: NotifyCraftingSuccess 0x6f56fd8)
	void NotifyCraftingSuccess(class AActor*& CraftingObject, struct FName& FormulaRowName); // (Final | Native | Public | HasOutParms)

	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingSuccess (Underlying native function: ClientNotifyCraftingSuccess 0x6f5514c)
	void ClientNotifyCraftingSuccess(class AActor*& CraftingObject, struct FName& FormulaRowName); // (Net | Native | Event | Public | NetClient)

	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingFailed (Underlying native function: ClientNotifyCraftingFailed 0x6f55054)
	void ClientNotifyCraftingFailed(class AActor*& CraftingObject, struct FGameplayTagContainer& FailedReason); // (Net | Native | Event | Public | NetClient)
};

