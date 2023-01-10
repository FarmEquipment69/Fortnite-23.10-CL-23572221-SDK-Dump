// Class /Script/FortniteGame.FortCustomizableAbilityDecoTool
// Size: 0x10c8
class AFortCustomizableAbilityDecoTool : public AFortAbilityDecoTool
{
	bool bExecuteToolAbilityOnPress; // 0x10c0 (0x1)
	unsigned char padding_10c1[0x7]; // 0x10c1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.ServerReleaseTrigger (Underlying native function: ServerReleaseTrigger 0x8e43bb4)
	void ServerReleaseTrigger(); // (BlueprintCosmetic | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.ServerReleaseSecondaryFire (Underlying native function: ServerReleaseSecondaryFire 0x8e43b68)
	void ServerReleaseSecondaryFire(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.ServerPressTrigger (Underlying native function: ServerPressTrigger 0x8e43b1c)
	void ServerPressTrigger(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.ServerPressSecondaryFire (Underlying native function: ServerPressSecondaryFire 0x8e43ad0)
	void ServerPressSecondaryFire(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.ExecuteDecoAbility (Underlying native function: ExecuteDecoAbility 0x8e4167c)
	void ExecuteDecoAbility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPServerReleaseSecondaryFire (Underlying native function: BPServerReleaseSecondaryFire 0x8e41178)
	void BPServerReleaseSecondaryFire(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPServerPressSecondaryFire (Underlying native function: BPServerPressSecondaryFire 0x8e41130)
	void BPServerPressSecondaryFire(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPReleaseTrigger (Underlying native function: BPReleaseTrigger 0x8e410ac)
	void BPReleaseTrigger(class AFortDecoHelper*& FortDecoHelper); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPReleaseSecondaryFire (Underlying native function: BPReleaseSecondaryFire 0x8e41028)
	void BPReleaseSecondaryFire(class AFortDecoHelper*& FortDecoHelper); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPPressTrigger (Underlying native function: BPPressTrigger 0x8e40fa4)
	void BPPressTrigger(class AFortDecoHelper*& FortDecoHelper); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPPressSecondaryFire (Underlying native function: BPPressSecondaryFire 0x8e0c364)
	void BPPressSecondaryFire(class AFortDecoHelper*& FortDecoHelper); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPOnUnEquip (Has no native function)
	void BPOnUnEquip(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPOnSetDecoObjectPreview (Has no native function)
	void BPOnSetDecoObjectPreview(class AFortDecoHelper*& FortDecoHelper); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPOnEquip (Has no native function)
	void BPOnEquip(class AFortWeapon*& OldWeapon); // (Event | Public | BlueprintEvent)
};

