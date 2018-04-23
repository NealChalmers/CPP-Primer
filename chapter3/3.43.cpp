#include <iostream>

using namespace std;

int main()
{
	int ia[3][4]{ {1,2,3,4},{4,5,6,7},{7,8,9,0} };			//ouput the ia in three different ways
	
	for (int(&a1)[4] : ia)
		for (int i : a1)
			cout << i;
	cout << endl;

	for (int i = 0; i != 3; ++i)
		for (int j = 0; j != 4; ++j)
			cout << ia[i][j];
	cout << endl;

	for (int i = 0; i != 3; ++i)
		for (int j = 0; j != 4; ++j)
			cout << *((*(ia + i)) + j);
	cout << endl;
}