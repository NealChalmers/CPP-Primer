#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int array[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };			//use a pointer to change a array
	int *p = array;
	for (int i = 0; i != 10; ++i)
		*p++ = 0;
	for (int i = 0; i != 10; ++i)
		cout << array[i];
	cout << endl;
}