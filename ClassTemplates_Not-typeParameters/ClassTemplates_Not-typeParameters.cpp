/*
*Besides the template arguments that are preceded by the class or typename keywords , 
*which represent types, templates can also have regular typed parameters, similar to those found in functions. 
*As an example, have a look at this class template that is used to contain sequences of elements:
*/

#include <iostream>
using namespace std;

template<class MyType=char, int N=10>
class MySeq
{
	MyType memblock[N];
public:
	void setMembber(int x, MyType value);
	MyType getMember(int x);
};

template<class MyType, int N>
void MySeq<MyType, N>::setMembber(int x, MyType value)
{
	memblock[x] = value;
}

template<class MyType, int N>
MyType MySeq<MyType, N>::getMember(int x)
{
	return memblock[x];
}

int main()
{
	MySeq<int, 5> myints_obj;
	myints_obj.setMembber(0, 100);
	myints_obj.setMembber(1, 24);
	cout << myints_obj.getMember(1) << endl;	//24
	
	MySeq<float, 5> myfloats_obj;
	myfloats_obj.setMembber(0, 232.9);
	cout << myfloats_obj.getMember(0) << endl;	//232.9

	// use default type and value.
	MySeq<> mychars_obj;	// equivalent to: 	MySeq<char,10>mychars_obj;
	mychars_obj.setMembber(0, 'x');
	cout << mychars_obj.getMember(0) << endl;	//x

	return 0;
}


