#include <iostream>
#include <string>
using namespace std;

/* A test of switch and enum. */

enum PlayerStatus
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running,
	PS_Test
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float& Speed);	// "&" pass by reference to change the variable.

int main()
{
	float MovementSpeed{0};
	
	PlayerStatus MyStatus = PlayerStatus::PS_Test;

	UpdateMovementSpeed(MyStatus,MovementSpeed);
	cout << "The player's moving speed is : " << MovementSpeed << endl;

	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& Speed)
{
	switch (P_Status)
	{
	case PS_Crouched:
		Speed = CrouchSpeed;
		break;
	case PS_Standing:
		Speed = 0.f;
		break;
	case PS_Walking:
		Speed = WalkSpeed;
		break;
	case PS_Running:
		Speed = RunSpeed;
		break;
	default: PS_Running:
		Speed = RunSpeed;
		break;
	}
}