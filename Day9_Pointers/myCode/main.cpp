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
	cout << "Day9_Pointers started." << endl << endl;

	int number {10};

	int* ptr_num {nullptr};

	ptr_num = &number;

	std::cout << "int variable address: " << ptr_num << std::endl;
	std::cout << "int variable value: " << *ptr_num << std::endl;

	double value = 24.67;
	double *ptr_double {nullptr};
	ptr_double = &value;
	std::cout << "double pointer address: " << ptr_double << std::endl;
	std::cout << "double pointer value: " << *ptr_double << std::endl;
	return 0;
}
