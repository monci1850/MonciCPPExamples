//
#include <iostream>
using namespace std;

class Time
{
private:
	int hours;             // 0 �� 23
	int minutes;           // 0 �� 59
public:
	// ����Ĺ��캯��
	Time() {
		hours = 0;
		minutes = 0;
	}
	Time(int h, int m) {
		hours = h;
		minutes = m;
	}
	// ��ʾʱ��ķ���
	void displayTime()
	{
		cout << "H: " << hours << " M:" << minutes << endl;
	}


	Time operator++()
	{
		++minutes;
		if (minutes>=60)
		{
			++hours;
			minutes -= 60;
		}
		return Time(hours, minutes);
	}

	Time operator++(int)
	{
		Time T(hours, minutes);
		++minutes;
		if (minutes >= 60)
		{
			++hours;
			minutes -= 60;
		}
		return T;
	}
};

int main()
{
	Time t1(11, 59), t2(10, 40);
	t1.displayTime();
	++t1;
	t1.displayTime();

	t2.displayTime();
	t2++;
	t2.displayTime();

	cout << " Test increments: " << endl;
	int x{ 1 };
	int y{ 1 };
	/*
	* x++ increments the value of variable x after processing the current statement.
	* ++x increments the value of variable x before processing the current statement.
	*/
	cout << ++x << endl;	//2
	cout << y++ << endl;	//1
	cout << y << endl;
	return 0;
}
