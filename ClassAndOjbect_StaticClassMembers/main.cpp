// ClassAndOjbect_StaticClassMembers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h"
using namespace std;

void display_active_players() {
	cout << "Active players: " << Player::get_num_players() << endl;
}

int main()
{
	display_active_players();	// Currently, no object
	Player xman{ "X-man" };
	display_active_players();

	{
		Player monci{ "Monci" };
		display_active_players();
	}

	display_active_players();

	Player* enemy = new Player("Enemy", 99, 99);
	display_active_players();
	delete enemy;
	display_active_players();

	return 0;
}

