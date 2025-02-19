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
	cout << "Day6_Ternary_Operator started." << endl << endl;

	int a = 10;
	int b = 14;

	int result = (a>b)? a : b;  // ternary operator.

	cout << result << endl;

	int x = 10;
	float y = 22.6f;


	auto result1 = (x>y)? x : y;  // ternary operator.

	cout << result1 << endl;

	int result2 = (x>y)? x : y;  // ternary operator.

	cout << result2 << endl;
	return 0;
}
