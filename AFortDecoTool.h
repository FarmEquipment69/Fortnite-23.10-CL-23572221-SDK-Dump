// Class /Script/FortniteGame.FortDecoTool
// Size: 0x1080
class AFortDecoTool : public AFortWeapon
{
	bool bButtonDown; // 0x1028 (0x1)
	unsigned char unreflected_1029[0x7]; // 0x1029 (0x7) 
	class UFortItemDefinition* ItemDefinition; // 0x1030 (0x8)
	class AFortDecoHelper* DecoHelper; // 0x1038 (0x8)
	class AActor* CarriedActor; // 0x1040 (0x8)
	bool bPlaceCarriedActor; // 0x1048 (0x1)
	unsigned char unreflected_1049[0x7]; // 0x1049 (0x7) 
	struct TWeakObjectPtr<class UParticleSystem> SpawnEffect; // 0x1050 (0x28)
	bool bPreventExecutionOnOwningPlayerFalling; // 0x1078 (0x1)
	unsigned char unreflected_1079[0x1]; // 0x1079 (0x1) 
	bool bIsEquipped; // 0x107a (0x1)
	unsigned char padding_107b[0x5]; // 0x107b (0x5)

	/* Functions */

	// Function /Script/FortniteGame.FortDecoTool.TryToPlace (Underlying native function: TryToPlace 0x8e458f8)
	bool TryToPlace(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDecoTool.SetHelper (Underlying native function: SetHelper 0x8e443a8)
	void SetHelper(class AFortDecoHelper*& InHelper); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDecoTool.SetDecoObjectPreview (Underlying native function: SetDecoObjectPreview 0x8e44148)
	void SetDecoObjectPreview(class UFortItemDefinition*& InItemDefinition, bool& bUpdatePreviewPosition); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDecoTool.ServerSpawnDeco (Underlying native function: ServerSpawnDeco 0x8e43c00)
	void ServerSpawnDeco(struct FVector& Location, struct FRotator& Rotation, class ABuildingSMActor*& AttachedActor, struct TEnumAsByte<EBuildingAttachmentType>& InBuildingAttachmentType); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortDecoTool.ServerCreateBuildingAndSpawnDeco (Underlying native function: ServerCreateBuildingAndSpawnDeco 0x8e434f8)
	void ServerCreateBuildingAndSpawnDeco(struct FVector_NetQuantize10& BuildingLocation, struct FRotator& BuildingRotation, struct FVector_NetQuantize10& Location, struct FRotator& Rotation, struct TEnumAsByte<EBuildingAttachmentType>& InBuildingAttachmentType, bool& bSpawnDecoOnExtraPiece, struct FVector& BuildingExtraPieceLocation); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortDecoTool.OnUnEquip (Underlying native function: OnUnEquip 0x2491518)
	void OnUnEquip(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDecoTool.OnRep_ItemDefinition (Underlying native function: OnRep_ItemDefinition 0x8e43150)
	void OnRepItemDefinition(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortDecoTool.OnRep_CarriedActor (Underlying native function: OnRep_CarriedActor 0x8e430b4)
	void OnRepCarriedActor(class AActor*& OldCarriedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortDecoTool.OnCarriedActorDestroyed (Underlying native function: OnCarriedActorDestroyed 0x8e42d2c)
	void OnCarriedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortDecoTool.ClientDestroyDecoPreview (Underlying native function: ClientDestroyDecoPreview 0x8e4129c)
	void ClientDestroyDecoPreview(); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

