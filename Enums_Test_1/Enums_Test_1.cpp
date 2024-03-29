#include <iostream>
#include <string>
using namespace std;

/* This is a test of Enums*/

enum PlayerStatus
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running,
};

enum MovementStatus
{
	MS_Crouched,
	PS_Standing2,	// To test the same name. VS will raise an redefinition error if we use the same name.
};

int main()
{
	PlayerStatus MyStatus;
	MyStatus = PlayerStatus::PS_Standing;

	if (MyStatus == PlayerStatus::PS_Standing)
	{
		cout << "The player is standing now!" << endl;
	}
	system("pause");
}