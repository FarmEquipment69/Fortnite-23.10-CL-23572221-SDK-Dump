// Enum /Script/Account.ELoginResult
enum class ELoginResult : uint8_t
{
  NotStarted = 0,
  Pending = 1,
  Success = 2,
  Console_LoginFailed = 3,
  Console_AuthFailed = 4,
  Console_MissingAuthAssociation = 5,
  Console_DuplicateAuthAssociation = 6,
  Console_AddedAuthAssociation = 7,
  Console_AuthAssociationFailure = 8,
  Console_NotEntitled = 9,
  Console_EntitlementCheckFailed = 10,
  Console_PrivilegeCheck = 11,
  Console_PatchOrUpdateRequired = 12,
  AuthFailed = 13,
  AuthFailed_RefreshInvalid = 14,
  AuthFailed_InvalidMFA = 15,
  AuthFailed_RequiresMFA = 16,
  AuthFailed_AgeVerificationIncomplete = 17,
  AuthFailed_LoginLockout = 18,
  AuthFailed_InvalidCredentials = 19,
  AuthFailed_CorrectiveActionRequired = 20,
  AuthParentalLock = 21,
  PlatformNotAllowed = 22,
  NotEntitled = 23,
  Banned = 24,
  EULACheckFailed = 25,
  WaitingRoomFailed = 26,
  ServiceUnavailable = 27,
  GenericError = 28,
  RegisterSecondaryPlayerInPrimaryPartyFailed = 29,
  RejoinCheckFailure = 30,
  ConnectionFailed = 31,
  NetworkConnectionUnavailable = 32,
  AlreadyLoggingIn = 33,
  ExternalAuth_AddedAuthAssociation = 34,
  ExternalAuth_ConnectionTimeout = 35,
  ExternalAuth_AuthFailure = 36,
  ExternalAuth_AssociationFailure = 37,
  ExternalAuth_MissingAuthAssociation = 38,
  ExternalAuth_Canceled = 39,
  FailedToCreateParty = 40,
  ProfileQueryFailed = 41,
  QueryKeychainFailed = 42,
  ClientSettingsDownloadFailed = 43,
  SupervisedSettingsDownloadFailed = 44,
  PinGrantFailure = 45,
  PinGrantTimeout = 46,
  PinGrantCanceled = 47,
  LoginStepTimeout = 48,
  ELoginResult_MAX = 49
};