// Class /Script/Engine.BlueprintMapLibrary
// Size: 0x28
class UBlueprintMapLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.BlueprintMapLibrary.SetMapPropertyByName (Underlying native function: SetMapPropertyByName 0x9af1780)
	static void SetMapPropertyByName(class UObject*& Object, struct FName& PropertyName, struct TMap<int, int>& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintMapLibrary.Map_Values (Underlying native function: Map_Values 0x1c842e8)
	static void MapValues(struct TMap<int, int>& TargetMap, struct TArray<int>& Values); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintMapLibrary.Map_Remove (Underlying native function: Map_Remove 0x16e587c)
	static bool MapRemove(struct TMap<int, int>& TargetMap, int& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintMapLibrary.Map_Length (Underlying native function: Map_Length 0x9aef7d8)
	static int MapLength(struct TMap<int, int>& TargetMap); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintMapLibrary.Map_Keys (Underlying native function: Map_Keys 0x1c848b0)
	static void MapKeys(struct TMap<int, int>& TargetMap, struct TArray<int>& Keys); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintMapLibrary.Map_IsNotEmpty (Underlying native function: Map_IsNotEmpty 0x9aef718)
	static bool MapIsNotEmpty(struct TMap<int, int>& TargetMap); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintMapLibrary.Map_IsEmpty (Underlying native function: Map_IsEmpty 0x9aef65c)
	static bool MapIsEmpty(struct TMap<int, int>& TargetMap); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintMapLibrary.Map_Find (Underlying native function: Map_Find 0x16e675c)
	static bool MapFind(struct TMap<int, int>& TargetMap, int& Key, int& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintMapLibrary.Map_Contains (Underlying native function: Map_Contains 0x9aef4a4)
	static bool MapContains(struct TMap<int, int>& TargetMap, int& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintMapLibrary.Map_Clear (Underlying native function: Map_Clear 0x1c84270)
	static void MapClear(struct TMap<int, int>& TargetMap); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintMapLibrary.Map_Add (Underlying native function: Map_Add 0x16e5a9c)
	static void MapAdd(struct TMap<int, int>& TargetMap, int& Key, int& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

