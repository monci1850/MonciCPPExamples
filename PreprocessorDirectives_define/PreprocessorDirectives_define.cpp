/* syntax of the #define proprocessor:
#define identifier replacement
when the preprocessor encounters this directive, 
it replace any occurrence of identifier in the rest of the code by replacement. 
the preprocessor does not understand C++ proper.
*/


#include <iostream>
#define TABLE_SIZE 100
#define getmax(a,b) a>b?a:b	// can work also with parameters to define function macros.


#define TV_SIZE 120
int tv1 = TV_SIZE;
#undef TV_SIZE;
#define TV_SIZE 360
int tv2 = TV_SIZE;

// function macros accept 2 special operators (# and ##)
// # followed by a parameter name, is replaced by a string literal that contains the argument passed
//(as if enclosed between double quotes.)
#define mystr(x) #x
// ## concatenates two arguments leaving no blank space between them.
#define cat(a,b) a##b

using namespace std;

int main()
{
	int table1{ TABLE_SIZE };
	cout << table1 << endl;	//100

	int x=6, y;
	y = getmax(x, 3);
	cout << y << endl;		//6
	cout << int(getmax(7,x))<< endl;	//7

	cout << tv1 << endl;	//120
	cout << tv2 << endl;	//360

	cout << mystr(#test\n);		// translated : cout<<"#test\n";  //#test
	cat(co, ut) << "test\n";	// translated: cout<<"test\n";	//test

	return 0;
}

