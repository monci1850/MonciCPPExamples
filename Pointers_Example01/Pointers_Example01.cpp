// Pointers_Example01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int a = 888;
	int* aPtr;
	aPtr = &a;	// Address of a.

	cout << aPtr << endl;
	cout << *aPtr << endl;	// dereference

	int b = 666;
	aPtr = &b;
	cout << *aPtr << endl; 

	// array and pointer
	// point to the address of the 1st element.
	int numbers[] = { 1,2,3,4,5,6 };
	int* numPtr = numbers;
	cout << *numPtr << endl;

	// pointer arithmetic.
	numPtr++;
	cout << *numPtr << endl;
	numPtr++;
	cout << *numPtr << endl;
	numPtr--;
	cout << *numPtr << endl;
	numPtr += 3;
	cout << *numPtr << endl;


	system("pause");
}

