// Enum /Script/FortniteGame.EMatchmakingV2State
enum class EMatchmakingV2State : uint8_t
{
  Begin = 0,
  Idle = 1,
  Completed = 2,
  Failed = 3,
  INVALID = 4,
  RunningMainBranch = 5,
  Main_RunningChecks = 6,
  Main_DADUpdate = 7,
  Main_CheckPlaylistValid = 8,
  Main_ModifyOptions = 9,
  Main_Begin_JoinInProgress = 10,
  Main_JoinInProgress_PartyLeader_Begin = 11,
  Main_JoinInProgress_PartyLeader_Success = 12,
  Main_JoinInProgress_PartyLeader_Failed = 13,
  Main_JoinInProgress_PartyMember = 14,
  Main_Begin_NormalFlow = 15,
  Main_NormalFlow_SetValues = 16,
  Main_NormalFlow_CheckPartyValidity = 17,
  Main_NormalFlow_CheckInputValidity = 18,
  Main_NormalFlow_CheckTournamentValidity = 19,
  Main_NormalFlow_Complete = 20,
  RunningFollowerBranch = 21,
  Follower_CheckIsNotMatchmaking = 22,
  Follower_SettingMemberVariables = 23,
  Follower_ValidatingLeaderMatchmakingInfo = 24,
  Follower_ValidatingRegion = 25,
  Follower_ValidatingHotfixVersion = 26,
  Follower_ValidatingTournamentQualifications = 27,
  Follower_ValidatingPlaylist = 28,
  Follower_RunDADUpdate = 29,
  Follower_AfterDADUpdate_SetValues = 30,
  Follower_AfterDADUpdate_CheckPartyValidity = 31,
  FollowerBranch_Complete = 32,
  CallingMatchmakingService = 33,
  WaitingForMatchmakingServiceCallback = 34,
  FindingSessionId = 35,
  WaitingForFindSessionIdCallback = 36,
  AfterFindSession = 37,
  Fork_JoinFoundSession = 38,
  RefreshPlatformAuthToken = 39,
  DestroySession = 40,
  DestroyConsoleSession = 41,
  CheckDestruction = 42,
  JoinSession = 43,
  PassedJoinSession = 44,
  PreTravelSetupStartTime = 45,
  ClearJoinSessionDelegate = 46,
  Fork_ServerInitAndContent = 47,
  OnReadyForTravel = 48,
  OnReadyForTravel_V1 = 49,
  OnReadyForTravel_V2 = 50,
  WaitingForReadyToTravelToSession = 51,
  AttemptToTravel = 52,
  EMatchmakingV2State_MAX = 53
};