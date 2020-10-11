// Delegating Constructors


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
	// Overloaded Constructors
	Player();
	Player(string name_val);
	Player(string name_val, int health_val);
	Player(string name_val, int health_val, int xp_val);

};

/* Use constructor initialization lists is more efficient. How ever there are similar codes
Player::Player()
	:name{ "None" }, health{ 100 }, xp{ 9 }
{
}

Player::Player(string name_val)
	: name{ name_val }, health{ 100 }, xp{ 9 }
{
}

Player::Player(string name_val, int health_val, int xp_val)
	: name{ name_val }, health{ health_val }, xp{ xp_val }
{
}
*/


// delegate constructors, to avoid copying codes
Player::Player()
	: Player{ "Node", 0, 0 } {
	cout << "No-args constructor" << endl;
}

Player::Player(string name_val)
	: Player{ name_val, 0, 0 } {
	cout << "One-arg constructor" << endl;
}

Player::Player(string name_val, int health_val)
	:Player(name_val, health_val, 0)
{
	cout << "Two-args constructor" << endl;
}

Player::Player(string name_val, int health_val, int xp_val)
	: name{ name_val }, health{ health_val }, xp{ xp_val } {
	cout << "Three-args constructor" << endl;
}


int main()
{
	Player empty;
	Player mat{"Mat"};
	Player nic{ "Nic", 88 };
	Player kevain{ "Kevain", 99, 90 };
	return 0;
}

