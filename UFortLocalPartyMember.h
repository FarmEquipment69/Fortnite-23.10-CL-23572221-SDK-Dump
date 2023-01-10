// Class /Script/FortniteGame.FortLocalPartyMember
// Size: 0xe98
class UFortLocalPartyMember : public UFortPartyMember
{
	unsigned char NumAthenaPlayersLeftDeltaThreshold; // 0xe50 (0x1)
	unsigned char unreflected_e51[0x3]; // 0xe51 (0x3) 
	float AthenaPlayersLeftUpdateDelay; // 0xe54 (0x4)
	unsigned char padding_e58[0x40]; // 0xe58 (0x40)

	/* Functions */

	// Function /Script/FortniteGame.FortLocalPartyMember.HandlePlayerControllerSet (Underlying native function: HandlePlayerControllerSet 0x89ab4f8)
	void HandlePlayerControllerSet(); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortLocalPartyMember.HandleNumAthenaPlayersLeftChanged (Underlying native function: HandleNumAthenaPlayersLeftChanged 0x18eaca0)
	void HandleNumAthenaPlayersLeftChanged(int& NumPlayersLeft); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortLocalPartyMember.HandleMcpProfilesInitialized (Underlying native function: HandleMcpProfilesInitialized 0x2e1f5e8)
	void HandleMcpProfilesInitialized(); // (Final | 0x00000002 | Native | Private)
};

