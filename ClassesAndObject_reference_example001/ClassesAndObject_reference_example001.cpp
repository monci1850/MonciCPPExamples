// ClassesAndObject_reference_example001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//值传递
void ValueSwap(int m, int n)
{
	int temp = m;
	m = n;
	n = temp;
}
//地址传递
void PointerSwap(int* m, int* n) 
{
	int temp = *m;
	*m = *n;
	*n = temp;
}
//引用传递
void ReferenceSwap(int& m, int& n)
{
	int temp = m;
	m = n;
	n = temp;
}


void TestRef(int& ref) 
{ 
	ref = 100;  // ref是引用，转换为*ref = 100
}


int main()
{
	int a = 10;
	// b 相当于 a 的别名
	int& b = a;	// b has same memory address with a.
	int c = a;	// c has different address.

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << endl;

	// Like parameter reference in Houdini. 
	// 操作b就相当于在操作a, 在b变成100的同时a也变成了100.
	b = 100;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << endl;

	//可以有多个别名
	int& d = a;
	d = 999;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "d: " << d << endl;
	cout << endl;

	// 除了c, 地址都是相同的
	cout << "a:" << &a << endl;
	cout << "b:" << &b << endl;
	cout << "c:" << &c << endl;
	cout << "d:" << &d << endl;


	/*reference 引用的注意事项*/
	//1) 引用必须初始化
	//int& ref; //报错:必须初始化引用
	//2) 引用一旦初始化，不能改变引用
	int x = 10;
	int y = 20;
	int& ref = x;
	//int& ref = y;	//ERROR: 不能改变引用

	//3) 不能对数组建立引用
	int arr[10];
	//int& ref_arr[10] = arr;


	/*最常见看见引用的地方是在函数参数和返回值中。当引用被用作函数参数的时，
	在函数内对任何引用的修改，将对还函数外的参数产生改变。当然，可以通过传递一个指针来做相同的事情，但引用具有更清晰的语法。
	如果从函数中返回一个引用，必须像从函数中返回一个指针一样对待。当函数返回值时，引用关联的内存一定要存在。*/
	int m = 15;
	int n = 30;
	//值传递
	ValueSwap(m, n);
	cout << "m:" << m << " n:" << n << endl;
	//地址传递
	PointerSwap(&m, &n);
	cout << "m:" << m << " n:" << n << endl;
	//引用传递
	ReferenceSwap(m, n);
	cout << "m:" << m << " n:" << n << endl;


	/*引用的本质在c++内部实现是一个指针常量.
	Type& ref = val; // Type* const ref = &val;
	*/

	int v = 567;
	int& f = v;
	int* const g = &v;
	cout << "v: " << v << endl;
	cout << "f: " << f << endl;
	cout << "*g: " << *g << endl;
	*g = 123;
	//g = &a;	// like reference, const pointer can not be modified.

	cout << "v: " << v << endl;
	cout << "f: " << f << endl;
	cout << "*g: " << *g << endl;

	cout << endl;

	int h = 798;
	int& j = h;	 // automatically convert to int* const j = &h;
	j = 555; // automatically convert to *j = 555;
	cout << "h: " << h << endl;
	cout << "j: " << j << endl;
	cout << endl;

	TestRef(j);
	cout << "h: " << h << endl;
	cout << "j: " << j << endl;
	cout << endl;

	return 0;



}

