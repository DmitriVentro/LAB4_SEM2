#include <iostream>


int G(int n);
int F(int n);

int main()
{
	
	std::cout << "Numbers of F(n):" << std::endl;
	for (int i = 1; i < 11; i++)
		std::cout << F(i) << " ";

	std::cout << std::endl;

	
	std::cout << std::endl << "Numbers of G(n)" << std::endl;
	for (int i = 1; i < 11; i++)
		std::cout << G(i) << " ";

}

int F(int n)
{
	if (n == 1)
		return 10;
	else
		return F(n - 1) + G(n - 1);
}


int G(int n)
{
	if (n == 1)
		return -1;
	else
		return F(n - 1) + G(n - 1);
}

