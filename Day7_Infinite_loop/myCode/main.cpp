// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

//// Main program
//int main ()
//{
//    // TODO: Add your program code here
//	cout << "Day7_Infinite_loop started." << endl << endl;
//
//	char condition;
//	bool end {false};
//
//	while (end == false) {
//
//		cout << "Enter 'Y' to go on: " << endl;
//		cin >> condition;
//		if (condition == 'y' || condition == 'Y') {
//			end = false;
//		}
//		else {
//			end = true;
//			cout << "You choose wrong option, end!!" << endl;
//		}
//	}
//
//	return 0;
//}

// under flow the loop.
int main() {

	size_t condition = 1;
	for (size_t i {condition}; i >= 0; --i) {
		cout << i << " number" << endl;
	}

/*
 * sample output.
 18446744073706389690 number
18446744073706389689 number
18446744073706389688 number
18446744073706389687 number
18446744073706389686 number
18446744073706389685 number
 */
	return 0;
}
