#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)			//main argument
{
	string s;
	for (int i = 1; i != argc; ++i)
		s += std::string(argv[i]);

	cout << s << endl;
	return 0;
}