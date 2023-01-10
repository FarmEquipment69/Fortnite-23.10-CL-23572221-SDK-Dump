// Class /Script/FortniteGame.FortBroadcastRemoteClientInfo
// Size: 0x510
class AFortBroadcastRemoteClientInfo : public AActor
{
	unsigned char unreflected_288[0x50]; // 0x288 (0x50) 
	bool bActive; // 0x2d8 (0x1)
	bool bRemoteIsInteracting; // 0x2d9 (0x1)
	unsigned char unreflected_2da[0x6]; // 0x2da (0x6) 
	class ABuildingSMActor* RemoteEditActor; // 0x2e0 (0x8)
	struct TArray<int> RemoteEditTileData; // 0x2e8 (0x10)
	class UClass* RemoteBuildableClass; // 0x2f8 (0x8)
	struct TEnumAsByte<EFortResourceType> RemoteBuildingMaterial; // 0x300 (0x1)
	bool bRemoteIsFullScreenMapActive; // 0x301 (0x1)
	bool bRemoteIsInventoryActive; // 0x302 (0x1)
	bool bRemoteCanDBNORevive; // 0x303 (0x1)
	struct FAthenaQuickChatActiveEntry RemoteChatEntry; // 0x304 (0x14)
	struct FBuildingWeakSpotData RemoteWeakspotData; // 0x318 (0x50)
	float RemoteRespawnTime; // 0x368 (0x4)
	int16_t RemotePoiTagID; // 0x36c (0x2)
	unsigned char unreflected_36e[0x2]; // 0x36e (0x2) 
	int RemoteEventScore; // 0x370 (0x4)
	unsigned char padding_374[0x19c]; // 0x374 (0x19c)

