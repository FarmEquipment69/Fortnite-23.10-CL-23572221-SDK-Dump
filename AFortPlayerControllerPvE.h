// Class /Script/FortniteGame.FortPlayerControllerPvE
// Size: 0x3af0
class AFortPlayerControllerPvE : public AFortPlayerControllerZone
{
	bool bForceAutoSlotWeaponsAtStart; // 0x395c (0x1)
	bool bRecycleBrokenWeapons; // 0x395d (0x1)
	unsigned char unreflected_395e[0x22]; // 0x395e (0x22) 
	class ABuildingSMActor* AutoImproveBuildingActor; // 0x3980 (0x8)
	unsigned char unreflected_3988[0x8]; // 0x3988 (0x8) 
	struct FQuickBar CachedPrimaryQuickBarRecord; // 0x3990 (0x90)
	struct FQuickBar CachedSecondaryQuickBarRecord; // 0x3a20 (0x90)
	struct TArray<class UFortGadgetItemDefinition*> HeroLoadoutGadgets; // 0x3ab0 (0x10)
	struct TArray<class UFortGadgetItemDefinition*> HeroAbilityGadgets; // 0x3ac0 (0x10)
	class AFortClientAnnouncement_Basic* IdleWarningAnnouncement; // 0x3ad0 (0x8)
	struct FTimerHandle* IdleWarningUpdateTimerHandle; // 0x3ad8 (0x8)
	float IdleKickEstimatedTime; // 0x3ae0 (0x4)
	unsigned char padding_3ae4[0xc]; // 0x3ae4 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ServerUpdateQuickBarRecordsCache (Underlying native function: ServerUpdateQuickBarRecordsCache 0x8cf8adc)
	void ServerUpdateQuickBarRecordsCache(struct FQuickBar& PrimaryQuickBarRecord, struct FQuickBar& SecondaryQuickBarRecord); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ServerTriggerSetupTeleportCameraEvent (Underlying native function: ServerTriggerSetupTeleportCameraEvent 0x8cf8a90)
	void ServerTriggerSetupTeleportCameraEvent(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ServerFriendPlayerAdded (Underlying native function: ServerFriendPlayerAdded 0x8cf88cc)
	void ServerFriendPlayerAdded(class AFortPlayerStatePvE*& FriendPS, bool& bIsEpicFriend); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ResetPlayerDeathReportForForcePlayerRestart (Underlying native function: ResetPlayerDeathReportForForcePlayerRestart 0x8cf88ac)
	void ResetPlayerDeathReportForForcePlayerRestart(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.RequestIdleDetectionState (Underlying native function: RequestIdleDetectionState 0x8cf8728)
	void RequestIdleDetectionState(enum EFortIdleDetectionState& NewIdleDetectionState, struct FString& Reason); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.RefreshHarvestingWeapon (Underlying native function: RefreshHarvestingWeapon 0x273fd14)
	void RefreshHarvestingWeapon(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.PreparePlayerForDisplay (Underlying native function: PreparePlayerForDisplay 0x8cf8710)
	void PreparePlayerForDisplay(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.HandleQuickBarChanged (Underlying native function: HandleQuickBarChanged 0x8cf85dc)
	void HandleQuickBarChanged(enum EFortQuickBars& QuickBarType, struct TArray<int>& Slots); // (Final | 0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ClientUpdateQuickBarRecordsCache (Underlying native function: ClientUpdateQuickBarRecordsCache 0x8cf8444)
	void ClientUpdateQuickBarRecordsCache(struct FQuickBar& PrimaryQuickBarRecord, struct FQuickBar& SecondaryQuickBarRecord); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ClientShowIdleWarning (Underlying native function: ClientShowIdleWarning 0x8cf83bc)
	void ClientShowIdleWarning(float& TimeUntilKick); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerPvE.ClientHideIdleWarning (Underlying native function: ClientHideIdleWarning 0x8cf83a4)
	void ClientHideIdleWarning(); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

