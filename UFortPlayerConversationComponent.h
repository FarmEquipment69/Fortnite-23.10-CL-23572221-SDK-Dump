// Class /Script/FortniteConversationRuntime.FortPlayerConversationComponent
// Size: 0x2c8
class UFortPlayerConversationComponent : public UFortConversationParticipantComponent
{
	struct TArray<class UFortNonPlayerConversationParticipantComponent*> ConversationParticipantsInRange; // 0x1a0 (0x10)
	float GreetSphereRadius; // 0x1b0 (0x4)
	float IconVisibilityRadius; // 0x1b4 (0x4)
	float AbortConversationRange; // 0x1b8 (0x4)
	unsigned char unreflected_1bc[0x3c]; // 0x1bc (0x3c) 
	struct TSet<class UFortNonPlayerConversationParticipantComponent*> IndicatedNPCConversationComponents; // 0x1f8 (0x50)
	unsigned char unreflected_248[0x8]; // 0x248 (0x8) 
	bool bMoveShouldAbortConversation; // 0x250 (0x1)
	unsigned char padding_251[0x77]; // 0x251 (0x77)

	/* Functions */

	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversation (Underlying native function: RequestServerAbortConversation 0x662da60)
	void RequestServerAbortConversation(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleWaponEquipped (Underlying native function: HandleWaponEquipped 0x6d23ca0)
	void HandleWaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Private)

	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleViewTargetChanged (Underlying native function: HandleViewTargetChanged 0x6d23c8c)
	void HandleViewTargetChanged(); // (Final | Native | Private)

	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleFollowedPlayerChanged (Underlying native function: HandleFollowedPlayerChanged 0x6d23bd0)
	void HandleFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatingPC, class AFortPlayerState*& FollowedPlayerState); // (Final | Native | Private)

	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleDBNOChanged (Underlying native function: HandleDBNOChanged 0x6d23b2c)
	void HandleDBNOChanged(class AFortPawn*& Pawn, bool& bIsDBNO); // (Final | Native | Private)

	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorOpenUI (Underlying native function: ClientSpectatorOpenUI 0x182d3cc)
	void ClientSpectatorOpenUI(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorCloseUI (Underlying native function: ClientSpectatorCloseUI 0x6d235d0)
	void ClientSpectatorCloseUI(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientReceiveConversationGiftUINotification (Underlying native function: ClientReceiveConversationGiftUINotification 0x6d23514)
	void ClientReceiveConversationGiftUINotification(struct FGiftUINotificationInfo& ConversationGiftUINotification); // (Net | NetReliable | Native | Event | Public | NetClient)
};

