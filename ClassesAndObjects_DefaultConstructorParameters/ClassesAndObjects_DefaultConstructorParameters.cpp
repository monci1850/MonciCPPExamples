// Default constructor parameters

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	string name;
	int health;
	int xp;

public:
	// Default constructor parameters
	Player(string name_val = "None", int health_val = 0, int xp_val = 0);

};

// in this way, could reduce the number of constructors.
Player::Player(string name_val, int health_val, int xp_val)
	: name{ name_val }, health{ health_val }, xp{ xp_val } {
	cout << "Three-args constructor" << endl;
}


int main()
{
	Player empty;
	Player mat{ "Mat" };
	Player nic{ "Nic", 88 };
	Player kevain{ "Kevain", 99, 90 };
	return 0;
}

