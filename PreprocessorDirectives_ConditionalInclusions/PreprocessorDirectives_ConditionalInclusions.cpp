//

#include <iostream>
using namespace std;

#define TABLE_SIZE 100
//#undef TABLE_SIZE
#ifdef TABLE_SIZE
// only complied if TABLE_SIZE previously defined with #define	
// if TABLE_SIZE was not defined or undefined, these codes will not be included in 
// the program compilation.
int table = TABLE_SIZE;	
#endif // TABLE_SIZE


#define PAPER_SIZE 78;
#ifndef PAPER_SIZE
// Only compiled if PAPER_SIZE has not previously defined.
#define PAPER_SIZE 99
#endif // PAPER_SIZE


#define BOX_SIZE 120
#if BOX_SIZE>200
#undef BOX_SIZE
#define BOX_SIZE 200

#elif BOX_SIZE<50
#undef BOX_SIZE
#define BOX_SIZE 50

#else
#undef BOX_SIZE
#define BOX_SIZE 100
#endif // BOX_SIZE


int main()
{
	cout << table << endl;	// will return error if #undef TABLE_SIZE is uncommented.

	int paper_size;
	paper_size = PAPER_SIZE;	// 78

	cout << paper_size << endl;

	cout << "BOX_SIZE=" << BOX_SIZE << endl;
	
}

