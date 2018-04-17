#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> text{ "faej","fdas ","fdas f","","gte s" };		//first paragraph to all uppercase
	auto a = text.begin();
	for (; a != text.end() && !a->empty(); ++a)
		for (auto c : *a)
			cout << char(toupper(c));
	for (; a != text.end(); ++a)
		cout << *a;
}