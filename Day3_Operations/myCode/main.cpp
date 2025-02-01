// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include <iomanip>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day3_Operations started." << endl << endl;
	//postfix and prefix
	int a {10};
	cout << "a :"  << a <<" "<< ++a <<" " << a++ << endl;
	cout << "a: " << a << " "<< --a <<" "<< a << endl;

	bool x {true};
	std::cout << std::boolalpha;
	cout << x << endl;
	cout << !x << endl;


	  std::string product_names[] = { "Keyboard", "Mouse", "Monitor", "Speakers" };
	  int product_prices[] = { 30, 20, 150, 60 };

	  std::cout << std::left << std::setw(20) << "Product Name"
	            << std::right << std::setw(10) << "Price" << std::endl;
	  for (int i = 0; i < 4; i++) {
	    std::cout << std::left << std::setw(20) << product_names[i]
	              << std::right << std::setw(10) << product_prices[i] << std::endl;
	  }

	  // convert to hex, oct or other.
	  int num1 {10};
	  std::cout << std::hex << num1 << endl;
	  std::cout << std::uppercase << std::hex << num1 << endl;

	return 0;
}
