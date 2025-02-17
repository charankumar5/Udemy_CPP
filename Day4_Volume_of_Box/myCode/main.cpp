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
	cout << "Welcome to box calculator. Please type in length, width and height information" << endl;
	double length {0};
	double width  {0};
	double height {0};
	cout << "length: ";
	cin >> length;
	cout << "width: ";
	cin >> width;
	cout << "height: ";
	cin >> height;
	double base_area = width * length;
	double volume = base_area * height;
	cout << "The base area is: " << base_area << endl;
	cout << "The volume is: " << volume << endl;

	return 0;
}
