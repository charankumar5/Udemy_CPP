// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include<string>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day2_DataInputsOutputs started." << endl << endl;

	cout << "Enter your name and age: " << endl;
	int age;
	std::string name;

//	cin >> name;
//	cin >> age;

	//Other way to do it.
//	cin  >> name >> age;

	// another way to do the same:
	std::getline(std::cin, name);
	std::cin >> age;

	cout << "Your name is " << name << " and You are " << age << " years old: " << endl;


	return 0;
}
