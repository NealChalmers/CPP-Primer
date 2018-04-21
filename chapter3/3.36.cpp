#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int array1[5]{ 0, 1, 2, 3, 4 };				//check the equal in array and vector
	int array2[5];
	vector<int> v1{ 0, 1, 2, 3, 4 };
	vector<int> v2;
	for (int i = 0; i != 5; ++i)
	{
		cin >> array2[i];
		v2.push_back(array2[i]);
	}
	for (int i = 0; i != 10; ++i)
	{
		if (array1[i] != array2[i])
			cout << "not equal array" << endl;
		break;
	}
	if (v1 != v2)
		cout << "not equal vector" << endl;
}