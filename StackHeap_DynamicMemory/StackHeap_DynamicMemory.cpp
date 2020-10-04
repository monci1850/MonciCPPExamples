/*
*/

#include <iostream>
#include <string>

using namespace std;

struct Charactor
{
	string Name;
	float Health;
};

int main()
{
	for (int i = 0; i < 100000; i++)
	{
		Charactor* Ptr2Char = new Charactor();	// use the default constructor if you don't define it.
		cout << Ptr2Char->Name << endl;
		delete Ptr2Char;	//delete from the heap, to avoid memory overflow.
	}
}

