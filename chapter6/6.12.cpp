#include <iostream>

using namespace std;

void swap(int &a, int &b)			//swap by pointer
{
	int c;
	c = a;
	a = b;
	b = c;
}

int main()
{
	int a = 2, b = 3;
	swap(a, b);
	cout << "a:" << a << " b:" << b;
}