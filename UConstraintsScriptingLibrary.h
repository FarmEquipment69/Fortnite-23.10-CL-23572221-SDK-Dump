// Class /Script/Constraints.ConstraintsScriptingLibrary
// Size: 0x28
class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Constraints.ConstraintsScriptingLibrary.RemoveConstraint (Underlying native function: RemoveConstraint 0x9853b8c)
	static bool RemoveConstraint(class UWorld*& InWorld, int& InIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Constraints.ConstraintsScriptingLibrary.GetManager (Underlying native function: GetManager 0x9853b0c)
	static class UConstraintsManager* GetManager(class UWorld*& InWorld); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle (Underlying native function: CreateTransformableComponentHandle 0x9853950)
	static class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld*& InWorld, class USceneComponent*& InSceneComponent, struct FName& InSocketName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateFromType (Underlying native function: CreateFromType 0x9853764)
	static class UTickableTransformConstraint* CreateFromType(class UWorld*& InWorld, enum ETransformConstraintType& InType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Constraints.ConstraintsScriptingLibrary.AddConstraint (Underlying native function: AddConstraint 0x985323c)
	static bool AddConstraint(class UWorld*& InWorld, class UTransformableHandle*& InParentHandle, class UTransformableHandle*& InChildHandle, class UTickableTransformConstraint*& InConstraint, bool& bMaintainOffset); // (Final | Native | Static | Public | BlueprintCallable)
};

