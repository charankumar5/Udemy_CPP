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
	cout << "Day12_References started." << endl << endl;

	int value {34};

	int & ref_value {value};

	cout << "Original Value: " << value << endl;
	cout << "Reference Value: " << ref_value << endl;

	cout << "Original Value: " << &value << endl;
	cout << "Reference Value: " << &ref_value << endl;

	// Now I change the value in ref or original
	// Both will take effect.

	ref_value = 100;
	cout << "Original Value: " << value << endl;
	cout << "Reference Value: " << ref_value << endl;

	cout << "Original Value: " << &value << endl;
	cout << "Reference Value: " << &ref_value << endl;
	return 0;
}
