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
	cout << "Day10_Ptr_Char&Strings started." << endl << endl;

	char * ptr_char {nullptr};
	char char_var {'B'};

	ptr_char = &char_var;
	char_var = 'D';
	std::cout << "Character at pointing address: " << *ptr_char << std::endl;


	//Pointer with char strings:
	const char* message {"Hello world!"};

	std::cout << "message: " << message <<  std::endl; // Print full message at once.
	std::cout << "message: " << * message <<  std::endl; // prints only first char of the pointer.

	char message1[] {"Hello World!"}; // this is normal char string not pointer string.
	message1[0] = 'B';

	std::cout << "message1: " << message1 << std::endl;

	return 0;
}
