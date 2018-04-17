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
	for (auto &c : s)				//change all the characters in a string to X.
		c = 'X';
	cout << s << endl;
}