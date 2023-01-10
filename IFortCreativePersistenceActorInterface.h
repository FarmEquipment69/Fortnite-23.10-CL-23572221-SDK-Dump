// Class /Script/FortniteGame.FortCreativePersistenceActorInterface
// Size: 0x28
class IFortCreativePersistenceActorInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortCreativePersistenceActorInterface.GetPersistenceRequiredState (Underlying native function: GetPersistenceRequiredState 0x20fb39c)
	bool GetPersistenceRequiredState(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortCreativePersistenceActorInterface.GetObjectToAutoSaveForPlayer (Underlying native function: GetObjectToAutoSaveForPlayer 0x851d5f4)
	class UObject* GetObjectToAutoSaveForPlayer(class AFortPlayerState*& FortPlayerState); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativePersistenceActorInterface.CanPlayerAutoSave (Underlying native function: CanPlayerAutoSave 0x851bac8)
	bool CanPlayerAutoSave(class AFortPlayerState*& FortPlayerState); // (Native | Event | Public | BlueprintEvent | Const)
};

