// Polymorphism_example01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    virtual void Play();

};

class Child : public Parent
{
public:
    virtual void Play() override;
};


class GrandChild : public Child
{
public:
    virtual void Play() override;
};


int main()
{
    Parent* ptr2parent = new Parent;
    Child* ptr2child = new Child;
    GrandChild* ptr2grandchild = new GrandChild;

    Parent* ParentArray[] = { ptr2parent, ptr2child, ptr2grandchild };

    for (size_t i = 0; i < 3; i++)
    {
        ParentArray[i]->Play();
    }

    delete ptr2parent;
    delete ptr2child;
    delete ptr2grandchild;


}

void Parent::Play()
{
    cout << "Parent Play() called \n\n";
}

void Child::Play()
{
    cout << "Child Play() called \n\n";
}

void GrandChild::Play()
{
    cout << "GrandChild Play() called \n\n";

}

