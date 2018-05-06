#include <iostream>

using namespace std;

void sswap(int *a, int *b)			//swap by pointer
{
	int *c;
	c = a;
	a = b;
	b = c;
}

int main()
{
	int a = 2, b = 3;
	sswap(&a, &b);
	cout << "a:" << a << " b:" << b;
}