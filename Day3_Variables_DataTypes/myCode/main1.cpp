// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include <iomanip>      // std::setprecision
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day3_Variables_DataTypes started." << endl << endl;


	int age;
	cout << age << endl;

	// braced initialization.
	int count {10};
	cout << count << endl;

	// this will not convert to int, safe to use.
//	int cost1 {10.98};
//	cout << cost1 << endl;

	// this will convert double to int.
	// Functional initialization.
	int cost(20.098);
	cout << cost << endl;


	//sizeof()
	int a {10};
	double b{20.62};

	cout << sizeof(a) << " and " << sizeof(b) << endl;


	// signed values and un signed values.
	int value	{10};
	int value2 {-300};

	cout << value << " and " << value2 << endl;

	signed int x{-10};
	//unsigned int y{-20}; // Error, can't go in -values.
	cout << x << " and " << endl;

	std::cout << std::setprecision(20);
	float z {1.123456789f}; // after 7 digits, it stores a garbage value.
	cout << z << endl;
	double i {1.1234567890123456789012345};
	cout << i << endl;
	long double j {1.1234567890123456789012345L};
	cout << j << endl;

	return 0;
}
