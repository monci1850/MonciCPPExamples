// 10_CStyleStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>	// for c-style string functions. 
#include <cctype>	// for character-based functions.

using namespace std;

int main()
{
	//char fisrt_name[3];	// uninitialized. 
	//cout << fisrt_name;		// Will likely display garbage! (面面面面面面面面面面面面面)

	char first_name[20]{};	// initialize it. 
	cout << first_name;		// will display empty. 

	char last_name[20]{};
	char full_name[50]{};
	char temp[50]{};

	// Example 01 : strlen(), strcpy_s(), strcat_s()
	//cout << "Enter your first name: ";
	//cin >> first_name;
	//cout << "Enter your last name: ";
	//cin >> last_name;

	//// strlen()  return a type called size_t, the length to the null terminal in string. 
	//cout << "Hi, " << first_name << "your first name has " << strlen(first_name) << " characters" << endl;	// if first name is "wei", return 3 not 20.
	//cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

	////strcpy(full_name, first_name);	//'strcpy': This function or variable may be unsafe. 
	//									//Consider using strcpy_s instead.
	//									//To disable deprecation, use _CRT_SECURE_NO_WARNINGS. 	
	//strcpy_s(full_name, first_name);
	//cout << full_name << endl;

	//strcat_s(full_name, " ");	// strcat() vs strcat_s()
	//strcat_s(full_name, last_name);
	//cout << full_name << endl;


	// Example 02
	//cout << "Enter your full name with space: ";	// Wei Hu

	////cin >> full_name;	
	////cout << full_name << endl;	// Will only display "Wei". This extraction op stops when it read a space. 
	////cout << strlen(full_name) << endl;	// 3.

	//cin.getline(full_name, 50); // This will stop either reaches the limit 50 or the user presses the Enter. 
	//cout << full_name;


	// Example 03 comparision
	//full_name = "Wayne Acientmoon";		// why? expressio mush be modifiable variable.
	cout << "Enter full name: ";
	cin.getline(full_name, 50);

	strcpy_s(temp, full_name);
	if (strcmp(temp, full_name) == 0)
	{
		cout << temp << " and " << full_name << " are the same" << endl;
	}
	else
	{
		cout << temp << " and " << full_name << " are different" << endl;
	}

	for (size_t i{ 0 }; i < strlen(full_name); ++i)		// need to compare with same type, size_t is the type of strlen()
	{
		if (isalpha(full_name[i]))	// is a specific character or not. 
			full_name[i] = toupper(full_name[i]);
	}
	cout << "Your full name in captical is: " << full_name << endl;

	if (strcmp(temp, full_name) == 0)
	{
		cout << temp << " and " << full_name << " are the same" << endl;
	}
	else
	{
		cout << temp << " and " << full_name << " are different" << endl;
	}
	// strcmp() returns less than 0 if fist string lexically comes before the second string. 
	cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;	// 1
	cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;	// -1

	return 0;


}


