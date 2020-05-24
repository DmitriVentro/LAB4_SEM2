#include <iostream>
#include <cmath>
namespace SECOND_TASK
{
	unsigned MULT(unsigned a, unsigned b)
	{
		if (a == 0 || b == 0)
			return 0;
		if (b < 1)
			return a;
		else
			return a + MULT(a, --b);
	}
}
void main()
{
	int a = 0, b = 0;
	std::cout << "Input a: ";
	std::cin >> a;
	std::cout << "Input b: ";
	std::cin >> b;
	if ((a > 0 && b > 0) || (a < 0 && b < 0))
		std::cout << SECOND_TASK::MULT(abs(a), abs(b)) << std::endl;
	else
		std::cout << -(int)SECOND_TASK::MULT(abs(a), abs(b)) << std::endl;


}