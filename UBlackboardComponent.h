// Class /Script/AIModule.BlackboardComponent
// Size: 0x1a8
class UBlackboardComponent : public UActorComponent
{
	class UBrainComponent* BrainComp; // 0xa0 (0x8)
	class UBlackboardData* DefaultBlackboardAsset; // 0xa8 (0x8)
	class UBlackboardData* BlackboardAsset; // 0xb0 (0x8)
	unsigned char unreflected_b8[0x20]; // 0xb8 (0x20) 
	struct TArray<class UBlackboardKeyType*> KeyInstances; // 0xd8 (0x10)
	unsigned char padding_e8[0xc0]; // 0xe8 (0xc0)

	/* Functions */

	// Function /Script/AIModule.BlackboardComponent.SetValueAsVector (Underlying native function: SetValueAsVector 0x9fca434)
	void SetValueAsVector(struct FName& KeyName, struct FVector& VectorValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsString (Underlying native function: SetValueAsString 0x9fca248)
	void SetValueAsString(struct FName& KeyName, struct FString& StringValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsRotator (Underlying native function: SetValueAsRotator 0x9fca154)
	void SetValueAsRotator(struct FName& KeyName, struct FRotator& VectorValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsObject (Underlying native function: SetValueAsObject 0x9fca074)
	void SetValueAsObject(struct FName& KeyName, class UObject*& ObjectValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsName (Underlying native function: SetValueAsName 0x9fc9f98)
	void SetValueAsName(struct FName& KeyName, struct FName& NameValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsInt (Underlying native function: SetValueAsInt 0x9fc9ebc)
	void SetValueAsInt(struct FName& KeyName, int& IntValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsFloat (Underlying native function: SetValueAsFloat 0x9fc9dd8)
	void SetValueAsFloat(struct FName& KeyName, float& FloatValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsEnum (Underlying native function: SetValueAsEnum 0x9fc9cf8)
	void SetValueAsEnum(struct FName& KeyName, unsigned char& EnumValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsClass (Underlying native function: SetValueAsClass 0x9fc9c18)
	void SetValueAsClass(struct FName& KeyName, class UClass*& ClassValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsBool (Underlying native function: SetValueAsBool 0x9fc9b2c)
	void SetValueAsBool(struct FName& KeyName, bool& BoolValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.IsVectorValueSet (Underlying native function: IsVectorValueSet 0x9fc8b2c)
	bool IsVectorValueSet(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsVector (Underlying native function: GetValueAsVector 0x9fc8988)
	struct FVector GetValueAsVector(struct FName& KeyName); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsString (Underlying native function: GetValueAsString 0x9fc87e8)
	struct FString GetValueAsString(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsRotator (Underlying native function: GetValueAsRotator 0x9fc8734)
	struct FRotator GetValueAsRotator(struct FName& KeyName); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsObject (Underlying native function: GetValueAsObject 0x9fc8694)
	class UObject* GetValueAsObject(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsName (Underlying native function: GetValueAsName 0x9fc85ec)
	struct FName GetValueAsName(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsInt (Underlying native function: GetValueAsInt 0x9fc854c)
	int GetValueAsInt(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsFloat (Underlying native function: GetValueAsFloat 0x9fc84ac)
	float GetValueAsFloat(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsEnum (Underlying native function: GetValueAsEnum 0x9fc840c)
	unsigned char GetValueAsEnum(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsClass (Underlying native function: GetValueAsClass 0x9fc836c)
	class UClass* GetValueAsClass(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsBool (Underlying native function: GetValueAsBool 0x9fc82cc)
	bool GetValueAsBool(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry (Underlying native function: GetRotationFromEntry 0x9fc811c)
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry (Underlying native function: GetLocationFromEntry 0x9fc7ed8)
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.ClearValue (Underlying native function: ClearValue 0x9fc714c)
	void ClearValue(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

