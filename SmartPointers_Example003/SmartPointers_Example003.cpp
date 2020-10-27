//

#include <iostream>
#include <memory>

void my_func1()
{
	int* valuePtr = new int(15);
	int x = 45;
	// ...
	if (x == 45)
		return;   // here we have a memory leak, valuePtr is not deleted
	// ...
	delete valuePtr;
}

// The same example using the unique_ptr<> template:
void my_func2()
{
	std::unique_ptr<int> valuePtr(new int(15));
	int x = 45;
	if (x == 45)
		return;	// no memory leak anymore

}

int main()
{
	my_func2();
	return 0;
}

