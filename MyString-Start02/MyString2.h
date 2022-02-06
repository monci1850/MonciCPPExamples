#pragma once
#define _CRT_SECURE_NO_DEPRECATE
#ifdef _MYSTRING2_H_
#define _MYSTRING2_H_

class MyString2
{
private:
	char *str;
public:
	MyString2();	// No-args constructor
	MyString2(const char *s);	//Q:? overloaded constructor
	MyString2(const MyString2 &Source);		// copy constructor
	~MyString2();

	void display() const;
	int get_length() const;  // getters should be const.
	const char *get_str() const;

	
};

#endif //_MYSTRING2_H_