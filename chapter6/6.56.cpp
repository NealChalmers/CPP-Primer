#include <iostream>
#include <vector>

using namespace std;

int iadd(int a, int b)
{
	return a + b;
}

int isub(int a, int b)
{
	return a - b;
}

int imul(int a, int b)
{
	return a * b;
}

int idiv(int a, int b)
{
	return a / b;
}

int main()				// function vector
{
	vector<int(*)(int, int)>vf;

	vf.push_back(iadd);
	vf.push_back(isub);
	vf.push_back(imul);
	vf.push_back(idiv);

	for (auto f : vf)
		cout << f(9, 3) << endl;
}