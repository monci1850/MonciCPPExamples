/*
C++ ����/������������
C++ ��������������غ��� C++ ��������������غ���
C++ �ܹ�ʹ������ȡ����� >> ������������� << �������������õ��������͡���������������ȡ������������������������������û��Զ�����������͡�
�������һ�����Ҫ��������Ҫ����������غ�������Ϊ�����Ԫ�������������Ǿ��ܲ��ô��������ֱ�ӵ��ú�����
�����ʵ����ʾ�����������ȡ����� >> �Ͳ�������� <<��
*/

#include <iostream>
//using namespace std;


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