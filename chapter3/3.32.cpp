#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	int array1[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int array2[10];
	for (int i = 0; i != 10; ++i)
		array2[i] = array1[i];
	vector<int> v1{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> v2(v1);
	for (int i = 0; i != 10; ++i)
		cout << array2[i];
	cout << endl;
	for (auto i : v2)
		cout << i;
	cout << endl;
}