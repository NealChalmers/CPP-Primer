#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5 };				//initialize an array with a vector
	int ia[5];
	for (int i = 0; i != 5; ++i)
		ia[i] = vi[i];
	for (int i = 0; i != 5; ++i)
		cout << ia[i] << endl;
}