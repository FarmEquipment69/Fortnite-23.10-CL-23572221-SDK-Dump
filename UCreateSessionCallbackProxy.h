// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x98
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x48]; // 0x50 (0x48)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession (Underlying native function: CreateSession 0x6a8f2e8)
	static class UCreateSessionCallbackProxy* CreateSession(class UObject*& WorldContextObject, class APlayerController*& PlayerController, int& PublicConnections, bool& bUseLAN); // (Final | Native | Static | Public | BlueprintCallable)
};

