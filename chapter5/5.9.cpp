#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	unsigned a = 0, e = 0, i = 0, o = 0, u = 0;				//count vowel letter
	char ch;
	while (cin >> ch) {
		if (ch == 'a')
			++a;
		else if (ch == 'e')
			++e;
		else if (ch == 'i')
			++i;
		else if (ch == 'o')
			++o;
		else if (ch == 'u')
			++u;
	}
	cout << "a:" << a << "\ne:" << e
		<< "\ni:" << i << "\no:" << o
		<< "\nu:" << u << endl;
}