#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::ends;
using std::vector;
using std::string;

int main()
{
	vector<string> tvi;
	for (string i; cin >> i;)				//store strings in a vector.
		tvi.push_back(i);
	for (auto &g : tvi)
		cout << g << "\n";
	cout << ends;
}