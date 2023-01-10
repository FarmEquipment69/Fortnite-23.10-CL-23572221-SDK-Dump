// Class /Script/FortniteGame.MeleeBlockingInterface
// Size: 0x28
class IMeleeBlockingInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.MeleeBlockingInterface.RemoveTagsToBlockWithMelee (Underlying native function: RemoveTagsToBlockWithMelee 0x7dd0970)
	void RemoveTagsToBlockWithMelee(struct FGameplayTagContainer& GameplayTagsToBlock); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.MeleeBlockingInterface.GetTagsToBlockWithMelee (Underlying native function: GetTagsToBlockWithMelee 0x7dd066c)
	struct FGameplayTagContainer GetTagsToBlockWithMelee(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.MeleeBlockingInterface.AddTagsToBlockWithMelee (Underlying native function: AddTagsToBlockWithMelee 0x7dd00fc)
	void AddTagsToBlockWithMelee(struct FGameplayTagContainer& GameplayTagsToBlock); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};

