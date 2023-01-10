// Class /Script/FortniteGame.FortPlayerControllerDeployableBase
// Size: 0x3b50
class AFortPlayerControllerDeployableBase : public AFortPlayerControllerPvE
{
	class ADeployableBasePlot* CurrentPlot; // 0x3ae8 (0x8)
	class ADeployableBasePlot* PreviousPlot; // 0x3af0 (0x8)
	unsigned char padding_3af8[0x58]; // 0x3af8 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.ServerMoveItemToDeployableBase (Underlying native function: ServerMoveItemToDeployableBase 0x8ce92e4)
	void ServerMoveItemToDeployableBase(struct FGuid& ItemOnPlayer, int& Count, class ADeployableBasePlot*& ExpectedPlot); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.ServerMoveItemFromDeployableBase (Underlying native function: ServerMoveItemFromDeployableBase 0x8ce90d8)
	void ServerMoveItemFromDeployableBase(struct FGuid& ItemOnPlot, int& Count, class ADeployableBasePlot*& ExpectedPlot); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.ServerMoveAllItemsToDeployableBase (Underlying native function: ServerMoveAllItemsToDeployableBase 0x8ce9038)
	void ServerMoveAllItemsToDeployableBase(class ADeployableBasePlot*& ExpectedPlot); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.ServerMoveAllItemsFromDeployableBase (Underlying native function: ServerMoveAllItemsFromDeployableBase 0x8ce8f98)
	void ServerMoveAllItemsFromDeployableBase(class ADeployableBasePlot*& ExpectedPlot); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.MoveItemToDeployableBase (Underlying native function: MoveItemToDeployableBase 0x8ce8b44)
	void MoveItemToDeployableBase(struct FGuid& ItemOnPlayer, int& Count); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.MoveItemFromDeployableBase (Underlying native function: MoveItemFromDeployableBase 0x8ce8a18)
	void MoveItemFromDeployableBase(struct FGuid& ItemOnPlot, int& Count); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.MoveAllItemsToDeployableBase (Underlying native function: MoveAllItemsToDeployableBase 0x8ce89a4)
	void MoveAllItemsToDeployableBase(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.MoveAllItemsFromDeployableBase (Underlying native function: MoveAllItemsFromDeployableBase 0x8ce8930)
	void MoveAllItemsFromDeployableBase(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.ClientOnHordeWaveComplete (Underlying native function: ClientOnHordeWaveComplete 0x8ce5ac0)
	void ClientOnHordeWaveComplete(int& Wave, struct TArray<struct FItemAndCount>& Rewards); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.ClientOnHordeTierInitialized (Underlying native function: ClientOnHordeTierInitialized 0x8ce5a2c)
	void ClientOnHordeTierInitialized(struct TArray<struct FItemAndCount>& Items); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerDeployableBase.ClientOnHordeTierComplete (Underlying native function: ClientOnHordeTierComplete 0x8ce59a8)
	void ClientOnHordeTierComplete(enum EFortCompletionResult& Result); // (Net | NetReliable | Native | Event | Public | NetClient)
};

