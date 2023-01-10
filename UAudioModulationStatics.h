// Class /Script/AudioModulation.AudioModulationStatics
// Size: 0x28
class UAudioModulationStatics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AudioModulation.AudioModulationStatics.UpdateModulator (Underlying native function: UpdateModulator 0x773efc8)
	static void UpdateModulator(class UObject*& WorldContextObject, class USoundModulatorBase*& Modulator); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMixFromObject (Underlying native function: UpdateMixFromObject 0x773eea4)
	static void UpdateMixFromObject(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMixByFilter (Underlying native function: UpdateMixByFilter 0x773eb5c)
	static void UpdateMixByFilter(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix, struct FString& AddressFilter, class UClass*& ParamClassFilter, class USoundModulationParameter*& ParamFilter, float& Value, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.UpdateMix (Underlying native function: UpdateMix 0x773e988)
	static void UpdateMix(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix, struct TArray<struct FSoundControlBusMixStage>& Stages, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.SetGlobalBusMixValue (Underlying native function: SetGlobalBusMixValue 0x773e7dc)
	static void SetGlobalBusMixValue(class UObject*& WorldContextObject, class USoundControlBus*& Bus, float& Value, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.SaveMixToProfile (Underlying native function: SaveMixToProfile 0x773e6cc)
	static void SaveMixToProfile(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix, int& ProfileIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.LoadMixFromProfile (Underlying native function: LoadMixFromProfile 0x773e4c0)
	static struct TArray<struct FSoundControlBusMixStage> LoadMixFromProfile(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix, bool& bActivate, int& ProfileIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateGenerator (Underlying native function: DeactivateGenerator 0x773e2e0)
	static void DeactivateGenerator(class UObject*& WorldContextObject, class USoundModulationGenerator*& Generator); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateBusMix (Underlying native function: DeactivateBusMix 0x773e214)
	static void DeactivateBusMix(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.DeactivateBus (Underlying native function: DeactivateBus 0x773e0f4)
	static void DeactivateBus(class UObject*& WorldContextObject, class USoundControlBus*& Bus); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.CreateBusMixStage (Underlying native function: CreateBusMixStage 0x773def0)
	static struct FSoundControlBusMixStage CreateBusMixStage(class UObject*& WorldContextObject, class USoundControlBus*& Bus, float& Value, float& AttackTime, float& ReleaseTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.CreateBusMix (Underlying native function: CreateBusMix 0x773dd5c)
	static class USoundControlBusMix* CreateBusMix(class UObject*& WorldContextObject, struct FName& Name, struct TArray<struct FSoundControlBusMixStage>& Stages, bool& Activate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.CreateBus (Underlying native function: CreateBus 0x773dc24)
	static class USoundControlBus* CreateBus(class UObject*& WorldContextObject, struct FName& Name, class USoundModulationParameter*& Parameter, bool& Activate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.ClearGlobalBusMixValue (Underlying native function: ClearGlobalBusMixValue 0x773db00)
	static void ClearGlobalBusMixValue(class UObject*& WorldContextObject, class USoundControlBus*& Bus, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.ClearAllGlobalBusMixValues (Underlying native function: ClearAllGlobalBusMixValues 0x773da48)
	static void ClearAllGlobalBusMixValues(class UObject*& WorldContextObject, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.ActivateGenerator (Underlying native function: ActivateGenerator 0x773d968)
	static void ActivateGenerator(class UObject*& WorldContextObject, class USoundModulationGenerator*& Generator); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.ActivateBusMix (Underlying native function: ActivateBusMix 0x773d89c)
	static void ActivateBusMix(class UObject*& WorldContextObject, class USoundControlBusMix*& Mix); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioModulation.AudioModulationStatics.ActivateBus (Underlying native function: ActivateBus 0x773d7d0)
	static void ActivateBus(class UObject*& WorldContextObject, class USoundControlBus*& Bus); // (Final | Native | Static | Public | BlueprintCallable)
};

