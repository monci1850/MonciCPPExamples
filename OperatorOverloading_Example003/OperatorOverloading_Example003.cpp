/*
C++ 一元运算符重载
C++ 重载运算符和重载函数 C++ 重载运算符和重载函数

一元运算符只对一个操作数进行操作，下面是一元运算符的实例：

递增运算符（ ++ ）和递减运算符（ -- ）
一元减运算符，即负号（ - ）
逻辑非运算符（ ! ）
一元运算符通常出现在它们所操作的对象的左边，比如 !obj、-obj 和 ++obj，
但有时它们也可以作为后缀，比如 obj++ 或 obj--。

下面的实例演示了如何重载一元减运算符（ - ）。
*/

#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	int inches;
public:
	// constructors
	Distance();
	Distance(int f, int i);

	// - operator overloading
	void displayDistance();

	Distance operator- ();
};

Distance::Distance()
{
	feet = 0;
	inches = 0;
}

Distance::Distance(int f, int i)
{
	feet = f;
	inches = i;
}

void Distance::displayDistance()
{
	cout << "F: " << feet << " I: " << inches << endl;
}

// 重载负运算符（ - ）
Distance Distance::operator-()
{
	feet = -feet*2;
	inches = -inches*2;
	return Distance(feet, inches);
}

int main()
{
	Distance d1(11, 10), d2(-5, 11);
	d1.displayDistance();
	-d1;
	d1.displayDistance();

	d2.displayDistance();
	-d2;
	d2.displayDistance();

	return 0;

}

