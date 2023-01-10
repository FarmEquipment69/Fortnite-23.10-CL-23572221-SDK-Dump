// Class /Script/FortniteGame.FortPartyContext
// Size: 0x4b0
class UFortPartyContext : public UFortBlueprintContext
{
	unsigned char unreflected_30[0x10]; // 0x30 (0x10) 
	struct FMulticastInlineDelegate OnPartyJoined; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnClientPartyStateChanged; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnPartyTypeChanged; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnCrossplayPreferenceChanged; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnPlayerStateChanged; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnAthenaNumAliveChanged; // 0x90 (0x10)
	struct FMulticastInlineDelegate OnAthenaTimeSpentInMatch; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnAthenaReadyTypeChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnPartyJoinRequested; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnPartyInvitesCountChanged; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnLFGChanged; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnPartyPrivacyChanged; // 0xf0 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerStateChanged; // 0x100 (0x10)
	struct FMulticastInlineDelegate OnPartyLeft; // 0x110 (0x10)
	unsigned char unreflected_120[0xc0]; // 0x120 (0xc0) 
	struct TMap<unsigned char, class UFortUITeamInfo*> TeamsMap; // 0x1e0 (0x50)
	struct TMap<struct FUniqueNetIdRepl, class AFortPlayerState*> UnassignedPlayerStatesByID; // 0x230 (0x50)
	unsigned char unreflected_280[0x20]; // 0x280 (0x20) 
	class UFortUITeamInfo* LocalPlayerTeam; // 0x2a0 (0x8)
	unsigned char unreflected_2a8[0x50]; // 0x2a8 (0x50) 
	struct TSet<struct FFortTeamMemberInfo> PendingChangedMemberInfos; // 0x2f8 (0x50)
	unsigned char padding_348[0x168]; // 0x348 (0x168)

	/* Functions */

