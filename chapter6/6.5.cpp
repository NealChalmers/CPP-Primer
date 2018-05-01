#include <iostream>

using namespace std;

double fact(double val)
{
	return val >= 0 ? val : -val;
}

int main()			//absolute value
{
	cout << fact(5) << "\n"
		<< fact(-8.8) << endl;
}