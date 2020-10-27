#include <cstring>
#include <iostream>
#include "Mystring.h"
#define _CRT_SECURE_NO_WARNINGS


// No-args constructor, 
Mystring::Mystring()	// create object on stack
	: str{ nullptr } 
{
	str = new char[1];	// allocate on the heap, assign pointer to point to it.
	*str = '\0';	// a single character with a null terminator in it. display nothing.
}

// Overloaded constructor,  
Mystring::Mystring(const char* s)
	: str{ nullptr }
{
	if (s == nullptr)	// check if nullptr here
	{
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[std::strlen(s) + 1];	// allocate the length of s with one more space for "\0".
		strcpy(str, s);	// copy s to str, s is a const.
	}
}

// Copy constructor, Remember we've got an existing object and I want to copy it and construct a new object from a.
//This is not an assignment.
// It's a construction.
// Mystring a {"Hello"};
// Mystring b { a };
Mystring::Mystring(const Mystring& source)
	:str{nullptr}
{
	// deep copy, not share, allocate space on the heap.
	str = new char[std::strlen(source.str) + 1];
	strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() 
{
	delete[] str;	// deallocate the memory.
}

// Display method
void Mystring::display() const {
	std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const { return std::strlen(str); }

// string getter
const char* Mystring::get_str() const { return str; }
