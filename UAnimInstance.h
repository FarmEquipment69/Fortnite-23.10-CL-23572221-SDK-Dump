// Class /Script/Engine.AnimInstance
// Size: 0x350
class UAnimInstance : public UObject
{
	class USkeleton* CurrentSkeleton; // 0x28 (0x8)
	struct TEnumAsByte<ERootMotionMode> RootMotionMode; // 0x30 (0x1)
	unsigned char bUseMultiThreadedAnimationUpdate; // 0x31 (0x1)
	unsigned char bUsingCopyPoseFromMesh; // 0x31 (0x1)
	unsigned char bReceiveNotifiesFromLinkedInstances; // 0x31 (0x1)
	unsigned char bPropagateNotifiesToLinkedInstances; // 0x31 (0x1)
	unsigned char bUseMainInstanceMontageEvaluationData; // 0x31 (0x1)
	unsigned char bQueueMontageEvents; // 0x31 (0x1)
	unsigned char unreflected_32[0x6]; // 0x32 (0x6) 
	struct FMulticastInlineDelegate OnMontageBlendingOut; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnMontageStarted; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnMontageEnded; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x68 (0x10)
	unsigned char unreflected_78[0xd8]; // 0x78 (0xd8) 
	struct FAnimNotifyQueue NotifyQueue; // 0x150 (0x70)
	struct TArray<struct FAnimNotifyEvent> ActiveAnimNotifyState; // 0x1c0 (0x10)
	struct TArray<struct FAnimNotifyEventReference> ActiveAnimNotifyEventReference; // 0x1d0 (0x10)
	unsigned char padding_1e0[0x170]; // 0x1e0 (0x170)

	/* Functions */

