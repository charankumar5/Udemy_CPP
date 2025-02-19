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
	cout << "Day6_Integral_Logic_Opeations started." << endl << endl;

	int number = 10;

	if (number) {
		cout << "number: " << number << endl;
	}else {
		cout << "number: " << number << endl;
	}

	int value = -3;

	if (value) {
		cout << "value: " << value << endl;
	}else {
		cout << "value: " << value << endl;
	}

	int value1 = 0;
	cout << std::boolalpha;
	bool condition = value1;
	if (value1) {
		cout << "value1 bool: "<< condition << endl;
	}else {
		cout << "value1 bool: " << condition<< endl;
	}

	int value2 = 9;
	cout << std::boolalpha;
	bool condition1 = value2;
	if (value1) {
		cout << "value2 bool: "<< condition1 << endl;
	}else {
		cout << "value2 bool: " << condition1<< endl;
	}
	return 0;
}
