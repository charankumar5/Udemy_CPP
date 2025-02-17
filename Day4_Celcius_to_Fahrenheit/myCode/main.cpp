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
	double celsius {0};
	cout << "Please enter a degree value in Celsius:" << endl;
	cin >> celsius;
	double fahrenheit {0};
	fahrenheit = (9.0 / 5) * celsius + 32;
	cout << celsius << "Celsius is " << fahrenheit << " Fahrenheit";

	return 0;
}
