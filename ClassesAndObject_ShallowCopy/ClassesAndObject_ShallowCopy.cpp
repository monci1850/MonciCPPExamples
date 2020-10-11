// Copy Constructor - Shallow Copy
// Note: this program will crash

#include <iostream>

using namespace std;

class Shallow {
private:
	int* ptrData;	// A raw pointer to an int
public:
	// dereference ptrData in these functions
	void set_ptrData_value(int d) { *ptrData = d; }
	int get_ptrData_value() { return *ptrData; }

	// Constructor
	Shallow(int d);

	// Copy Constructor
	Shallow(const Shallow& source);

	// Destructor
	~Shallow();
};

// Constructor
Shallow::Shallow(int d)
{
	ptrData = new int;	// allocate storage on the heap dynamically for this int.
	*ptrData = d;	// dereferencing the pointer to store the int.
}

// Copy Constructor, in this case is Shallow Copy
Shallow::Shallow(const Shallow& source)
	:ptrData(source.ptrData)
{
	cout << "Copy constructor  - shallow copy" << endl;
}

// Destructor
Shallow::~Shallow()
{
	delete ptrData;	// release the storage
	cout << "Destructor freeing ptrData" << endl;
}

void display_shallow(Shallow s) // passing object by value, where the PROBLEM shows up.
{
	cout << s.get_ptrData_value() << endl;
}


int main()
{
	Shallow obj1{ 100 };

	display_shallow(obj1);	// will cause crash, need a deep copy not shallow copy.

	return 0;

	/* When the program goes out of the main() scope, will call the destructor of obj1.
	* However, display_shallow already called destructor, and the ptrData points to data becomes invalid. 
	* This invalid data will cause crash after destructor called. 
	*/

}

