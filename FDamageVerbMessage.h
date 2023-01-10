// ScriptStruct /Script/FortniteGame.DamageVerbMessage
// Size: 0xf0
struct FDamageVerbMessage : FVerbMessageWithTarget
{
	int Damage; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	double Distance; // 0x98 (0x8)
	struct FSubjectTagsPair DamageSource; // 0xa0 (0x28)
	struct FSubjectTagsPair DamageType; // 0xc8 (0x28)
};

