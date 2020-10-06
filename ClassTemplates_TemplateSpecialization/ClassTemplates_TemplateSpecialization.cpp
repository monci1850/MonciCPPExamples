// ClassTemplates_TemplateSpecialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// class template
template <class MyType>
class MyContainer
{
	MyType element;
public:
	MyContainer(MyType arg) { element = arg; }
	MyType increase() { return ++element; }
};


// class template specialization
/*
*When we declare specializations for a template class, we must also define all its members, 
*even those exactly equal to the generic template class,
*because there is no "inheritance" of members from the generic template to the specialization.
*/
template<>
class MyContainer <char>
{
	char element;
public:
	MyContainer(char arg) { element = arg; }
	char uppercase()
	{
		if ( (element>='a') && (element <='z') )
		{
			element += 'A' - 'a';
			return element;
		}
	}
};


int main()
{
	MyContainer<int> myint_obj(7);
	cout << myint_obj.increase() << endl;	//8

	MyContainer<char> mychar_obj('j');
	//cout << mychar_obj.increase() << endl;	//Error, if we created specialization. Otherwise, will print out 'k' to the console.
	cout << mychar_obj.uppercase() << endl;
	return 0;
}

