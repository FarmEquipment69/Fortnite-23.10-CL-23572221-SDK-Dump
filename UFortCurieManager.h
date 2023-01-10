// Class /Script/FortniteGame.FortCurieManager
// Size: 0x898
class UFortCurieManager : public UCurieManager
{
	unsigned char unreflected_630[0x140]; // 0x630 (0x140) 
	struct TMap<struct FGameplayTag, struct FCurieToggleComponentGroup> ToggleComponentGroups; // 0x770 (0x50)
	class UFortCurieFXManager* FXManager; // 0x7c0 (0x8)
	struct TArray<struct FGameplayTag> ValidStateIdentifiers; // 0x7c8 (0x10)
	struct TMap<struct FGameplayTag, int> StateIdentifierToIdxMap; // 0x7d8 (0x50)
	class UFortCurieSettings* CurieSettings; // 0x828 (0x8)
	struct TArray<class UCurieManagerComponentConfig*> ConfigOverrides; // 0x830 (0x10)
	unsigned char unreflected_840[0x48]; // 0x840 (0x48) 
	int CurrentlyUpdatingOverlapHandle; // 0x888 (0x4)
	int ElementOverlapMaximumTestActorsPerFrame; // 0x88c (0x4)
	float ElementOverlapMaximumDelayBetweenChecks; // 0x890 (0x4)
	bool bAllowCurieApplicationViaDamageFormulaTags; // 0x894 (0x1)
	bool bCurieElementsBlockBuildingEdit; // 0x895 (0x1)
	bool bCurieElementsBlockBuildingRepair; // 0x896 (0x1)
	unsigned char padding_897[0x1]; // 0x897 (0x1)

	/* Functions */

	// Function /Script/FortniteGame.FortCurieManager.UnbindDelegateOnToggleGroupMemberActiveStateChange (Underlying native function: UnbindDelegateOnToggleGroupMemberActiveStateChange 0x8576128)
	void UnbindDelegateOnToggleGroupMemberActiveStateChange(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieManager.UnbindDelegateOnToggleGroupFullyInactive (Underlying native function: UnbindDelegateOnToggleGroupFullyInactive 0x857604c)
	void UnbindDelegateOnToggleGroupFullyInactive(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieManager.UnbindDelegateOnToggleGroupFullyActive (Underlying native function: UnbindDelegateOnToggleGroupFullyActive 0x8575f70)
	void UnbindDelegateOnToggleGroupFullyActive(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieManager.OnToggleGroupComponentDeactivated (Underlying native function: OnToggleGroupComponentDeactivated 0x8574bb8)
	void OnToggleGroupComponentDeactivated(class UActorComponent*& InComponent); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCurieManager.OnToggleGroupComponentActivated (Underlying native function: OnToggleGroupComponentActivated 0x8574ae0)
	void OnToggleGroupComponentActivated(class UActorComponent*& InComponent, bool& bReset); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCurieManager.OnRep_ValidStateIdentifiers (Underlying native function: OnRep_ValidStateIdentifiers 0x28d3b4c)
	void OnRepValidStateIdentifiers(); // (Native | Protected)

	// Function /Script/FortniteGame.FortCurieManager.InternalPhysicsComponentAwakeChanged (Underlying native function: InternalPhysicsComponentAwakeChanged 0x857432c)
	void InternalPhysicsComponentAwakeChanged(class UPrimitiveComponent*& SimulatingComponent, bool& bIsAwake); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCurieManager.BindDelegateOnToggleGroupMemberActiveStateChange (Underlying native function: BindDelegateOnToggleGroupMemberActiveStateChange 0x85704c8)
	void BindDelegateOnToggleGroupMemberActiveStateChange(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieManager.BindDelegateOnToggleGroupFullyInactive (Underlying native function: BindDelegateOnToggleGroupFullyInactive 0x85703ec)
	void BindDelegateOnToggleGroupFullyInactive(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieManager.BindDelegateOnToggleGroupFullyActive (Underlying native function: BindDelegateOnToggleGroupFullyActive 0x8570310)
	void BindDelegateOnToggleGroupFullyActive(struct FGameplayTag& ToggleGroup, struct FDelegate& Delegate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

