//Default Constructors
// Use debug mode to check 

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
	void set_name(string name_val)
	{
		name = name_val;
	}
	string get_name() { return name; }

	Player()
	{
		name = "None";
		health = 100;
		xp = 9;
	}

	Player(string name_val, int health_val, int xp_val)
	{
		name = name_val;
		health = health_val;
		xp = xp_val;
	}
};

int main()
{
	//Player monci;
	Player monci{ "Monci", 100, 109 };
	Player monci2;
	monci.set_name("Monci");
	cout << monci.get_name() << endl;
	return 0;
}

