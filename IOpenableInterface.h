// Class /Script/FortniteGame.OpenableInterface
// Size: 0x28
class IOpenableInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.OpenableInterface.Open (Underlying native function: Open 0x7dd06bc)
	void Open(class AController*& ControllerInstigator, bool& bRequestFastOpen); // (0x00000002 | BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.OpenableInterface.IsOpen (Underlying native function: IsOpen 0x7db6c20)
	bool IsOpen(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.OpenableInterface.Close (Underlying native function: Close 0x7db4948)
	void Close(class AController*& ControllerInstigator); // (0x00000002 | BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)
};

