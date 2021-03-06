/*C++ 二元运算符重载
C++ 重载运算符和重载函数 C++ 重载运算符和重载函数

二元运算符需要两个参数，下面是二元运算符的实例。我们平常使用的加运算符（ + ）、减运算符（ - ）、乘运算符（ * ）和除运算符（ / ）都属于二元运算符。就像加(+)运算符。

下面的实例演示了如何重载加运算符（ + ）。类似地，您也可以尝试重载减运算符（ - ）和除运算符（ / ）。
*/
#include <iostream>
using namespace std;

class Box
{
	double length;      // 长度
	double breadth;     // 宽度
	double height;      // 高度
public:
	double getVolume(void)
	{
		return length * breadth * height;
	}
	void setLength(double len)
	{
		length = len;
	}

	void setBreadth(double bre)
	{
		breadth = bre;
	}

	void setHeight(double hei)
	{
		height = hei;
	}

	// 重载 + 运算符，用于把两个 Box 对象相加
	Box operator+(const Box& b)
	{
		Box box;
		box.length = this->length + b.length;
		box.breadth = this->breadth + b.breadth;
		box.height = this->height + b.height;

		return box;
	}

};

int main()
{
	Box Box1;                // 声明 Box1，类型为 Box
	Box Box2;                // 声明 Box2，类型为 Box
	Box Box3;                // 声明 Box3，类型为 Box
	double volume = 0.0;     // 把体积存储在该变量中

	// Box1 详述
	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);

	// Box2 详述
	Box2.setLength(12.0);
	Box2.setBreadth(13.0);
	Box2.setHeight(10.0);

	// Box1 的体积
	volume = Box1.getVolume();
	cout << "Volume of Box1 : " << volume << endl;

	// Box2 的体积
	volume = Box2.getVolume();
	cout << "Volume of Box2 : " << volume << endl;

	// 把两个对象相加，得到 Box3
	Box3 = Box1 + Box2;
	volume = Box3.getVolume();

	cout << "Volume of Box3 : " << volume << endl;

	return 0;
}

