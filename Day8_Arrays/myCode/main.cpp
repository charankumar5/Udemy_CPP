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
	cout << "Day8_Arrays started." << endl << endl;
	cout << "Check the garbage data: " <<endl;
	int scores[10];
	for (size_t i{0}; i<10; i++){
		cout << "[" << i << "]" << scores[i] << endl;
	}

	cout << "Range based for loop" << endl;
	int arr[] = {1,2,3,4,5,6,7};

	for(auto value: arr){
		cout << value << endl;
	}

	cout << "Range based for loop" << endl;
	int temp[] = {1,2,3,4,5,6,7};
	int sum ={};
	for(auto value: temp){
		sum += value;

	}cout << sum << endl;

	return 0;
}
