//

#include <iostream>
#include <string>
using namespace std;

class Charactor
{
public:
	Charactor();
	~Charactor();

	int* Age;
	float* Health;

private:

};


int main()
{
	Charactor* Player = new Charactor;
	delete Player;  // Will call destructor. 
}

Charactor::Charactor()
{
	cout<<"Constructor called: new char created!\n";
	// Dynamicly alloate memeory on heap
	Age = new int(5);
	Health = new float(90.f);
}

Charactor::~Charactor()
{
	cout << "Destructor called: char destoryed.\n";
	// clean up memeory on heap
	delete Age;
	delete Health;
}