// Class /Script/FortniteGame.AthenaResurrectionComponent
// Size: 0x108
class UAthenaResurrectionComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	struct TArray<struct FUniqueNetIdRepl> PlayerIdsForResurrection; // 0xb8 (0x10)
	struct TWeakObjectPtr<class AFortPlayerStart> ResurrectionLocation; // 0xc8 (0x8)
	struct FMarkerID* ResurrectionMachineMarkerID; // 0xd0 (0x8)
	int ClosestSpawnMachineIndex; // 0xd8 (0x4)
	bool bActiveBeingRebooted; // 0xdc (0x1)
	unsigned char unreflected_dd[0x3]; // 0xdd (0x3) 
	struct FCloneMachineRepData CloneMachineRepData; // 0xe0 (0x20)
	float NotifyPlayerDamageThrottle; // 0x100 (0x4)
	unsigned char padding_104[0x4]; // 0x104 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.AthenaResurrectionComponent.ServerOnInterruptResurrectionInteraction (Underlying native function: ServerOnInterruptResurrectionInteraction 0x82aabb0)
	void ServerOnInterruptResurrectionInteraction(class ABuildingGameplayActorSpawnMachine*& SpawnMachine); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.AthenaResurrectionComponent.ServerOnBeginResurrectionInteraction (Underlying native function: ServerOnBeginResurrectionInteraction 0x82aab10)
	void ServerOnBeginResurrectionInteraction(class ABuildingGameplayActorSpawnMachine*& SpawnMachine); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.AthenaResurrectionComponent.OnRep_PlayerIdsForResurrection (Underlying native function: OnRep_PlayerIdsForResurrection 0x82aa550)
	void OnRepPlayerIdsForResurrection(); // (Final | Native | Private)

	// Function /Script/FortniteGame.AthenaResurrectionComponent.ClientNotifyCloneMchineDestroyed (Underlying native function: ClientNotifyCloneMchineDestroyed 0x6ce33a4)
	void ClientNotifyCloneMchineDestroyed(class USoundCue*& DestroyedSound); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.AthenaResurrectionComponent.ClientNotifyCloneMachineUnderAttack (Underlying native function: ClientNotifyCloneMachineUnderAttack 0x6ce3320)
	void ClientNotifyCloneMachineUnderAttack(class USoundCue*& DamageSound); // (Net | Native | Event | Public | NetClient)
};

