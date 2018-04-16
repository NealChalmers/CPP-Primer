#include <iostream>

int main()
{
	int i, j;
	std::cout << "Input two integer" << std::endl;			//print integers in range
	std::cin >> i >> j;

	while (i != j)
	{
		std::cout << i << std::endl;
		++i;
	}
}
