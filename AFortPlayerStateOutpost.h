// Class /Script/FortniteGame.FortPlayerStateOutpost
// Size: 0xf48
class AFortPlayerStateOutpost : public AFortPlayerStatePvE
{
	bool bHasPermissionToEditOutpost; // 0xf40 (0x1)
	unsigned char padding_f41[0x7]; // 0xf41 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerStateOutpost.SetHasPermissionToEditOutpost (Underlying native function: SetHasPermissionToEditOutpost 0x8cf8ca0)
	void SetHasPermissionToEditOutpost(class AFortPlayerStateOutpost*& InPlayer, bool& bHasPermission); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateOutpost.ServerSetHasPermissionToEditOutpost (Underlying native function: ServerSetHasPermissionToEditOutpost 0x8cf8998)
	void ServerSetHasPermissionToEditOutpost(class AFortPlayerStateOutpost*& InPlayer, bool& bHasPermission); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerStateOutpost.OnRep_HasPermissionToEditOutpost (Underlying native function: OnRep_HasPermissionToEditOutpost 0x8cf86fc)
	void OnRepHasPermissionToEditOutpost(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerStateOutpost.IsOutpostOwner (Underlying native function: IsOutpostOwner 0x8cf86e0)
	bool IsOutpostOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateOutpost.HasPermissionToEditOutpost (Underlying native function: HasPermissionToEditOutpost 0x8cf86c0)
	bool HasPermissionToEditOutpost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

