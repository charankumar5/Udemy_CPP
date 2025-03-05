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
	cout << "Day10_Pointer_to_const started." << endl << endl;

	int var {10};
	int *ptr_var {nullptr};

	ptr_var = &var; // now pointer pointing to var address.
	std::cout << "Address of var:"<< ptr_var << std::endl;
	std::cout << "Value at address var: "<<*ptr_var << std::endl;

	// change pointer pointing to.
	int p_number {334};

	ptr_var = &p_number;
	std::cout << "Address of p_number:"<< ptr_var << std::endl;
	std::cout << "Value at address p_number: "<<*ptr_var << std::endl;

	*ptr_var = 989;
	std::cout << "Address of p_number:"<< ptr_var << std::endl;
	std::cout << "Value at address p_number: "<<*ptr_var << std::endl;

	// pointer to const.
	const int* ptr_const_var {nullptr}; // const pointer, can't value at address pointing to.
	int some_number {434};
	ptr_const_var = &some_number;
	std::cout << "Address of some_number:"<< ptr_const_var << std::endl;
	std::cout << "Value at address some_number: "<<*ptr_const_var << std::endl;

	//  can't change value at address pointing to.
//	int some_other_number {333};
//	*ptr_const_var = some_other_number; // wanted to change the value at location. not working.
//	std::cout << "Address of some_other_number:"<< ptr_const_var << std::endl;
//	std::cout << "Value at address some_other_number: "<<*ptr_const_var << std::endl;


	// now const pointer.
	// which means we can change value at address pointer pointing to,
	// but we can't change the address which it is pointing to.

	int x {430};
	int * const x_ptr {&x}; // now we are pointing to x address.
	std::cout << "value of x: " << *x_ptr << std::endl;
	std::cout << "address of x: " << x_ptr << std::endl;

	// try to change address of x_ptr
//	int y {343};
//	x_ptr = &y; //error: assignment of read-only variable 'x_ptr'
//	std::cout << "address of y: " << x_ptr << std::endl;

	int scores[2] {10,30};
	std::cout << scores[0] << std::endl;
	return 0;
}
