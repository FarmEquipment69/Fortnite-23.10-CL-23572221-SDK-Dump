// Class /Script/FortniteGame.FortGenericDataStoreManagerComponent
// Size: 0xf0
class UFortGenericDataStoreManagerComponent : public UActorComponent
{
	unsigned char ClassToNameMapping_a0[0x50]; // 0xa0 (0x50) (UNHANDLED PROPERTY TYPE: MapProperty UID: 0)

	/* Functions */

	// Function /Script/FortniteGame.FortGenericDataStoreManagerComponent.RemoveNamedStoreByType (Underlying native function: RemoveNamedStoreByType 0x84780d4)
	bool RemoveNamedStoreByType(struct FName& StoreName, class UClass*& ClassType); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGenericDataStoreManagerComponent.GetNamedStoreByType (Underlying native function: GetNamedStoreByType 0x84766ec)
	class UObject* GetNamedStoreByType(struct FName& StoreName, class UClass*& ClassType); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGenericDataStoreManagerComponent.AddNamedStoreByType (Underlying native function: AddNamedStoreByType 0x8475114)
	class UObject* AddNamedStoreByType(struct FName& StoreName, class UClass*& ClassType); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

