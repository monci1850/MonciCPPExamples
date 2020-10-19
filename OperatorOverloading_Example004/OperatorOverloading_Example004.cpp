/*C++ ��Ԫ���������
C++ ��������������غ��� C++ ��������������غ���

��Ԫ�������Ҫ���������������Ƕ�Ԫ�������ʵ��������ƽ��ʹ�õļ�������� + ������������� - ������������� * ���ͳ�������� / �������ڶ�Ԫ������������(+)�������

�����ʵ����ʾ��������ؼ�������� + �������Ƶأ���Ҳ���Գ������ؼ�������� - ���ͳ�������� / ����
*/
#include <iostream>
using namespace std;

class Box
{
	double length;      // ����
	double breadth;     // ���
	double height;      // �߶�
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

	// ���� + ����������ڰ����� Box �������
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
	Box Box1;                // ���� Box1������Ϊ Box
	Box Box2;                // ���� Box2������Ϊ Box
	Box Box3;                // ���� Box3������Ϊ Box
	double volume = 0.0;     // ������洢�ڸñ�����

	// Box1 ����
	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);

	// Box2 ����
	Box2.setLength(12.0);
	Box2.setBreadth(13.0);
	Box2.setHeight(10.0);

	// Box1 �����
	volume = Box1.getVolume();
	cout << "Volume of Box1 : " << volume << endl;

	// Box2 �����
	volume = Box2.getVolume();
	cout << "Volume of Box2 : " << volume << endl;

	// ������������ӣ��õ� Box3
	Box3 = Box1 + Box2;
	volume = Box3.getVolume();

	cout << "Volume of Box3 : " << volume << endl;

	return 0;
}

