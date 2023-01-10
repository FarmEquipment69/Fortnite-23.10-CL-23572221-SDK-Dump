// Class /Script/FortniteGame.BuildingWall
// Size: 0x1038
class ABuildingWall : public ABuildingSMActor
{
	unsigned char unreflected_de0[0x20]; // 0xde0 (0x20) 
	struct TWeakObjectPtr<class UClass> DoorObstacleClass; // 0xe00 (0x28)
	struct FClimbLinkData ClimbLink; // 0xe28 (0x40)
	struct FVector DoorScale; // 0xe68 (0x18)
	struct FVector DoorOffset; // 0xe80 (0x18)
	struct FVector SlidingDoorOffset; // 0xe98 (0x18)
	struct FRotator DoorTargetRotationOffset; // 0xeb0 (0x18)
	struct FRotator SlidingDoorTargetRotationOffset; // 0xec8 (0x18)
	struct FRotator DoorRotationOffset; // 0xee0 (0x18)
	struct FRotator SlidingDoorRotationOffset; // 0xef8 (0x18)
	struct FVector AutomaticSlidingDoorBoxExtent; // 0xf10 (0x18)
	struct FVector AutomaticSlidingDoorBoxOffset; // 0xf28 (0x18)
	struct FVector SlamOpenDoorBoxExtent; // 0xf40 (0x18)
	float SlidingTranslation; // 0xf58 (0x4)
	float SlidingOpenTime; // 0xf5c (0x4)
	unsigned char unreflected_f60[0x8]; // 0xf60 (0x8) 
	class USoundBase* DoorOpeningSound; // 0xf68 (0x8)
	class USoundBase* DoorSlammedOpenSound; // 0xf70 (0x8)
	class USoundBase* DoorClosingSound; // 0xf78 (0x8)
	class UMaterialInterface* DoorAnimatingMaterial; // 0xf80 (0x8)
	class UFortSoundIndicatorComponent* DoorSoundIndicatorComponent; // 0xf88 (0x8)
	class UStaticMesh* DoorMesh; // 0xf90 (0x8)
	class UStaticMesh* DoubleDoorMesh; // 0xf98 (0x8)
	class UFortBuildingWallDoorComponent* DoorComponent; // 0xfa0 (0x8)
	class UFortBuildingWallDoorComponent* SlidingDoorComponent; // 0xfa8 (0x8)
	class UStaticMeshComponent* DoubleDoorComponent; // 0xfb0 (0x8)
	class UBoxComponent* DoorBoxComponent; // 0xfb8 (0x8)
	struct FVector DoorLinkOffset; // 0xfc0 (0x18)
	class UFortDoorLinkComponent* DoorSmartLinkComp; // 0xfd8 (0x8)
	class UStaticMeshComponent* DoorBlueprintMeshComp; // 0xfe0 (0x8)
	class UStaticMeshComponent* SlidingDoorBlueprintMeshComp; // 0xfe8 (0x8)
	class UStaticMeshComponent* DoubleDoorBlueprintMeshComp; // 0xff0 (0x8)
	unsigned char unreflected_ff8[0x18]; // 0xff8 (0x18) 
	struct FBuildingActorNavArea AreaPatternOverride; // 0x1010 (0x4)
	float AreaWidthOverride; // 0x1014 (0x4)
	unsigned char unreflected_1018[0x4]; // 0x1018 (0x4) 
	struct TEnumAsByte<EBuildingWallArea> AreaShapeType; // 0x101c (0x1)
	enum EDoorOpenStyle DoorOpenStyle; // 0x101d (0x1)
	unsigned char bSwingingDoor; // 0x101e (0x1)
	unsigned char bSlidingDoor; // 0x101e (0x1)
	unsigned char bAutomaticSlidingDoor; // 0x101e (0x1)
	unsigned char bDoubleDoor; // 0x101e (0x1)
	unsigned char bCreateDoorLink; // 0x101e (0x1)
	unsigned char bDoorOpen; // 0x101e (0x1)
	unsigned char bLocalDoorOpen; // 0x101e (0x1)
	unsigned char bDoorCollisionDisabled; // 0x101e (0x1)
	unsigned char bLocalDoorCollisionDisabled; // 0x101f (0x1)
	unsigned char bOverrideAreaWidth; // 0x101f (0x1)
	unsigned char bCreateClimbLink; // 0x101f (0x1)
	unsigned char bProhibitPassOverLowEndOfTriangleWall; // 0x101f (0x1)
	unsigned char bFastOpenRequested; // 0x101f (0x1)
	unsigned char padding_1020[0x18]; // 0x1020 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.BuildingWall.VerifyDoorOpenMatchesServer (Underlying native function: VerifyDoorOpenMatchesServer 0x83ae014)
	void VerifyDoorOpenMatchesServer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingWall.VerifyDoorCollisionMatchesServer (Underlying native function: VerifyDoorCollisionMatchesServer 0x83ae000)
	void VerifyDoorCollisionMatchesServer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingWall.OnRep_bDoorOpen (Underlying native function: OnRep_bDoorOpen 0x282ebc0)
	void OnRepbDoorOpen(); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingWall.OnRep_bDoorCollisionDisabled (Underlying native function: OnRep_bDoorCollisionDisabled 0x8357a58)
	void OnRepbDoorCollisionDisabled(); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingWall.OnNearDoorTriggerUnTouched (Underlying native function: OnNearDoorTriggerUnTouched 0x83ac7bc)
	void OnNearDoorTriggerUnTouched(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingWall.OnNearDoorTriggerTouched (Underlying native function: OnNearDoorTriggerTouched 0x83ac5bc)
	void OnNearDoorTriggerTouched(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.BuildingWall.IsLocked (Underlying native function: IsLocked 0x83abab0)
	bool IsLocked(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingWall.IsDoorOpen (Underlying native function: IsDoorOpen 0x83aba94)
	bool IsDoorOpen(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingWall.IsDoorComponent (Underlying native function: IsDoorComponent 0x83aba04)
	bool IsDoorComponent(class UStaticMeshComponent*& MeshComponent); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.BuildingWall.HasSwingingDoor (Underlying native function: HasSwingingDoor 0x83ab68c)
	bool HasSwingingDoor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingWall.HasSlidingDoor (Underlying native function: HasSlidingDoor 0x83ab658)
	bool HasSlidingDoor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingWall.HasBashableDoor (Underlying native function: HasBashableDoor 0x83ab610)
	bool HasBashableDoor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingWall.GetDoorComponent (Underlying native function: GetDoorComponent 0x83ab094)
	class UFortBuildingWallDoorComponent* GetDoorComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

