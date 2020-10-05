#include <iostream>
#include <windows.h>

#define FULL_GAS 85

class Car
{
public:
	std::string  color;
	std::string  engine;
	unsigned int  gas_tank;
	unsigned int  wheel;

	void setColor(std::string col);
	void setEngine(std::string eng);
	void setWheel(unsigned int whe);
	void fillTank(int  liter);
	int running(void);
	void warning(void);
};

void Car::setColor(std::string col)
{
	color = col;
}

void Car::setEngine(std::string eng)
{
	engine = eng;
}

void Car::setWheel(unsigned int whe)
{
	wheel = whe;
}

void Car::fillTank(int  liter)
{
	gas_tank += liter;
}

int Car::running(void)
{
	std::cout << "��������120��ʱ����ǰ�ƶ�������Խ���Ǹ�ɽԽ���Ǻӡ�����\n";
	gas_tank--;
	std::cout << "��ǰ��ʣ " << 100 * gas_tank / FULL_GAS << "%" << "����!\n";

	return gas_tank;
}

void Car::warning(void)
{
	std::cout << "WARNING!!" << "��ʣ " << 100 * gas_tank / FULL_GAS << "%" << "����!";
}

// ���������Ǵ���һЩBUG�����ܹ���������DEBUG���� 
int main()
{
	char i;
	Car mycar;

	mycar.setColor("WHITE");
	mycar.setEngine("V8");
	mycar.setWheel(4);

	mycar.gas_tank = FULL_GAS;

	while (mycar.running())
	{
		if (mycar.running() < 10)
		{
			mycar.warning();
			std::cout << "�����Ƿ���Ҫ����������ʻ?(Y/N)\n";
			std::cin >> i;
			if ('Y' == i || 'y' == i)
			{
				mycar.fillTank(FULL_GAS);
			}
		}
	}

	return 0;
}
