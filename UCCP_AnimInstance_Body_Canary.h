// Class /Script/FortniteGame.CCP_AnimInstance_Body_Canary
// Size: 0x810
class UCCP_AnimInstance_Body_Canary : public UCustomCharacterPartAnimInstance
{
	struct FVector GravityOverride; // 0x6e8 (0x18)
	float PlayerMovementFunctionX; // 0x700 (0x4)
	float PlayerMovementFunctionY; // 0x704 (0x4)
	float ThighUpL; // 0x708 (0x4)
	float ThighUpR; // 0x70c (0x4)
	float IsCrouching; // 0x710 (0x4)
	float IsCrouchingNoMovingThighUpL; // 0x714 (0x4)
	float IsCrouchingIsMovingThighUpL; // 0x718 (0x4)
	float NotMoving; // 0x71c (0x4)
	float IsNotCrouching; // 0x720 (0x4)
	float IsSprinting; // 0x724 (0x4)
	float IsBackpedaling; // 0x728 (0x4)
	float HeadRotBack; // 0x72c (0x4)
	float IsTargeting; // 0x730 (0x4)
	float IsJumping; // 0x734 (0x4)
	float IsMoving2D; // 0x738 (0x4)
	float IsSkydiving; // 0x73c (0x4)
	float IsNotSkydiving; // 0x740 (0x4)
	float IsParachuteOpened; // 0x744 (0x4)
	bool bIsWearingBackbling; // 0x748 (0x1)
	unsigned char unreflected_749[0x3]; // 0x749 (0x3) 
	float IsCrouchingMoving2D; // 0x74c (0x4)
	float LeftArmRot; // 0x750 (0x4)
	float CrouchingUpperArmRotZ; // 0x754 (0x4)
	float RightMovement; // 0x758 (0x4)
	float LeftMovement; // 0x75c (0x4)
	float IsNotBackpedaling; // 0x760 (0x4)
	float IsNotSprinting; // 0x764 (0x4)
	float LeftMovementClean; // 0x768 (0x4)
	float IsSprintingNoCrouch; // 0x76c (0x4)
	float IsSprintingCrouch; // 0x770 (0x4)
	float NotMovingHeadRot; // 0x774 (0x4)
	float IsInFrontEnd; // 0x778 (0x4)
	float NotEmoting; // 0x77c (0x4)
	float IsInFrontEndNotEmoting; // 0x780 (0x4)
	float IsWearingBackBling; // 0x784 (0x4)
	float IsInFrontEndNoBackbling; // 0x788 (0x4)
	struct FMapRangeClamped_Ranges RightMovementRanges; // 0x78c (0x10)
	struct FMapRangeClamped_Ranges LeftMovementRanges; // 0x79c (0x10)
	struct FMapRangeClamped_Ranges MovementRanges; // 0x7ac (0x10)
	float PlayerMovementYScale; // 0x7bc (0x4)
	struct FMapRangeClamped_Ranges ThighUpLRanges; // 0x7c0 (0x10)
	struct FMapRangeClamped_Ranges ThighUpRRanges; // 0x7d0 (0x10)
	struct FMapRangeClamped_Ranges ThighSideLRanges; // 0x7e0 (0x10)
	struct FMapRangeClamped_Ranges ThighSideRRanges; // 0x7f0 (0x10)
	float CheckForBackblingLongThreshold; // 0x800 (0x4)
	unsigned char padding_804[0xc]; // 0x804 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.CCP_AnimInstance_Body_Canary.Handle_CharacterCustomizationFinished (Underlying native function: Handle_CharacterCustomizationFinished 0x85b4750)
	void HandleCharacterCustomizationFinished(); // (Final | Native | Protected)
};