	/* Functions */

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerInventoryActive (Underlying native function: ServerSetPlayerInventoryActive 0x8c665dc)
	void ServerSetPlayerInventoryActive(bool& bInventorypActive); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerInteracting (Underlying native function: ServerSetPlayerInteracting 0x8c6652c)
	void ServerSetPlayerInteracting(bool& bInteracting); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerHitMarkers (Underlying native function: ServerSetPlayerHitMarkers 0x8c66474)
	void ServerSetPlayerHitMarkers(struct TArray<struct FScreenSpaceHitLocation>& ScreenSpaceHitLocations); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerFullScreenMapActive (Underlying native function: ServerSetPlayerFullScreenMapActive 0x8c663c4)
	void ServerSetPlayerFullScreenMapActive(bool& bFullscreenMapActive); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerEventScore (Underlying native function: ServerSetPlayerEventScore 0x8c66328)
	void ServerSetPlayerEventScore(int& EventScore); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerEditTileData (Underlying native function: ServerSetPlayerEditTileData 0x8c66270)
	void ServerSetPlayerEditTileData(struct TArray<int>& EditTileData); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerCanDBNORevive (Underlying native function: ServerSetPlayerCanDBNORevive 0x8c661c0)
	void ServerSetPlayerCanDBNORevive(bool& bCanDBNORevive); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerBuildingMaterial (Underlying native function: ServerSetPlayerBuildingMaterial 0x8c66120)
	void ServerSetPlayerBuildingMaterial(struct TEnumAsByte<EFortResourceType>& Material); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ServerSetPlayerBuildableClass (Underlying native function: ServerSetPlayerBuildableClass 0x8c66080)
	void ServerSetPlayerBuildableClass(class UClass*& BuildableClass); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerRespawnTimeChanged (Underlying native function: OnServerRespawnTimeChanged 0x8c654dc)
	void OnServerRespawnTimeChanged(float& InRespawnTime); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerRemoveMapMarker (Underlying native function: OnServerRemoveMapMarker 0x8c6542c)
	void OnServerRemoveMapMarker(struct FMarkerID*& InMarkerID); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerPoiTagIDChanged (Underlying native function: OnServerPoiTagIDChanged 0x8c65398)
	void OnServerPoiTagIDChanged(int16_t& InPoiTagID); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerPlayerWeakspotSpawned (Underlying native function: OnServerPlayerWeakspotSpawned 0x8c652d8)
	void OnServerPlayerWeakspotSpawned(struct FBuildingWeakSpotData& WeakSpotData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerPlayerQuickChatEntryChanged (Underlying native function: OnServerPlayerQuickChatEntryChanged 0x8c65240)
	void OnServerPlayerQuickChatEntryChanged(struct FAthenaQuickChatActiveEntry& ChatEntry); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerPlayerEditActorChanged (Underlying native function: OnServerPlayerEditActorChanged 0x8c651b8)
	void OnServerPlayerEditActorChanged(class ABuildingSMActor*& EditActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerPlayerDamagedResourceBuilding (Underlying native function: OnServerPlayerDamagedResourceBuilding 0x8c6501c)
	void OnServerPlayerDamagedResourceBuilding(class ABuildingSMActor*& BuildingSMActor, struct TEnumAsByte<EFortResourceType>& PotentialResourceType, int& PotentialResourceCount, bool& bDestroyed, bool& bJustHitWeakspot); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnServerAddMapMarker (Underlying native function: OnServerAddMapMarker 0x8c64f68)
	void OnServerAddMapMarker(struct FFortWorldMarkerData& InMarkerData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteWeakspotData (Underlying native function: OnRep_RemoteWeakspotData 0x8c64e30)
	void OnRepRemoteWeakspotData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteRespawnTime (Underlying native function: OnRep_RemoteRespawnTime 0x8c64e08)
	void OnRepRemoteRespawnTime(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemotePoiTagID (Underlying native function: OnRep_RemotePoiTagID 0x8c64d54)
	void OnRepRemotePoiTagID(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteIsInventoryActive (Underlying native function: OnRep_RemoteIsInventoryActive 0x8c64d30)
	void OnRepRemoteIsInventoryActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteIsInteracting (Underlying native function: OnRep_RemoteIsInteracting 0x8c64d0c)
	void OnRepRemoteIsInteracting(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteIsFullScreenMapActive (Underlying native function: OnRep_RemoteIsFullScreenMapActive 0x8c64ce8)
	void OnRepRemoteIsFullScreenMapActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteEventScore (Underlying native function: OnRep_RemoteEventScore 0x8c64cc4)
	void OnRepRemoteEventScore(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteEditTileData (Underlying native function: OnRep_RemoteEditTileData 0x8c64ca4)
	void OnRepRemoteEditTileData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteEditActor (Underlying native function: OnRep_RemoteEditActor 0x8c64c80)
	void OnRepRemoteEditActor(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteChatEntry (Underlying native function: OnRep_RemoteChatEntry 0x8c64c60)
	void OnRepRemoteChatEntry(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteCanDBNORevive (Underlying native function: OnRep_RemoteCanDBNORevive 0x2fc42fc)
	void OnRepRemoteCanDBNORevive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteBuildingMaterial (Underlying native function: OnRep_RemoteBuildingMaterial 0x8c64c40)
	void OnRepRemoteBuildingMaterial(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_RemoteBuildableClass (Underlying native function: OnRep_RemoteBuildableClass 0x8c64c1c)
	void OnRepRemoteBuildableClass(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnRep_bActive (Underlying native function: OnRep_bActive 0x8c64eac)
	void OnRepbActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerInventoryActiveChanged (Underlying native function: OnPlayerInventoryActiveChanged 0x8c64b08)
	void OnPlayerInventoryActiveChanged(bool& bInventoryActive); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerInteractLongUseChanged (Underlying native function: OnPlayerInteractLongUseChanged 0x8c64a20)
	void OnPlayerInteractLongUseChanged(bool& bInteracting, bool& bLongUseInteractionCompleted); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerHitMarkersChanged (Underlying native function: OnPlayerHitMarkersChanged 0x8c64984)
	void OnPlayerHitMarkersChanged(struct TArray<struct FScreenSpaceHitLocation>& ScreenSpaceHitLocations); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerFullScreenMapActiveChanged (Underlying native function: OnPlayerFullScreenMapActiveChanged 0x8c648d8)
	void OnPlayerFullScreenMapActiveChanged(bool& bFullscreenMapActive); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerEventScoreChanged (Underlying native function: OnPlayerEventScoreChanged 0x8c64830)
	void OnPlayerEventScoreChanged(int& EventScore); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerEditPreviewChanged (Underlying native function: OnPlayerEditPreviewChanged 0x8c647b0)
	void OnPlayerEditPreviewChanged(class ABuildingSMActor*& EditedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerCanDBNOReviveChanged (Underlying native function: OnPlayerCanDBNOReviveChanged 0x8c64730)
	void OnPlayerCanDBNOReviveChanged(bool& bCanDBNORevive); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerBuildingMaterialChanged (Underlying native function: OnPlayerBuildingMaterialChanged 0x8c6471c)
	void OnPlayerBuildingMaterialChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.OnPlayerBuildableClassChanged (Underlying native function: OnPlayerBuildableClassChanged 0x8c64708)
	void OnPlayerBuildableClassChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ClientRemotePlayerRemoveMapMarker (Underlying native function: ClientRemotePlayerRemoveMapMarker 0x8c63014)
	void ClientRemotePlayerRemoveMapMarker(struct FMarkerID*& MarkerID); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ClientRemotePlayerHitMarkers (Underlying native function: ClientRemotePlayerHitMarkers 0x8c62f80)
	void ClientRemotePlayerHitMarkers(struct TArray<struct FScreenSpaceHitLocation>& ScreenSpaceHitLocations); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ClientRemotePlayerDamagedResourceBuilding (Underlying native function: ClientRemotePlayerDamagedResourceBuilding 0x8c62df8)
	void ClientRemotePlayerDamagedResourceBuilding(class ABuildingSMActor*& BuildingSMActor, struct TEnumAsByte<EFortResourceType>& PotentialResourceType, int& PotentialResourceCount, bool& bDestroyed, bool& bJustHitWeakspot); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortBroadcastRemoteClientInfo.ClientRemotePlayerAddMapMarker (Underlying native function: ClientRemotePlayerAddMapMarker 0x8c62d48)
	void ClientRemotePlayerAddMapMarker(struct FFortWorldMarkerData& InMarkerData); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private)
};

