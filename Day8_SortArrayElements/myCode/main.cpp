// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include <algorithm>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Day8_SortArrayElements started." << endl << endl;
	int numbers[] {1,112,4,5,8,12,13,16,71,92};
	unsigned int collection_size = end(numbers)-begin(numbers);
	cout << collection_size << endl;
	bool sorted = true;
	//int sorted_arry [collection_size];
//	for (size_t i {0}; i < collection_size; i++) {
//		for (size_t j{i+1}; j < collection_size; j++) {
//			if ( numbers[i] < numbers[j]) {
//				int temp = numbers[j];
//				sorted_arry[j] = numbers[i];
//				numbers[j] = temp;
//			}
//		}
//	}
	std::sort(numbers, numbers+collection_size);// #include <algorithm> for sort function.

	for (size_t a{0}; a < collection_size; ++a){
		if((!numbers[a]) > numbers[a-1]){
			sorted = false;
			break;
		}
	}
	for (auto value: numbers) {
		cout << value << " ";
	}
	std::cout << std::boolalpha;
	std::cout << sorted << std::endl;
	return sorted;
}
