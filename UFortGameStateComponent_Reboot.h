// Class /Script/FortniteGame.FortGameStateComponent_Reboot
// Size: 0x1d8
class UFortGameStateComponent_Reboot : public UFortGameStateComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	struct FSpawnMachineRepDataArray SpawnMachineRepData; // 0xb8 (0x120)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateComponent_Reboot.SetSpawnMachineEnabledConfig (Underlying native function: SetSpawnMachineEnabledConfig 0x84789fc)
	void SetSpawnMachineEnabledConfig(class ABuildingGameplayActorSpawnMachine*& RebootVan, struct FSpawnMachineEnabledConfig& EnabledConfig); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_Reboot.IsResurrectionEnabled (Underlying native function: IsResurrectionEnabled 0x83aa564)
	bool IsResurrectionEnabled(class AFortPlayerPawn*& PlayerPawn); // (0x00000002 | Native | Public | BlueprintCallable | Const)
};

