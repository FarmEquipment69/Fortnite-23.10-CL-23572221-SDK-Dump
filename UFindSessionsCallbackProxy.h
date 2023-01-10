// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x90
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x40]; // 0x50 (0x40)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName (Underlying native function: GetServerName 0x6a90998)
	static struct FString GetServerName(struct FBlueprintSessionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs (Underlying native function: GetPingInMs 0x6a90828)
	static int GetPingInMs(struct FBlueprintSessionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers (Underlying native function: GetMaxPlayers 0x6a906bc)
	static int GetMaxPlayers(struct FBlueprintSessionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers (Underlying native function: GetCurrentPlayers 0x6a90548)
	static int GetCurrentPlayers(struct FBlueprintSessionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions (Underlying native function: FindSessions 0x6a8fbbc)
	static class UFindSessionsCallbackProxy* FindSessions(class UObject*& WorldContextObject, class APlayerController*& PlayerController, int& MaxResults, bool& bUseLAN); // (Final | Native | Static | Public | BlueprintCallable)
};

