// Class /Script/DeploymentConsole.DeploymentConsoleComponent
// Size: 0x238
class UDeploymentConsoleComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x28]; // 0xa0 (0x28) 
	struct TArray<struct FDeploymentConsoleAircraftData> Aircrafts; // 0xc8 (0x10)
	struct FScalableFloat RadiusPercentForRespawnMin; // 0xd8 (0x28)
	struct FScalableFloat RadiusPercentForRespawnMax; // 0x100 (0x28)
	struct FScalableFloat MaxRespawnRadius; // 0x128 (0x28)
	struct FScalableFloat TeamMemberSpread; // 0x150 (0x28)
	struct FScalableFloat TraceForGroundStart; // 0x178 (0x28)
	struct FScalableFloat TraceForGroundEnd; // 0x1a0 (0x28)
	struct FScalableFloat MinHeightFromGround; // 0x1c8 (0x28)
	struct FScalableFloat MinHeightFromZero; // 0x1f0 (0x28)
	struct TArray<struct FVector2D> SpawnPoints; // 0x218 (0x10)
	struct TArray<struct FDeploymentConsoleTeamData> TeamSpawnData; // 0x228 (0x10)

	/* Functions */

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SpawnAircrafts (Underlying native function: SpawnAircrafts 0x6f64ccc)
	struct TArray<struct FDeploymentConsoleAircraftData> SpawnAircrafts(bool& bSpawnAircraftForEachTeam); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SpawnAircraft (Underlying native function: SpawnAircraft 0x6f64c60)
	class AFortAthenaAircraft* SpawnAircraft(int& FlightIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetupTeamSpawnPoints (Underlying native function: SetupTeamSpawnPoints 0x6df775c)
	void SetupTeamSpawnPoints(bool& bGroupTeams); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetAircraftLock (Underlying native function: SetAircraftLock 0x6df775c)
	void SetAircraftLock(bool& bIsLocked); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetAircraftDropZone (Underlying native function: SetAircraftDropZone 0x6f64bfc)
	void SetAircraftDropZone(struct FBox2D& InDropZone); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.RetrievePlayerSpawnLocation (Underlying native function: RetrievePlayerSpawnLocation 0x6f64b08)
	struct FVector2D RetrievePlayerSpawnLocation(bool& bIsGameInProgress, bool& bGroupTeams, unsigned char& InTeam); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.MoveBoxTo (Underlying native function: MoveBoxTo 0x6f649c4)
	static struct FBox2D MoveBoxTo(struct FBox2D& InBox, struct FVector2D& VectorToMoveTo); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.InitializeFlightPath (Underlying native function: InitializeFlightPath 0x6f648d4)
	void InitializeFlightPath(class AFortGameStateAthena*& GSA, struct FAircraftFlightConstructionInfo& FlightPathConstructionInfo); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetTeamSpawnData (Underlying native function: GetTeamSpawnData 0x6f64854)
	struct TArray<struct FDeploymentConsoleTeamData> GetTeamSpawnData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetSpawnPoints (Underlying native function: GetSpawnPoints 0x6f64838)
	struct TArray<struct FVector2D> GetSpawnPoints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetMinigameTeamsWithPlayers (Underlying native function: GetMinigameTeamsWithPlayers 0x6f6477c)
	static struct TArray<unsigned char> GetMinigameTeamsWithPlayers(class AFortMinigame*& InMinigame); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetMapInfo (Underlying native function: GetMapInfo 0x6f64758)
	class AFortAthenaMapInfo* GetMapInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetDefaultFlightPathConstructionInfo (Underlying native function: GetDefaultFlightPathConstructionInfo 0x6f64600)
	struct FAircraftFlightConstructionInfo GetDefaultFlightPathConstructionInfo(class AFortGameStateAthena*& GameStateAthena, enum EAirCraftBehavior& AirCraftBehavior); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetCachedAircraftSpawnZone (Underlying native function: GetCachedAircraftSpawnZone 0x6f64574)
	struct FBox2D GetCachedAircraftSpawnZone(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ForcePlayerEnterAircraft (Underlying native function: ForcePlayerEnterAircraft 0x6f6449c)
	static void ForcePlayerEnterAircraft(class AFortPlayerControllerAthena*& InController, class AFortAthenaAircraft*& InAircraft); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ConstructInventoryOnController (Underlying native function: ConstructInventoryOnController 0x6df70d4)
	void ConstructInventoryOnController(class AFortPlayerControllerAthena*& InController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ClearFlightInfos (Underlying native function: ClearFlightInfos 0x6f6443c)
	void ClearFlightInfos(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.CalculateSpawnRotationFromLocation (Underlying native function: CalculateSpawnRotationFromLocation 0x6f64394)
	struct FRotator CalculateSpawnRotationFromLocation(struct FVector& InSpawnLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.AdjustLocationToValidHeight (Underlying native function: AdjustLocationToValidHeight 0x6f642ec)
	struct FVector AdjustLocationToValidHeight(struct FVector& RespawnLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

