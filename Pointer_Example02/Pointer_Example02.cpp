// Pointer_Example02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct MyStruct
{
    std::string Name;
    int Age;
    float Health;
    float Distance;
};

int main()
{
    // Initialize
    MyStruct Container = { "Monci", 30, 90.f, 1000.f };
    // access the elements of a struct container via pointer
    MyStruct* ContPtr = &Container;

    // augly notation
    std::cout << (*ContPtr).Name << std::endl;
    //std::cout << *ContPtr.Name << std::endl;  //ERROR, check C++ Operator Precedence


    // "->" is the better notation to dereferencing and give the access to the contents.
    std::cout << ContPtr->Name << std::endl;

}

