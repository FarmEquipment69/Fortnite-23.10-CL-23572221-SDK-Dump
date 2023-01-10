// Class /Script/Engine.ColorInputDeviceProperty
// Size: 0x50
class UColorInputDeviceProperty : public UInputDeviceProperty
{
	bool bEnable; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	class UCurveLinearColor* DeviceColorCurve; // 0x38 (0x8)
	unsigned char padding_40[0x10]; // 0x40 (0x10)
};

