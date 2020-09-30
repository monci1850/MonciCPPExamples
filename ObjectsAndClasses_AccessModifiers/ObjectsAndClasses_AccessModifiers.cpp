/* access modifiers, or called access specifier.
 By default, all variables and functions are private.
 A public member is accessible from anywhere outside the class but within a program.
 A private member variable or function cannot be accessed, or even viewed from outside the class.
 Only the class and friend functions can access private members.
 A protected member variable or function is very similar to a private member but it provided one
additional benefit that they can be accessed in child classes which are called derived classes.

*/


#include <iostream>
#include <string>


class MyClass
{
	float ValueA;

	void foo()
	{
		std::cout << "Hello\n";
	}
};

class Creatures
{
public:
	Creatures();

	// Getters and Setters
	void SetName(std::string name);
	std::string GetName();
	float GetHealth();

	void TakeDamage(float damage);

private:
	std::string Name;
	float Health;

protected:
	int NumOfLimbs;

};

class Spider : public Creatures
{
public:
	Spider();
};


int main()
{
	//MyClass test;
	//test.foo();		// Error:By default, all variables and functions are private.
	//test.ValueA = 78.0;

	Creatures Bird;
	Bird.SetName("Niaoniao");
	std::cout << Bird.GetName() << std::endl;
	std::cout << Bird.GetHealth() << std::endl;
	float damage = 1000;
	std::cout << Bird.GetName() << " will now take "<<damage<<" damage!\n";
	Bird.TakeDamage(damage);

	Spider spider;

}


Creatures::Creatures()
{
	Health = 90.0;
	NumOfLimbs = 4;
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

float Creatures::GetHealth()
{
	return Health;
}

void Creatures::TakeDamage(float damage)
{
	float Total;
	Total = Health - damage;
	if (Total<=0.f)
	{
		std::cout << GetName() << " has died\n";
	}
	else
	{
		Health -= damage;
		std::cout << GetName() << "'s health now is " << GetHealth() << std::endl;
	}
}

Spider::Spider()
{
	NumOfLimbs = 4;	// protected can be accessed in child class.
}