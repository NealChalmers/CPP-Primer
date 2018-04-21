#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int array[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i != 10; ++i)
		cout << array[i];
	cout << endl;
}