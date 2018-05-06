#include <iostream>
#include <string>

using namespace std;

bool is_upper(const string &s)
{
	for (auto c : s)
		if (isupper(c))
			return 1;
	return 0;
}
string& to_upper(string &s)
{
	for (auto &c : s)
		c = toupper(c);
	return s;
}

int main()
{
	string s{ "dnNeR KEbab" };			//is upper and to upper
	cout << is_upper(s) << "\n" << to_upper(s) << endl;
}