// ObjectsAndClasses_ConstructerOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal();
	Animal(string name, int age);
	Animal(string name, int age, int health);

	string Name;
	int Age;
	int Health;

	void Report();


private:

};

Animal::Animal()
{
	cout << "An new animal has born!" << endl;
	Name = "Default";
	Age = 1;
	Health = 100;
}

// constuctors overloading. you could have multi-construtor.
Animal::Animal(string name, int age, int health)
{
	Name = name;
	Age = age;
	Health = health;
}

// Another way to difine constuctor that has input parameters.
Animal::Animal(string name, int age) : Name(name), Age(age) {};

void Animal::Report()
{
	cout << Name << endl;
	cout << Age << endl;
	cout << Health << endl;
}


int main()
{
	Animal animal_1;
	animal_1.Report();

	Animal animal_2("Spider", 3, 80);
	animal_2.Report();

	Animal animal_3("XDog", 50);  // health returns garbage value, uninitialized.
	animal_3.Report();
	return 0;
}

