#include <iostream>
#include <stdexcept>

int main(void)
{
	int a, b;
	while (std::cin >> a >> b) {			//catch exception
		try
		{
			if (b == 0)
				throw std::runtime_error("divisor is 0");
			std::cout << static_cast<double>(a) / b << std::endl;
		}
		catch (std::runtime_error err)
		{
			std::cout << err.what() << std::endl;
		}
	}
	return 0;
}
