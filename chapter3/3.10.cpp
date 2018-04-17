#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	cin >> s;
	for (auto g : s)				//remove punctuation
		if (!ispunct(g))
			cout << g;
	cout << endl;
}