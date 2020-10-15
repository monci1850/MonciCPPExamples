//student.h

#ifndef STUDENT_H
#define STUDENT_H
class Student
{
private:
	//int num;
	char* name;	// raw pointer
public:
	Student();
	~Student();
	Student(const Student& source);	 //拷贝构造函数，const防止对象被改变
};

#endif