//

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person(string theName); 
    void introduce();
protected:
    string name;
};


class Teacher : public Person
{
public:
    Teacher(string theName, string theClass);

    void introduce();

    void tech();

protected:
    string classes;
};


class Student : public Person
{
public:
    Student(string theName, string theClass);
    void attendClass();
    void introduce();
protected:
    string classes;
};

// grandchild class dirived from two child classes.
class TeachingStudent : public Student, public Teacher
{
public:
    TeachingStudent(string theName, string classTeching, string classAttending);
    void introduce();
};



int main()
{
    Teacher teacher("Mike", "Class F");
    Student student("Essen", "Class E");
    TeachingStudent teachingstudent("Alex", "Class X", "Class H");

    teacher.introduce();
    teacher.tech();

    student.introduce();
    student.attendClass();

    teachingstudent.introduce();
    teachingstudent.attendClass();
    teachingstudent.tech();
    system("pause");
}


// Base class
Person::Person(string theName)
{
    name = theName;
}

void Person::introduce()
{
    cout << "Hi, I'm " << name << endl;
}


// Child Class: Teacher
Teacher::Teacher(string theName, string theClass):Person(theName)
{
    classes = theClass;
}

void Teacher::introduce()
{
    cout << "Hi, I'm " << name << ", I tech " << classes << ". \n";

}

void Teacher::tech()
{
    cout << name << " tech " << classes << ". \n";
}


// Child class: Student
Student::Student(string theName, string theClass) : Person(theName)
{
    classes = theClass;
}

void Student::introduce()
{
    cout << "Hi, I'm " << name << ", I'm in " << classes << ". \n";
}

void Student::attendClass()
{
    cout << name << " attend " << classes << endl;
}


// grandchild class
TeachingStudent::TeachingStudent(string theName, string classTeching, string classAttending):
    Teacher(theName, classTeching), Student(theName, classAttending)
{
}

void TeachingStudent::introduce()
{
    cout << "Hi, I'm " << Student::name << ", I tech " << Teacher::classes << ". \n";
    cout << "Meanwhile,  I'm also the student of " << Student::classes << endl;

}

