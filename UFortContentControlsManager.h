// Class /Script/FortniteGame.FortContentControlsManager
// Size: 0x378
class UFortContentControlsManager : public UFortSupervisedSettingsManager
{
	unsigned char unreflected_378[0x378]; 

	/* Functions */

	// Function /Script/FortniteGame.FortContentControlsManager.SetVoiceChatSettings (Underlying native function: SetVoiceChatSettings 0x898762c)
	void SetVoiceChatSettings(enum ESocialCommsPermission& InValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetUserGeneratedContentViewable (Underlying native function: SetUserGeneratedContentViewable 0x89874d8)
	void SetUserGeneratedContentViewable(struct FString& InValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetRequirePinToAddFriend (Underlying native function: SetRequirePinToAddFriend 0x8987458)
	void SetRequirePinToAddFriend(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetPlaytimeReportingFrequency (Underlying native function: SetPlaytimeReportingFrequency 0x89872bc)
	void SetPlaytimeReportingFrequency(struct FString& InValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetCanUseTextChat (Underlying native function: SetCanUseTextChat 0x898723c)
	void SetCanUseTextChat(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetCanSeeOtherPlayersNames (Underlying native function: SetCanSeeOtherPlayersNames 0x8552624)
	void SetCanSeeOtherPlayersNames(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetCanSeeMatureLanguage (Underlying native function: SetCanSeeMatureLanguage 0x89871bc)
	void SetCanSeeMatureLanguage(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetCanDisplayMyUserName (Underlying native function: SetCanDisplayMyUserName 0x898713c)
	void SetCanDisplayMyUserName(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetCanAcceptFriendRequest (Underlying native function: SetCanAcceptFriendRequest 0x89870bc)
	void SetCanAcceptFriendRequest(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.GetCanUseTextChat (Underlying native function: GetCanUseTextChat 0x8986e5c)
	bool GetCanUseTextChat(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortContentControlsManager.GetCanSeeMatureLanguage (Underlying native function: GetCanSeeMatureLanguage 0x8986e44)
	bool GetCanSeeMatureLanguage(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortContentControlsManager.GetCanAcceptFriendRequest (Underlying native function: GetCanAcceptFriendRequest 0x8986e2c)
	bool GetCanAcceptFriendRequest(); // (Final | Native | Public | Const)
};

