#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> tvi;
	for (int i; cin >> i; tvi.push_back(i));				//output the sum
	for (auto j = tvi.begin(); j != tvi.end() - 1; ++j)
		cout << *j + *(j + 1) << " ";
	cout << "\n" << endl;
	for (auto j = tvi.begin(); j <= tvi.begin() + (tvi.size() - 1) / 2; ++j)
		cout << *j + tvi[tvi.end() - 1 - j] << " ";
	cout << endl;
}