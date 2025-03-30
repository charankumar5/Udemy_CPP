// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day14_Overflow_Returntypes started." << endl << endl;

	unsigned char x {200};
	//char x= 130; //-128 to 127
	cout << "Character at " << (int)x << ": "<< x << endl;


	int num = 3;

	cout << sizeof(num) << endl;
	num = INT_MAX;
	cout << sizeof(num) << endl;
	cout << num << endl;
	num= num+1;
	cout << num << endl;

	return 0;
}
