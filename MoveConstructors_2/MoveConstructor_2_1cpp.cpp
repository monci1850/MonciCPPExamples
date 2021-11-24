#include <iostream>
#include <vector>
using namespace std;

// function prototype
void TestLvalueRValue();
void FuncitonTakeInputRef(int& ref);
void TestRValueRef();
struct MyStruct
{
	int *ptr;
	MyStruct();	// default constructor
	MyStruct(const MyStruct &source);	// copy constructor
	MyStruct(MyStruct &&source)noexcept;	// move constructor
	~MyStruct();	// destructor
};
void TestMoveConstructorWithVector();


int main()
{
	//TestLvalueRValue();

	//TestRValueRef();

	TestMoveConstructorWithVector();

	return 0;
}


void FuncitonTakeInputRef(int & ref)
{
	cout << "l-value reference" << endl;
}

// overloaded function, r-value
void FuncitonTakeInputRef(int&& ref)
{
	cout << "r-value reference version is called." << endl;
}

MyStruct::MyStruct()
{
	cout<<"default constructor\n";
}

MyStruct::MyStruct(const MyStruct& source)
{
	this->ptr = new int;
	//*ptr = *source.ptr;
	cout << "deep copy constructor ..\n";
}

MyStruct::MyStruct(MyStruct&& source) noexcept
{
	this->ptr = source.ptr;
	source.ptr = nullptr;
	cout << "move constructor .. \n";
}

MyStruct::~MyStruct()
{
	cout << "destructor..\n";
	delete this->ptr;
}

void TestLvalueRValue()
{
	int i = 100;
	int& j = i;	// reference

	//int &k = 200;	// error : must be can lvalue
	const int& k = 200;	// why this is fine?

	// r-value reference
	int&& n = 200;
	//int &&m = i;	// error : must be an r-value
}

void TestRValueRef()
// use overload functions to test l-value and r-value references.
{
	int val = 90;
	FuncitonTakeInputRef(val);
	FuncitonTakeInputRef(35);
}

void TestMoveConstructorWithVector()
{
	vector<MyStruct> vec1;

	vec1.push_back(MyStruct());

	//MyStruct a1;
	//vec1.push_back(a1);		// this cannot call move constructor since a1 is not a r-value.
	//vec1.push_back(move(a1));	// use move to force it.
}

