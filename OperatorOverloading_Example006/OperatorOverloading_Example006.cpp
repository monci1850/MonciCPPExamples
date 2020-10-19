/*
C++ 输入/输出运算符重载
C++ 重载运算符和重载函数 C++ 重载运算符和重载函数
C++ 能够使用流提取运算符 >> 和流插入运算符 << 来输入和输出内置的数据类型。您可以重载流提取运算符和流插入运算符来操作对象等用户自定义的数据类型。
在这里，有一点很重要，我们需要把运算符重载函数声明为类的友元函数，这样我们就能不用创建对象而直接调用函数。
下面的实例演示了如何重载提取运算符 >> 和插入运算符 <<。
*/

#include <iostream>
//using namespace std;


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

	friend std::ostream& operator<<(std::ostream& output, const Distance& d)
	{
		output << "F: " << d.feet << " I: " << d.inches;
		return output;
	}

	friend std::istream& operator>>(std::istream& input, Distance& d)
	{
		input >> d.feet >> d.inches;
		return input;
	}

};
int main()
{
	Distance D1(11, 10), D2(5, 11), D3;

	std::cout << "Third Distance :" << D3 << std::endl;

	std::cout << "Enter the value of object : " << std::endl;
	std::cin >> D3;
	std::cout << "Third Distance :" << D3 << std::endl;

	std::cout << "Third Distance :" << D1 << std::endl;
	std::cout << "Third Distance :" << D2 << std::endl;

	return 0;
}