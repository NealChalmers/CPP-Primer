#include <iostream>

using namespace std;

int fact()
{
	static int val = 0;
	return val++;
}

int main()			//static
{
	for (int k = 5; k != 0; --k)
		cout << fact() << "\n";
	cout << endl;
}