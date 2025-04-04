// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
#include <string>
#include <ostream>
#include <fstream>
#include <sstream>

class student {


public:
	std::string name;
	int rollnumber;
	std::string school;

	// operator overloading.
	// ostream << operator
	friend std::ostream &operator <<(std::ostream &ofs, student &s);
	friend std::ifstream &operator >>(std::ifstream &ifs, student &s);
};

//implement outside of the class.
std::ostream &operator <<(std::ostream &ofs, student &s){
	ofs<<s.name<< std::endl;
	ofs << s.rollnumber << std::endl;
	ofs << s.school << std::endl;
	return ofs;
}

std::ifstream &operator >>(std::ifstream &ifs, student &s) {

	ifs>>s.name>>s.rollnumber>>s.school;
	return ifs;
}




// Main program
int main ()
{
    // TODO: Add your program code here
	std::cout << "Day16_IOSerialization started." << std::endl << std::endl;
	student s1; // object of class

	//Initialise variables.
	s1.name = "hakuna";
	s1.rollnumber = 55;
	s1.school="yaro";

	// now how to store each member at once.
	std::ofstream ofs("student.txt", std::ios::trunc);
//	ofs << s1.name<< std::endl;
//	ofs << s1.rollnumber << std::endl;
//	ofs << s1.school << std::endl;
//  ofs.close();

	// now how to store entire object at once.
	ofs << s1;
	ofs.close();

	// now how to read from the file.
	std::ifstream ifs("student.txt");
	ifs>>s1;
	std::cout << "student details" << std::endl;
	std::cout << s1.name << std::endl;
	std::cout << s1.rollnumber << std::endl;
	std::cout << s1.school << std::endl;
	ifs.close();


	return 0;
}
