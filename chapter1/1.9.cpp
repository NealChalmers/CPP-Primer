#include <iostream>

int main()
{
	int j = 0, i = 50;
	while (i <= 100)				//while accumulation
	{
		j += i;
		++i;
	}
	std::cout << j << std::endl;
}