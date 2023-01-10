// Class /Script/FortniteGame.FortAthenaMutator_CreativePartyRiftEmotes
// Size: 0x370
class AFortAthenaMutator_CreativePartyRiftEmotes : public AFortAthenaMutator_PartyRiftEmotes
{
	bool bForceAddEmotes; // 0x368 (0x1)
	unsigned char padding_369[0x7]; // 0x369 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_CreativePartyRiftEmotes.HandlePlayerExitedVolume (Underlying native function: HandlePlayerExitedVolume 0x81f90c8)
	void HandlePlayerExitedVolume(class APlayerState*& PlayerState, class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativePartyRiftEmotes.HandlePlayerEnteredVolume (Underlying native function: HandlePlayerEnteredVolume 0x81f8eec)
	void HandlePlayerEnteredVolume(class APlayerState*& PlayerState, class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativePartyRiftEmotes.HandleCreativeProfileSet (Underlying native function: HandleCreativeProfileSet 0x6df70d4)
	void HandleCreativeProfileSet(class AFortPlayerController*& PlayerController); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativePartyRiftEmotes.HandleCreativeProfilePermissionsUpdated (Underlying native function: HandleCreativeProfilePermissionsUpdated 0x81f8c9c)
	void HandleCreativeProfilePermissionsUpdated(class AFortPlayerControllerAthena*& PlayerController); // (Final | Native | Protected)
};

