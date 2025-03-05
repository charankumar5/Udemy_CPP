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
	cout << "Day9_RandomNumbers started." << endl << endl;

	// It gives the same random number for each run.
	std::cout << "Random Number: "<<std::rand() << std::endl;

	// Generate different random number for each run.
	std::srand(time(0));
	// Generate random numbers from 0 to 10 range.
	std::cout << "Unique Random Number: " << std::rand()%10 << std::endl;
	for (size_t i{0}; i < 20; i++){
		std::cout << "Iteration[" << i << "] " << std::rand()%10 << std::endl;
	}

	// range from 5 to 10
	std::cout << "Next Iteration:" << std::endl;
	for (size_t i{0}; i < 20; i++){
		std::cout << "Iteration[" << i << "] " << std::rand()%5+5 << std::endl;
	}

	return 0;
}