	// Function /Script/Engine.AnimInstance.WasAnimNotifyTriggeredInStateMachine (Underlying native function: WasAnimNotifyTriggeredInStateMachine 0x9a9f520)
	bool WasAnimNotifyTriggeredInStateMachine(int& MachineIndex, class UClass*& AnimNotifyType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyTriggeredInSourceState (Underlying native function: WasAnimNotifyTriggeredInSourceState 0x9a9f3f0)
	bool WasAnimNotifyTriggeredInSourceState(int& MachineIndex, int& StateIndex, class UClass*& AnimNotifyType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyTriggeredInAnyState (Underlying native function: WasAnimNotifyTriggeredInAnyState 0x9a9f348)
	bool WasAnimNotifyTriggeredInAnyState(class UClass*& AnimNotifyType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyStateActiveInStateMachine (Underlying native function: WasAnimNotifyStateActiveInStateMachine 0x9a9f260)
	bool WasAnimNotifyStateActiveInStateMachine(int& MachineIndex, class UClass*& AnimNotifyStateType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyStateActiveInSourceState (Underlying native function: WasAnimNotifyStateActiveInSourceState 0x9a9f130)
	bool WasAnimNotifyStateActiveInSourceState(int& MachineIndex, int& StateIndex, class UClass*& AnimNotifyStateType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyStateActiveInAnyState (Underlying native function: WasAnimNotifyStateActiveInAnyState 0x9a9f088)
	bool WasAnimNotifyStateActiveInAnyState(class UClass*& AnimNotifyStateType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyNameTriggeredInStateMachine (Underlying native function: WasAnimNotifyNameTriggeredInStateMachine 0x9a9efa4)
	bool WasAnimNotifyNameTriggeredInStateMachine(int& MachineIndex, struct FName& NotifyName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyNameTriggeredInSourceState (Underlying native function: WasAnimNotifyNameTriggeredInSourceState 0x9a9ee78)
	bool WasAnimNotifyNameTriggeredInSourceState(int& MachineIndex, int& StateIndex, struct FName& NotifyName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyNameTriggeredInAnyState (Underlying native function: WasAnimNotifyNameTriggeredInAnyState 0x9a9edd0)
	bool WasAnimNotifyNameTriggeredInAnyState(struct FName& NotifyName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.UnlockAIResources (Underlying native function: UnlockAIResources 0x9a9ed18)
	void UnlockAIResources(bool& bUnlockMovement, bool& UnlockAILogic); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.UnlinkAnimClassLayers (Underlying native function: UnlinkAnimClassLayers 0x662e140)
	void UnlinkAnimClassLayers(class UClass*& InClass); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.TryGetPawnOwner (Underlying native function: TryGetPawnOwner 0x291a040)
	class APawn* TryGetPawnOwner(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.StopSlotAnimation (Underlying native function: StopSlotAnimation 0x9a9ec50)
	void StopSlotAnimation(float& InBlendOutTime, struct FName& SlotNodeName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SnapshotPose (Underlying native function: SnapshotPose 0x9a9eb84)
	void SnapshotPose(struct FPoseSnapshot& Snapshot); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SetUseMainInstanceMontageEvaluationData (Underlying native function: SetUseMainInstanceMontageEvaluationData 0x9a9eb00)
	void SetUseMainInstanceMontageEvaluationData(bool& bSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SetRootMotionMode (Underlying native function: SetRootMotionMode 0x9a6e280)
	void SetRootMotionMode(struct TEnumAsByte<ERootMotionMode>& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SetReceiveNotifiesFromLinkedInstances (Underlying native function: SetReceiveNotifiesFromLinkedInstances 0x9a9ea7c)
	void SetReceiveNotifiesFromLinkedInstances(bool& bSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SetPropagateNotifiesToLinkedInstances (Underlying native function: SetPropagateNotifiesToLinkedInstances 0x9a9e9f8)
	void SetPropagateNotifiesToLinkedInstances(bool& bSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SetMorphTarget (Underlying native function: SetMorphTarget 0x9a9e930)
	void SetMorphTarget(struct FName& MorphTargetName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SavePoseSnapshot (Underlying native function: SavePoseSnapshot 0x9a9e8ac)
	void SavePoseSnapshot(struct FName& SnapshotName); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.ResetDynamics (Underlying native function: ResetDynamics 0x9a9e820)
	void ResetDynamics(enum ETeleportType& InTeleportType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.RequestTransitionEvent (Underlying native function: RequestTransitionEvent 0x9a9e6e0)
	bool RequestTransitionEvent(struct FName& EventName, double& RequestTimeout, enum ETransitionRequestQueueMode& QueueMode, enum ETransitionRequestOverwriteMode& OverwriteMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.RequestSlotGroupInertialization (Underlying native function: RequestSlotGroupInertialization 0x9a9e5e4)
	void RequestSlotGroupInertialization(struct FName& InSlotGroupName, float& Duration, class UBlendProfile*& BlendProfile); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.RemovePoseSnapshot (Underlying native function: RemovePoseSnapshot 0x9a9e518)
	void RemovePoseSnapshot(struct FName& SnapshotName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.QueryTransitionEvent (Underlying native function: QueryTransitionEvent 0x9a9e420)
	bool QueryTransitionEvent(int& MachineIndex, int& TransitionIndex, struct FName& EventName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.QueryAndMarkTransitionEvent (Underlying native function: QueryAndMarkTransitionEvent 0x9a9e294)
	bool QueryAndMarkTransitionEvent(int& MachineIndex, int& TransitionIndex, struct FName& EventName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage_WithBlendSettings (Underlying native function: PlaySlotAnimationAsDynamicMontage_WithBlendSettings 0x9a9dfa0)
	class UAnimMontage* PlaySlotAnimationAsDynamicMontageWithBlendSettings(class UAnimSequenceBase*& Asset, struct FName& SlotNodeName, struct FMontageBlendSettings& BlendInSettings, struct FMontageBlendSettings& BlendOutSettings, float& InPlayRate, int& LoopCount, float& BlendOutTriggerTime, float& InTimeToStartMontageAt); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage_WithBlendArgs (Underlying native function: PlaySlotAnimationAsDynamicMontage_WithBlendArgs 0x9a9dd0c)
	class UAnimMontage* PlaySlotAnimationAsDynamicMontageWithBlendArgs(class UAnimSequenceBase*& Asset, struct FName& SlotNodeName, struct FAlphaBlendArgs& BlendIn, struct FAlphaBlendArgs& BlendOut, float& InPlayRate, int& LoopCount, float& BlendOutTriggerTime, float& InTimeToStartMontageAt); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage (Underlying native function: PlaySlotAnimationAsDynamicMontage 0x9a9dab8)
	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase*& Asset, struct FName& SlotNodeName, float& BlendInTime, float& BlendOutTime, float& InPlayRate, int& LoopCount, float& BlendOutTriggerTime, float& InTimeToStartMontageAt); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.MontageSync_StopFollowing (Underlying native function: MontageSync_StopFollowing 0x9a9b930)
	void MontageSyncStopFollowing(class UAnimMontage*& MontageFollower); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.MontageSync_Follow (Underlying native function: MontageSync_Follow 0x9a9b6a4)
	void MontageSyncFollow(class UAnimMontage*& MontageFollower, class UAnimInstance*& OtherAnimInstance, class UAnimMontage*& MontageLeader); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_StopWithBlendSettings (Underlying native function: Montage_StopWithBlendSettings 0x9a9d9c4)
	void MontageStopWithBlendSettings(struct FMontageBlendSettings& BlendOutSettings, class UAnimMontage*& Montage); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_StopWithBlendOut (Underlying native function: Montage_StopWithBlendOut 0x9a9d8c0)
	void MontageStopWithBlendOut(struct FAlphaBlendArgs& BlendOut, class UAnimMontage*& Montage); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_StopGroupByName (Underlying native function: Montage_StopGroupByName 0x9a9d7f8)
	void MontageStopGroupByName(float& InBlendOutTime, struct FName& GroupName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_Stop (Underlying native function: Montage_Stop 0x9a9d730)
	void MontageStop(float& InBlendOutTime, class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_SetPosition (Underlying native function: Montage_SetPosition 0x9a9d668)
	void MontageSetPosition(class UAnimMontage*& Montage, float& NewPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_SetPlayRate (Underlying native function: Montage_SetPlayRate 0x9a9d5a0)
	void MontageSetPlayRate(class UAnimMontage*& Montage, float& NewPlayRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_SetNextSection (Underlying native function: Montage_SetNextSection 0x9a9d4a8)
	void MontageSetNextSection(struct FName& SectionNameToChange, struct FName& NextSection, class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_Resume (Underlying native function: Montage_Resume 0x9a9d32c)
	void MontageResume(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_PlayWithBlendSettings (Underlying native function: Montage_PlayWithBlendSettings 0x9a9cba8)
	float MontagePlayWithBlendSettings(class UAnimMontage*& MontageToPlay, struct FMontageBlendSettings& BlendInSettings, float& InPlayRate, enum EMontagePlayReturnType& ReturnValueType, float& InTimeToStartMontageAt, bool& bStopAllMontages); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_PlayWithBlendIn (Underlying native function: Montage_PlayWithBlendIn 0x9a9c404)
	float MontagePlayWithBlendIn(class UAnimMontage*& MontageToPlay, struct FAlphaBlendArgs& BlendIn, float& InPlayRate, enum EMontagePlayReturnType& ReturnValueType, float& InTimeToStartMontageAt, bool& bStopAllMontages); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_Play (Underlying native function: Montage_Play 0x9a9c27c)
	float MontagePlay(class UAnimMontage*& MontageToPlay, float& InPlayRate, enum EMontagePlayReturnType& ReturnValueType, float& InTimeToStartMontageAt, bool& bStopAllMontages); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_Pause (Underlying native function: Montage_Pause 0x9a9c118)
	void MontagePause(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_JumpToSectionsEnd (Underlying native function: Montage_JumpToSectionsEnd 0x9a9bf30)
	void MontageJumpToSectionsEnd(struct FName& SectionName, class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_JumpToSection (Underlying native function: Montage_JumpToSection 0x9a9be6c)
	void MontageJumpToSection(struct FName& SectionName, class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_IsPlaying (Underlying native function: Montage_IsPlaying 0x9a9bddc)
	bool MontageIsPlaying(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_IsActive (Underlying native function: Montage_IsActive 0x2a9c68c)
	bool MontageIsActive(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_GetPosition (Underlying native function: Montage_GetPosition 0x9a9bd4c)
	float MontageGetPosition(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_GetPlayRate (Underlying native function: Montage_GetPlayRate 0x9a9bcbc)
	float MontageGetPlayRate(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_GetIsStopped (Underlying native function: Montage_GetIsStopped 0x9a9bb78)
	bool MontageGetIsStopped(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_GetCurrentSection (Underlying native function: Montage_GetCurrentSection 0x9a9baf0)
	struct FName MontageGetCurrentSection(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_GetBlendTime (Underlying native function: Montage_GetBlendTime 0x9a9ba60)
	float MontageGetBlendTime(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.LockAIResources (Underlying native function: LockAIResources 0x9a9b5ec)
	void LockAIResources(bool& bLockMovement, bool& LockAILogic); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.LinkAnimGraphByTag (Underlying native function: LinkAnimGraphByTag 0x9a9b528)
	void LinkAnimGraphByTag(struct FName& InTag, class UClass*& InClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.LinkAnimClassLayers (Underlying native function: LinkAnimClassLayers 0x95c1c3c)
	void LinkAnimClassLayers(class UClass*& InClass); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.IsUsingMainInstanceMontageEvaluationData (Underlying native function: IsUsingMainInstanceMontageEvaluationData 0x9a9b47c)
	bool IsUsingMainInstanceMontageEvaluationData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.IsSyncGroupBetweenMarkers (Underlying native function: IsSyncGroupBetweenMarkers 0x9a9b340)
	bool IsSyncGroupBetweenMarkers(struct FName& InSyncGroupName, struct FName& PreviousMarker, struct FName& NextMarker, bool& bRespectMarkerOrder); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.IsPlayingSlotAnimation (Underlying native function: IsPlayingSlotAnimation 0x9a9b278)
	bool IsPlayingSlotAnimation(class UAnimSequenceBase*& Asset, struct FName& SlotNodeName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.IsAnyMontagePlaying (Underlying native function: IsAnyMontagePlaying 0x9a9b25c)
	bool IsAnyMontagePlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.HasMarkerBeenHitThisFrame (Underlying native function: HasMarkerBeenHitThisFrame 0x9a9b150)
	bool HasMarkerBeenHitThisFrame(struct FName& SyncGroup, struct FName& MarkerName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetTimeToClosestMarker (Underlying native function: GetTimeToClosestMarker 0x9a9b048)
	bool GetTimeToClosestMarker(struct FName& SyncGroup, struct FName& MarkerName, float& OutMarkerTime); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetSyncGroupPosition (Underlying native function: GetSyncGroupPosition 0x9a9af6c)
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(struct FName& InSyncGroupName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction (Underlying native function: GetRelevantAnimTimeRemainingFraction 0x9a9ae20)
	float GetRelevantAnimTimeRemainingFraction(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetRelevantAnimTimeRemaining (Underlying native function: GetRelevantAnimTimeRemaining 0x9a9acd4)
	float GetRelevantAnimTimeRemaining(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetRelevantAnimTimeFraction (Underlying native function: GetRelevantAnimTimeFraction 0x9a9ac10)
	float GetRelevantAnimTimeFraction(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetRelevantAnimTime (Underlying native function: GetRelevantAnimTime 0x9a9aaac)
	float GetRelevantAnimTime(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetRelevantAnimLength (Underlying native function: GetRelevantAnimLength 0x9a9a960)
	float GetRelevantAnimLength(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetReceiveNotifiesFromLinkedInstances (Underlying native function: GetReceiveNotifiesFromLinkedInstances 0x9a9a944)
	bool GetReceiveNotifiesFromLinkedInstances(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetPropagateNotifiesToLinkedInstances (Underlying native function: GetPropagateNotifiesToLinkedInstances 0x9a9a928)
	bool GetPropagateNotifiesToLinkedInstances(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetOwningComponent (Underlying native function: GetOwningComponent 0x2dfcd34)
	class USkeletalMeshComponent* GetOwningComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetOwningActor (Underlying native function: GetOwningActor 0x2b2e674)
	class AActor* GetOwningActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstancesByGroup (Underlying native function: GetLinkedAnimLayerInstancesByGroup 0x9a9a760)
	void GetLinkedAnimLayerInstancesByGroup(struct FName& InGroup, struct TArray<class UAnimInstance*>& OutLinkedInstances); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroupAndClass (Underlying native function: GetLinkedAnimLayerInstanceByGroupAndClass 0x9a9a69c)
	class UAnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(struct FName& InGroup, class UClass*& InClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup (Underlying native function: GetLinkedAnimLayerInstanceByGroup 0x9a9a610)
	class UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName& InGroup); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass (Underlying native function: GetLinkedAnimLayerInstanceByClass 0x9a9a580)
	class UAnimInstance* GetLinkedAnimLayerInstanceByClass(class UClass*& InClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag (Underlying native function: GetLinkedAnimGraphInstancesByTag 0x9a9a3e0)
	void GetLinkedAnimGraphInstancesByTag(struct FName& InTag, struct TArray<class UAnimInstance*>& OutLinkedInstances); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag (Underlying native function: GetLinkedAnimGraphInstanceByTag 0x9a9a354)
	class UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName& InTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction (Underlying native function: GetInstanceTransitionTimeElapsedFraction 0x9a9a208)
	float GetInstanceTransitionTimeElapsedFraction(int& MachineIndex, int& TransitionIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceTransitionTimeElapsed (Underlying native function: GetInstanceTransitionTimeElapsed 0x9a9a144)
	float GetInstanceTransitionTimeElapsed(int& MachineIndex, int& TransitionIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration (Underlying native function: GetInstanceTransitionCrossfadeDuration 0x9a99fd4)
	float GetInstanceTransitionCrossfadeDuration(int& MachineIndex, int& TransitionIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceStateWeight (Underlying native function: GetInstanceStateWeight 0x9a99e88)
	float GetInstanceStateWeight(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceMachineWeight (Underlying native function: GetInstanceMachineWeight 0x9a99d80)
	float GetInstanceMachineWeight(int& MachineIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceCurrentStateElapsedTime (Underlying native function: GetInstanceCurrentStateElapsedTime 0x9a99c68)
	float GetInstanceCurrentStateElapsedTime(int& MachineIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction (Underlying native function: GetInstanceAssetPlayerTimeFromEndFraction 0x9a99b60)
	float GetInstanceAssetPlayerTimeFromEndFraction(int& AssetPlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd (Underlying native function: GetInstanceAssetPlayerTimeFromEnd 0x9a99a58)
	float GetInstanceAssetPlayerTimeFromEnd(int& AssetPlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction (Underlying native function: GetInstanceAssetPlayerTimeFraction 0x9a99950)
	float GetInstanceAssetPlayerTimeFraction(int& AssetPlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTime (Underlying native function: GetInstanceAssetPlayerTime 0x9a99848)
	float GetInstanceAssetPlayerTime(int& AssetPlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerLength (Underlying native function: GetInstanceAssetPlayerLength 0x9a99740)
	float GetInstanceAssetPlayerLength(int& AssetPlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetDeltaSeconds (Underlying native function: GetDeltaSeconds 0x9a996b8)
	float GetDeltaSeconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetCurveValueWithDefault (Underlying native function: GetCurveValueWithDefault 0x9a995b0)
	bool GetCurveValueWithDefault(struct FName& CurveName, float& DefaultValue, float& OutValue); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetCurveValue (Underlying native function: GetCurveValue 0xfe104c)
	float GetCurveValue(struct FName& CurveName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetCurrentStateName (Underlying native function: GetCurrentStateName 0x9a9952c)
	struct FName GetCurrentStateName(int& MachineIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetCurrentActiveMontage (Underlying native function: GetCurrentActiveMontage 0x9a99508)
	class UAnimMontage* GetCurrentActiveMontage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetAllCurveNames (Underlying native function: GetAllCurveNames 0x9a98f64)
	void GetAllCurveNames(struct TArray<struct FName>& OutNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetActiveCurveNames (Underlying native function: GetActiveCurveNames 0x9a98e80)
	void GetActiveCurveNames(enum EAnimCurveType& CurveType, struct TArray<struct FName>& OutNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.ClearTransitionEvents (Underlying native function: ClearTransitionEvents 0x9a98d80)
	void ClearTransitionEvents(struct FName& EventName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.ClearMorphTargets (Underlying native function: ClearMorphTargets 0x9a98d6c)
	void ClearMorphTargets(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.ClearAllTransitionEvents (Underlying native function: ClearAllTransitionEvents 0x9a98cbc)
	void ClearAllTransitionEvents(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.CalculateDirection (Underlying native function: CalculateDirection 0x9a98bdc)
	float CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.BlueprintUpdateAnimation (Has no native function)
	void BlueprintUpdateAnimation(float& DeltaTimeX); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.AnimInstance.BlueprintThreadSafeUpdateAnimation (Has no native function)
	void BlueprintThreadSafeUpdateAnimation(float& DeltaTime); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.AnimInstance.BlueprintPostEvaluateAnimation (Has no native function)
	void BlueprintPostEvaluateAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.AnimInstance.BlueprintLinkedAnimationLayersInitialized (Has no native function)
	void BlueprintLinkedAnimationLayersInitialized(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.AnimInstance.BlueprintInitializeAnimation (Has no native function)
	void BlueprintInitializeAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.AnimInstance.BlueprintBeginPlay (Has no native function)
	void BlueprintBeginPlay(); // (Event | Public | BlueprintEvent)
};

