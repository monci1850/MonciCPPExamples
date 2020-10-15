// Copy constructors

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
	// getters
	string get_name() { return name; };
	int get_health() { return health; };
	int get_xp() { return xp; };

	// Default constructor with parameters
	Player(string name_val = "None", int health_val = 0, int xp_val = 0);

	// Copy constructor
	Player(const Player& source);

	// Destructor
	~Player() { cout << "Destructor called for: " << name << endl; }

};

// Default constructor parameters definition
Player::Player(string name_val, int health_val, int xp_val)
	: name{ name_val }, health{ health_val }, xp{ xp_val } {
	cout << "Three-args constructor" << endl;
}

// Copy constructor definition
Player::Player(const Player& source)
	:Player{source.name, source.health, source.xp}
{
	cout << "Copy constructor - made copy of: " << source.name << endl;
}


void display_player(Player p)
{
	// p is a COPY of source Player class.

	cout << "Name: " << p.get_name() << endl;
	cout << "Health: " << p.get_health() << endl;
	cout << "XP: " << p.get_xp() << endl;

	// Destructor will be called.
}


Player create_enemy()
{
	Player an_enemy{ "An Enemy", 1000, 1000 };
	return an_enemy;  // a COPY of an_enemy is returned. 
}

int main()
{
	Player empty; 

	// 3 situations of Copying.

	// 1. Copy:construct object based on another
	Player new_obj{ empty };	// a COPY of empty is made. 
	
	// 2. Copy: pass object by value
	display_player(empty);

	// 3. Copy: return object by value
	create_enemy();

	//Player mat{ "Mat" };
	//Player nic{ "Nic", 88 };
	//Player kevain{ "Kevain", 99, 90 };
	return 0;
}

