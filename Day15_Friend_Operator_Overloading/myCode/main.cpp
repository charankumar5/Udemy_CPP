// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"


class complex {

private:
	int real;
	int img;

public:
	complex(int r=0, int i=0){
		real = r;
		img = i;
	}
	friend complex operator+(complex c1, complex c2);

	void display() {
		cout << real << "+i" << img;
	}

};

complex operator+(complex c1, complex c2)
{
	complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;
}


// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day15_Operator_Overloading started." << endl << endl;

	// created objects and pass values without constructor.
	complex c1(10,4) ,c2(5,2) , c3;
	cout << "with friend custom add operator or function" << endl;
	c3 = c1 + c2; // with custom add operator.
	c3.display();
	return 0;
}
