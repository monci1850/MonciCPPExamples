// SwtichStatement_PlayerStatus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

enum PlayerStatus
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 200.f;
const float StandSpeed = 0.f;


void UpdateMovementSpeed(PlayerStatus P_Status, float& Speed);	// Why use &

int main()
{
	PlayerStatus Status;
	Status = PlayerStatus::PS_Walking;
	float MovementSpeed;
	UpdateMovementSpeed(Status, MovementSpeed);
	cout << "Movement speed is: " << MovementSpeed << endl;
	return 0;
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& Speed)	// Why 
{
	switch (P_Status)
	{
	case PS_Crouched:
		Speed = CrouchSpeed;
		break;
	case PS_Standing:
		Speed = StandSpeed;
		break;
	case PS_Walking:
		Speed = WalkSpeed;
		break;
	case PS_Running:
		Speed = RunSpeed;
		break;
	default:
		cout << "Invalid Speed! " << endl;
		break;
	}
}