// Class /Script/TypedElementRuntime.TypedElementSelectionInterface
// Size: 0x28
class ITypedElementSelectionInterface : public IInterface
{

	/* Functions */

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.SelectElement (Underlying native function: SelectElement 0x995fa6c)
	bool SelectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected (Underlying native function: IsElementSelected 0x995f670)
	bool IsElementSelected(struct FScriptTypedElementHandle*& InElementHandle, struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement (Underlying native function: GetSelectionElement 0x995f064)
	struct FScriptTypedElementHandle* GetSelectionElement(struct FScriptTypedElementHandle*& InElementHandle, struct FScriptTypedElementListProxy& InCurrentSelection, enum ETypedElementSelectionMethod& InSelectionMethod); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.DeselectElement (Underlying native function: DeselectElement 0x995e04c)
	bool DeselectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement (Underlying native function: CanSelectElement 0x995dc04)
	bool CanSelectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement (Underlying native function: CanDeselectElement 0x995d9d0)
	bool CanDeselectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers (Underlying native function: AllowSelectionModifiers 0x995d798)
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle*& InElementHandle, struct FScriptTypedElementListProxy& InSelectionSet); // (Native | Public | HasOutParms | BlueprintCallable)
};

