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
	cout << "Day3_Char_Text started." << endl << endl;
	char charecter {'a'};
	cout << charecter << endl;
	char charecter2 {34}; // 34 is an ascii value or "
	cout << charecter2 << endl;
	char charecter3 {65}; // 65 is an Ascii value of A
	cout << charecter3 << endl;

	//convert char Ascii value to int value.
	std::cout << static_cast<int>(charecter2) << endl;
	std::cout << static_cast<int>(charecter3) << endl;

	auto value {10u};
	cout << value << endl;
	value = -22;
	cout << value << endl;
	value = 22;
	cout << value << endl;
	// one disaster thing not to do with auto.

	return 0;
}
