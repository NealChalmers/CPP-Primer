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
	for (int j = 0; j != tvi.size() - 1; ++j)
		cout << tvi[j] + tvi[j + 1] << " ";
	cout << "\n" << endl;
	for (int j = 0; j <= (tvi.size() - 1) / 2; ++j)
		cout << tvi[j] + tvi[tvi.size() - 1 - j] << " ";
	cout << endl;
}