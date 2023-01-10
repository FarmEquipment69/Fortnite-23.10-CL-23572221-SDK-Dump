// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack
// Size: 0x11e0
class UCustomCharacterPartAnimInstance_TowerSentinelPack : public UCustomCharacterPartAnimInstance
{
	struct FVector WindVector; // 0x6e8 (0x18)
	struct FVector FinalGravity; // 0x700 (0x18)
	float IsEmotingAlpha; // 0x718 (0x4)
	float JumpingAlpha; // 0x71c (0x4)
	struct FVector CompLinearVelScale; // 0x720 (0x18)
	struct FVector CompLinearAccScale; // 0x738 (0x18)
	float SkydivingForceScale; // 0x750 (0x4)
	unsigned char unreflected_754[0x4]; // 0x754 (0x4) 
	struct FVector NonSkydivingWindVector; // 0x758 (0x18)
	struct FName DanceGravityBoneName; // 0x770 (0x4)
	struct FName DanceGravityBaseName; // 0x774 (0x4)
	float DanceGravityInflectionAngle; // 0x778 (0x4)
	float IsEmotingAlphaMin; // 0x77c (0x4)
	float IsEmotingAlphaMax; // 0x780 (0x4)
	float JumpingAlphaMin; // 0x784 (0x4)
	float JumpingAlphaMax; // 0x788 (0x4)
	unsigned char unreflected_78c[0x4]; // 0x78c (0x4) 
	struct FVector SkydivingCompLinearScale; // 0x790 (0x18)
	struct FVector NonSkydivingCompLinearScale; // 0x7a8 (0x18)
	struct FRotator IndexA; // 0x7c0 (0x18)
	struct FRotator IndexB; // 0x7d8 (0x18)
	struct FRotator IndexC; // 0x7f0 (0x18)
	struct FRotator IndexAAmplitudes; // 0x808 (0x18)
	struct FRotator IndexAFrequencies; // 0x820 (0x18)
	struct FRotator IndexAOffsets; // 0x838 (0x18)
	struct FVector IndexAMin; // 0x850 (0x18)
	struct FVector IndexAMax; // 0x868 (0x18)
	struct FRotator IndexBAmplitudes; // 0x880 (0x18)
	struct FRotator IndexBFrequencies; // 0x898 (0x18)
	struct FRotator IndexBOffsets; // 0x8b0 (0x18)
	struct FVector IndexBMin; // 0x8c8 (0x18)
	struct FVector IndexBMax; // 0x8e0 (0x18)
	struct FRotator IndexCAmplitudes; // 0x8f8 (0x18)
	struct FRotator IndexCFrequencies; // 0x910 (0x18)
	struct FRotator IndexCOffsets; // 0x928 (0x18)
	struct FVector IndexCMin; // 0x940 (0x18)
	struct FVector IndexCMax; // 0x958 (0x18)
	struct FRotator MiddleA; // 0x970 (0x18)
	struct FRotator MiddleB; // 0x988 (0x18)
	struct FRotator MiddleC; // 0x9a0 (0x18)
	struct FRotator MiddleAAmplitudes; // 0x9b8 (0x18)
	struct FRotator MiddleAFrequencies; // 0x9d0 (0x18)
	struct FRotator MiddleAOffsets; // 0x9e8 (0x18)
	struct FVector MiddleAMin; // 0xa00 (0x18)
	struct FVector MiddleAMax; // 0xa18 (0x18)
	struct FRotator MiddleBAmplitudes; // 0xa30 (0x18)
	struct FRotator MiddleBFrequencies; // 0xa48 (0x18)
	struct FRotator MiddleBOffsets; // 0xa60 (0x18)
	struct FVector MiddleBMin; // 0xa78 (0x18)
	struct FVector MiddleBMax; // 0xa90 (0x18)
	struct FRotator MiddleCAmplitudes; // 0xaa8 (0x18)
	struct FRotator MiddleCFrequencies; // 0xac0 (0x18)
	struct FRotator MiddleCOffsets; // 0xad8 (0x18)
	struct FVector MiddleCMin; // 0xaf0 (0x18)
	struct FVector MiddleCMax; // 0xb08 (0x18)
	struct FRotator RingA; // 0xb20 (0x18)
	struct FRotator RingB; // 0xb38 (0x18)
	struct FRotator RingC; // 0xb50 (0x18)
	struct FRotator RingAAmplitudes; // 0xb68 (0x18)
	struct FRotator RingAFrequencies; // 0xb80 (0x18)
	struct FRotator RingAOffsets; // 0xb98 (0x18)
	struct FVector RingAMin; // 0xbb0 (0x18)
	struct FVector RingAMax; // 0xbc8 (0x18)
	struct FRotator RingBAmplitudes; // 0xbe0 (0x18)
	struct FRotator RingBFrequencies; // 0xbf8 (0x18)
	struct FRotator RingBOffsets; // 0xc10 (0x18)
	struct FVector RingBMin; // 0xc28 (0x18)
	struct FVector RingBMax; // 0xc40 (0x18)
	struct FRotator RingCAmplitudes; // 0xc58 (0x18)
	struct FRotator RingCFrequencies; // 0xc70 (0x18)
	struct FRotator RingCOffsets; // 0xc88 (0x18)
	struct FVector RingCMin; // 0xca0 (0x18)
	struct FVector RingCMax; // 0xcb8 (0x18)
	struct FRotator PinkyA; // 0xcd0 (0x18)
	struct FRotator PinkyB; // 0xce8 (0x18)
	struct FRotator PinkyC; // 0xd00 (0x18)
	struct FRotator PinkyAAmplitudes; // 0xd18 (0x18)
	struct FRotator PinkyAFrequencies; // 0xd30 (0x18)
	struct FRotator PinkyAOffsets; // 0xd48 (0x18)
	struct FVector PinkyAMin; // 0xd60 (0x18)
	struct FVector PinkyAMax; // 0xd78 (0x18)
	struct FRotator PinkyBAmplitudes; // 0xd90 (0x18)
	struct FRotator PinkyBFrequencies; // 0xda8 (0x18)
	struct FRotator PinkyBOffsets; // 0xdc0 (0x18)
	struct FVector PinkyBMin; // 0xdd8 (0x18)
	struct FVector PinkyBMax; // 0xdf0 (0x18)
	struct FRotator PinkyCAmplitudes; // 0xe08 (0x18)
	struct FRotator PinkyCFrequencies; // 0xe20 (0x18)
	struct FRotator PinkyCOffsets; // 0xe38 (0x18)
	struct FVector PinkyCMin; // 0xe50 (0x18)
	struct FVector PinkyCMax; // 0xe68 (0x18)
	struct FVector BodyRootTran; // 0xe80 (0x18)
	struct FRotator BodyRootRot; // 0xe98 (0x18)
	struct FVector PelvisTran; // 0xeb0 (0x18)
	struct FRotator PelvisRot; // 0xec8 (0x18)
	struct FVector RootTran; // 0xee0 (0x18)
	struct FRotator RootRot; // 0xef8 (0x18)
	struct FVector ThighLTran; // 0xf10 (0x18)
	struct FRotator ThighLRot; // 0xf28 (0x18)
	struct FVector ThighRTran; // 0xf40 (0x18)
	struct FRotator ThighRRot; // 0xf58 (0x18)
	struct FVector CalfLTran; // 0xf70 (0x18)
	struct FRotator CalfLRot; // 0xf88 (0x18)
	struct FVector CalfRTran; // 0xfa0 (0x18)
	struct FRotator CalfRRot; // 0xfb8 (0x18)
	struct FVector Spine01Tran; // 0xfd0 (0x18)
	struct FRotator Spine01Rot; // 0xfe8 (0x18)
	struct FVector Spine02Tran; // 0x1000 (0x18)
	struct FRotator Spine02Rot; // 0x1018 (0x18)
	struct FVector Spine03Tran; // 0x1030 (0x18)
	struct FRotator Spine03Rot; // 0x1048 (0x18)
	struct FVector Spine04Tran; // 0x1060 (0x18)
	struct FRotator Spine04Rot; // 0x1078 (0x18)
	struct FVector Spine05Tran; // 0x1090 (0x18)
	struct FRotator Spine05Rot; // 0x10a8 (0x18)
	struct FVector ClavicleLTran; // 0x10c0 (0x18)
	struct FRotator ClavicleLRot; // 0x10d8 (0x18)
	struct FVector ClavicleRTran; // 0x10f0 (0x18)
	struct FRotator ClavicleRRot; // 0x1108 (0x18)
	struct FVector UpperarmLTran; // 0x1120 (0x18)
	struct FRotator UpperarmLRot; // 0x1138 (0x18)
	struct FVector UpperarmRTran; // 0x1150 (0x18)
	struct FRotator UpperarmRRot; // 0x1168 (0x18)
	struct FVector LowerarmLTran; // 0x1180 (0x18)
	struct FRotator LowerarmLRot; // 0x1198 (0x18)
	struct FVector LowerarmRTran; // 0x11b0 (0x18)
	struct FRotator LowerarmRRot; // 0x11c8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.UpdateWindVector (Underlying native function: UpdateWindVector 0x85cc930)
	void UpdateWindVector(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.UpdateJumpingAlpha (Underlying native function: UpdateJumpingAlpha 0x85cc90c)
	void UpdateJumpingAlpha(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.UpdateIsEmotingAlpha (Underlying native function: UpdateIsEmotingAlpha 0x85cc8e8)
	void UpdateIsEmotingAlpha(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.UpdateFinalGravity (Underlying native function: UpdateFinalGravity 0x85cc8a8)
	void UpdateFinalGravity(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.UpdateCompLinearScales (Underlying native function: UpdateCompLinearScales 0x85cc894)
	void UpdateCompLinearScales(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.UpdateBoneRotators (Underlying native function: UpdateBoneRotators 0x85cc880)
	void UpdateBoneRotators(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.UpdateBodyJoints (Underlying native function: UpdateBodyJoints 0x85cc86c)
	void UpdateBodyJoints(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.CalculateWindVector (Underlying native function: CalculateWindVector 0x85caaa0)
	struct FVector CalculateWindVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.CalculateJumpingAlpha (Underlying native function: CalculateJumpingAlpha 0x85caa80)
	float CalculateJumpingAlpha(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.CalculateIsEmotingAlpha (Underlying native function: CalculateIsEmotingAlpha 0x85caa60)
	float CalculateIsEmotingAlpha(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.CalculateFinalGravity (Underlying native function: CalculateFinalGravity 0x85caa28)
	struct FVector CalculateFinalGravity(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.CalculateCompLinearVelScale (Underlying native function: CalculateCompLinearVelScale 0x85ca9b0)
	struct FVector CalculateCompLinearVelScale(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomCharacterPartAnimInstance_TowerSentinelPack.CalculateCompLinearAccScale (Underlying native function: CalculateCompLinearAccScale 0x85ca9b0)
	struct FVector CalculateCompLinearAccScale(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

