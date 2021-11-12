#include <iostream>
#include <string>
using namespace std;

struct Character
{
	Character();	// constructor

	string Name;
	float Health;

	void PrintHealth();

};


int main()
{
	// This object will be created on the stack, which it means it will be created at compile time. 
	//Character CharOnStack = Character();

	// heap is dynamically allocated memory, where this pointer points to.
	// created at runtime. 
	Character* CharOnHeap = new Character();	

	//cout << CharOnHeap->Name <<endl;
	//cout << CharOnHeap->Health <<endl;
	CharOnHeap->PrintHealth();

	// to avoid memory leak since it will not free up heap automatically.
	delete CharOnHeap;

	//for (int i = 0; i<1000000; i++)
	//// Always use delete keyword to avoid memory leak 
	//{
	//	Character* Ptr2Char = new Character();
	//	Ptr2Char->Name = "Monci";
	//	cout << Ptr2Char->Name <<endl;
	//	delete Ptr2Char;
	//}

	system("pause");
}

Character::Character()
{
	Name = "Default Name";
	Health = 100.f;
}

void Character::PrintHealth()
{
	cout << Health <<endl;
}