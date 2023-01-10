// Class /Script/FortniteGame.FortCreativeTeleporter
// Size: 0xf20
class AFortCreativeTeleporter : public AFortCreativeDeviceProp
{
	class UClass* TeleporterAbility; // 0xf08 (0x8)
	enum EFortCreativeTeleporterGroup KnobTeleporterGroup; // 0xf10 (0x1)
	enum EFortCreativeTeleporterGroup KnobTargetTeleporterGroup; // 0xf11 (0x1)
	unsigned char unreflected_f12[0x6]; // 0xf12 (0x6) 
	class UFortGameplayReceiverMessageComponent* TeleportToWhenReceived; // 0xf18 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeTeleporter.IsTeleporterBlocked (Underlying native function: IsTeleporterBlocked 0x8550084)
	bool IsTeleporterBlocked(class AActor*& ActorToTeleport, struct FRotator& InPawnTeleportedRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeTeleporter.IsPortalDebuggingEnabled (Underlying native function: IsPortalDebuggingEnabled 0x854f800)
	bool IsPortalDebuggingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeTeleporter.IsLocationBlocked (Underlying native function: IsLocationBlocked 0x854f67c)
	bool IsLocationBlocked(class AActor*& ActorToTeleport, struct FVector& LocationToTeleport, struct FRotator& InPawnTeleportedRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

