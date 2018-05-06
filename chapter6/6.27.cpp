#include <iostream>
#include <initializer_list>

using namespace std;

int get_sum(initializer_list<int> ii)			// get the sum by initializer_list
{
	int is=0;
	for (auto i : ii)
		is += i;
	return is;
}

int main()
{
	cout << get_sum({ 1, 2, 3, 45, 6, 974, 685, 5 }) << endl;;
}