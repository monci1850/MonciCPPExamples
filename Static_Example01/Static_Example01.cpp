// using static vairables in functions.

#include <iostream>
#include <string>

using namespace std;

void AddToCount()
{
    static int count = 0;
    count++;
    cout << count << endl;
}


int main()
{
    for (int i = 0; i < 10; i++)
    {
        AddToCount();
    }

    AddToCount();
}

