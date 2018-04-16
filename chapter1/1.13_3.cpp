#include <iostream>

int main()
{
	int i, j;
	std::cout << "Input two integer" << std::endl;			// print integers in range
	std::cin >> i >> j;

	for (; i != j; ++i)
		std::cout << i << std::endl;
}
