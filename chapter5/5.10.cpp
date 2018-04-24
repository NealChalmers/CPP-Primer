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
		else if (ch == 'e' || ch == 'E')
			++e;
		else if (ch == 'i' || ch == 'I')
			++i;
		else if (ch == 'o' || ch == 'O')
			++o;
		else if (ch == 'u' || ch == 'U')
			++u;
	}
	cout << "a:" << a << "\ne:" << e
		<< "\ni:" << i << "\no:" << o
		<< "\nu:" << u << endl;
}