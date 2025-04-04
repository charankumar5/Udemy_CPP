// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include <vector>

#include <set>
using namespace std;

int main ()
{
    // TODO: Add your program code here
	cout << "Day16_STL_Vactor_Set_Examples started." << endl << endl;

//	//Example 1
//	vector<int> v = {10,20,30,40,50};
//
//	v.push_back(66); //inserted value in the end.
//	for(int x: v) {
//
//		cout << x << endl;
//	}

	//example of vector with iterator.
	vector<int> v = {10,20,30,40,50};
	v.push_back(66);

	cout << "using iterator function of vector class." << endl;

	vector<int>::iterator itr; //object has been created for iterator fun.

	for(itr=v.begin(); itr!=v.end(); itr++) {

		cout << *itr << endl; // itr is acting as a pointer to that object.
	}

	set<int> s = {10,20,30,40,50};
	s.insert(66);
	s.insert(66); //duplicate inserted but wont work in set
	s.insert(90);
	cout << "using iterator function of set class." << endl;

	set<int>::iterator setitr; //object has been created for iterator fun.

	for(setitr=s.begin(); setitr!=s.end(); setitr++) {

		cout << *setitr << endl; // itr is acting as a pointer to that object.
	}

	return 0;
}
