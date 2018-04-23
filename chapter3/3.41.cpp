#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int ia[5] = { 1,2,3,4,5 };				//initialize a vector with an array
	vector<int> vi(ia, ia + 5);
	for (int i : vi)
		cout << i << endl;
}