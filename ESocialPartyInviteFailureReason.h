// Enum /Script/Party.ESocialPartyInviteFailureReason
enum class ESocialPartyInviteFailureReason : uint8_t
{
  Success = 0,
  NotOnline = 1,
  NotAcceptingMembers = 2,
  NotFriends = 3,
  AlreadyInParty = 4,
  OssValidationFailed = 5,
  PlatformInviteFailed = 6,
  PartyInviteFailed = 7,
  InviteRateLimitExceeded = 8,
  ESocialPartyInviteFailureReason_MAX = 9
};