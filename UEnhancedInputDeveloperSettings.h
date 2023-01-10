// Class /Script/EnhancedInput.EnhancedInputDeveloperSettings
// Size: 0x60
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
	bool bEnableDefaultMappingContexts; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FDefaultContextSetting> DefaultMappingContexts; // 0x38 (0x10)
	struct FPerPlatformSettings PlatformSettings; // 0x48 (0x10)
	bool bShouldOnlyTriggerLastActionInChord; // 0x58 (0x1)
	unsigned char padding_59[0x7]; // 0x59 (0x7)
};

