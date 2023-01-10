// Class /Script/FortniteGame.FortTrack
// Size: 0x1088
class AFortTrack : public ABuildingProp
{
	struct FMulticastInlineDelegate OnTrackGraphChanged; // 0xef8 (0x10)
	struct FText ToggleSwitchText; // 0xf08 (0x18)
	float ToggleInteractTime; // 0xf20 (0x4)
	unsigned char unreflected_f24[0x4]; // 0xf24 (0x4) 
	class UStaticMesh* TrackPieceMeshesByType[0x5]; // 0xf28 (0x8) (ARRAY) 
	bool bUseFloorMesh; // 0xf50 (0x1)
	unsigned char unreflected_f51[0x7]; // 0xf51 (0x7) 
	class UStaticMesh* TrackFloorMeshesByVerticality[0x3]; // 0xf58 (0x8) (ARRAY) 
	struct TArray<struct FTrackConnectorMeshConfig> ConnectorMeshConfigs; // 0xf70 (0x10)
	class AFortTrack* NeighborsByDirection[0x4]; // 0xf80 (0x8) (ARRAY) 
	int SwitchState; // 0xfa0 (0x4)
	int ConfigurationIdx; // 0xfa4 (0x4)
	struct FCollisionResponseContainer FloorCollisionResponseContainer; // 0xfa8 (0x20)
	class UStaticMeshComponent* TrackMeshComp; // 0xfc8 (0x8)
	class UStaticMeshComponent* TrackFloorMeshComp; // 0xfd0 (0x8)
	class UStaticMeshComponent* ConnectorMeshCompsByDirection[0x4]; // 0xfd8 (0x8) (ARRAY) 
	class UBoxComponent* PlacementCollision1; // 0xff8 (0x8)
	class UBoxComponent* PlacementCollision2; // 0x1000 (0x8)
	class USplineComponent* SplineComp1; // 0x1008 (0x8)
	class USplineComponent* SplineComp2; // 0x1010 (0x8)
	class USceneComponent* SwitchCompBase; // 0x1018 (0x8)
	class UPrimitiveComponent* SwitchComp; // 0x1020 (0x8)
	unsigned char padding_1028[0x60]; // 0x1028 (0x60)

	/* Functions */

	// Function /Script/FortniteGame.FortTrack.OnSwitchStateChanged (Has no native function)
	void OnSwitchStateChanged(int& NewSwitchState, int& OldSwitchState, int& NumSwitchStates); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTrack.OnRep_SwitchState (Underlying native function: OnRep_SwitchState 0x8d755c0)
	void OnRepSwitchState(); // (Native | Protected)

	// Function /Script/FortniteGame.FortTrack.OnRep_NeighborsByDirection (Underlying native function: OnRep_NeighborsByDirection 0x8d755a8)
	void OnRepNeighborsByDirection(); // (Native | Protected)

	// Function /Script/FortniteGame.FortTrack.OnRep_ConfigurationIdx (Underlying native function: OnRep_ConfigurationIdx 0x83aadd8)
	void OnRepConfigurationIdx(); // (Native | Protected)

	// Function /Script/FortniteGame.FortTrack.OnConfigurationChanged (Has no native function)
	void OnConfigurationChanged(int& NewConfigurationIdx, int& OldConfigurationIdx); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTrack.IsConnectedToTrackList (Underlying native function: IsConnectedToTrackList 0x8d75428)
	bool IsConnectedToTrackList(struct TArray<class AFortTrack*>& TargetTracks); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.IsConnectedToTrack (Underlying native function: IsConnectedToTrack 0x8d75398)
	bool IsConnectedToTrack(class AFortTrack*& TargetTrack); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.InitializeTrack (Underlying native function: InitializeTrack 0x8d75200)
	void InitializeTrack(class UPrimitiveComponent*& InSwitchComp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.GetSplineFromPositionAndOrientation (Underlying native function: GetSplineFromPositionAndOrientation 0x8d744f8)
	void GetSplineFromPositionAndOrientation(struct FVector& InLocation, struct FRotator& InRotation, class USplineComponent*& OutSpline, float& OutDistanceAlongSpline, bool& OutReverseDirection); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.GetSplineFromIncomingNeighbor (Underlying native function: GetSplineFromIncomingNeighbor 0x8d743e4)
	void GetSplineFromIncomingNeighbor(class AFortTrack*& InNeighbor, class USplineComponent*& OutSpline, bool& OutReverseDirection); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.GetPathDistanceToTrack (Underlying native function: GetPathDistanceToTrack 0x8d7408c)
	float GetPathDistanceToTrack(class AFortTrack*& TargetTrack, class USplineComponent*& InCurrentSpline, float& CurrentDistanceAlongSpline, bool& InReverseDirection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrack.GetOutgoingNeighborFromSpline (Underlying native function: GetOutgoingNeighborFromSpline 0x8d73f80)
	void GetOutgoingNeighborFromSpline(class USplineComponent*& InSpline, bool& InReverseDirection, class AFortTrack*& OutNeighbor); // (Native | Public | HasOutParms | BlueprintCallable)
};

