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
	cout << "Day10_ArrayManipulation_Using_Pointers started." << endl << endl;

	int arr0[5] {1,2,3,4,5};
	int arr1[5] {6,7,8,9,10};

	// swap arrays in traditional way.
	std::cout << "swap arrays in traditional way." << std::endl;
	int temp [5];

	for(size_t i {0}; i< 5; ++i) {
		temp[i] = arr0[i];
	}

	for(size_t j {0}; j< 5; ++j) {
		arr0[j] = arr1[j];
	}

	for(size_t k {0}; k< 5; ++k) {
		arr1[k] = temp[k];
	}

	for (auto x: arr0){
		std::cout << x << " ";
	}

	for (auto y: arr1){
		std::cout << y << " ";
	}

	std::cout << std::endl << "swap arrays using pointers." << std::endl;

	int * ptr_arr0 {nullptr};
	int * ptr_arr1 {nullptr};
	int * ptr_temp {nullptr};

	ptr_arr0 = arr0;
	ptr_arr1 = arr1;
	ptr_temp = ptr_arr1;
	ptr_arr1 = ptr_arr0;
	ptr_arr0 = ptr_temp;

	for(size_t h {0}; h< 5; ++h) {
		std::cout << ptr_arr0[h] << " ";
	}

	for(size_t i {0}; i< 5; ++i) {
		std::cout << ptr_arr1[i] << " ";
	}


	return 0;
}
