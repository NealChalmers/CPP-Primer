#include <iostream>

int main()
{
	int i, j;
	std::cout << "Input two integer" << std::endl;			//打印指定范围内整数
	std::cin >> i >> j;

	for (; i != j; ++i)
		std::cout << i << std::endl;
}