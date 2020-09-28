// ObjectsAndClasses_Example01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// Very simple creation of class.
class MyDog
{
public:  // to be able access Bark()

    MyDog();  // constructor has the same name with class, no need specify return type.


    std::string Name;
    int age;

    void InitialBark()
    {
        std::cout << "Wangwang!" << std::endl;
    }
    void Bark();
};



int main()
{
    MyDog Tangdou;
    Tangdou.Bark();
    return 0;
}

// Define constucters and functions outside class
MyDog::MyDog()
{
    InitialBark();
    Name = "Default Name";
    age = 3;
}

void MyDog::Bark()
{
    std::cout << "Woof!" << std::endl;
}

