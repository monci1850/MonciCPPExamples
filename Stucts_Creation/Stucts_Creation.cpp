// Stucts_Creation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct MyStruct
{
	MyStruct();
	string Name;
	int Age;
	float Distance;
	
	void Myfunction();
};

MyStruct::MyStruct()
{
	cout << "Hello" << endl;
	Name = "default";
	Age = 10;
	Distance = 90.f;
}

void MyStruct::Myfunction()
{
	cout << "my function" << endl;
}
int main()
{
	MyStruct mystruct;
	mystruct.Myfunction();

	return 0;
}

