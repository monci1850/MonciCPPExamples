// TestDebug.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"

void Object::hello()
{
std::cout << "hello!!!!" << std::endl;
}


int main()
{
    Object obj;
    obj.hello();

    int a;
    a= 9;
    a++;
    const char* string = "Hello";
    for (size_t i = 0; i < 5; i++)
    {
        const char c = string[i];
        std::cout << c << std::endl;
    }
    
    std::cout << "Hello World!\n";
}

