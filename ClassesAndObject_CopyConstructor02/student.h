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
	Student(const Student& source);	 //�������캯����const��ֹ���󱻸ı�
};

#endif