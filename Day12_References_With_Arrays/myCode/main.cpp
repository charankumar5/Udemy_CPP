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
	cout << "Day12_References_With_Arrays started." << endl << endl;

	int scores [] {1,2,3,4,5};

	for(auto score: scores) {
		cout << score << " ";
	}
	cout << endl;

	// change the array of scores.
	for (auto& score: scores) {
		score = score *10;
	}

	for(auto score: scores) {
		cout << score << " ";
	}

	// using pointer here.
	int *ptr_scores {scores};
    // Modify array elements using the pointer
    for (int i = 0; i < 5; ++i) {
        *(ptr_scores + i) *= 10;
    }
	cout << endl;
	for(auto score: scores) {
		cout << score << " ";
	}

	return 0;
}
