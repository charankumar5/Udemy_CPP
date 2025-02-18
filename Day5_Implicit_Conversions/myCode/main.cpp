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
	cout << "Day5_Implicit_Conversions started." << endl << endl;

	double value {45.6};
	int price {20};

	auto total = price * value;

	cout << "size of total: "<<sizeof(total) << endl;

	// usaully conversion from smaller size to bigger size.
	// while assignment operator, it is reverse.
	// data type convert to which we are assigning to.
	double x = 10.89;
	int y {0};
	y = x;
	cout << "size of x: "<<sizeof(y) << endl;


	return 0;
}
