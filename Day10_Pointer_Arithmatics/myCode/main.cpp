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
	cout << "Day10_Pointer_Arithmatics started." << endl << endl;

	int arr0[5] {1,2,3,4,5};

	int *ptr_arr0 {arr0};

	// print array using pointer index.
	for (size_t i {0}; i < 5; ++i) {
		std::cout << ptr_arr0[i] << " ";
	}
	std::cout << std::endl;

	// print array using pointer arithmatic.
	for (size_t i {0}; i < 5; ++i) {
		std::cout << *(ptr_arr0+i) << " ";
	}
	std::cout << std::endl;

	// print array using array index.
	for (size_t i {0}; i < 5; ++i) {
		std::cout << arr0[i] << " ";
	}
	std::cout << std::endl;

	// print array using pointer arithmatic.
	for (size_t i {0}; i < 5; ++i) {
		std::cout << *(arr0+i) << " ";
	}
	std::cout << std::endl;



	int * ptr_arr1 {arr0 + 1};
	int * ptr_arr2 {arr0 + 4};

	std::cout << *ptr_arr1 << std::endl;
	std::cout << *ptr_arr2 << std::endl;

	ptr_arr1 = &arr0[1];
	ptr_arr2 = &arr0[4];

	std::cout << *ptr_arr1 << std::endl;
	std::cout << *ptr_arr2 << std::endl;
	return 0;
}
