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
	cout << "Day6_Control_Flow started." << endl << endl;

	int number1 = 50;
	int number2 = 55;

	if (number1 < number2) {
		cout << number2 << endl;
	}
	else {
		cout << number1 << endl;
	}

	if (!(number1 < number2)) {
		cout << number1 << endl;
	}
	else {
		cout << number2 << endl;
	}


	bool green = true;
	bool red = false;
	bool orange = false;
	bool police_stop = false;

	if (green) {
		if (!police_stop) {
			cout << "Go" << endl;
		}

	else {
		cout << "Stop" << endl;
	}
	}

	if (green && !police_stop) {
		cout << "Go" << endl;

	} else {
		cout << "Stop" << endl;
	}

	return 0;
}
