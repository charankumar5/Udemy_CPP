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
	cout << "Day5_Explicit_Conversions started." << endl << endl;

	double x = 10.543;
	double y = 11.542;

	int sum = static_cast<int>(x+y);

	auto another_sum = x + y;

	int sum1 = x + y;

	cout << "size of sum: " << sizeof(sum) << " size of another sum: " << sizeof(another_sum) << endl;
	cout << "size of sum1: " << sizeof(sum1) << endl;
	cout << sum << endl;
	cout << another_sum << endl;
	return 0;
}
