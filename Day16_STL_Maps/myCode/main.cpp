// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

int main ()
{
    // TODO: Add your program code here
	cout << "Day16_STL_Maps started." << endl << endl;

	map<int,string> m;	//object of map created.
	m.insert(pair<int,string>(1, "Vaishu"));
	m.insert(pair<int,string>(2, "Charan"));

	map<int,string>::iterator itr;

	for(itr=m.begin(); itr!=m.end(); itr++) {
		cout << itr->first << " " << itr->second << endl;
	}


	return 0;
}
