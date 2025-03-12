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
	cout << "Day11_Dynamic_Memory_Allocation started." << endl << endl;

	bool value = true;

	if (value == true) {
		int number = 10;
		int *p_number {nullptr};
		p_number = new int;
		*p_number = 25;
		std::cout << "Before memory released:"<< *p_number << std::endl;
		std::cout << number << std::endl;

		delete p_number;
		p_number = nullptr;
		//after releasing the memory location to the system.
		std::cout << "After memory released:"<< *p_number << std::endl;
	}

	//std::cout << *p_number << std::endl;
//	std::cout << number << std::endl;

	return 0;
}
