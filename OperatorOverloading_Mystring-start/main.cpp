//

#include <iostream>
#include "MyString.h"
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning (disable : 4996) 

int main()
{
	Mystring empty; 	// no-args constructor
	Mystring nic("Nic");	// overloaded constructor
	Mystring kevin{ nic };	// copy constructor 

	empty.display();
	nic.display();
	kevin.display();

	return 0;
}

