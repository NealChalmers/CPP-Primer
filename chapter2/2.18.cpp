#include <iostream>

int main()
{
	int *p, q = 5, r = 4;
	p = &r;
	std::cout << *p << " " << p << std::endl;		//更改指针的值与指针对象的值
	p = &q;
	std::cout << *p << " " << p << std::endl;
}