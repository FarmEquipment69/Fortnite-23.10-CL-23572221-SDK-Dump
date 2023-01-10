// Class /Script/FortniteGame.BuildingStructuralSupportSystem
// Size: 0x438
class UBuildingStructuralSupportSystem : public UObject
{
	unsigned char unreflected_28[0x58]; // 0x28 (0x58) 
	struct TWeakObjectPtr<class AController> BatchedRemovalInstigator; // 0x80 (0x8)
	unsigned char unreflected_88[0x280]; // 0x88 (0x280) 
	struct TArray<class ABuildingLayoutRequirement*> LayoutRequirementActorsToRegister; // 0x308 (0x10)
	unsigned char unreflected_318[0xe8]; // 0x318 (0xe8) 
	class AFortNavigationGraph* NavGraph; // 0x400 (0x8)
	unsigned char padding_408[0x30]; // 0x408 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.WouldBuildingBeStructurallySupportedByNeighbors (Underlying native function: WouldBuildingBeStructurallySupportedByNeighbors 0x83f194c)
	bool WouldBuildingBeStructurallySupportedByNeighbors(class ABuildingSMActor*& ActorToCheck, struct FVector& Location, struct FRotator& Rotation, bool& bMirrored); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.StopActorRemovalBatch (Underlying native function: StopActorRemovalBatch 0x2af62fc)
	void StopActorRemovalBatch(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.StartActorRemovalBatch (Underlying native function: StartActorRemovalBatch 0x2eafca4)
	void StartActorRemovalBatch(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetWorldLocFromGridIndices (Underlying native function: K2_GetWorldLocFromGridIndices 0x83f17b0)
	bool K2GetWorldLocFromGridIndices(struct FBuildingSupportCellIndex& GridIndices, struct FVector& OutWorldLoc); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetNeighboringBuildingActors (Underlying native function: K2_GetNeighboringBuildingActors 0x83f15d8)
	void K2GetNeighboringBuildingActors(struct TEnumAsByte<EFortBuildingType>& BuildingType, struct FVector& WorldLocation, struct FBuildingSupportCellIndex& OutActorGridIndices, struct FBuildingNeighboringActorInfo& OutNeighboringActors); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetNeighboringActorsForWallActor (Underlying native function: K2_GetNeighboringActorsForWallActor 0x83f142c)
	void K2GetNeighboringActorsForWallActor(struct FVector& WorldLocation, struct FBuildingSupportCellIndex& OutActorGridIndices, struct FBuildingNeighboringActorInfo& OutNeighboringActors); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetNeighboringActorsForCenterCellActor (Underlying native function: K2_GetNeighboringActorsForCenterCellActor 0x83f1294)
	void K2GetNeighboringActorsForCenterCellActor(struct FVector& WorldLocation, struct FBuildingSupportCellIndex& OutActorGridIndices, struct FBuildingNeighboringActorInfo& OutNeighboringActors); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetLogicalBuildingActors (Underlying native function: K2_GetLogicalBuildingActors 0x83f11b0)
	void K2GetLogicalBuildingActors(int& LogicalIdx, struct TArray<class ABuildingSMActor*>& LogicalBuildingActors); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetGridIndicesFromWorldLoc (Underlying native function: K2_GetGridIndicesFromWorldLoc 0x83f10b8)
	bool K2GetGridIndicesFromWorldLoc(struct FVector& WorldLoc, struct FBuildingSupportCellIndex& OutGridIndices); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetGridBoxFromWorldLoc (Underlying native function: K2_GetGridBoxFromWorldLoc 0x83f0ff8)
	struct FBox K2GetGridBoxFromWorldLoc(struct FVector& WorldLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetBuildingActorsInGridCells (Underlying native function: K2_GetBuildingActorsInGridCells 0x83f0e64)
	bool K2GetBuildingActorsInGridCells(struct TArray<struct FBuildingSupportCellIndex>& CellIndices, struct FBuildingGridActorFilter& Filter, struct FBuildingNeighboringActorInfo& OutActorsInGridCell); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_GetBuildingActorsInGridCell (Underlying native function: K2_GetBuildingActorsInGridCell 0x83f0ce4)
	bool K2GetBuildingActorsInGridCell(struct FVector& WorldLocation, struct FBuildingGridActorFilter& Filter, struct FBuildingNeighboringActorInfo& OutActorsInGridCell); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_CanAddWallActorToGrid (Underlying native function: K2_CanAddWallActorToGrid 0x83f09b8)
	struct TEnumAsByte<EFortStructuralGridQueryResults> K2CanAddWallActorToGrid(struct FVector& WorldLocation, struct FBuildingSupportCellIndex& GridIndices, struct TEnumAsByte<EFortBuildingType>& WallType, enum EStructuralWallPosition& OutWallPosition, int& OutWallIdx, struct TArray<class ABuildingActor*>& OutExistingBuildings, bool& OutbSupportedByWorld, bool& bAllowStaticOverlap, bool& bPerformCollisionChecks); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_CanAddFloorActorToGrid (Underlying native function: K2_CanAddFloorActorToGrid 0x83f068c)
	struct TEnumAsByte<EFortStructuralGridQueryResults> K2CanAddFloorActorToGrid(struct FVector& WorldLocation, struct FBuildingSupportCellIndex& GridIndices, struct TEnumAsByte<EFortBuildingType>& FloorType, enum EStructuralFloorPosition& OutFloorPosition, int& OutFloorIdx, struct TArray<class ABuildingActor*>& OutExistingBuildings, bool& OutbSupportedByWorld, bool& bAllowStaticOverlap, bool& bPerformCollisionChecks); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_CanAddCenterCellActorToGrid (Underlying native function: K2_CanAddCenterCellActorToGrid 0x83f03cc)
	struct TEnumAsByte<EFortStructuralGridQueryResults> K2CanAddCenterCellActorToGrid(struct FVector& WorldLocation, struct FBuildingSupportCellIndex& GridIndices, struct TEnumAsByte<EFortBuildingType>& CenterCellType, int& OutHorizontalGridIdx, struct TArray<class ABuildingActor*>& OutExistingBuildings, bool& OutbStructurallySupported, bool& bAllowStaticOverlap, bool& bPerformCollisionChecks); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.K2_CanAddBuildingActorToGrid (Underlying native function: K2_CanAddBuildingActorToGrid 0x83efc90)
	struct TEnumAsByte<EFortStructuralGridQueryResults> K2CanAddBuildingActorToGrid(class UObject*& WorldContextObject, class ABuildingSMActor*& ActorToCheck, struct FVector& Location, struct FRotator& Rotation, bool& bMirrored, struct TArray<class ABuildingActor*>& ExistingBuildings, enum EFortBuildPreviewMarkerOptionalAdjustment& MarkerOptionalAdjustment, bool& bAllowStaticOverlap); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.IsWorldLocValid (Underlying native function: IsWorldLocValid 0x83efbfc)
	bool IsWorldLocValid(struct FVector& WorldLoc); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.IsBuildingActorValid (Underlying native function: IsBuildingActorValid 0x83efb7c)
	static bool IsBuildingActorValid(class ABuildingSMActor*& ActorToTest); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.IsBuildingActorStructurallySupported (Underlying native function: IsBuildingActorStructurallySupported 0x83efaec)
	bool IsBuildingActorStructurallySupported(class ABuildingSMActor*& ActorToCheck); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.GetWallActor (Underlying native function: GetWallActor 0x83ef950)
	class ABuildingSMActor* GetWallActor(struct FBuildingSupportCellIndex& GridIndices, enum EStructuralWallPosition& WallPosition); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.GetLogicalBuildingGroundSupportedActors (Underlying native function: GetLogicalBuildingGroundSupportedActors 0x83ef86c)
	void GetLogicalBuildingGroundSupportedActors(int& LogicalIndex, struct TArray<class ABuildingSMActor*>& LogicalBuildingGroundSupportedActors); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.GetGridBox (Underlying native function: GetGridBox 0x83ef7ac)
	struct FBox GetGridBox(struct FBuildingSupportCellIndex& CellIndex); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.GetFloorActor (Underlying native function: GetFloorActor 0x83ef6cc)
	class ABuildingSMActor* GetFloorActor(struct FBuildingSupportCellIndex& GridIndices, enum EStructuralFloorPosition& FloorPosition); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.GetCenterCellActor (Underlying native function: GetCenterCellActor 0x83ef620)
	class ABuildingSMActor* GetCenterCellActor(struct FBuildingSupportCellIndex& GridIndices); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.CanAddBuildingActorClassToGrid (Underlying native function: CanAddBuildingActorClassToGrid 0x83ef288)
	struct TEnumAsByte<EFortStructuralGridQueryResults> CanAddBuildingActorClassToGrid(class UObject*& WorldContextObject, class UClass*& BuildingSMActorClassToCheck, struct FVector& Location, struct FRotator& Rotation, bool& bMirrored, struct TArray<class ABuildingActor*>& ExistingBuildings, enum EFortBuildPreviewMarkerOptionalAdjustment& MarkerOptionalAdjustment, bool& bAllowStaticOverlap); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.AreNeighborsConnected (Underlying native function: AreNeighborsConnected 0x83eea00)
	bool AreNeighborsConnected(class ABuildingSMActor*& NeighborOne, struct FVector& NeighborOneLoc, struct FRotator& NeighborOneRot, bool& bNeighborOneMirrored, class ABuildingSMActor*& NeighborTwo, struct FVector& NeighborTwoLoc, struct FRotator& NeighborTwoRot, bool& bNeighborTwoMirrored); // (Final | Native | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.AreNeighboringBuildingActorsConnected (Underlying native function: AreNeighboringBuildingActorsConnected 0x83ee93c)
	bool AreNeighboringBuildingActorsConnected(class ABuildingSMActor*& NeighborOne, class ABuildingSMActor*& NeighborTwo); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingStructuralSupportSystem.AreGridIndicesValid (Underlying native function: AreGridIndicesValid 0x83ee8a0)
	bool AreGridIndicesValid(struct FBuildingSupportCellIndex& GridIndices); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

