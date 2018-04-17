#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()				//print the size and contents of the vectors from exercise 3.13
{
	vector<int> v1;
	cout << "{\n \"v1\":{\"size\":\"" << v1.size() << "\",\"value\":[";
	for (auto i = v1.begin(); i != v1.end(); ++i) cout << *i << ",";
	if (!v1.empty()) cout << "\b";
	cout << "]}" << endl;

	vector<int> v2(10);
	cout << " \"v2\":{\"size\":\"" << v2.size() << "\",\"value\":[";
	for (auto i = v2.begin(); i != v2.end(); ++i) cout << *i << ",";
	if (!v2.empty()) cout << "\b";
	cout << "]}" << endl;

	vector<int> v3(10, 42);
	cout << " \"v3\":{\"size\":\"" << v3.size() << "\",\"value\":[";
	for (auto i = v3.begin(); i != v3.end(); ++i) cout << *i << ",";
	if (!v3.empty()) cout << "\b";
	cout << "]}" << endl;

	vector<int> v4{ 10 };
	cout << " \"v4\":{\"size\":\"" << v4.size() << "\",\"value\":[";
	for (auto i = v4.begin(); i != v4.end(); ++i) cout << *i << ",";
	if (!v4.empty()) cout << "\b";
	cout << "]}" << endl;

	vector<int> v5{ 10, 42 };
	cout << " \"v5\":{\"size\":\"" << v5.size() << "\",\"value\":[";
	for (auto i = v5.begin(); i != v5.end(); ++i) cout << *i << ",";
	if (!v5.empty()) cout << "\b";
	cout << "]}" << endl;

	vector<string> v6{ 10 };
	cout << " \"v6\":{\"size\":\"" << v6.size() << "\",\"value\":[";
	for (auto i = v6.begin(); i != v6.end(); ++i)
		if (i->empty())
			cout << "(null)"
			<< ",";
		else
			cout << *i << ",";
	if (!v6.empty()) cout << "\b";
	cout << "]}" << endl;

	vector<string> v7{ 10, "hi" };
	cout << " \"v7\":{\"size\":\"" << v7.size() << "\",\"value\":[";
	for (auto i = v7.begin(); i != v7.end(); ++i)
		if (i->empty())
			cout << "(null)"
			<< ",";
		else
			cout << *i << ",";
	if (!v7.empty()) cout << "\b";
	cout << "]}\n}" << endl;

	return 0;
}