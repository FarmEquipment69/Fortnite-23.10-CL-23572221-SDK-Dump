// Class /Script/Engine.CurveSourceInterface
// Size: 0x28
class ICurveSourceInterface : public IInterface
{

	/* Functions */

	// Function /Script/Engine.CurveSourceInterface.GetCurveValue (Underlying native function: GetCurveValue 0x9abae84)
	float GetCurveValue(struct FName& CurveName); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/Engine.CurveSourceInterface.GetCurves (Underlying native function: GetCurves 0x9abaf14)
	void GetCurves(struct TArray<struct FNamedCurveValue*>& OutValues); // (Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/Engine.CurveSourceInterface.GetBindingName (Underlying native function: GetBindingName 0x9abae58)
	struct FName GetBindingName(); // (Native | Event | Public | BlueprintEvent | Const)
};

