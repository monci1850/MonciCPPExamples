/*
�������������һ�������������ظ�ֵ������� = �������ڴ���һ�����󣬱��翽�����캯����
�����ʵ����ʾ��������ظ�ֵ�������
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

	// = operator overloading
	void operator=(const Distance& d)
	{
		feet = d.feet*2;
		inches = d.inches*2;
	}

	// ��ʾ����ķ���
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