// Class /Script/FortniteGame.FortMutatorOwner
// Size: 0x28
class IFortMutatorOwner : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortMutatorOwner.RemoveMutatorFromList (Underlying native function: RemoveMutatorFromList 0x7dc90c0)
	void RemoveMutatorFromList(class AFortGameplayMutator*& Mutator); // (Native | Public)

	// Function /Script/FortniteGame.FortMutatorOwner.GetMutatorRelevantPlayers (Underlying native function: GetMutatorRelevantPlayers 0x80cf00c)
	void GetMutatorRelevantPlayers(struct TArray<class APlayerState*>& OutPlayers); // (Native | Public | HasOutParms | Const)

	// Function /Script/FortniteGame.FortMutatorOwner.AddMutatorToList (Underlying native function: AddMutatorToList 0x80ceb9c)
	void AddMutatorToList(class AFortGameplayMutator*& Mutator); // (Native | Public)
};

