// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"
#include "addNumbers.h"
// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day1_addNumbers started." << endl << endl;

	// call the function.
	addNumbers object(10,20);
	std::cout << object.add() << std::endl;

	return 0;
}
