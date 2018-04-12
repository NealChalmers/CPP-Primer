#include <iostream>

int main()
{
	int i, j;
	std::cout << "Input two integer" << std::endl;			//打印指定范围内整数
	std::cin >> i >> j;

	while (i != j)
	{
		std::cout << i << std::endl;
		++i;
	}
}