#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<unsigned> v(11, 0);
	unsigned grade;
	while (cin >> grade)
		if (grade <= 100)
			(*(v.begin() + grade / 10))++;
	for (auto u : v)
		cout << u << " ";
	cout << "\b" << endl;
}