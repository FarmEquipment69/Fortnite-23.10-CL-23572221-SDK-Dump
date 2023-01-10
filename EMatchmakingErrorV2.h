// Enum /Script/FortniteGame.EMatchmakingErrorV2
enum class EMatchmakingErrorV2 : uint8_t
{
  Success = 0,
  Canceled = 1,
  NeedUpdate = 2,
  VersionMismatch = 3,
  UpdateFailed = 4,
  NotLoggedIn = 5,
  NoIdentityInterface = 6,
  NoSessionInterface = 7,
  AlreadyInSession = 8,
  FindSessionFailure = 9,
  InvalidSessionId = 10,
  FailedToQueryEncryptionKey = 11,
  FailedToRefreshAuthToken = 12,
  FailedToCleanupSession = 13,
  FailedToJoinSession = 14,
  FailedToTravelToSession = 15,
  Unauthorized = 16,
  BannedFromAthena = 17,
  BannedFromAthenaForExploit = 18,
  BannedFromAthenaForTeaming = 19,
  BannedFromAthenaForTeamKilling = 20,
  InvalidCustomMatchKey = 21,
  FailedToContactGameServices = 22,
  FailedToConnectToMMS = 23,
  MMSCommunicationIssue = 24,
  ServiceReturnedError = 25,
  PlaylistNoLongerAvailable = 26,
  CrossplayUnsetWithInputDevicePoolShift = 27,
  CrossplayNeededForTournamentMatch = 28,
  MatchmakingDisabled = 29,
  AccountLevelTooLow = 30,
  JoinInProgressError = 31,
  SpectateInProgressError = 32,
  MatchmakingInProgress = 33,
  TooFrequentRequests = 34,
  FailedToAcquireContent = 35,
  CellularDataRefusal = 36,
  CancelledDownloadContent = 37,
  DataAssetDirectoryUpdateFailed = 38,
  InvalidPlaylistRevision = 39,
  FailedToConnectToContentBeacon = 40,
  FailedToAcquireServerInitializationState = 41,
  CancelledDuringPreTravelSetup = 42,
  UnknownError = 43,
  EMatchmakingErrorV2_MAX = 44
};