// 
// When we need to initialize immediately without having to initialize and then assigned to it. More efficient.

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
	Player();	// no args
	Player(string name_val);
	Player(string name_val, int health_val, int xp_val);

};

/*
Player::Player()
{
	// assignment statements
	name = "None";	// not initialization, is assignment
	health = 100;
	xp = 9;
}

Player::Player(string name_val)
{
	name = name_val;
	health = 100;
	xp = 9;

}

Player::Player(string name_val, int health_val, int xp_val)
{
	name = name_val;
	health = health_val;
	xp = xp_val;
}
*/

// Use constructor initialization lists is more efficient.
Player::Player()
	:name{"None"}, health{100}, xp{9}
{
}

Player::Player(string name_val)
	: name{name_val}, health{ 100 }, xp{ 9 }
{
}


Player::Player(string name_val, int health_val, int xp_val)
	: name{ name_val }, health{ health_val }, xp{ xp_val }
{
}



int main()
{
	Player empty;
	Player monci{ "Monci" };
	Player vv{ "Vv" , 100, 98};

	return 0;
}

