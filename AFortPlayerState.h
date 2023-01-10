// Class /Script/FortniteGame.FortPlayerState
// Size: 0xb50
class AFortPlayerState : public AFGF_PlayerState
{
	unsigned char unreflected_3f8[0x20]; // 0x3f8 (0x20) 
	unsigned char bIsWorldDataOwner; // 0x418 (0x1)
	unsigned char bIsGameSessionOwner; // 0x418 (0x1)
	unsigned char bIsGameSessionAdmin; // 0x418 (0x1)
	unsigned char bIsReadyToContinue; // 0x418 (0x1)
	unsigned char bHasFinishedLoading; // 0x418 (0x1)
	unsigned char bHasStartedPlaying; // 0x418 (0x1)
	unsigned char bRepFlag1; // 0x418 (0x1)
	unsigned char unreflected_419[0x3]; // 0x419 (0x3) 
	enum EFortPlayerRole PlayerRole; // 0x41c (0x1)
	unsigned char unreflected_41d[0x1]; // 0x41d (0x1) 
	int16_t WorldPlayerId; // 0x41e (0x2)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x420 (0x30)
	struct FString HeroId; // 0x450 (0x10)
	class UFortHeroType* HeroType; // 0x460 (0x8)
	int CurrentCharXP; // 0x468 (0x4)
	struct TWeakObjectPtr<class AFortPickup> MyBackpackPickup; // 0x46c (0x8)
	int InitialExperienceLevel; // 0x474 (0x4)
	int InitialExperienceAmount; // 0x478 (0x4)
	unsigned char unreflected_47c[0x4]; // 0x47c (0x4) 
	struct TArray<struct FFortExperienceDelta> ExperienceDeltas; // 0x480 (0x10)
	struct FString Platform; // 0x490 (0x10)
	struct FPlayerBannerInfo Banner; // 0x4a0 (0x28)
	bool bIsSimulatingDamage; // 0x4c8 (0x1)
	unsigned char unreflected_4c9[0xff]; // 0x4c9 (0xff) 
	struct TEnumAsByte<EFortCustomGender> CharacterGender; // 0x5c8 (0x1)
	struct TEnumAsByte<EFortCustomBodyType> CharacterBodyType; // 0x5c9 (0x1)
	unsigned char unreflected_5ca[0x6]; // 0x5ca (0x6) 
	struct FCustomCharacterData CharacterData; // 0x5d0 (0x78)
	class UCustomColorSwatch* CharacterColorSwatches[0x2]; // 0x648 (0x8) (ARRAY) 
	struct TEnumAsByte<EFortCustomGender> LocalCharacterGender; // 0x658 (0x1)
	struct TEnumAsByte<EFortCustomBodyType> LocalCharacterBodyType; // 0x659 (0x1)
	unsigned char unreflected_65a[0x6]; // 0x65a (0x6) 
	class UCustomCharacterPart* LocalCharacterParts[0x7]; // 0x660 (0x8) (ARRAY) 
	class UAthenaCharmItemDefinition* LocalCharacterCharms[0x4]; // 0x698 (0x8) (ARRAY) 
	struct TArray<class UCustomCharacterPart*> LocalVariantPartsToLoad; // 0x6b8 (0x10)
	struct TArray<struct FMcpVariantChannelInfo> ActiveVariantOverrides; // 0x6c8 (0x10)
	struct TArray<struct FFortAppliedSwapItemAndVariantData> ActiveCosmeticItemSwaps; // 0x6d8 (0x10)
	class UCustomColorSwatch* LocalCharacterColorSwatches[0x2]; // 0x6e8 (0x8) (ARRAY) 
	class UCustomPlayerComponent* CustomPRIComponent; // 0x6f8 (0x8)
	unsigned char unreflected_700[0x18]; // 0x700 (0x18) 
	class UCustomColorSwatch* CharacterPartColorSwatches[0x7]; // 0x718 (0x8) (ARRAY) 
	class UCustomColorSwatch* LocalCharacterPartColorSwatches[0x7]; // 0x750 (0x8) (ARRAY) 
	struct TWeakObjectPtr<class AFortTeamInfo> PlayerTeam; // 0x788 (0x8)
	struct TWeakObjectPtr<class AFortTeamPrivateInfo> PlayerTeamPrivate; // 0x790 (0x8)
	unsigned char unreflected_798[0x18]; // 0x798 (0x18) 
	bool bSkipReplicatedStats; // 0x7b0 (0x1)
	unsigned char unreflected_7b1[0x3]; // 0x7b1 (0x3) 
	struct FReplicatedStatValues* ReplicatedStatsCampaign[0x23]; // 0x7b4 (0x8) (ARRAY) 
	struct FReplicatedStatValues* ReplicatedStatsZone[0x23]; // 0x8cc (0x8) (ARRAY) 
	unsigned char unreflected_9e4[0x4]; // 0x9e4 (0x4) 
	bool bAreZoneStatsFinalized; // 0x9e8 (0x1)
	enum EReadyCheckState ReadyCheckState; // 0x9e9 (0x1)
	unsigned char unreflected_9ea[0x6]; // 0x9ea (0x6) 
	class AActor* HomeActor; // 0x9f0 (0x8)
	struct FFortPlayerAttributeSets AttributeSets; // 0x9f8 (0x50)
	class UFortAbilitySystemComponent* AbilitySystemComponent; // 0xa48 (0x8)
	struct FName PlayerOSSName; // 0xa50 (0x4)
	enum ETrustedPlatformType TrustedPlatformType; // 0xa54 (0x1)
	unsigned char unreflected_a55[0x3]; // 0xa55 (0x3) 
	struct FUniqueNetIdRepl PlatformUniqueNetId; // 0xa58 (0x30)
	unsigned char unreflected_a88[0x10]; // 0xa88 (0x10) 
	bool bInvitedToConsoleSession; // 0xa98 (0x1)
	bool bInitializedPlayerCustomizationOptionsFromClientSettings; // 0xa99 (0x1)
	unsigned char unreflected_a9a[0x4e]; // 0xa9a (0x4e) 
	struct FVector PawnDeathLocation; // 0xae8 (0x18)
	int CachedPreviousWorldPlayerId; // 0xb00 (0x4)
	unsigned char unreflected_b04[0xc]; // 0xb04 (0xc) 
	bool bInGhostMode; // 0xb10 (0x1)
	unsigned char unreflected_b11[0x1f]; // 0xb11 (0x1f) 
	struct FMulticastInlineDelegate OnPawnDiedDelegate; // 0xb30 (0x10)
	struct FMulticastInlineDelegate OnMutatorListUpdatedDelegate; // 0xb40 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerState.UpdateScoreStatChanged (Underlying native function: UpdateScoreStatChanged 0x8a34264)
	void UpdateScoreStatChanged(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.SetIsSimulatingDamage (Underlying native function: SetIsSimulatingDamage 0x8bbe9f0)
	void SetIsSimulatingDamage(bool& bSimulateDamage); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerState.ServerChangeActiveVariantForCosmeticItem (Underlying native function: ServerChangeActiveVariantForCosmeticItem 0x8bbe778)
	void ServerChangeActiveVariantForCosmeticItem(struct FName& ItemTemplateToChange, struct FGameplayTag& VariantChannelToChange, struct FGameplayTag& DesiredActiveVariant, class AFortPlayerPawn*& PreviewPawn); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_SessionOwner (Underlying native function: OnRep_SessionOwner 0x8bbe620)
	void OnRepSessionOwner(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_ScoreStatChanged (Underlying native function: OnRep_ScoreStatChanged 0x8bbe60c)
	void OnRepScoreStatChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_PlayerTeamPrivate (Underlying native function: OnRep_PlayerTeamPrivate 0x2491518)
	void OnRepPlayerTeamPrivate(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_PlayerTeam (Underlying native function: OnRep_PlayerTeam 0x1854b58)
	void OnRepPlayerTeam(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_PlatformUniqueNetId (Underlying native function: OnRep_PlatformUniqueNetId 0x26c0cdc)
	void OnRepPlatformUniqueNetId(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_Platform (Underlying native function: OnRep_Platform 0x12ab518)
	void OnRepPlatform(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_PartyOwner (Underlying native function: OnRep_PartyOwner 0x159a5dc)
	void OnRepPartyOwner(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_InGhostMode (Underlying native function: OnRep_InGhostMode 0x8bbe534)
	void OnRepInGhostMode(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_HomeActor (Underlying native function: OnRep_HomeActor 0x8bbe4b0)
	void OnRepHomeActor(class AActor*& OldHomeActor); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_HeroType (Underlying native function: OnRep_HeroType 0x192110c)
	void OnRepHeroType(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_HeroID (Underlying native function: OnRep_HeroID 0x8bbe49c)
	void OnRepHeroID(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_CurrentCharXP (Underlying native function: OnRep_CurrentCharXP 0x8bbe3f4)
	void OnRepCurrentCharXP(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_CharacterGender (Underlying native function: OnRep_CharacterGender 0x26ce740)
	void OnRepCharacterGender(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_CharacterData (Underlying native function: OnRep_CharacterData 0x187fd3c)
	void OnRepCharacterData(); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_CharacterColorSwatches (Underlying native function: OnRep_CharacterColorSwatches 0x8bbe3a0)
	void OnRepCharacterColorSwatches(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_CharacterBodyType (Underlying native function: OnRep_CharacterBodyType 0x26ce740)
	void OnRepCharacterBodyType(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_bIsSimulatingDamage (Underlying native function: OnRep_bIsSimulatingDamage 0x8bbe68c)
	void OnRepbIsSimulatingDamage(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_bHasStartedPlaying (Underlying native function: OnRep_bHasStartedPlaying 0x273fd14)
	void OnRepbHasStartedPlaying(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_BannerInfo (Underlying native function: OnRep_BannerInfo 0x26a6150)
	void OnRepBannerInfo(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_AccessoryColorSwatches (Underlying native function: OnRep_AccessoryColorSwatches 0x8bbe370)
	void OnRepAccessoryColorSwatches(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnInstigatorEndPlay (Underlying native function: OnInstigatorEndPlay 0x2bbae20)
	void OnInstigatorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerState.IsSimulatingDamage (Underlying native function: IsSimulatingDamage 0x7243e3c)
	bool IsSimulatingDamage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.HasStartedPlaying (Underlying native function: HasStartedPlaying 0x8bbdac4)
	bool HasStartedPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.HasLocalPlayerController (Underlying native function: HasLocalPlayerController 0x8bbdaa0)
	bool HasLocalPlayerController(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetUniqueID (Underlying native function: GetUniqueID 0x8bbda08)
	struct FUniqueNetIdRepl GetUniqueID(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetPlayerUniqueNetID (Underlying native function: GetPlayerUniqueNetID 0x25dfd4c)
	struct FUniqueNetIdRepl GetPlayerUniqueNetID(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetPlayerPawnOrVehicleDriver (Underlying native function: GetPlayerPawnOrVehicleDriver 0x28d0858)
	class AFortPlayerPawn* GetPlayerPawnOrVehicleDriver(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetPlayerOSSName (Underlying native function: GetPlayerOSSName 0x8bbd890)
	struct FName GetPlayerOSSName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetPlatformUniqueNetId (Underlying native function: GetPlatformUniqueNetId 0x8bbd7c0)
	struct FUniqueNetIdRepl GetPlatformUniqueNetId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetPlatform (Underlying native function: GetPlatform 0x8bbd74c)
	struct FString GetPlatform(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetHeroType (Underlying native function: GetHeroType 0x8bbd5a8)
	class UFortHeroType* GetHeroType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetCurrentPawn (Underlying native function: GetCurrentPawn 0x8bbd394)
	class AFortPlayerPawn* GetCurrentPawn(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.ChangeActiveVariantForCosmeticItem (Underlying native function: ChangeActiveVariantForCosmeticItem 0x8bbd048)
	void ChangeActiveVariantForCosmeticItem(struct FName& ItemTemplateToChange, struct FGameplayTag& VariantChannelToChange, struct FGameplayTag& DesiredActiveVariant, class AFortPlayerPawn*& PreviewPawn); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerState.AreUniqueIDsIdentical (Underlying native function: AreUniqueIDsIdentical 0x8bbcf04)
	static bool AreUniqueIDsIdentical(struct FUniqueNetIdRepl& A, struct FUniqueNetIdRepl& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

