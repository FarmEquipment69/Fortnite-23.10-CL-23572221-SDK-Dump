// Class /Script/AIModule.BTFunctionLibrary
// Size: 0x28
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AIModule.BTFunctionLibrary.StopUsingExternalEvent (Underlying native function: StopUsingExternalEvent 0x6df70d4)
	static void StopUsingExternalEvent(class UBTNode*& NodeOwner); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.StartUsingExternalEvent (Underlying native function: StartUsingExternalEvent 0x6d23ca0)
	static void StartUsingExternalEvent(class UBTNode*& NodeOwner, class AActor*& OwningActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsVector (Underlying native function: SetBlackboardValueAsVector 0x9fc9904)
	static void SetBlackboardValueAsVector(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, struct FVector& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsString (Underlying native function: SetBlackboardValueAsString 0x9fc972c)
	static void SetBlackboardValueAsString(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, struct FString& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator (Underlying native function: SetBlackboardValueAsRotator 0x9fc95cc)
	static void SetBlackboardValueAsRotator(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsObject (Underlying native function: SetBlackboardValueAsObject 0x9fc947c)
	static void SetBlackboardValueAsObject(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, class UObject*& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsName (Underlying native function: SetBlackboardValueAsName 0x9fc9308)
	static void SetBlackboardValueAsName(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, struct FName& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsInt (Underlying native function: SetBlackboardValueAsInt 0x9fc9194)
	static void SetBlackboardValueAsInt(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, int& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat (Underlying native function: SetBlackboardValueAsFloat 0x9fc9050)
	static void SetBlackboardValueAsFloat(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, float& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum (Underlying native function: SetBlackboardValueAsEnum 0x9fc8edc)
	static void SetBlackboardValueAsEnum(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, unsigned char& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsClass (Underlying native function: SetBlackboardValueAsClass 0x9fc8d68)
	static void SetBlackboardValueAsClass(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, class UClass*& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsBool (Underlying native function: SetBlackboardValueAsBool 0x9fc8c04)
	static void SetBlackboardValueAsBool(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, bool& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.GetOwnersBlackboard (Underlying native function: GetOwnersBlackboard 0x9fc806c)
	static class UBlackboardComponent* GetOwnersBlackboard(class UBTNode*& NodeOwner); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetOwnerComponent (Underlying native function: GetOwnerComponent 0x9fc7fd4)
	static class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode*& NodeOwner); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsVector (Underlying native function: GetBlackboardValueAsVector 0x9fc7d84)
	static struct FVector GetBlackboardValueAsVector(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsString (Underlying native function: GetBlackboardValueAsString 0x9fc7c34)
	static struct FString GetBlackboardValueAsString(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator (Underlying native function: GetBlackboardValueAsRotator 0x9fc7b10)
	static struct FRotator GetBlackboardValueAsRotator(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsObject (Underlying native function: GetBlackboardValueAsObject 0x9fc79fc)
	static class UObject* GetBlackboardValueAsObject(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsName (Underlying native function: GetBlackboardValueAsName 0x9fc78d0)
	static struct FName GetBlackboardValueAsName(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsInt (Underlying native function: GetBlackboardValueAsInt 0x9fc77a8)
	static int GetBlackboardValueAsInt(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat (Underlying native function: GetBlackboardValueAsFloat 0x9fc7694)
	static float GetBlackboardValueAsFloat(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum (Underlying native function: GetBlackboardValueAsEnum 0x9fc756c)
	static unsigned char GetBlackboardValueAsEnum(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsClass (Underlying native function: GetBlackboardValueAsClass 0x9fc7444)
	static class UClass* GetBlackboardValueAsClass(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsBool (Underlying native function: GetBlackboardValueAsBool 0x9fc731c)
	static bool GetBlackboardValueAsBool(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsActor (Underlying native function: GetBlackboardValueAsActor 0x9fc71e8)
	static class AActor* GetBlackboardValueAsActor(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector (Underlying native function: ClearBlackboardValueAsVector 0x9fc7030)
	static void ClearBlackboardValueAsVector(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValue (Underlying native function: ClearBlackboardValue 0x9fc7030)
	static void ClearBlackboardValue(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

