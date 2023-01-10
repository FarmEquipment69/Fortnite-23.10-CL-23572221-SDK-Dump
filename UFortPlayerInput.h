// Class /Script/FortniteGame.FortPlayerInput
// Size: 0x1480
class UFortPlayerInput : public UEnhancedPlayerInput
{
	struct TArray<struct FFortActionKeyMapping> InputOptionListOverride; // 0x740 (0x10)
	unsigned char unreflected_750[0x38]; // 0x750 (0x38) 
	struct FString CampaignDefaultKBMPresetName; // 0x788 (0x10)
	struct FString AthenaDefaultKBMPresetName; // 0x798 (0x10)
	struct TArray<struct FString> CampaignKBMResetToDefaultPresetNames; // 0x7a8 (0x10)
	struct TArray<struct FString> AthenaKBMResetToDefaultPresetNames; // 0x7b8 (0x10)
	struct FString DefaultGamepadPresetName; // 0x7c8 (0x10)
	struct FString DefaultGamepadPresetNameAthena; // 0x7d8 (0x10)
	struct FString DefaultGamepadPresetNameAthenaMobile; // 0x7e8 (0x10)
	struct FString CustomGamepadPresetNameAthena; // 0x7f8 (0x10)
	struct TArray<struct FString> FortPlayerInputSettingsNames; // 0x808 (0x10)
	unsigned char unreflected_818[0x4a8]; // 0x818 (0x4a8) 
	float TouchLookAccelerationMultiplier; // 0xcc0 (0x4)
	float TouchBuildingMultiplier; // 0xcc4 (0x4)
	float TouchEditModeMultiplier; // 0xcc8 (0x4)
	unsigned char unreflected_ccc[0x27]; // 0xccc (0x27) 
	enum EFortMotionYawAxis MotionYawAxis; // 0xcf3 (0x1)
	unsigned char unreflected_cf4[0x41c]; // 0xcf4 (0x41c) 
	float TargetingMultiplier; // 0x1110 (0x4)
	float ScopedMultiplier; // 0x1114 (0x4)
	float GamepadTargetingMultiplier; // 0x1118 (0x4)
	float GamepadScopedMultiplier; // 0x111c (0x4)
	float GamepadBuildingMultiplier; // 0x1120 (0x4)
	float GamepadEditModeMultiplier; // 0x1124 (0x4)
	bool bInvertedPitchForMotion; // 0x1128 (0x1)
	bool bInvertedYawMobile; // 0x1129 (0x1)
	unsigned char unreflected_112a[0x2]; // 0x112a (0x2) 
	float MotionTargetingMultiplier; // 0x112c (0x4)
	float MotionScopedMultiplier; // 0x1130 (0x4)
	float MotionHarvestingToolMultiplier; // 0x1134 (0x4)
	struct FFortGyroV2Settings GyroV2Settings; // 0x1138 (0x64)
	unsigned char unreflected_119c[0xf4]; // 0x119c (0xf4) 
	float GamepadMoveStickDeadZone; // 0x1290 (0x4)
	float GamepadLookStickDeadZone; // 0x1294 (0x4)
	unsigned char unreflected_1298[0xd0]; // 0x1298 (0xd0) 
	struct TMap<struct FString, class UFortPlayerInputSettings*> AllPlayerInputSettings; // 0x1368 (0x50)
	class UFortPlayerInputSettings* DesiredKBMPlayerInputSettings; // 0x13b8 (0x8)
	class UFortPlayerInputSettings* DesiredGamepadPlayerInputSettings; // 0x13c0 (0x8)
	unsigned char unreflected_13c8[0x10]; // 0x13c8 (0x10) 
	struct TArray<struct FText> InputActionTypeFriendlyNames; // 0x13d8 (0x10)
	struct TArray<struct FFortInputActionGroupContext*> InputActionGroupContexts; // 0x13e8 (0x10)
	struct TArray<enum EFortInputActionGroup> InputActionGroupExemptFromAllModesCheck; // 0x13f8 (0x10)
	struct TArray<struct FFortPerModeInputConfig> PerModeInputConfigs; // 0x1408 (0x10)
	struct FFortPerModeInputConfig ActivePerModeInputConfig; // 0x1418 (0x58)
	unsigned char padding_1470[0x10]; // 0x1470 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerInput.HandleDesiredKBMInputSettingsReloadConfig (Underlying native function: HandleDesiredKBMInputSettingsReloadConfig 0x87df9a8)
	void HandleDesiredKBMInputSettingsReloadConfig(class UFortPlayerInputSettings*& KBMSettings); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerInput.HandleDesiredGamepadInputSettingsReloadConfig (Underlying native function: HandleDesiredGamepadInputSettingsReloadConfig 0x87df928)
	void HandleDesiredGamepadInputSettingsReloadConfig(class UFortPlayerInputSettings*& GamepadSettings); // (Final | Native | Private)
};

