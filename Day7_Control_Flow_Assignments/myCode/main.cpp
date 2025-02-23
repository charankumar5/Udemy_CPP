//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main ()
//{
//	int number {0};
//	cout << "Enter a number: " << endl;
//	cin >> number;
//
//	if (number%2 == 0) {
//		cout << number <<" Even number" << endl;
//
//	} else {
//		cout << number << " Odd number" << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main ()
//{
//	int age {0};
//	cout << "Please Enter your age: " << endl;
//	cin >> age;
//
//	if (age < 21) {
//		cout << "You are too young for the treatment!" << endl;
//	}
//	else if (age >39){
//
//		cout << "You are too old for the treatment!" << endl;
//	}else {
//		cout << "You are eligible for the treatment!" << endl;
//	}
//	return 0;
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main ()
//{
//	cout << "Which day is today [1 : Monday,..., 7 : Sunday] :" << endl;
//	int day = {0};
//	cin >> day;
//	if (day >= 1 && day <=7) {
//		switch(day){
//			case 1:
//				cout << "Today is Monday. Let's have some fun.";
//			break;
//			case 2:
//				cout << "Today is Tuesday. Let's have some fun.";
//			break;
//			case 3:
//				cout << "Today is Wednesday. Let's have some fun.";
//			break;
//			case 4:
//				cout << "Today is Thursday. Let's have some fun.";
//			break;
//			case 5:
//				cout << "Today is Friday. Let's have some fun.";
//			break;
//			case 6:
//				cout << "Today is Saturday. Let's have some fun.";
//			break;
//			case 7:
//				cout << "Today is Sunday. Let's have some fun.";
//			break;
//		}
//	} else {
//		cout << day << " is not valid day, Bye!";
//	}
//	return 0;
//}


#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	const int count = 10;
	size_t i {};

	do {
		std::cout << i << std::endl;
		++i;
	}while(i<count);
	return 0;
}
