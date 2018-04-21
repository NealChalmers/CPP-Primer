#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	char array1[5]{ "jack" };				//check the equal in char * and string
	char array2[5];
	string s1{ "jack" };
	string s2;
	for (int i = 0; i != 4; ++i)
		cin >> array2[i];
	array2[4] = '\0';
	s2 = array2;
	for (int i = 0; i != 10; ++i)
	{
		if (array1[i] != array2[i])
			cout << "not equal array" << endl;
		break;
	}

}