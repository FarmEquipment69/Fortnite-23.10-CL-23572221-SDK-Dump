// Class /Script/FortniteGame.FortPortalComponent
// Size: 0x3f0
class UFortPortalComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnLinkDataLoaded; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnLinkDataError; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnLinkThumbnailUpdated; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnPortalLinkCodeLockStatusChanged; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnPortalLinkLockExpired; // 0xe0 (0x10)
	struct FCreativeLoadedLinkData LoadedLinkData; // 0xf0 (0x2c0)
	struct FString LinkDataErrorStatus; // 0x3b0 (0x10)
	class UTexture2DDynamic* ThumbnailTexture; // 0x3c0 (0x8)
	enum EPortalLinkCodeLockMode LinkCodeLockMode; // 0x3c8 (0x1)
	enum EPortalLinkCodeLockStatus LinkCodeLockStatus; // 0x3c9 (0x1)
	bool bWindowLockedStartsLocked; // 0x3ca (0x1)
	unsigned char unreflected_3cb[0x15]; // 0x3cb (0x15) 
	bool bHasValidLinkData; // 0x3e0 (0x1)
	bool bLinkRequiresCreativeContent; // 0x3e1 (0x1)
	unsigned char unreflected_3e2[0x6]; // 0x3e2 (0x6) 
	struct FDateTime* LinkCodeLockExpirationTime; // 0x3e8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPortalComponent.SetResetCodeAfterCooldown (Underlying native function: SetResetCodeAfterCooldown 0x8763444)
	void SetResetCodeAfterCooldown(bool& bNewResetCodeAfterCooldown); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.SetLockOverrideExpirationSeconds (Underlying native function: SetLockOverrideExpirationSeconds 0x8763344)
	void SetLockOverrideExpirationSeconds(int& NewExpirationSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.SetLockExpirationSecondsToNotOverrideCVar (Underlying native function: SetLockExpirationSecondsToNotOverrideCVar 0x876332c)
	void SetLockExpirationSecondsToNotOverrideCVar(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.SetLinkDataLoaded (Underlying native function: SetLinkDataLoaded 0x8763288)
	void SetLinkDataLoaded(struct FCreativeLoadedLinkData& InLinkData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.ServerSetLinkCode_Complete (Underlying native function: ServerSetLinkCode_Complete 0x87624ec)
	void ServerSetLinkCodeComplete(bool& bSuccess, struct FString& ErrorMessage, struct FCreativeLoadedLinkData& InLinkData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortPortalComponent.ServerSetLinkCode (Underlying native function: ServerSetLinkCode 0x87623b0)
	void ServerSetLinkCode(struct FOnlineLinkId& InLinkId, bool& bIgnoreCanSetLinkCode, bool& bFromDAD, bool& bCalledByModerator); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.OnRep_LoadedLinkData (Underlying native function: OnRep_LoadedLinkData 0x87622ac)
	void OnRepLoadedLinkData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.OnRep_LinkDataErrorStatus (Underlying native function: OnRep_LinkDataErrorStatus 0x8762298)
	void OnRepLinkDataErrorStatus(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.OnRep_LinkCodeLockStatus (Underlying native function: OnRep_LinkCodeLockStatus 0x8762264)
	void OnRepLinkCodeLockStatus(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.OnMinigameStarted (Underlying native function: OnMinigameStarted 0x273fd14)
	void OnMinigameStarted(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.OnLinkThumbnailDownloaded (Underlying native function: OnLinkThumbnailDownloaded 0x8762140)
	void OnLinkThumbnailDownloaded(bool& bSuccess, class UTexture2DDynamic*& InThumbnailTexture); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.OnLinkCodeLockExpired (Underlying native function: OnLinkCodeLockExpired 0x87620d8)
	void OnLinkCodeLockExpired(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.MakeLinkCodeWithVersioning (Underlying native function: MakeLinkCodeWithVersioning 0x8761d40)
	struct FString MakeLinkCodeWithVersioning(struct FString& LinkCode, int& Version); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.MakeLinkCodeWithoutVersioning (Underlying native function: MakeLinkCodeWithoutVersioning 0x8761f18)
	struct FString MakeLinkCodeWithoutVersioning(struct FString& LinkCode, int& Version); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.LinkRequiresCreativeContent (Underlying native function: LinkRequiresCreativeContent 0x8761d28)
	bool LinkRequiresCreativeContent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPortalComponent.IsWellKnownNameSupported (Underlying native function: IsWellKnownNameSupported 0x8761780)
	bool IsWellKnownNameSupported(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.IsPlayerEligibleToBeginMatchmaking (Underlying native function: IsPlayerEligibleToBeginMatchmaking 0x8761570)
	bool IsPlayerEligibleToBeginMatchmaking(class AFortPlayerController*& FortPC); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.IsPartyEligibleForMatchmaking (Underlying native function: IsPartyEligibleForMatchmaking 0x876154c)
	bool IsPartyEligibleForMatchmaking(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.HasValidLinkData (Underlying native function: HasValidLinkData 0x869ecc0)
	bool HasValidLinkData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.GetRemainingLockDuration (Underlying native function: GetRemainingLockDuration 0x876124c)
	struct FTimespan* GetRemainingLockDuration(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.GetAccountIdOwnerOfIsland (Underlying native function: GetAccountIdOwnerOfIsland 0x8760db8)
	struct FString GetAccountIdOwnerOfIsland(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.ExpireLinkCodeLock (Underlying native function: ExpireLinkCodeLock 0x273fd14)
	void ExpireLinkCodeLock(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.CheckIslandModeration (Underlying native function: CheckIslandModeration 0x8760acc)
	void CheckIslandModeration(struct FCreativeLoadedLinkData& LinkData, struct FDelegate& OnIslandModerationCheckComplete); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.CanSetLinkCode (Underlying native function: CanSetLinkCode 0x8760980)
	bool CanSetLinkCode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

