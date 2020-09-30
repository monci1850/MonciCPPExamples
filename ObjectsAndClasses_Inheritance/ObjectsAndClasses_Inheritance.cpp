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
};

// inherited from  Animal.
class Dog : public Animal
{
public:
	Dog();
	Dog(string name, int age, int health);

	void Speak();
};

// inherited from Dog.
class Husky : public Dog
{
public:
	Husky();
	Husky(string name, int age, int health);


};



int main()
{
	//Dog Mydog;
	//Dog Mydog2("Tangdou", 3, 80);	// three constructor was called in this case.

	//Husky ErHa;
	//ErHa.Speak();
	//ErHa.Report();

	Husky Erha2("Sisi", 5, 90);
	Erha2.Report();

	return 0;
}

Animal::Animal()	// Always been called by default.
{
	cout << "Animal constructor: takes 0 argument" << endl;
	Name = "Default";
	Age = 1;
	Health = 100;
}

// constuctors overloading. you could have multi-construtor.
Animal::Animal(string name, int age, int health)
{
	cout << "Animal constructor: takes 3 argument" << endl;

	Name = name;
	Age = age;
	Health = health;
}


void Animal::Report()
{
	cout << endl;
	cout << Name << endl;
	cout << Age << endl;
	cout << Health << endl;
	cout << endl;

}

Dog::Dog()
{
	cout << "Dog constructor: takes 0 argument" << endl;
}

//Dog::Dog(string name, int age, int health) 
//{
//	cout << "Dog constructor: takes 3 argument" << endl;
//	// Call the parent constructor inside child constructor.
//	Animal(name, age, health);
//
//}


Dog::Dog(string name, int age, int health) : Animal(name, age, health)
// What if I don't want the parent constructor that takes 0 argument to always be called?
// this is the solution
{
	cout << "dog constructor: takes 3 argument" << endl;

}

void Dog::Speak()
{
	cout << "Woof! Woof!" << endl;
}

Husky::Husky()
{
	cout << "Husky constructor: takes 0 argument" << endl;
}

Husky::Husky(string name, int age, int health) : Dog(name, age, health)
{
	cout << "Husky constructor: takes 3 argument" << endl;

}
