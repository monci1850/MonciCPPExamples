/* Function Overloading vs Function Templates
*
*The format for declaring function templates with type parameters is:
*
*template <class identifier> function_declaration;
*template <typename identifier> function_declaration;
*
*The only difference between both prototypes is the use of either the keyword class or the keyword typename.
*Its use is indistinct, since both expressions have exactly the same meaning and behave exactly the same way.
*/


#include <iostream>
using namespace std;

/*
// Function Overloading
int add(int x, int y)
{
    return (x + y);
}
float add(float x, float y)
{
    return (x + y);
}
double add(double x, double y)
{
    return(x + y);
}
*/

// Function Templates
template <class MyType>  // template <typename T> is also correct
MyType add(MyType x, MyType y)
{
    return(x + y);
}


int main()
{
    /*
    // Function Overloading
    cout << add(3, 4) << endl;
    cout << add(3.4, 4.2) << endl;
    cout << add(3.82, 4.12) << endl;
    */

    // Function Templates
    cout << add<int>(3, 4) << endl;
    cout << add<float>(3.4, 4.2) << endl;
    cout << add<double>(3.82, 4.12) << endl;

    return 0;
}

