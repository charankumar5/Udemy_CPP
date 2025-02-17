// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include <iomanip>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day3_BoolAlpha started." << endl << endl;

	// Initialise bool.
	bool redLight {false};
	bool greenLight {false};

	if (redLight == false) {
		cout << "stop" << endl;
	}
	else {
		cout << "Go through!" << endl;
	}

	greenLight = true;
	if(greenLight) {
		cout << "go through" << endl;
	}
	else {
		cout << "stop" << endl;
	}


	// print bool values.
	cout << redLight << endl<< greenLight << endl;
	std::cout << std::boolalpha;
	cout << redLight << endl<< greenLight << endl;
	return 0;
}
