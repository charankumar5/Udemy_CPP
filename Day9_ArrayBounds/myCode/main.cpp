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
	cout << "Day9_ArrayBounds started." << endl << endl;

	int numbers [] {1,2,3,4,5,6,7,8,9,0};

	std::cout << numbers[4] << std::endl;

	numbers[20] = 10;

	std::cout << numbers[20] << std::endl;

	//Get the values in between bounds.
	std::cout << "unknown value: " << numbers[15] << std::endl;
	//Get values out of the bounds.
	std::cout << "unknown value: "<< numbers[25] << std::endl;


	for (size_t i{0}; i<100; i++){

		std::cout << "numbers[" << i << "] " << numbers[i] << std::endl;
	}
	return 0;
}
