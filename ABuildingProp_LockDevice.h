// Class /Script/FortniteGame.BuildingProp_LockDevice
// Size: 0xf50
class ABuildingProp_LockDevice : public ABuildingProp
{
	unsigned char unreflected_ef8[0x8]; // 0xef8 (0x8) 
	struct FMulticastInlineDelegate OnLockableActorChange; // 0xf00 (0x10)
	struct FMulticastInlineDelegate OnLockStateChange; // 0xf10 (0x10)
	struct TArray<class UBoxComponent*> InteractionCollisionComponents; // 0xf20 (0x10)
	unsigned char unreflected_f30[0x8]; // 0xf30 (0x8) 
	float SearchAreaSize; // 0xf38 (0x4)
	unsigned char unreflected_f3c[0x4]; // 0xf3c (0x4) 
	class AActor* LockableObject; // 0xf40 (0x8)
	enum ELockState CurrentLockState; // 0xf48 (0x1)
	bool HideInteractionWhenLocked; // 0xf49 (0x1)
	unsigned char padding_f4a[0x6]; // 0xf4a (0x6)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_LockDevice.UnlockObject (Underlying native function: UnlockObject 0x6e67ff8)
	void UnlockObject(class AController*& ControllerInstigator); // (BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.ToggleOpenState (Underlying native function: ToggleOpenState 0x6df70d4)
	void ToggleOpenState(class AController*& ControllerInstigator); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.ToggleLockedState (Underlying native function: ToggleLockedState 0x6df70d4)
	void ToggleLockedState(class AController*& ControllerInstigator); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.SetHighLightToLockableActor (Underlying native function: SetHighLightToLockableActor 0x8388858)
	void SetHighLightToLockableActor(class ABuildingActor*& BuildingActor, bool& bEnable); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.ReceiveOnLockStateChange (Has no native function)
	void ReceiveOnLockStateChange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.ReceiveOnLockableActorChange (Has no native function)
	void ReceiveOnLockableActorChange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.Open (Underlying native function: Open 0x8387e2c)
	void Open(class AController*& ControllerInstigator); // (BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.OnRep_LockableObject (Underlying native function: OnRep_LockableObject 0x8387850)
	void OnRepLockableObject(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.OnRep_CurrentLockState (Underlying native function: OnRep_CurrentLockState 0x83877ac)
	void OnRepCurrentLockState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.LockObject (Underlying native function: LockObject 0x6e68090)
	void LockObject(class AController*& ControllerInstigator); // (BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.HandleMinigameStateChanged (Underlying native function: HandleMinigameStateChanged 0x8384f98)
	void HandleMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& NewMinigameState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.HandleMinigameStarted (Underlying native function: HandleMinigameStarted 0x8384f5c)
	void HandleMinigameStarted(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.HandleMinigameEnded (Underlying native function: HandleMinigameEnded 0x8384f18)
	void HandleMinigameEnded(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.HandleLockableObjectDestruction (Underlying native function: HandleLockableObjectDestruction 0x6df70d4)
	void HandleLockableObjectDestruction(class AActor*& ActorDestroyed); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.FindLockableActor (Underlying native function: FindLockableActor 0x83833ec)
	class AActor* FindLockableActor(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.FindAndStoreAClosestLockableActor (Underlying native function: FindAndStoreAClosestLockableActor 0x273fd14)
	void FindAndStoreAClosestLockableActor(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.Close (Underlying native function: Close 0x8382fe4)
	void Close(class AController*& ControllerInstigator); // (BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)
};

