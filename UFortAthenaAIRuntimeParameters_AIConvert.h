// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert
// Size: 0xf8
class UFortAthenaAIRuntimeParameters_AIConvert : public UFortAthenaAIRuntimeParameters
{
	bool bCanBeConverted; // 0x30 (0x1)
	bool bCanBeConvertedFromDBNO; // 0x31 (0x1)
	bool bForceKillWhenUnconverted; // 0x32 (0x1)
	bool bForceKillWhenConverterDies; // 0x33 (0x1)
	bool bCopyConverterSpecificRelations; // 0x34 (0x1)
	bool bRemoveFromAllFactions; // 0x35 (0x1)
	unsigned char unreflected_36[0x2]; // 0x36 (0x2) 
	float ReleaseDistanceSq; // 0x38 (0x4)
	float CheckReleaseConditionsTimeInterval; // 0x3c (0x4)
	struct FGameplayTagContainer AddToFactions; // 0x40 (0x20)
	struct FGameplayTagContainer RemoveFromFactions; // 0x60 (0x20)
	unsigned char PreConversionTeamIndex; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct FGameplayTagContainer PreConversionFactions; // 0x88 (0x20)
	struct TArray<class UFortAbilitySet*> AbilitySetsForConverted; // 0xa8 (0x10)
	struct FTeleportSettings TeleportSettings; // 0xb8 (0x38)
	bool bEnableDBNO; // 0xf0 (0x1)
	struct TEnumAsByte<TInteractionType> DBNOInteractionType; // 0xf1 (0x1)
	unsigned char unreflected_f2[0x2]; // 0xf2 (0x2) 
	float DBNOInteractionDuration; // 0xf4 (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetForceKillWhenUnconverted (Underlying native function: SetForceKillWhenUnconverted 0xa1f7834)
	void SetForceKillWhenUnconverted(bool& bInForceKillWhenUnconverted); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetForceKillWhenConverterDies (Underlying native function: SetForceKillWhenConverterDies 0xa1f77b8)
	void SetForceKillWhenConverterDies(bool& bInForceKillWhenConverterDies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetCanBeConvertedFromDBNO (Underlying native function: SetCanBeConvertedFromDBNO 0xa1f7548)
	void SetCanBeConvertedFromDBNO(bool& bInCanBeConvertedFromDBNO); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetCanBeConverted (Underlying native function: SetCanBeConverted 0xa1f7424)
	void SetCanBeConverted(bool& bInCanBeConverted); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetForceKillWhenUnconverted (Underlying native function: GetForceKillWhenUnconverted 0xa1f6554)
	bool GetForceKillWhenUnconverted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetForceKillWhenConverterDies (Underlying native function: GetForceKillWhenConverterDies 0xa1f6540)
	bool GetForceKillWhenConverterDies(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetCanBeConvertedFromDBNO (Underlying native function: GetCanBeConvertedFromDBNO 0xa1f6010)
	bool GetCanBeConvertedFromDBNO(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetCanBeConverted (Underlying native function: GetCanBeConverted 0xa1f5ffc)
	bool GetCanBeConverted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

