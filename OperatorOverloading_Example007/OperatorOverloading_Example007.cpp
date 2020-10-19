/*
就像其他运算符一样，您可以重载赋值运算符（ = ），用于创建一个对象，比如拷贝构造函数。
下面的实例演示了如何重载赋值运算符。
*/

#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;             // 0 到无穷
	int inches;           // 0 到 12
public:
	// 所需的构造函数
	Distance() {
		feet = 0;
		inches = 0;
	}
	Distance(int f, int i) {
		feet = f;
		inches = i;
	}

	// = operator overloading
	void operator=(const Distance& d)
	{
		feet = d.feet*2;
		inches = d.inches*2;
	}

	// 显示距离的方法
	void displayDistance()
	{
		cout << "F: " << feet << " I:" << inches << endl;
	}

};


int main()
{
	Distance D1(11, 10), D2(5, 11);

	cout << "First Distance : ";
	D1.displayDistance();
	cout << "Second Distance :";
	D2.displayDistance();

	D2 = D1;
	cout << "Second Distance :";
	D2.displayDistance();

	return 0;
}