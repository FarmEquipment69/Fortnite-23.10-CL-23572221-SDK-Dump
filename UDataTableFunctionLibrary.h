// Class /Script/Engine.DataTableFunctionLibrary
// Size: 0x28
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.DataTableFunctionLibrary.GetDataTableRowNames (Underlying native function: GetDataTableRowNames 0x9b816b8)
	static void GetDataTableRowNames(class UDataTable*& Table, struct TArray<struct FName>& OutRowNames); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataTableFunctionLibrary.GetDataTableRowFromName (Underlying native function: GetDataTableRowFromName 0x16451b8)
	static bool GetDataTableRowFromName(class UDataTable*& Table, struct FName& RowName, struct FTableRowBase*& OutRow); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataTableFunctionLibrary.GetDataTableColumnAsString (Underlying native function: GetDataTableColumnAsString 0x9b813ec)
	static struct TArray<struct FString> GetDataTableColumnAsString(class UDataTable*& DataTable, struct FName& PropertyName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.DataTableFunctionLibrary.EvaluateCurveTableRow (Underlying native function: EvaluateCurveTableRow 0x1adc958)
	static void EvaluateCurveTableRow(class UCurveTable*& CurveTable, struct FName& RowName, float& InXY, struct TEnumAsByte<EEvaluateCurveTableResult>& OutResult, float& OutXY, struct FString& ContextString); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.DataTableFunctionLibrary.DoesDataTableRowExist (Underlying native function: DoesDataTableRowExist 0x9b812e0)
	static bool DoesDataTableRowExist(class UDataTable*& Table, struct FName& RowName); // (Final | Native | Static | Public | BlueprintCallable)
};

