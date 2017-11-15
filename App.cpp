#include <iostream>
#include "Max.h"


int main()
{
	std::cout << Max(3, 7, 1) << std::endl;
	std::cout << Max(3.4, 0.1, 6.0) << std::endl;
	std::cout << Max("Hi", "Hello", "A") << std::endl;

	return 0;
}