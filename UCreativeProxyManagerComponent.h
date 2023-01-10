// Class /Script/FortniteGame.CreativeProxyManagerComponent
// Size: 0x108
class UCreativeProxyManagerComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnProxyDataChangedDelegate; // 0xa0 (0x10)
	class UClass* ProxyClass; // 0xb0 (0x8)
	struct TMap<struct FUniqueNetIdRepl, class ACreativePlayerReplicationProxy*> ProxiesMap; // 0xb8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.CreativeProxyManagerComponent.GetProxyForUniqueNetId (Underlying native function: GetProxyForUniqueNetId 0x84f966c)
	class ACreativePlayerReplicationProxy* GetProxyForUniqueNetId(struct FUniqueNetIdRepl& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProxyManagerComponent.GetProxyForPlayer (Underlying native function: GetProxyForPlayer 0x84f95dc)
	class ACreativePlayerReplicationProxy* GetProxyForPlayer(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProxyManagerComponent.DestroyProxyForUniqueNetId (Underlying native function: DestroyProxyForUniqueNetId 0x84f8508)
	void DestroyProxyForUniqueNetId(struct FUniqueNetIdRepl& ID); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProxyManagerComponent.DestroyProxyForPlayer (Underlying native function: DestroyProxyForPlayer 0x84f8450)
	void DestroyProxyForPlayer(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProxyManagerComponent.DestroyAllProxies (Underlying native function: DestroyAllProxies 0x84f843c)
	void DestroyAllProxies(); // (Final | Native | Public | BlueprintCallable)
};

