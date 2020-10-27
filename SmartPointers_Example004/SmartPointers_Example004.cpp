//https://www.internalpointers.com/post/beginner-s-look-smart-pointers-modern-c


#include <iostream>
#include <string>
class AObject
{
public:
	AObject(std::string input_name)
	{
		name = input_name;
	}
protected:
private:
	std::string name;
};

/*
* A std::unique_ptr is created like this:
std::unique_ptr<Type> p(new Type);
*/
std::unique_ptr<int> p1(new int);
std::unique_ptr<int> p2(new int[50]);
std::unique_ptr<AObject> p3(new AObject("box"));

/*
It is also possible to construct std::unique_ptrs with the help of the special function std::make_unique, like this:
std::unique_ptr<Type> p = std::make_unique<Type>(...size or parameters...);
*/
std::unique_ptr<int> l1 = std::make_unique<int>();
std::unique_ptr<int[]> l2 = std::make_unique<int[]>(50);
std::unique_ptr<AObject> l3 = std::make_unique<AObject>("box");


//void compute()
//{
//	std::unique_ptr<int[]> data = std::make_unique<int[]>(1025);
//}

void compute(std::unique_ptr<int[]> p) {  }


/*
How to construct a std::shared_ptr
*/
std::shared_ptr<int> n1(new int);
std::shared_ptr<int[]> n2(new int[30]);
std::shared_ptr<AObject> n3(new AObject("box"));

std::shared_ptr<int> n4 = std::make_shared<int>();
std::shared_ptr<AObject> n5 = std::make_shared<AObject>("box");


int main()
{
	std::unique_ptr<int[]> ptr = std::make_unique<int[]>(1025);
	//std::unique_ptr<int[]> ptr_copy = ptr;	// ERROR! copy is not allowed.
	//compute(ptr);	// ERROR! `ptr` is passed by copy, and copy is not allowed
	return 0;
}

