// Class /Script/FortniteGame.FortPlayerStartupController
// Size: 0x300
class AFortPlayerStartupController : public AActor
{
	bool UseIndividualHoldingAreas; // 0x288 (0x1)
	unsigned char unreflected_289[0x3]; // 0x289 (0x3) 
	float DelayAfterFirstInTime; // 0x28c (0x4)
	float ContainmentTimer; // 0x290 (0x4)
	float AllInCountdownTime; // 0x294 (0x4)
	float ErodeShieldTime; // 0x298 (0x4)
	unsigned char unreflected_29c[0x8]; // 0x29c (0x8) 
	float StopJoinabilityTime; // 0x2a4 (0x4)
	unsigned char unreflected_2a8[0x1]; // 0x2a8 (0x1) 
	bool DestroyImmediately; // 0x2a9 (0x1)
	unsigned char unreflected_2aa[0x6]; // 0x2aa (0x6) 
	struct FMulticastInlineDelegate OnPlayerStartupControllerCreated; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnPlayerStartupControllerRegistered; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate OnAllInCountdownInitiated; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate OnPlayerStartupControllerDestroyed; // 0x2e0 (0x10)
	struct FMulticastInlineDelegate OnResetContainmentTimer; // 0x2f0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerStartupController.OnPlayerLoadedIn_BP (Has no native function)
	void OnPlayerLoadedInBP(class AFortPlayerControllerZone*& NewPlayerPC); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerStartupController.OnAllPlayersLoadedIn_BP (Has no native function)
	void OnAllPlayersLoadedInBP(); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerStartupController.HandlePlayerStartupControllerReset (Underlying native function: HandlePlayerStartupControllerReset 0x2466474)
	void HandlePlayerStartupControllerReset(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerStartupController.HandlePlayerStartupControllerRegistered (Underlying native function: HandlePlayerStartupControllerRegistered 0x26b0974)
	void HandlePlayerStartupControllerRegistered(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerStartupController.HandlePlayerStartupControllerDestroyed (Underlying native function: HandlePlayerStartupControllerDestroyed 0x1598df4)
	void HandlePlayerStartupControllerDestroyed(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerStartupController.HandlePlayerStartupControllerCreated (Underlying native function: HandlePlayerStartupControllerCreated 0x1598c88)
	void HandlePlayerStartupControllerCreated(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerStartupController.HandleAllInCountdownInitiated (Underlying native function: HandleAllInCountdownInitiated 0x82aa228)
	void HandleAllInCountdownInitiated(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerStartupController.GetNumPlayersStillWaitingFor (Underlying native function: GetNumPlayersStillWaitingFor 0x6e8e624)
	int GetNumPlayersStillWaitingFor(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStartupController.GetNumPlayersExpected (Underlying native function: GetNumPlayersExpected 0x8743974)
	int GetNumPlayersExpected(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStartupController.GetNumPlayersCurrentlyReady (Underlying native function: GetNumPlayersCurrentlyReady 0x874395c)
	int GetNumPlayersCurrentlyReady(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStartupController.GetContainmentTimeRemaining (Underlying native function: GetContainmentTimeRemaining 0x8743548)
	float GetContainmentTimeRemaining(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStartupController.DropContainmentTimeToAllInCountdownTime (Underlying native function: DropContainmentTimeToAllInCountdownTime 0x273fd14)
	void DropContainmentTimeToAllInCountdownTime(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

