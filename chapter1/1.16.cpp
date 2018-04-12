#include <iostream>

int main()
{
	int i, j = 0;
	std::cout << "Input numbers, Ctrl + Z to end input" << std::endl;		//输出一组数的和
	while (std::cin >> i)
		j += i;
	std::cout << j << std::endl;
}