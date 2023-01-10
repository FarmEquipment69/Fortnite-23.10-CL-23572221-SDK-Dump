// Class /Script/FortniteGame.FortCreativeInventoryManipComponent
// Size: 0xa0
class UFortCreativeInventoryManipComponent : public UActorComponent
{

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeInventoryManipComponent.DropSpecificItemVariant (Underlying native function: DropSpecificItemVariant 0x854c760)
	void DropSpecificItemVariant(class AController*& Controller, struct FItemVariantHandle& VariantHandle, struct FFortCreativeItemDropParams& DropParams, int& ItemRemovedCount, int& SpawnedPickupCount); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeInventoryManipComponent.DropSpecificItem (Underlying native function: DropSpecificItem 0x854c5ac)
	void DropSpecificItem(class AController*& Controller, class UFortWorldItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, struct FFortCreativeItemDropParams& DropParams, int& ItemRemovedCount, int& SpawnedPickupCount); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeInventoryManipComponent.DropItemsByItemType (Underlying native function: DropItemsByItemType 0x854c390)
	void DropItemsByItemType(class AController*& Controller, struct TArray<struct FName>& MatchCreativeTags, struct TArray<struct FName>& IgnoreCreativeTags, struct FFortCreativeItemDropParams& DropParams, int& ItemRemovedCount, int& SpawnedPickupCount, enum EFortItemType& ItemType); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeInventoryManipComponent.DropAllItems (Underlying native function: DropAllItems 0x854c254)
	void DropAllItems(class AController*& Controller, struct FFortCreativeItemDropParams& DropParams, int& ItemRemovedCount, int& SpawnedPickupCount); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

