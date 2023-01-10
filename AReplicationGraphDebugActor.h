// Class /Script/ReplicationGraph.ReplicationGraphDebugActor
// Size: 0x298
class AReplicationGraphDebugActor : public AActor
{
	class UReplicationGraph* ReplicationGraph; // 0x288 (0x8)
	class UNetReplicationGraphConnection* ConnectionManager; // 0x290 (0x8)

	/* Functions */

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging (Underlying native function: ServerStopDebugging 0x6f4981c)
	void ServerStopDebugging(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging (Underlying native function: ServerStartDebugging 0x6f49804)
	void ServerStartDebugging(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass (Underlying native function: ServerSetPeriodFrameForClass 0x6f4973c)
	void ServerSetPeriodFrameForClass(class UClass*& Class, int& PeriodFrame); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass (Underlying native function: ServerSetCullDistanceForClass 0x6f49670)
	void ServerSetCullDistanceForClass(class UClass*& Class, float& CullDistance); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint (Underlying native function: ServerSetConditionalActorBreakpoint 0x6f495ec)
	void ServerSetConditionalActorBreakpoint(class AActor*& Actor); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances (Underlying native function: ServerPrintCullDistances 0x1598df4)
	void ServerPrintCullDistances(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo (Underlying native function: ServerPrintAllActorInfo 0x6f49494)
	void ServerPrintAllActorInfo(struct FString& Str); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo (Underlying native function: ServerCellInfo 0x6ca340c)
	void ServerCellInfo(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo (Underlying native function: ClientCellInfo 0x6f49350)
	void ClientCellInfo(struct FVector& CellLocation, struct FVector& CellExtent, struct TArray<class AActor*>& Actors); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)
};

