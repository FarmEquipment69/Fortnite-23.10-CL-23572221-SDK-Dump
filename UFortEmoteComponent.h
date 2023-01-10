// Class /Script/FortniteGame.FortEmoteComponent
// Size: 0xa8
class UFortEmoteComponent : public UActorComponent
{
	unsigned char unreflected_a8[0xa8]; 

	/* Functions */

	// Function /Script/FortniteGame.FortEmoteComponent.SpawnPersistentProp (Underlying native function: SpawnPersistentProp 0x7f668e4)
	class AFortPersistentProp* SpawnPersistentProp(class UClass*& PropClass, struct FName& AttachSocket); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortEmoteComponent.GetActivePersistentProp (Underlying native function: GetActivePersistentProp 0x26e160c)
	class AFortPersistentProp* GetActivePersistentProp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortEmoteComponent.DespawnActivePersistentProp (Underlying native function: DespawnActivePersistentProp 0x7f66638)
	void DespawnActivePersistentProp(bool& bShouldInstantDestroy); // (Final | Native | Public | BlueprintCallable)
};

