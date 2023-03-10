// Class /Script/Engine.BlueprintSetLibrary
// Size: 0x28
class UBlueprintSetLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.BlueprintSetLibrary.SetSetPropertyByName (Underlying native function: SetSetPropertyByName 0x9af1bec)
	static void SetSetPropertyByName(class UObject*& Object, struct FName& PropertyName, struct TSet<int>& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintSetLibrary.Set_Union (Underlying native function: Set_Union 0x9af271c)
	static void SetUnion(struct TSet<int>& A, struct TSet<int>& B, struct TSet<int>& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintSetLibrary.Set_ToArray (Underlying native function: Set_ToArray 0x248a068)
	static void SetToArray(struct TSet<int>& A, struct TArray<int>& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintSetLibrary.Set_RemoveItems (Underlying native function: Set_RemoveItems 0x9af2618)
	static void SetRemoveItems(struct TSet<int>& TargetSet, struct TArray<int>& Items); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintSetLibrary.Set_Remove (Underlying native function: Set_Remove 0x9af2468)
	static bool SetRemove(struct TSet<int>& TargetSet, int& Item); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintSetLibrary.Set_Length (Underlying native function: Set_Length 0x9af23c0)
	static int SetLength(struct TSet<int>& TargetSet); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintSetLibrary.Set_IsNotEmpty (Underlying native function: Set_IsNotEmpty 0x9af2314)
	static bool SetIsNotEmpty(struct TSet<int>& TargetSet); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintSetLibrary.Set_IsEmpty (Underlying native function: Set_IsEmpty 0x9af2270)
	static bool SetIsEmpty(struct TSet<int>& TargetSet); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintSetLibrary.Set_Intersection (Underlying native function: Set_Intersection 0x9af20f8)
	static void SetIntersection(struct TSet<int>& A, struct TSet<int>& B, struct TSet<int>& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintSetLibrary.Set_Difference (Underlying native function: Set_Difference 0x9af1f80)
	static void SetDifference(struct TSet<int>& A, struct TSet<int>& B, struct TSet<int>& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintSetLibrary.Set_Contains (Underlying native function: Set_Contains 0x16e5634)
	static bool SetContains(struct TSet<int>& TargetSet, int& ItemToFind); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintSetLibrary.Set_Clear (Underlying native function: Set_Clear 0x16e5434)
	static void SetClear(struct TSet<int>& TargetSet); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintSetLibrary.Set_AddItems (Underlying native function: Set_AddItems 0x16e54ec)
	static void SetAddItems(struct TSet<int>& TargetSet, struct TArray<int>& NewItems); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintSetLibrary.Set_Add (Underlying native function: Set_Add 0x9af1dd4)
	static void SetAdd(struct TSet<int>& TargetSet, int& NewItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

