// Struct_CharactorData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct CharacterLocation
{
	float X;
	float Y;
	float Z;
};

struct Character
{
	string Name;
	int Level;
	float Health;
	float Damage;
	float Stamina; 

	CharacterLocation Location = {0.f, 0.f,0.f};		// Nested struct.

	void TakeDamage(float dmg)
	{
		Health -= dmg;
	}

	int GetLevel()
	{
		if (Level < 4) 
		{
			cout << "Level is less than 4" << endl;
		}
		return Level;	// Access variable via function.
	}

	void DisplayLocation()
	{
		cout << Name << "'s location is :" << endl;
		cout << Location.X << endl;
		cout << Location.Y << endl;
		cout << Location.Z << endl;
	}
};

int main()
{
	// Initialize a struct object.
	Character Player1;
	Player1.Name = "Monci";
	Player1.Level = 3;
	Player1.Health = 100.f;
	Player1.Damage = 10.f;

	// access variable inside struct. 
	cout << "Player1 level is :" << Player1.GetLevel() << endl;

	cout << "Player1's health is " << Player1.Health << endl;
	// access function
	Player1.TakeDamage(30.f);
	cout << "Player1's health is " << Player1.Health << endl;

	Player1.DisplayLocation();	// display default location
	Player1.Location.X = 10.f;	// update location in X
	cout << "Player1's location in X axis is " << Player1.Location.X << endl;
	Player1.DisplayLocation();


	// Another way to initialize: in one line.
	Character Player2 = { "Jam", 60, 80.f, 68.f, 20.f, {5.f,2.f,0.f} };	 // Must follow the order of the variable list in struct.
	Player2.DisplayLocation();

	return 0;
}


