// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x78
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x28]; // 0x50 (0x28)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession (Underlying native function: DestroySession 0x6a8f4d8)
	static class UDestroySessionCallbackProxy* DestroySession(class UObject*& WorldContextObject, class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)
};

