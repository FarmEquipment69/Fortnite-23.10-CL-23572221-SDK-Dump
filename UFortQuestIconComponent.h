// Class /Script/FortniteGame.FortQuestIconComponent
// Size: 0x230
class UFortQuestIconComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	bool bControlVisibilityFromOwnerQuestObjectiveState; // 0xa8 (0x1)
	bool bInteractiveStateRequiredForVisibility; // 0xa9 (0x1)
	struct TEnumAsByte<TInteractionType> ExplicitInteractionTypeToTest; // 0xaa (0x1)
	unsigned char unreflected_ab[0x5]; // 0xab (0x5) 
	struct FFortMapIconDefinition MapIconData; // 0xb0 (0x108)
	unsigned char unreflected_1b8[0x10]; // 0x1b8 (0x10) 
	struct TScriptInterface<class IFortInteractInterface> CachedOwnerInteractInterface; // 0x1c8 (0x10)
	unsigned char unreflected_1d8[0x8]; // 0x1d8 (0x8) 
	class UUserWidget* InWorldIndicator; // 0x1e0 (0x8)
	unsigned char padding_1e8[0x48]; // 0x1e8 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.FortQuestIconComponent.SetVisibility (Underlying native function: SetVisibility 0x8497f7c)
	void SetVisibility(bool& bVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestIconComponent.SetViewDistanceRadius (Underlying native function: SetViewDistanceRadius 0x8497ee4)
	void SetViewDistanceRadius(float& ViewDistance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestIconComponent.SetIconVisibilityOnMiniMap (Underlying native function: SetIconVisibilityOnMiniMap 0x8497bf0)
	void SetIconVisibilityOnMiniMap(bool& bVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestIconComponent.SetIconVisibilityOnMap (Underlying native function: SetIconVisibilityOnMap 0x8497b68)
	void SetIconVisibilityOnMap(bool& bVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestIconComponent.SetIconVisibilityInWorld (Underlying native function: SetIconVisibilityInWorld 0x8497ae0)
	void SetIconVisibilityInWorld(bool& bVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestIconComponent.SetIconScale (Underlying native function: SetIconScale 0x8497a38)
	void SetIconScale(struct FVector2D& IconScale); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestIconComponent.SetIconPinned (Underlying native function: SetIconPinned 0x84979a8)
	void SetIconPinned(class UObject*& PinnedIcon); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestIconComponent.SetIconLocationOffset (Underlying native function: SetIconLocationOffset 0x84978e4)
	void SetIconLocationOffset(struct FVector& LocationOffset); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestIconComponent.SetIcon (Underlying native function: SetIcon 0x8497854)
	void SetIcon(class UObject*& MiniMapIcon); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestIconComponent.PerformVisibilityDistanceCheck (Underlying native function: PerformVisibilityDistanceCheck 0x8496da0)
	void PerformVisibilityDistanceCheck(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuestIconComponent.OnQuestStageChanged (Underlying native function: OnQuestStageChanged 0x8496b1c)
	void OnQuestStageChanged(class AFortPlayerController*& PlayerController, int& UpdatedQuestStage); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuestIconComponent.OnOwnerQuestReady (Underlying native function: OnOwnerQuestReady 0x8496884)
	void OnOwnerQuestReady(class AFortPlayerController*& PlayerController); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuestIconComponent.OnOwnerQuestNotReady (Underlying native function: OnOwnerQuestNotReady 0x84967c4)
	void OnOwnerQuestNotReady(class AFortPlayerController*& PlayerController); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuestIconComponent.OnOwnerObjectiveUpdated (Underlying native function: OnOwnerObjectiveUpdated 0x8496464)
	void OnOwnerObjectiveUpdated(class AFortPlayerController*& PlayerController, bool& bQuestCompleted); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuestIconComponent.OnOwnerCustomUpdateObjective (Underlying native function: OnOwnerCustomUpdateObjective 0x8496350)
	void OnOwnerCustomUpdateObjective(class AFortPlayerController*& PlayerController, int& AchievedCount, int& RequiredCount); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuestIconComponent.HandlePinnedQuestChanged (Underlying native function: HandlePinnedQuestChanged 0x84959b8)
	void HandlePinnedQuestChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortQuestIconComponent.GetViewDistanceRadius (Underlying native function: GetViewDistanceRadius 0x849572c)
	float GetViewDistanceRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

