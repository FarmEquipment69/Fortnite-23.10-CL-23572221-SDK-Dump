// Class /Script/FortniteGame.FortWeaponRangedTowHook
// Size: 0x1638
class AFortWeaponRangedTowHook : public AFortWeaponRanged
{
	class AFortPhysicsTowHook* TowHook; // 0x1530 (0x8)
	struct FTowhookParams TowhookParams; // 0x1538 (0xd0)
	unsigned char padding_1608[0x30]; // 0x1608 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedTowHook.SetupTowhookAttachmentsOnServer (Underlying native function: SetupTowhookAttachmentsOnServer 0x8e5cab0)
	void SetupTowhookAttachmentsOnServer(class UPrimitiveComponent*& FirstAttachedPrimitive, class UPrimitiveComponent*& SecondAttachedPrimitive); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRangedTowHook.OnRep_TowHook (Underlying native function: OnRep_TowHook 0x8e5bd9c)
	void OnRepTowHook(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortWeaponRangedTowHook.DetachActorsFromTowHook (Underlying native function: DetachActorsFromTowHook 0x8e5a8e8)
	void DetachActorsFromTowHook(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRangedTowHook.AttachToTowHook (Underlying native function: AttachToTowHook 0x8e5a0e0)
	void AttachToTowHook(class AActor*& ActorToAttach); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRangedTowHook.ActorDetachedFromTowHook (Has no native function)
	void ActorDetachedFromTowHook(class AActor*& DetachedActor); // (Event | Public | BlueprintEvent)
};

