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
	cout << "Day5_Const started." << endl << endl;
	const int var1 {10};
	cout << var1 << " & " << &var1 << endl;
	// trying to change value using pointer.
	// error conversion from const int to int.
	int* ptr1 = &var1;
	cout << "value: " << *ptr1 << endl;
	return 0;
}
