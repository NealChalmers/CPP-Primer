#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string ts;
	while (std::getline(cin, ts))			//get a line each time
		cout << ts << endl;
	cin.clear();
	while (cin >> ts)						//get a word each time
		cout << ts << endl;
}