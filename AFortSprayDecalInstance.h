// Class /Script/FortniteGame.FortSprayDecalInstance
// Size: 0xe10
class AFortSprayDecalInstance : public ABuildingSMActor
{
	struct FFortSprayDecalRepPayload SprayInfo; // 0xde0 (0x18)
	unsigned char bDestroyOnNearbyDestruction; // 0xdf8 (0x1)
	unsigned char bDestroyOnNearbyDamageTaken; // 0xdf8 (0x1)
	unsigned char bDestroyOnNearbyBounce; // 0xdf8 (0x1)
	unsigned char unreflected_df9[0x7]; // 0xdf9 (0x7) 
	struct TArray<class UMaterialInstanceDynamic*> SprayMIDsThatCanBounce; // 0xe00 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortSprayDecalInstance.StartSprayFadeOutDueToNewPlacement (Underlying native function: StartSprayFadeOutDueToNewPlacement 0x282ebc0)
	void StartSprayFadeOutDueToNewPlacement(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortSprayDecalInstance.SetSprayParameters (Underlying native function: SetSprayParameters 0x85eb544)
	void SetSprayParameters(class AFortPlayerController*& SpawningPC, class UAthenaSprayItemDefinition*& InSprayAsset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSprayDecalInstance.OnSprayInfoReady (Has no native function)
	void OnSprayInfoReady(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSprayDecalInstance.OnRep_SprayInfo (Underlying native function: OnRep_SprayInfo 0x85e8218)
	void OnRepSprayInfo(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortSprayDecalInstance.OnBounceOccurs (Has no native function)
	void OnBounceOccurs(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSprayDecalInstance.GetSpraySortOrder (Underlying native function: GetSpraySortOrder 0x85e6bb4)
	int GetSpraySortOrder(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

