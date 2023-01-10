// Enum /Script/FortniteGame.EContentBeaconErrorCode
enum class EContentBeaconErrorCode : uint8_t
{
  Success = 0,
  FailedToConnect = 1,
  FailedToGenerateContentPackage = 2,
  FailedToCreateContentPackageResolver = 3,
  RequestInvalid = 4,
  ContentPackageResolverBecameInvalid = 5,
  PackageResolveFlowCancelled = 6,
  FailedToBuildManifestServer = 7,
  FailedToBuildManifestClient = 8,
  FailedToInstallModule = 9,
  InvalidStateRequested = 10,
  DuplicateClientConnected = 11,
  TimeoutUnspecifiedClientTransition = 12,
  TimeoutUnspecifiedRequestTransition = 13,
  TimeoutRequestTransitionHostActive = 14,
  TimeoutRequestTransitionClientsActive = 15,
  TimeoutRequestTransitionClientsUninstalled = 16,
  TimeoutClientTransitionAllLoaded = 17,
  TimeoutClientTransitionUninstalled = 18,
  ClientCancelledDownload = 19,
  ClientCelluarDataRefusal = 20,
  UnauthorizedClient = 21,
  FailedToSetProjectId = 22,
  Unknown = 23,
  EContentBeaconErrorCode_MAX = 24
};