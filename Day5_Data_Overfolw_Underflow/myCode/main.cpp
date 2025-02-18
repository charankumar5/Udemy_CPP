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
	cout << "Day5_Data_Overfolw_Underflow started." << endl << endl;

	// check here how it work if it is with in the limits.
	unsigned char data {250};
	++data;
	cout << "data: " << data << endl; // 251
	++data;
	cout << "data: " << data << endl; // 252
	++data;
	cout << "data: " << data << endl; // 253
	++data;
	cout << "data: " << static_cast<int>(data) << endl; //254
	++data;
	cout << "data: " << static_cast<int>(data) << endl; //255
	++data;
	// overflow
	cout << "data: " << static_cast<int>(data) << endl; //256 //0
	++data;
	cout << "data: " << static_cast<int>(data) << endl; //257 //1

	unsigned char char_var = 55;
	unsigned char val1 = 101;
	unsigned char val2 = 150;

	char_var = val1 + val2;
	cout << "char_var: " << char_var << endl;

	return 0;
}
