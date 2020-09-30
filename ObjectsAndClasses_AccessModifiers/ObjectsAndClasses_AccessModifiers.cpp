// ObjectsAndClasses_AccessModifiers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Creatures
{
public:
	Creatures();

	// Getters and Setters
	void SetName(std::string name);
	std::string GetName();

private:
	std::string Name;
	float Health;
};


int main()
{
	Creatures Bird;
	Bird.SetName("Niaoniao");
	std::cout << Bird.GetName() << std::endl;
}


Creatures::Creatures()
{
	std::cout << "Creature constructor: takes 0 argument. \n";
}

void Creatures::SetName(std::string name)
{
	Name = name;
}  

std::string Creatures::GetName()
{
	return Name;
}