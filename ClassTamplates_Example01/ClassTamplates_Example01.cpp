// ClassTamplates_Example01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template<class MyType1, class MyType2>
class Weight
{
private:
    MyType1 kg;
    MyType2 gram;
public:
    void SetData(MyType1 x, MyType2 y)
    {
        kg = x;
        gram = y;
    }
    MyType1 GetKgData()
    {
        return kg;
    }
    MyType2 GetGramData()
    {
        return gram;
    }
       
};

int main()
{
    Weight<int, double> obj1;
    obj1.SetData(10.23, .901);
    cout << obj1.GetKgData() << endl; //10

    Weight<double, double> obj2;
    obj2.SetData(5.1909, .8);
    cout << obj2.GetKgData() << endl; //5.1909
    cout << obj2.GetGramData() << endl; // 0.8

    return 0;
}

