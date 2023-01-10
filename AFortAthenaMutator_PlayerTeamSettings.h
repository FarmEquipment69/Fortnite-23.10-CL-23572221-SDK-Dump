// Class /Script/FortniteGame.FortAthenaMutator_PlayerTeamSettings
// Size: 0x620
class AFortAthenaMutator_PlayerTeamSettings : public AFortAthenaMutator_PlayerSettingsBase
{
	class UClass* TeamSettingsClass; // 0x570 (0x8)
	bool bUseTeamScoreByDefault; // 0x578 (0x1)
	unsigned char unreflected_579[0x57]; // 0x579 (0x57) 
	struct TMap<unsigned char, struct FMutatorPlayerSettingsData> TeamSettingsDataMap; // 0x5d0 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerTeamSettings.SetupGameRulesForTeamContext (Underlying native function: SetupGameRulesForTeamContext 0x824ad18)
	bool SetupGameRulesForTeamContext(class AFortMinigame*& Minigame); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerTeamSettings.SetTeamContext (Underlying native function: SetTeamContext 0x824ac98)
	void SetTeamContext(unsigned char& TeamIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerTeamSettings.RemoveDataSource (Underlying native function: RemoveDataSource 0x824a8cc)
	bool RemoveDataSource(class UObject*& DataSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerTeamSettings.GetTeamContext (Underlying native function: GetTeamContext 0x8249e44)
	unsigned char GetTeamContext(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerTeamSettings.GetComponentForEnabledSetting (Underlying native function: GetComponentForEnabledSetting 0x824984c)
	class UFortPlayerTeamSettingsComponent* GetComponentForEnabledSetting(struct FName& PropertyName, bool& bFallbackToDefaultTeam); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerTeamSettings.AddDataSourceForTeam (Underlying native function: AddDataSourceForTeam 0x8249270)
	bool AddDataSourceForTeam(unsigned char& TeamIndex, class UObject*& DataSource); // (Final | Native | Public | BlueprintCallable)
};

