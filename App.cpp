#include <iostream>
#include "Max.h"

class IntComparer 
{
private:
	bool m_bySmall;

public:
	IntComparer(bool bySmall) : m_bySmall(bySmall) {}

	int operator()(int a, int b)
	{
		return !m_bySmall ? a - b : b - a;
	}
};

int main()
{


	std::cout << Max(3, 7, IntComparer(true)) << std::endl;
	std::cout << Max(3, 7, IntComparer(false)) << std::endl;

	return 0;
}