// Class /Script/FortniteGame.FortScalableFloatUtils
// Size: 0x28
class UFortScalableFloatUtils : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortScalableFloatUtils.ToSimpleString (Underlying native function: ToSimpleString 0x8763d98)
	static struct FString ToSimpleString(struct FScalableFloat& Input); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortScalableFloatUtils.SetValue (Underlying native function: SetValue 0x8763a14)
	static void SetValue(struct FScalableFloat& Input, float& NewValue); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortScalableFloatUtils.SetScalingValue (Underlying native function: SetScalingValue 0x87634c4)
	static void SetScalingValue(struct FScalableFloat& Input, float& InCoeffecient, struct FName& InRowName, class UCurveTable*& InTable); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortScalableFloatUtils.ScaleValue (Underlying native function: ScaleValue 0x59aad30)
	static void ScaleValue(struct FScalableFloat& Input, float& Multiplier); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortScalableFloatUtils.K2_SetValueWithContext (Underlying native function: K2_SetValueWithContext 0x8761798)
	static bool K2SetValueWithContext(class UObject*& WorldContextObject, struct FScalableFloat& Input, int& OverrideValue, bool& bShouldApply); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortScalableFloatUtils.IsStatic (Underlying native function: IsStatic 0x87616e0)
	static bool IsStatic(struct FScalableFloat& Input); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortScalableFloatUtils.IsSettingCurveValid (Underlying native function: IsSettingCurveValid 0x8761640)
	static bool IsSettingCurveValid(struct FScalableFloat& Input); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortScalableFloatUtils.GetValueAtLevelWithContext (Underlying native function: GetValueAtLevelWithContext 0x1d6953c)
	static float GetValueAtLevelWithContext(class UObject*& WorldContextObject, struct FScalableFloat& Input, float& Level); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortScalableFloatUtils.GetValueAtLevel (Underlying native function: GetValueAtLevel 0xe936cc)
	static float GetValueAtLevel(struct FScalableFloat& Input, float& Level); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortScalableFloatUtils.GetValueAsIntegerWithContext (Underlying native function: GetValueAsIntegerWithContext 0x876137c)
	static int GetValueAsIntegerWithContext(class UObject*& WorldContextObject, struct FScalableFloat& Input, float& Level); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortScalableFloatUtils.GetValueAsInteger (Underlying native function: GetValueAsInteger 0x28c6894)
	static int GetValueAsInteger(struct FScalableFloat& Input, float& Level); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortScalableFloatUtils.GetValueAsBoolWithContext (Underlying native function: GetValueAsBoolWithContext 0x1d69428)
	static bool GetValueAsBoolWithContext(class UObject*& WorldContextObject, struct FScalableFloat& Input, float& Level); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortScalableFloatUtils.GetValueAsBool (Underlying native function: GetValueAsBool 0x23cdaf8)
	static bool GetValueAsBool(struct FScalableFloat& Input, float& Level); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortScalableFloatUtils.GetValue (Underlying native function: GetValue 0x2793518)
	static float GetValue(struct FScalableFloat& Input); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

