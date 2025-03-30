// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"


class complex {



public:
	int real;
	int img;

	complex add(complex c)
	{
		complex temp;
		temp.real = real + c.real;
		temp.img = img + c.img;
		return temp;
	}

	complex operator+(complex c)
	{
		complex temp;
		temp.real = real + c.real;
		temp.img = img + c.img;
		return temp;
	}
};
// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day15_Operator_Overloading started." << endl << endl;

	// created objects and pass values without constructor.
	complex c1 ,c2 , c3;
	c1.real =10; c1.img = 4;
	c2.real = 5; c2.img = 2;
	cout << "with default add operator or function" << endl;
	c3 = c1.add(c2); // with default add operatorfr
	cout << c3.real << "+i" << c3.img << endl;
	cout << "with custom add operator or function" << endl;
	c3 = c1 + c2; // with custom add operator.
	cout << c3.real << "+i" << c3.img << endl;





	return 0;
}
