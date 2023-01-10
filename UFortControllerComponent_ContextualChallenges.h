// Class /Script/FortniteGame.FortControllerComponent_ContextualChallenges
// Size: 0x108
class UFortControllerComponent_ContextualChallenges : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x38]; // 0xa0 (0x38) 
	struct TArray<class UFortQuestItem*> SortedContextualObjectives; // 0xd8 (0x10)
	struct TArray<class UFortQuestItem*> ContextualObjectivesToProcess; // 0xe8 (0x10)
	unsigned char padding_f8[0x10]; // 0xf8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_ContextualChallenges.GenericAircraftUpdate (Underlying native function: GenericAircraftUpdate 0x845cd84)
	void GenericAircraftUpdate(class AController*& InController); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_ContextualChallenges.FirstTimePlayerLanded (Underlying native function: FirstTimePlayerLanded 0x845c8f8)
	void FirstTimePlayerLanded(struct FHitResult& Hit); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_ContextualChallenges.ClientSetContext (Underlying native function: ClientSetContext 0x7fbc24c)
	void ClientSetContext(enum EContextualContext& NextContext); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

