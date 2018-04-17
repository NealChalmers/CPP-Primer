#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2, s3;
	while (cin >> s1)
	{
		s2 += s1;						//print the concatenated string
		s3 += s1 + " ";					//separate adjacent input strings by a space
	}
	cout << s2 << "\n" << s3 << endl;
}