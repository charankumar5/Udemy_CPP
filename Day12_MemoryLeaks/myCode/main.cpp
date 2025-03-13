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
	cout << "Day12_MemoryLeaks started." << endl << endl;

	int *p_number {new int {56}};

	// check address and value of pointer.
	cout << p_number << endl;
	cout << *p_number << endl;


	int number {30};

	p_number = &number;

	// Memory leaked.
	cout << p_number << endl;
	cout << *p_number << endl;


	return 0;
}
