#pragma once

#define _CRT_SECURE_NO_DEPRECATE

#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
	char* str;      // pointer to a char[] that holds a C-style string, raw pointer.
public:
	Mystring();                                            // No-args constructor
	Mystring(const char* s);                         // Overloaded constructor              
	Mystring(const Mystring& source);         // Copy constructor
	~Mystring();                                          // Destructor
	void display() const;
	int get_length() const;                           // getters
	const char* get_str() const;

};

#endif // _MYSTRING_H_
