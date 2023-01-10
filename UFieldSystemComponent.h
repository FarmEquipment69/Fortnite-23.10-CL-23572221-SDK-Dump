// Class /Script/FieldSystemEngine.FieldSystemComponent
// Size: 0x600
class UFieldSystemComponent : public UPrimitiveComponent
{
	class UFieldSystem* FieldSystem; // 0x530 (0x8)
	bool bIsWorldField; // 0x538 (0x1)
	bool bIsChaosField; // 0x539 (0x1)
	unsigned char unreflected_53a[0x6]; // 0x53a (0x6) 
	struct TArray<struct TWeakObjectPtr<class AChaosSolverActor>> SupportedSolvers; // 0x540 (0x10)
	struct FFieldObjectCommands ConstructionCommands; // 0x550 (0x30)
	struct FFieldObjectCommands BufferCommands; // 0x580 (0x30)
	unsigned char padding_5b0[0x50]; // 0x5b0 (0x50)

	/* Functions */

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem (Underlying native function: ResetFieldSystem 0x97cb328)
	void ResetFieldSystem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.RemovePersistentFields (Underlying native function: RemovePersistentFields 0x27ebc34)
	void RemovePersistentFields(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce (Underlying native function: ApplyUniformVectorFalloffForce 0x97cb16c)
	void ApplyUniformVectorFalloffForce(bool& Enabled, struct FVector& Position, struct FVector& Direction, float& Radius, float& Magnitude); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField (Underlying native function: ApplyStrainField 0x97cafd0)
	void ApplyStrainField(bool& Enabled, struct FVector& Position, float& Radius, float& Magnitude, int& Iterations); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField (Underlying native function: ApplyStayDynamicField 0x97caeb0)
	void ApplyStayDynamicField(bool& Enabled, struct FVector& Position, float& Radius); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce (Underlying native function: ApplyRadialVectorFalloffForce 0x97cad50)
	void ApplyRadialVectorFalloffForce(bool& Enabled, struct FVector& Position, float& Radius, float& Magnitude); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce (Underlying native function: ApplyRadialForce 0x97cac30)
	void ApplyRadialForce(bool& Enabled, struct FVector& Position, float& Magnitude); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField (Underlying native function: ApplyPhysicsField 0x97caadc)
	void ApplyPhysicsField(bool& Enabled, struct TEnumAsByte<EFieldPhysicsType>& Target, class UFieldSystemMetaData*& MetaData, class UFieldNodeBase*& Field); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce (Underlying native function: ApplyLinearForce 0x97ca9bc)
	void ApplyLinearForce(bool& Enabled, struct FVector& Direction, float& Magnitude); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddPersistentField (Underlying native function: AddPersistentField 0x259f178)
	void AddPersistentField(bool& Enabled, struct TEnumAsByte<EFieldPhysicsType>& Target, class UFieldSystemMetaData*& MetaData, class UFieldNodeBase*& Field); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand (Underlying native function: AddFieldCommand 0x97ca86c)
	void AddFieldCommand(bool& Enabled, struct TEnumAsByte<EFieldPhysicsType>& Target, class UFieldSystemMetaData*& MetaData, class UFieldNodeBase*& Field); // (Final | Native | Public | BlueprintCallable)
};

