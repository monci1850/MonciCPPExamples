// ScopedEnums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum class MyEnumClassColor
{
    red, green=20, blue
};

void PrintColorName(MyEnumClassColor Color);

int main()
{
    MyEnumClassColor Cd;

    Cd = MyEnumClassColor::red;

    PrintColorName(Cd);

    
}

void PrintColorName(MyEnumClassColor Color)
{
    switch (Color)
    {
    case MyEnumClassColor::red:
        cout << "red\n";
        break;
    case MyEnumClassColor::green:
        cout << "green\n";
        break;
    case MyEnumClassColor::blue:
        cout << "blue\n";
        break;
    default: 
        cout << "default color\n";
        break;
    }
}