//student.cpp

#include "student.h"
#include <iostream>
using namespace std;

Student::Student()
{
	name = new char(20);
	cout << "Student" << endl;

}

Student::Student(const Student& source)
{
	name = new char(20);	
	
	/*
	Copies the values of num bytes from the location pointed to by source directly to the memory block pointed to by destination.

	 void * memcpy ( void * destination, const void * source, size_t num );
	destination
		Pointer to the destination array where the content is to be copied, type - casted to a pointer of type void* .
	source
		Pointer to the source of data to be copied, type - casted to a pointer of type const void* .
	num
		Number of bytes to copy.
		size_t is an unsigned integral type.
	*/
	memcpy(name, source.name, strlen(source.name));

	//* name = *source.name;
	cout << "copy Student " << endl;
}

Student::~Student()
{
	cout << "~Student " << int(name) << endl;
	delete name;
	name = NULL;
}