#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

using Iter = vector<int>::const_iterator;

void recursion(Iter begin, Iter end)
{
	if (begin == end)
		return;
	cout << *begin << endl;
	recursion(++begin, end);
}

int main()				// print vector by recursion
{
	vector<int> vi{ 1,2,3,4,5,6,7 };
	recursion(vi.cbegin(), vi.cend());
}