	// Function /Script/FortniteGame.FortPartyContext.ShowInitialCrossplayPrompt (Underlying native function: ShowInitialCrossplayPrompt 0x8a35f74)
	void ShowInitialCrossplayPrompt(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.ShouldShowCrossplayWarningDialog (Underlying native function: ShouldShowCrossplayWarningDialog 0x8a35efc)
	bool ShouldShowCrossplayWarningDialog(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.SetPartyPrivacySetting (Underlying native function: SetPartyPrivacySetting 0x8a35d84)
	void SetPartyPrivacySetting(enum EPartyType& PartyType, bool& bLeaderFriendsOnly, bool& bLeaderInvitesOnly); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.SetLocalPlayerLFG (Underlying native function: SetLocalPlayerLFG 0x8a35d00)
	void SetLocalPlayerLFG(bool& bInLFG); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.SetLocalPartyMemberLocation (Underlying native function: SetLocalPartyMemberLocation 0x8a35c80)
	void SetLocalPartyMemberLocation(enum EFortPartyMemberLocation& Location); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.SendMcpFriendRequest (Underlying native function: SendMcpFriendRequest 0x8a353d4)
	void SendMcpFriendRequest(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnTimeSpentInMatchChanged__DelegateSignature (Has no native function)
	void OnTimeSpentInMatchChangedDelegateSignature(struct FUniqueNetIdRepl& UniqueId, struct FText& Mins, struct FText& Seconds); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPlayerStateChangedDelegate__DelegateSignature (Has no native function)
	void OnPlayerStateChangedDelegateDelegateSignature(struct FFortTeamMemberInfo& PlayerInfo); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyTypeChanged__DelegateSignature (Has no native function)
	void OnPartyTypeChangedDelegateSignature(enum EPartyType& PartyType); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyPrivacyChangedDelegate__DelegateSignature (Has no native function)
	void OnPartyPrivacyChangedDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyLeftDelegate__DelegateSignature (Has no native function)
	void OnPartyLeftDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyJoinRequested__DelegateSignature (Has no native function)
	void OnPartyJoinRequestedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyJoinedDelegate__DelegateSignature (Has no native function)
	void OnPartyJoinedDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnPartyInvitesCountUpdatedDelegate__DelegateSignature (Has no native function)
	void OnPartyInvitesCountUpdatedDelegateDelegateSignature(int& PartyInvitesCount); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnNumAliveChanged__DelegateSignature (Has no native function)
	void OnNumAliveChangedDelegateSignature(struct FUniqueNetIdRepl& UniqueId, int& NumAlive); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnLFGChanged__DelegateSignature (Has no native function)
	void OnLFGChangedDelegateSignature(bool& bLFG); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnCrossplayPreferenceChanged__DelegateSignature (Has no native function)
	void OnCrossplayPreferenceChangedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.OnClientPartyStateChanged__DelegateSignature (Has no native function)
	void OnClientPartyStateChangedDelegateSignature(enum EFortPartyState& PartyState); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPartyContext.LeaveParty (Underlying native function: LeaveParty 0x8a35340)
	void LeaveParty(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.LeaveAction (Underlying native function: LeaveAction 0x8a352c0)
	void LeaveAction(bool& bInStayWithParty); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.IsValidNetID (Underlying native function: IsValidNetID 0x86e1970)
	static bool IsValidNetID(struct FUniqueNetIdRepl& UniqueNetId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.IsNetIdFromLocalPlayersPlatform (Underlying native function: IsNetIdFromLocalPlayersPlatform 0x8a351e8)
	bool IsNetIdFromLocalPlayersPlatform(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.IsLocalPlayerPartyLeader (Underlying native function: IsLocalPlayerPartyLeader 0x8a351c0)
	bool IsLocalPlayerPartyLeader(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.IsLocalPlayerLFG (Underlying native function: IsLocalPlayerLFG 0x8a35198)
	bool IsLocalPlayerLFG(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.IsEntirePartyInFrontEnd (Underlying native function: IsEntirePartyInFrontEnd 0x8a35170)
	bool IsEntirePartyInFrontEnd(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetPartyPrivacySetting (Underlying native function: GetPartyPrivacySetting 0x8a34fb4)
	bool GetPartyPrivacySetting(enum EPartyType& OutPartyType, bool& OutLeaderFriendsOnly, bool& OutLeaderInvitesOnly); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.GetPartyMemberLocation (Underlying native function: GetPartyMemberLocation 0x8a34e90)
	bool GetPartyMemberLocation(struct FUniqueNetIdRepl& MemberId, enum EFortPartyMemberLocation& LocationOut); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetPartyMemberInputType (Underlying native function: GetPartyMemberInputType 0x8a34dbc)
	enum ECommonInputType GetPartyMemberInputType(struct FUniqueNetIdRepl& MemberId); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetPartyMemberDisplayState (Underlying native function: GetPartyMemberDisplayState 0x8a34cb0)
	enum EFortPartyMemberDisplayState GetPartyMemberDisplayState(struct FFortTeamMemberInfo& PartyMemberInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetNumPlayersInLocalParty (Underlying native function: GetNumPlayersInLocalParty 0x8a34c8c)
	int GetNumPlayersInLocalParty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetMcpFriendRequestStatusForPlayer (Underlying native function: GetMcpFriendRequestStatusForPlayer 0x8a34bb8)
	enum EFortFriendRequestStatus GetMcpFriendRequestStatusForPlayer(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetMaxTeamSizeForSelectedTheater (Underlying native function: GetMaxTeamSizeForSelectedTheater 0x8a34b84)
	int GetMaxTeamSizeForSelectedTheater(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalTeamTeamMemberInfo (Underlying native function: GetLocalTeamTeamMemberInfo 0x8a34a64)
	bool GetLocalTeamTeamMemberInfo(class AFortPlayerState*& TeamMemberState, struct FFortTeamMemberInfo& TeamMemberInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalPlayerTeamMemberInfo (Underlying native function: GetLocalPlayerTeamMemberInfo 0x8a349a0)
	void GetLocalPlayerTeamMemberInfo(struct FFortTeamMemberInfo& LocalPlayerInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalPlayerTeam (Underlying native function: GetLocalPlayerTeam 0x284f760)
	class UFortUITeamInfo* GetLocalPlayerTeam(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalPlayerDisplayName (Underlying native function: GetLocalPlayerDisplayName 0x8a3492c)
	struct FString GetLocalPlayerDisplayName(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalPartyProgression (Underlying native function: GetLocalPartyProgression 0x8a34904)
	enum EFortPartyState GetLocalPartyProgression(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetLocalPartyMemberLocation (Underlying native function: GetLocalPartyMemberLocation 0x8a34868)
	bool GetLocalPartyMemberLocation(enum EFortPartyMemberLocation& Location); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetFriendRequestStatusForTeamMember (Underlying native function: GetFriendRequestStatusForTeamMember 0x8a346c8)
	enum EFortFriendRequestStatus GetFriendRequestStatusForTeamMember(struct FFortTeamMemberInfo& TeamMemberInfo, struct FUniqueNetIdRepl& UniqueIdUsed, bool& bIsMcpId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetConsoleFriendRequestStatusForPlayer (Underlying native function: GetConsoleFriendRequestStatusForPlayer 0x8a345f4)
	enum EFortFriendRequestStatus GetConsoleFriendRequestStatusForPlayer(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetAthenaPartyMemberReadyType (Underlying native function: GetAthenaPartyMemberReadyType 0x8a344ac)
	enum EAthenaPartyMemberReadyType GetAthenaPartyMemberReadyType(struct FUniqueNetIdRepl& MemberId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyContext.GetAthenaPartyMemberReadyText (Underlying native function: GetAthenaPartyMemberReadyText 0x8a34384)
	struct FText GetAthenaPartyMemberReadyText(struct FUniqueNetIdRepl& MemberId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/FortniteGame.FortPartyContext.AthenaPartyMemberReadyTypeChanged__DelegateSignature (Has no native function)
	void AthenaPartyMemberReadyTypeChangedDelegateSignature(struct FUniqueNetIdRepl& UniqueId, enum EAthenaPartyMemberReadyType& MemberReadyType); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortPartyContext.AcceptMcpFriendRequest (Underlying native function: AcceptMcpFriendRequest 0x8a340f8)
	void AcceptMcpFriendRequest(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

