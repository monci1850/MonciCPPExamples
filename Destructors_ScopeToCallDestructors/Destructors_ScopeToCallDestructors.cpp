// desturctor will called at the end of scope.

#include <iostream>
using namespace std;

class MyClass
{
public:
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
	cout << endl;
	cout << "Constructor called.\n";
}

MyClass::~MyClass()
{
	cout << "Destructor called.\n ";
}

int main()
{
	MyClass class1;		// class1 will not call destructor scene system pasued, the scope of main function doesn't finish.
	
	{
		// class2 will call destuctor scene the scope can finish.
		MyClass class2;
	}

	{
		// class3 will not call destructor scene class3 is a static class object.
		static MyClass class3;
	}

	system("pause");
}

