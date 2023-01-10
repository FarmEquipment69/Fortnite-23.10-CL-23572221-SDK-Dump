// Class /Script/TypedElementRuntime.TypedElementHierarchyInterface
// Size: 0x28
class ITypedElementHierarchyInterface : public IInterface
{

	/* Functions */

	// Function /Script/TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement (Underlying native function: GetParentElement 0x995ee34)
	struct FScriptTypedElementHandle* GetParentElement(struct FScriptTypedElementHandle*& InElementHandle, bool& bAllowCreate); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements (Underlying native function: GetChildElements 0x995e860)
	void GetChildElements(struct FScriptTypedElementHandle*& InElementHandle, struct TArray<struct FScriptTypedElementHandle*>& OutElementHandles, bool& bAllowCreate); // (Native | Public | HasOutParms | BlueprintCallable)
};

