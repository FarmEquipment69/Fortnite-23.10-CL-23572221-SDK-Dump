// Class /Script/FortniteGame.FortPlayerAnimInstance_OstrichGunner
// Size: 0x1c90
class UFortPlayerAnimInstance_OstrichGunner : public UFortPlayerAnimInstance_OstrichOccupant
{
	float BodyRecoilAlphaValue; // 0x1b88 (0x4)
	float BodyRecoilAlphaWhenShotgunIsFired; // 0x1b8c (0x4)
	float BodyRecoilAlphaNoShotgunFired; // 0x1b90 (0x4)
	unsigned char bIsMechShotgunFired; // 0x1b94 (0x1)
	unsigned char bIsMechBeginFired; // 0x1b94 (0x1)
	unsigned char bIsRocketFiring; // 0x1b94 (0x1)
	unsigned char unreflected_1b95[0x3]; // 0x1b95 (0x3) 
	struct FFortAnimInput_VelocityImpact GunnerVelocityImpactInput; // 0x1b98 (0xf0)
	unsigned char padding_1c88[0x8]; // 0x1c88 (0x8)
};

