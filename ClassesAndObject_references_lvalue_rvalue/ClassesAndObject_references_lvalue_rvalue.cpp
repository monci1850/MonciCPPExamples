// ClassesAndObject_references_lvalue_rvalue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int x{ 100 };	// l-value, has address
	int& l_ref = x;	// l-value reference, since x is an l-value
	l_ref = 99;

	int&& r_ref = 200;	// since 200 is an r-value, here use r-value reference.
	r_ref = 300;	// change that temp variable.

	//int&& x_ref = x;	// error, 

	void funcL(int& num);	// expects l-value parameter

	funcL(x);
	//func(200);	// error: 200 is an r-value

	void funcR(int&& num);
	funcR(200);
	//funcR(x);	// error: x is an r-value

	// overload
	void func(int& num);	//A
	void func(int&& num);	//B

	func(x);	//calls A since x is l-value
	func(200);	// calls B since 200 is r-value

	return 0;

}

