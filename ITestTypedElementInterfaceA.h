// Class /Script/TypedElementFramework.TestTypedElementInterfaceA
// Size: 0x28
class ITestTypedElementInterfaceA : public IInterface
{

	/* Functions */

	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName (Underlying native function: SetDisplayName 0x974a6a0)
	bool SetDisplayName(struct FScriptTypedElementHandle*& InElementHandle, struct FText& InNewName, bool& bNotify); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName (Underlying native function: GetDisplayName 0x9749400)
	struct FText GetDisplayName(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)
};

