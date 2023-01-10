// Class /Script/FortniteGame.FortControllerComponent_Portal
// Size: 0xa8
class UFortControllerComponent_Portal : public UFortControllerComponent
{
	bool bAllowRequeueToLinks; // 0xa0 (0x1)
	unsigned char padding_a1[0x7]; // 0xa1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_Portal.ServerSetPortalLinkCode (Underlying native function: ServerSetPortalLinkCode 0x845e2f8)
	void ServerSetPortalLinkCode(class UFortPortalComponent*& PortalComponent, struct FOnlineLinkId& LinkId); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.OnPortalMatchmakingComplete (Underlying native function: OnPortalMatchmakingComplete 0x845d8a0)
	void OnPortalMatchmakingComplete(bool& bSuccess); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.IsOnPortalHudEnabled (Underlying native function: IsOnPortalHudEnabled 0x845d2d0)
	static bool IsOnPortalHudEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.IsGameDetailPreviewScreenEnabled (Underlying native function: IsGameDetailPreviewScreenEnabled 0x845d278)
	static bool IsGameDetailPreviewScreenEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.InitiateMatchmakingToPortalOrigin (Underlying native function: InitiateMatchmakingToPortalOrigin 0x845d264)
	void InitiateMatchmakingToPortalOrigin(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.ClientInitiateMatchmakingToPortalOrigin (Underlying native function: ClientInitiateMatchmakingToPortalOrigin 0x662da48)
	void ClientInitiateMatchmakingToPortalOrigin(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.CanInitiatePrivateMatchmaking (Underlying native function: CanInitiatePrivateMatchmaking 0x845c564)
	static bool CanInitiatePrivateMatchmaking(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.CanInitiatePortalMatchmkaing (Underlying native function: CanInitiatePortalMatchmkaing 0x845c484)
	bool CanInitiatePortalMatchmkaing(class UFortPortalComponent*& PortalComponent); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.CanInitiateMatchmakingToPortalOrigin (Underlying native function: CanInitiateMatchmakingToPortalOrigin 0x845c460)
	bool CanInitiateMatchmakingToPortalOrigin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_Portal.CanCancelPortalMatchmaking (Underlying native function: CanCancelPortalMatchmaking 0x845c43c)
	bool CanCancelPortalMatchmaking(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

