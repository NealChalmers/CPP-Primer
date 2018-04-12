#include "Sales_item.h"
#include <iostream>
#include <string>
#include <vector>

int main()
{
	Sales_item fitem;
	if (std::cin >> fitem)				//统计每个ISBN销售记录条数
	{
		int count = 1;
		Sales_item titem;
		while (std::cin >> titem)
			if (fitem.isbn() != titem.isbn())
			{
				std::cout << fitem.isbn() << " " << count << std::endl;
				fitem = titem;
				count = 1;
			}
			else
				++count;
		std::cout << fitem.isbn() << " " << count << std::endl;
	}
}