/*
C++ һԪ���������
C++ ��������������غ��� C++ ��������������غ���

һԪ�����ֻ��һ�����������в�����������һԪ�������ʵ����

����������� ++ ���͵ݼ�������� -- ��
һԪ��������������ţ� - ��
�߼���������� ! ��
һԪ�����ͨ�������������������Ķ������ߣ����� !obj��-obj �� ++obj��
����ʱ����Ҳ������Ϊ��׺������ obj++ �� obj--��

�����ʵ����ʾ���������һԪ��������� - ����
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

// ���ظ�������� - ��
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

