/*
*In case that we define a function member outside the declaration of the class template, 
*we must always precede that definition with the template <...> prefix:
*/

#include <iostream>
using namespace std;

template <class MyType>
class MyPair
{
	MyType a, b;
public:
	MyPair(MyType first, MyType second);
	MyType getmax();
};




template <class MyType>
MyPair<MyType>::MyPair(MyType first, MyType second)
{
	a = first;
	b = second;
}

/*
Confused by so many MyType's? There are three MyType's in this declaration:
The first one is the template parameter. The second MyType refers to the type returned by the function.
And the third MyType (the one between angle brackets) is also a requirement:
It specifies that this function's template parameter is also the class template parameter.
*/

template <class MyType>
MyType MyPair<MyType>::getmax()
{
	MyType x;
	x = a > b ? a : b;
	return x;
}

int main()
{
	MyPair<int> mypair_obj(100, 86);
	cout << mypair_obj.getmax() << endl;	//100

	MyPair<double> mypair_obj2(2.55, 90.29);
	cout << mypair_obj2.getmax() << endl;	// 90.29

	MyPair<int> mypair_obj3(2.5, 1.5);
	cout << mypair_obj3.getmax() << endl;	//2

	return 0;
}

