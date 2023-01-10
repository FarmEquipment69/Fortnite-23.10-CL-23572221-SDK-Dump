// Class /Script/FortniteGame.FortTreadVehicle
// Size: 0x1980
class AFortTreadVehicle : public AFortAthenaVehicle
{
	unsigned char unreflected_1940[0x18]; // 0x1940 (0x18) 
	class UClass* ConfigsClass; // 0x1958 (0x8)
	class UFortTreadVehicleConfigs* FortTreadVehicleConfigs; // 0x1960 (0x8)
	unsigned char unreflected_1968[0x8]; // 0x1968 (0x8) 
	bool bLeftTreadEnabled; // 0x1970 (0x1)
	bool bRightTreadEnabled; // 0x1971 (0x1)
	unsigned char padding_1972[0xe]; // 0x1972 (0xe)

	/* Functions */

	// Function /Script/FortniteGame.FortTreadVehicle.SetRightTreadEnabled (Underlying native function: SetRightTreadEnabled 0x8dd92c4)
	void SetRightTreadEnabled(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTreadVehicle.SetLeftTreadEnabled (Underlying native function: SetLeftTreadEnabled 0x8dd9244)
	void SetLeftTreadEnabled(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTreadVehicle.OnTreadEnabled (Has no native function)
	void OnTreadEnabled(bool& bEnabled, struct TEnumAsByte<ETreadSide>& Side); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTreadVehicle.OnTreadDecompressed (Has no native function)
	void OnTreadDecompressed(struct FHitResult& HitResult, float& Compression, float& CompressionVelocity); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTreadVehicle.OnTreadCompressed (Has no native function)
	void OnTreadCompressed(struct FHitResult& HitResult, float& Compression, float& CompressionVelocity); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortTreadVehicle.IsRightTreadEnabled (Underlying native function: IsRightTreadEnabled 0x8dd8f1c)
	bool IsRightTreadEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTreadVehicle.IsLeftTreadEnabled (Underlying native function: IsLeftTreadEnabled 0x8dd8f04)
	bool IsLeftTreadEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTreadVehicle.GetTreadVelocity (Underlying native function: GetTreadVelocity 0x8dd8df8)
	float GetTreadVelocity(struct TEnumAsByte<ETreadSide>& Side, struct TEnumAsByte<EVelocityUnits>& Units); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTreadVehicle.GetTreadPower (Underlying native function: GetTreadPower 0x8dd8d30)
	float GetTreadPower(struct TEnumAsByte<ETreadSide>& Side, bool& bClamp); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTreadVehicle.GetTreadContactPoints (Underlying native function: GetTreadContactPoints 0x8dd8bb8)
	bool GetTreadContactPoints(struct TArray<struct FVector>& OutTreadContactPoints, struct TEnumAsByte<ETreadSide>& TreadSide, bool& bIncludeMisses, bool& bOrdered); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTreadVehicle.GetTreadCompression (Underlying native function: GetTreadCompression 0x8dd8b90)
	float GetTreadCompression(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

