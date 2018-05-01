#include <iostream>

using namespace std;

int fact()
{
	int ret = 1,val;
	cin >> val;
	while (val > 1)
		ret *= val--;
	return ret;
}

int main()			//new function
{
	cout << fact() << endl;
}