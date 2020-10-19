//

#include <iostream>
using namespace std;

struct Student {
	int age;
	string name;
};

bool operator ==(Student stu1, Student stu2)
{
	if (stu1.age == stu2.age && stu1.name == stu2.name)
	{
		return true;
	}
	else { return false; }
}

int main()
{
	Student stu1 = { 12, "aha" };
	Student stu2 = { 14, "bob" };
	Student stu3 = { 12, "aha" };

	//if (stu1 == stu2)
	//	return true;
	//else
	//	return false;

	//if (operator==(stu1, stu2))
	//	return true;
	//else
	//	return false;
	cout << "stu1 == stu2: " << operator == (stu1, stu2) << endl;
	cout << "stu1 == stu3: " << operator == (stu1, stu3) << endl;
	return 0;

}

