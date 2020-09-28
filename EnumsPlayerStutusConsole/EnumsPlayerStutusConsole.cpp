// EnumsPlayerStutusConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum PlayerStatus
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

enum MyEnum
{
	ME_Crouched,
	//PS_Running,		
};

int main()
{
	PlayerStatus status;
	status = PlayerStatus::PS_Running;
	if (status != PlayerStatus::PS_Crouched)
	{
		std::cout << "The player is not crouching!" << std::endl;
	}
	//status = MyEnum::PS_Running;	// Error!
}


