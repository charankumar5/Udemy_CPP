#include <iostream>
#include <limits>

int main()
{
    std::cout<< std::numeric_limits<bool>::lowest() << std::endl
              << std::numeric_limits<bool>::min() << std::endl
              << std::numeric_limits<bool>::max() << std::endl
              << +std::numeric_limits<unsigned char>::lowest() << std::endl
    		  << +std::numeric_limits<unsigned char>::min() << std::endl
              << +std::numeric_limits<unsigned char>::max() << std::endl
              << std::numeric_limits<int>::lowest() << std::endl
              << std::numeric_limits<int>::min() << std::endl
              << std::numeric_limits<int>::max() << std::endl
              << std::numeric_limits<float>::lowest() << std::endl
              << std::numeric_limits<float>::min() << std::endl
              << std::numeric_limits<float>::max() << std::endl
              << std::numeric_limits<double>::lowest() << std::endl
              << std::numeric_limits<double>::min() << std::endl
              << std::numeric_limits<double>::max() << std::endl;
}
