// Class /Script/AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x28
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission (Underlying native function: CheckPermission 0x7499618)
	static bool CheckPermission(struct FString& Permission); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions (Underlying native function: AcquirePermissions 0x7499534)
	static class UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString>& Permissions); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

