// Standard (system) header files
#include <iostream>
#include <cstdlib>

// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"
bool is_leap_year( unsigned int year){

    bool is_leap{};

    //Don't modify anything above this line
    //Your code goes below this line

       if (year % 100 == 0 && year % 400 == 0) {
    	   is_leap = true;
       }
       else if ((year % 4 == 0) && (year % 100 != 0)) {
           is_leap = true;
       } else  {
           is_leap = false;
       }
    //Your code goes above this line
    //Don't modify anything below this line

    return is_leap;
}
// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day6_LeapYear started." << endl << endl;
	cout << std::boolalpha << is_leap_year(2021) << endl;

	return 0;
}
