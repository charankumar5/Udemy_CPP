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
	cout << "Day7_Nested_Loops started." << endl << endl;

	for(int i=0; i<5; i++){
		std::cout << "-" << " ";
		for (int j=0; j<5; j++) {
			std::cout << "*" << " ";
			for (int k=0; k<5; k++) {
				std::cout << "~" << " ";
			}
		}
		std::cout << endl;
	}

	return 0;
}
