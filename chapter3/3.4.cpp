#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2;				//output the bigger string
	cin >> s1 >> s2;
	if (s1 > s2)
		cout << s1 << endl;
	else if (s1 < s2)
		cout << s2 << endl;
	else
		cout << "equal" << endl;

	if (s1.length() > s2.length())				//output the longer string
		cout << s1 << endl;
	else if (s1.length() < s2.length())
		cout << s2 << endl;
	else
		cout << "equal" << endl;
}