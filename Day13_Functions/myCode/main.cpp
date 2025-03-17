// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"


// Function.

void enter_bar(unsigned int age) {
	if(age >18) {
		cout << "You are allowed!!" << endl;
	}
	else {
		cout << "You are not allowed!!" << endl;
	}
	return;
}


// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day13_Functions started." << endl << endl;
	// call the function.
	enter_bar(20);
	// call the function again.
	enter_bar(10);


	return 0;
}
