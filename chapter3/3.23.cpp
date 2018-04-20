#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vi{ 5,76,876,4,-4,0 };				//twice value
	for (auto i = vi.begin(); i != vi.end(); ++i)
		*i *= 2;
	for (auto i = vi.begin(); i != vi.end(); ++i)
		cout<<*i<<" ";
	cout << "\b" << endl;
}