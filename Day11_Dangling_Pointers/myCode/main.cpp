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
	cout << "Day11_Dangling_Pointers started." << endl << endl;

    // Allocating memory
    int* ptr = new int(5);

    // Deallocating memory
    delete ptr;

    // Deleted Pointer
    cout << ptr << endl;
    // Now, ptr becomes a dangling pointer
    cout << "ptr is now a dangling pointer" << endl;

//    int *new_ptr; // Unintialized Pointer.
//
//    cout << *new_ptr << endl;
//    cout << "new_ptr is now a dangling pointer" << endl;


    int *p_number1 {new int {343}}; // master pointer initialised.
    int *p_number2 {p_number1}; //p_number2 pointing to p_number1 address.

    cout << *p_number1 << endl;
    cout << *p_number2 << endl;

    cout << p_number1 << endl;
    cout << p_number2 << endl;

    //now delete pointer 1 automatically pointer2 will be dangling pointer,
    // Because, it does not have proper memory location.

    delete p_number1;
    p_number1 = nullptr;

    // the below lines are not working and not printing output.
    cout << *p_number1 << endl;
    cout << *p_number2 << endl;
    cout << p_number1 << endl;
    cout << p_number2 << endl;


	return 0;
}
