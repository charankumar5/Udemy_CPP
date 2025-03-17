#include <iostream>


//Don't modify anything above this line
//Your code will go below this line
void show_odds (unsigned long long int num)
{
    int remainder {};
   while(num != 0)    {
	   remainder = num % 10;
	   //std::cout << remainder << "";
	   if (remainder % 2 != 0) {
		   std::cout << remainder << "";
	   }
   	 num = num - remainder;
   	 num = num / 10;
    }

}

int main() {

	show_odds(98723713);
	return 0;
}
