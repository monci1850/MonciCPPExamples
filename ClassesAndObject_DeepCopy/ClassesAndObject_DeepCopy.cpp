// Copy Constructor - Deep Copy
// Check ClassesAndObject_ShallowCopy.cpp
#include <iostream>

using namespace std;

class Deep {
private:
	int* ptrData;	// A raw pointer to an int
public:
	// dereference ptrData in these functions
	void set_ptrData_value(int d) { *ptrData = d; }
	int get_ptrData_value() { return *ptrData; }

	// Constructor
	Deep(int d);

	// Copy Constructor
	Deep(const Deep& source);

	// Destructor
	~Deep();
};

// Constructor
Deep::Deep(int d)
{
	ptrData = new int;	// allocate storage on the heap dynamically for this int.
	*ptrData = d;	// dereferencing the pointer to store the int.
}

// Copy Constructor, in this case is Deep Copy
//Deep::Deep(const Deep& source)
//	:Deep{ *source.ptrData }	// delegating to regular constructor
//{
//	cout << "Copy constructor  - shallow copy" << endl;
//}


//another way to write the deep copy constructor
Deep::Deep(const Deep& source)
{
	ptrData = new int;
	*ptrData = *source.ptrData;
	cout << "Copy constructor  - deep copy" << endl;
}


// Destructor
Deep::~Deep()
{
	delete ptrData;	// release the storage
	cout << "Destructor freeing ptrData" << endl;
}

void display_deep(Deep s) // passing object by value, where the PROBLEM shows up.
{
	cout << s.get_ptrData_value() << endl;
}


int main()
{
	Deep obj1{ 100 };

	display_deep(obj1);	// this time will not crash.

	Deep obj2{ obj1 };
	obj2.set_ptrData_value(888);

	return 0;


}

