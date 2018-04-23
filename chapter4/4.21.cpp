#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9,0 };			//double the odd
	for (int &i : vi)
		i % 2 ? i *= 2 : i;
	for (int i : vi)
		cout << i << endl;
}