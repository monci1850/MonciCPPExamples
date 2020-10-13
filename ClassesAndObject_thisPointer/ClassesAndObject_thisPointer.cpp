#include <iostream>

using namespace std;

class Box {
public:
	// Constructor definition
	Box(double l = 2.0, double b = 2.0, double h = 2.0) {
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
	}
	double Volume() {
		return length * breadth * height;
	}
	
	int compare(Box box)
	{
		/*Every object in C++ has access to its own address
		through an important pointer called this pointer.
		Friend functions do not have a this pointer,
		because friends are not members of a class. 
		Only member functions have a this pointer.*/
		return this->Volume() > box.Volume();
	}

private:
	double length;     // Length of a box
	double breadth;    // Breadth of a box
	double height;     // Height of a box
};


class Account 
{
public:
	double balance;
	void set_balance(double balance);
};

void Account::set_balance(double balance)
{
	//balance = balance;	// ambiguous
	this->balance = balance;	// unambiguous

}



int main()
{
	Box box1(2.3, 4.4, 5.5);
	Box box2(1.1, 1.5, 1.8);
	if (box1.compare(box2))
	{
		cout << "Box2 is smaller than Box1" << endl;
	}
	else
	{
		cout << "Box2 is equal to or larger than Box1" << endl;
	}
	return 0;
}