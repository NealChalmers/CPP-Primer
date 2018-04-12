#include "Sales_item.h"
#include <iostream>

int main()
{
	Sales_item item1, item2;					//输出相同ISBN对象的和
	for(std::cin >> item1;std::cin>>item2;)
		item1 += item2;
	std::cout << item1 << std::endl;;
}