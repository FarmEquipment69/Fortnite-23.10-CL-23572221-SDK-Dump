// Class /Script/FortniteGame.FortWeaponCharmPreviewActor
// Size: 0x370
class AFortWeaponCharmPreviewActor : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	struct FCharmPreviewEntry CurrentEntryInfo; // 0x2a0 (0xa0)
	unsigned char unreflected_340[0x10]; // 0x340 (0x10) 
	class UAthenaCharmItemDefinition* MyCharm; // 0x350 (0x8)
	class AFortPlayerCharm* MyCharmActor; // 0x358 (0x8)
	class USkeletalMeshComponent* WeaponAttachMeshComp; // 0x360 (0x8)
	struct TEnumAsByte<EFortCustomCharmType> CharmSlot; // 0x368 (0x1)
	unsigned char padding_369[0x7]; // 0x369 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponCharmPreviewActor.StartLoadingNextPreviewActor (Underlying native function: StartLoadingNextPreviewActor 0x85ec748)
	void StartLoadingNextPreviewActor(int& SlotIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponCharmPreviewActor.SetActiveCharmSlot (Underlying native function: SetActiveCharmSlot 0x85e93fc)
	void SetActiveCharmSlot(int& CharmSlotIn); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponCharmPreviewActor.PreviewCharm (Has no native function)
	void PreviewCharm(class UAthenaCharmItemDefinition*& Charm); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponCharmPreviewActor.OnPreviewSkeletalMeshLoaded (Has no native function)
	void OnPreviewSkeletalMeshLoaded(class USkeletalMesh*& LoadedMesh, struct FCharmPreviewEntry& EntryInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponCharmPreviewActor.ClearCharm (Underlying native function: ClearCharm 0x85e5988)
	void ClearCharm(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponCharmPreviewActor.ApplyCharmToSkelMesh (Underlying native function: ApplyCharmToSkelMesh 0x85e46a4)
	void ApplyCharmToSkelMesh(class USkeletalMeshComponent*& MeshComp); // (Final | Native | Protected | BlueprintCallable)
};

