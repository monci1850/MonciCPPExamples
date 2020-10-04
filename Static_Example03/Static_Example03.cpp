// Static_Example03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Item
{
public:
	Item();
	~Item();
	static int ItemCount;

private:

};

// Static variable must initialize outside the class. 
int Item::ItemCount = 10;

int main()
{
}


Item::Item()
{
	cout << "Constructor called.\n";
}

Item::~Item()
{
}

