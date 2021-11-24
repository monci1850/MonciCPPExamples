#include <iostream>
#include <vector>
using namespace std;

class MoveTestClass
{
private:
	int *ptr; // raw pointer
public:
	void SetPtrValue(int val){ *ptr = val;}
	int GetPtrValue(){ return *ptr; }

	MoveTestClass(int val);
	MoveTestClass(const MoveTestClass &source);
	MoveTestClass(MoveTestClass &&move_source)noexcept;
	~MoveTestClass();
};

void TestMoveConstructorWithVector();


int main()
{
	TestMoveConstructorWithVector();
	return 0;
}


MoveTestClass::MoveTestClass(int val)
{
	this->ptr = new int;
	*this->ptr = val;
	cout<<"typical constructor, construct for "<<val<<endl;
}

MoveTestClass::MoveTestClass(const MoveTestClass& source)
	: MoveTestClass{*source.ptr} 
// deep copy constructor with delegation.
{
	cout<<"Deep copy for "<<*ptr<<endl;
}

MoveTestClass::MoveTestClass(MoveTestClass&& move_source) noexcept
	: ptr{move_source.ptr}
{
	move_source.ptr = nullptr;
	cout << "Move constructor moving resource : " << *ptr << endl;
}

MoveTestClass::~MoveTestClass()
{
	if (this->ptr != nullptr)
	{
		cout << "Destructor freeing data for: " << *this->ptr << endl;
	}
	else
	{
		cout << "Destructor freeing data for nullptr " << endl;
	}
	delete this->ptr;
}

void TestMoveConstructorWithVector()
{
	vector<MoveTestClass> vec;

	vec.push_back(MoveTestClass(10));
	vec.push_back(MoveTestClass(20));
	vec.push_back(MoveTestClass(30));
	vec.push_back(MoveTestClass(40));
	vec.push_back(MoveTestClass(50));
	vec.push_back(MoveTestClass(60));

}

