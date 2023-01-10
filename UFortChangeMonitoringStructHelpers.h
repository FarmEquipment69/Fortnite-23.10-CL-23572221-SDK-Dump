// Class /Script/FortniteGame.FortChangeMonitoringStructHelpers
// Size: 0x28
class UFortChangeMonitoringStructHelpers : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortChangeMonitoringStructHelpers.ClearDirty (Underlying native function: ClearDirty 0x7dcdf10)
	static void ClearDirty(struct FFortChangeMonitoringStruct& CheckStruct, enum EChangeInStructDetected& ChangeState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortChangeMonitoringStructHelpers.CheckIsDirty (Underlying native function: CheckIsDirty 0x7dcddf8)
	static void CheckIsDirty(struct FFortChangeMonitoringStruct& CheckStruct, enum EChangeInStructDetected& ChangeState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

