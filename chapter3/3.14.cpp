#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> tvi;
	for (int i; cin >> i;)				//store values in a vector.
		tvi.push_back(i);
	for (auto g : tvi)
		cout << g << " ";
	cout << endl;
}