// Class /Script/FortniteGame.FortCreativeTeleporterManagerComponent
// Size: 0xb0
class UFortCreativeTeleporterManagerComponent : public UActorComponent
{
	unsigned char unreflected_b0[0xb0]; 

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeTeleporterManagerComponent.UnregisterTeleporterFromGroup (Underlying native function: UnregisterTeleporterFromGroup 0x86625f0)
	void UnregisterTeleporterFromGroup(class AFortCreativeTeleporter*& TeleporterToUnregister, enum EFortCreativeTeleporterGroup& GroupToUnregisterOn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTeleporterManagerComponent.RegisterTeleporterWithGroup (Underlying native function: RegisterTeleporterWithGroup 0x86620ac)
	void RegisterTeleporterWithGroup(class AFortCreativeTeleporter*& TeleporterToRegister, enum EFortCreativeTeleporterGroup& GroupToRegisterOn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTeleporterManagerComponent.GetTeleportersInGroup (Underlying native function: GetTeleportersInGroup 0x8661e94)
	struct TSet<class AFortCreativeTeleporter*> GetTeleportersInGroup(enum EFortCreativeTeleporterGroup& Group); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

