// Class /Script/FortniteGame.FortPlayerDebugAnimInstance
// Size: 0x460
class UFortPlayerDebugAnimInstance : public UFortBaseLayerAnimInstance
{
	enum EFortSynchedActionEndMovementMode SynchedActionEndMovementModeDebug; // 0x440 (0x1)
	struct TEnumAsByte<EFortCustomMovement> CustomMovementModeDebug; // 0x441 (0x1)
	struct TEnumAsByte<EMovementMode> MovementModeDebug; // 0x442 (0x1)
	unsigned char bIsSynchedActionCompletedDebug; // 0x443 (0x1)
	unsigned char bIsOnGroundDebug; // 0x443 (0x1)
	unsigned char bIsFallingDebug; // 0x443 (0x1)
	unsigned char unreflected_444[0x4]; // 0x444 (0x4) 
	struct TArray<struct FString> LinkedGraphComponentDebug; // 0x448 (0x10)
	unsigned char padding_458[0x8]; // 0x458 (0x8)
};

