#include <iostream>

namespace FIRST_TASK
{
	/* FUNCTIONS */


	//initial array
	void COUT_NON_CHANGED_ARRAY(const int length, int* ARROW)
	{
		int RAND;
		std::cout << "Enter rand-range:\n";
		std::cin >> RAND;
		std::cout << "Non changed array:\n";
		for (size_t i = 0; i < length; i++)
		{
			ARROW[i] = rand() % RAND;
			std::cout << ARROW[i] << " ";
		}
		std::cout << std::endl;
	}
	//sum of array elements using recursion
	int SUM_USING_RECURSION(int* ARROW, const int* end)
	{
		if (ARROW == end) return 0;
		return (*ARROW) + FIRST_TASK::SUM_USING_RECURSION(ARROW + 1, end);
	}
	//sum if array elemets without recursion
	void SUM_WITHOUT_RECURSION(const int length, int* ARROW, int& SUM_WR)
	{
		std::cout << "Summation without recursion:\n";
		for (size_t i = 0; i < length; i++) { SUM_WR += ARROW[i]; }
		std::cout << SUM_WR;
	}

}
int main()
{
	int SUM_UR = 0;
	int SUM_WR = 0;
	int length;
	std::cout << "Enter size:\n";
	std::cin >> length;
	int* ARROW = new int[length];// Yes, it's not ARRAY, i wanna ARROW, STRELA:)
	FIRST_TASK::COUT_NON_CHANGED_ARRAY(length, ARROW);
	FIRST_TASK::SUM_WITHOUT_RECURSION(length, ARROW, SUM_WR);
	std::cout << std::endl << "Sum using recursion:\n";
	std::cout << FIRST_TASK::SUM_USING_RECURSION(ARROW, ARROW + length) << std::endl;

}