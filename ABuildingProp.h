// Class /Script/FortniteGame.BuildingProp
// Size: 0xef8
class ABuildingProp : public ABuildingTimeOfDayLights
{
	unsigned char unreflected_e10[0x8]; // 0xe10 (0x8) 
	struct FGameplayTagContainer AnalyticsTags; // 0xe18 (0x20)
	unsigned char bSuppressSimpleInteractionWidgetForTouch; // 0xe38 (0x1)
	unsigned char bUseDamageSet; // 0xe38 (0x1)
	unsigned char bIsBuildingVolume; // 0xe38 (0x1)
	unsigned char bCanBeMarked; // 0xe38 (0x1)
	unsigned char bBlockMarking; // 0xe38 (0x1)
	unsigned char unreflected_e39[0x7]; // 0xe39 (0x7) 
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xe40 (0x98)
	struct FVector MarkerPositionOffset; // 0xed8 (0x18)
	unsigned char bDoNotBlockMarkerTraceWhenOverlappingPlayer; // 0xef0 (0x1)
	unsigned char padding_ef1[0x7]; // 0xef1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp.SetAsBuildingVolume (Underlying native function: SetAsBuildingVolume 0x8388454)
	void SetAsBuildingVolume(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp.IsBuildingVolume (Underlying native function: IsBuildingVolume 0x8385c24)
	bool IsBuildingVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingProp.GetBoundingBoxWithIgnoredComponents (Underlying native function: GetBoundingBoxWithIgnoredComponents 0x8383ad0)
	struct FBox GetBoundingBoxWithIgnoredComponents(struct TArray<class UPrimitiveComponent*>& IgnoredComponents, bool& bNonColliding, bool& bIncludeFromChildActors); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingProp.BP_GetEyesViewpoint (Underlying native function: BP_GetEyesViewpoint 0x83824ac)
	void BPGetEyesViewpoint(struct FVector& OutLocation, struct FRotator& OutRotation); // (0x00000002 | Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingProp.BP_GetComponentsBoundingBox (Underlying native function: BP_GetComponentsBoundingBox 0x270314c)
	struct FBox BPGetComponentsBoundingBox(bool& bNonColliding, bool& bIncludeFromChildActors); // (0x00000002 | Native | Event | Public | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingProp.BlueprintModifyIncomingDamage (Underlying native function: BlueprintModifyIncomingDamage 0x83827bc)
	float BlueprintModifyIncomingDamage(float& Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& DamageCauser); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent)
};

