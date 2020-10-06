//

#include <iostream>
using namespace std;

template <class MyType1, class MyType2, class MyType3>
MyType1 add_1(MyType2 x, MyType3 y)
{
	return(x + y);
}

template <class MyType1>
MyType1 add_2(MyType1 x, MyType1 y)
{
	return(x + y);
}

int main()
{
	// more than one type expected in the tamplate
	cout << add_1<int, float, float>(3.5, 5) << endl; // 8
	cout << add_1<float, int, float>(3.9, 5.1) << endl;	//8.1 not 9.0

	//without explicitly specifying the type between angle-brackets <>
	//cout << add_1(23, 2) << endl;	//ERROR, because the template has more than one type expected.
	cout << add_2(3, 5) << endl;	//The compiler automatically determines what type is needed on each call. 

	return 0;
}

