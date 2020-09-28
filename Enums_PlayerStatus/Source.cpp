#include <iostream>
#include <string>

using namespace std;

enum PlayerStatus
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

int main()
{
	PlayerStatus status;
	status = PlayerStatus::PS_Running;
	if (status != PlayerStatus::PS_Crouched)
	{
		cout << "The player is not crouching!" << endl;
	}
	return 0;
}