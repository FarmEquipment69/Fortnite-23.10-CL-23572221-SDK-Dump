// Class /Script/MeshNetwork.MeshBeaconClient
// Size: 0x398
class AMeshBeaconClient : public AOnlineBeaconClient
{
	unsigned char unreflected_318[0x40]; // 0x318 (0x40) 
	bool bConnectedToRoot; // 0x358 (0x1)
	unsigned char unreflected_359[0x7]; // 0x359 (0x7) 
	struct FDateTime* MeshPingTime; // 0x360 (0x8)
	struct TArray<struct FString> ParentIds; // 0x368 (0x10)
	struct FString ClientId; // 0x378 (0x10)
	unsigned char padding_388[0x10]; // 0x388 (0x10)

	/* Functions */

	// Function /Script/MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility (Underlying native function: ServerUpdateMultipleLevelsVisibility 0x6f34afc)
	void ServerUpdateMultipleLevelsVisibility(struct TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities); // (Final | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility (Underlying native function: ServerUpdateLevelVisibility 0x6f34a50)
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo& LevelVisibility); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/MeshNetwork.MeshBeaconClient.ServerSetClientId (Underlying native function: ServerSetClientId 0x6f348d4)
	void ServerSetClientId(struct FString& NewClientId); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/MeshNetwork.MeshBeaconClient.OnRep_ParentIds (Underlying native function: OnRep_ParentIds 0x6f348c0)
	void OnRepParentIds(); // (Final | Native | Protected)

	// Function /Script/MeshNetwork.MeshBeaconClient.OnRep_MeshPingTime (Underlying native function: OnRep_MeshPingTime 0x2fd32e0)
	void OnRepMeshPingTime(); // (Native | Protected)

	// Function /Script/MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot (Underlying native function: OnRep_ConnectedToRoot 0x6f348ac)
	void OnRepConnectedToRoot(); // (Final | Native | Protected)
};

