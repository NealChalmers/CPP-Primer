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
	for (string i; cin >> i;)				//upper string
		tvi.push_back(i);
	for (auto &g : tvi)
	{
		for (auto &h : g)
			h = toupper(h);
		cout << g << "\n";
	}
	cout << ends;
}