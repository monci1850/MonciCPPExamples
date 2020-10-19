/*
C++ ��ϵ���������
C++ ��������������غ��� C++ ��������������غ���

C++ ����֧�ָ��ֹ�ϵ������� < �� > �� <= �� >= �� == �ȵȣ������ǿ����ڱȽ� C++ ���õ��������͡�

�����������κ�һ����ϵ����������غ�Ĺ�ϵ����������ڱȽ���Ķ���

�����ʵ����ʾ��������� < ����������Ƶأ���Ҳ���Գ������������Ĺ�ϵ�������
*/

#include <iostream>
using namespace std;
class Distance
{
private:
	int feet;             // 0 ������
	int inches;           // 0 �� 12
public:
	// ����Ĺ��캯��
	Distance() {
		feet = 0;
		inches = 0;
	}
	Distance(int f, int i) {
		feet = f;
		inches = i;
	}
	// ��ʾ����ķ���
	void displayDistance()
	{
		cout << "F: " << feet << " I:" << inches << endl;
	}

	Distance operator-()
	{
		feet = -feet;
		inches = -inches;
		return Distance(feet, inches);
	}

	bool operator<(const Distance& d)
	{
		if (feet < d.feet)
		{
			return true;
		}
		if (feet == d.feet && inches < d.inches)
		{
			return true;
		}
		return false;
	}
};

int main()
{
	Distance D1(11, 10), D2(5, 11);
	if (D1 < D2)
	{
		cout << "D1 is less than D2 " << endl;
	}
	else
	{
		cout << "D2 is less than D1 " << endl;
	}
	return 0;
}