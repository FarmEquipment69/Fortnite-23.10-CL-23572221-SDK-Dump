// Class /Script/FortniteGame.FortActorTemplatesComponent
// Size: 0x140
class UFortActorTemplatesComponent : public UActorComponent
{
	class UActorTemplateResources* TemplateResources; // 0xa0 (0x8)
	unsigned char padding_a8[0x98]; // 0xa8 (0x98)

	/* Functions */

	// Function /Script/FortniteGame.FortActorTemplatesComponent.UpdateTemplateID (Underlying native function: UpdateTemplateID 0x84fc46c)
	void UpdateTemplateID(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortActorTemplatesComponent.UpdateDeviceProperties (Underlying native function: UpdateDeviceProperties 0x84fc37c)
	void UpdateDeviceProperties(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortActorTemplatesComponent.SetDynamicOptions (Underlying native function: SetDynamicOptions 0x84fb954)
	void SetDynamicOptions(struct TArray<struct FDynamicTemplateOption>& Options); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorTemplatesComponent.SetDynamicOption (Underlying native function: SetDynamicOption 0x84fb844)
	void SetDynamicOption(struct FName& OptionName, struct TArray<class UObject*>& Objects); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorTemplatesComponent.OnPropertiesLoaded (Underlying native function: OnPropertiesLoaded 0x84fa7c8)
	void OnPropertiesLoaded(); // (Final | Native | Private)
};

